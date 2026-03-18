/*
 * XREFs of EtwpGetCompressionSettings @ 0x1406514B0
 * Callers:
 *     NtTraceControl @ 0x140834A80 (NtTraceControl.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140926F50 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14095D644 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpGetCompressionSettings(unsigned __int16 *a1, unsigned int *a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // edi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 v6; // rax
  _DWORD *v7; // rsi
  signed __int64 *v8; // rbx
  _QWORD *v9; // rbp

  v2 = *a1;
  v4 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v6 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[52].Flink, v2, 0LL);
  v7 = (_DWORD *)v6;
  if ( v6 )
  {
    *a2 = v2;
    v8 = (signed __int64 *)(v6 + 1408);
    v9 = KeAbPreAcquire(v6 + 1408, 0LL);
    if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v8, 0, v9, (__int64)v8);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    a2[1] = v7[360];
    a2[2] = v7[359];
    a2[3] = v7[361];
    if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8);
    KeAbPostRelease((ULONG_PTR)v8);
    EtwpReleaseLoggerContext(v7, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
