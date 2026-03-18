/*
 * XREFs of EtwpSetCompressionSettings @ 0x14064573C
 * Callers:
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1409328B0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1409FF024 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpSetCompressionSettings(unsigned int *a1)
{
  unsigned int v2; // edi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 v4; // rax
  _DWORD *v5; // rsi
  unsigned __int64 *v6; // rbx
  __int64 *v7; // rax
  __int64 *v8; // rbp

  v2 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v4 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[52].Flink, *a1, 0LL);
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    v6 = (unsigned __int64 *)(v4 + 1408);
    v7 = KeAbPreAcquire(v4 + 1408, 0LL);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
    v5[360] = a1[1];
    v5[359] = a1[2];
    v5[361] = a1[3];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((ULONG_PTR)v6);
    EtwpReleaseLoggerContext(v5, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
