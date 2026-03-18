/*
 * XREFs of EtwShutdown @ 0x1407A67D0
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x140772928 (PspDeleteExternalServerSiloState.c)
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 *     PopGracefulShutdown @ 0x140B5BA88 (PopGracefulShutdown.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     EtwpTraceSystemShutdown @ 0x1407AA200 (EtwpTraceSystemShutdown.c)
 *     EtwpFlushCoverage @ 0x1407AB348 (EtwpFlushCoverage.c)
 *     EtwpStopTrace @ 0x1408325A4 (EtwpStopTrace.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140926F50 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14095D644 (EtwpReleaseLoggerContext.c)
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
    HIDWORD(Flink[271].Flink) = 1;
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
