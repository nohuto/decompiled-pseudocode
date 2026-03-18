/*
 * XREFs of EtwShutdown @ 0x140797400
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x140762F68 (PspDeleteExternalServerSiloState.c)
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 *     PopGracefulShutdown @ 0x140B4BB18 (PopGracefulShutdown.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwpTraceSystemShutdown @ 0x14079AE30 (EtwpTraceSystemShutdown.c)
 *     EtwpFlushCoverage @ 0x14079BF78 (EtwpFlushCoverage.c)
 *     EtwpStopTrace @ 0x140892F28 (EtwpStopTrace.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1409328B0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1409FF024 (EtwpReleaseLoggerContext.c)
 */

char *__fastcall EtwShutdown(char a1)
{
  struct _LIST_ENTRY *Flink; // rsi
  bool IsCurrentThreadInServerSilo; // al
  bool v4; // bp
  char *result; // rax
  unsigned __int16 v6; // bx
  __int64 v7; // r8
  int v8; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v9; // [rsp+28h] [rbp-D0h]
  __int128 v10; // [rsp+38h] [rbp-C0h]
  int v11; // [rsp+4Ch] [rbp-ACh]

  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
  v4 = IsCurrentThreadInServerSilo;
  if ( !a1 )
  {
    if ( !IsCurrentThreadInServerSilo )
      EtwpTraceSystemShutdown();
    HIDWORD(Flink[254].Flink) = 1;
  }
  if ( !v4 )
    EtwpFlushCoverage();
  result = (char *)memset_0(&v8, 0, 0xB0uLL);
  v8 = 176;
  v6 = (unsigned __int16)Flink[1].Flink;
  v11 = 0x20000;
  while ( (--v6 & 0x8000u) == 0 )
  {
    result = (char *)EtwpAcquireLoggerContextByLoggerId(Flink, v6, 0LL);
    if ( result )
    {
      if ( v4 )
        goto LABEL_12;
      if ( a1 )
      {
        if ( (*((_DWORD *)result + 3) & 0x400000) == 0 )
          goto LABEL_15;
LABEL_12:
        if ( v6 )
          v9 = v6;
        else
          v9 = -1;
        v10 = *(_OWORD *)(result + 276);
        EtwpReleaseLoggerContext(result, 0LL);
        if ( !a1 )
          ++EtwpStopTraceCount;
        LOBYTE(v7) = 1;
        result = (char *)EtwpStopTrace(Flink, &v8, v7);
      }
      else
      {
        if ( (*((_DWORD *)result + 3) & 0x400) == 0 )
          goto LABEL_12;
LABEL_15:
        result = (char *)EtwpReleaseLoggerContext(result, 0LL);
      }
    }
  }
  if ( !a1 )
    EtwpStopTraceCount = 0;
  return result;
}
