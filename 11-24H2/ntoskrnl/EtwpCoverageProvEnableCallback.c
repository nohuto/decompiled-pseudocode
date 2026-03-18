/*
 * XREFs of EtwpCoverageProvEnableCallback @ 0x140A85960
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EtwTelemetryCoverageReport @ 0x140457F60 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x1404CA964 (TelemetryCoverageStringHashInternal.c)
 */

void EtwpCoverageProvEnableCallback()
{
  unsigned __int8 v0; // di
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v2; // rax
  signed __int8 v3; // cf
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( dword_140E091A8 && (byte_140E091B8 & 1) != 0 && (qword_140E091C0 & 1) == qword_140E091C0 )
  {
    v0 = 1;
    if ( !EtwpCoverageCoreTracingEnabled && (unsigned int)dword_140E09184 < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140E09180 )
        dword_140E09180 = TelemetryCoverageStringHashInternal(off_140E09178, v6);
      EtwTelemetryCoverageReport(&off_140E09178);
    }
  }
  else
  {
    v0 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = KeAbPreAcquire((__int64)&EtwpCoverageLock, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&EtwpCoverageLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&EtwpCoverageLock, (__int64)v2, (__int64)&EtwpCoverageLock);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  v5 = EtwpCoverageContext;
  if ( EtwpCoverageContext && EtwpCoverageCoreTracingEnabled != v0 )
  {
    if ( v0 )
    {
      *(_DWORD *)(MmWriteableSharedUserData + 892) = -256;
      *(_WORD *)(*(_QWORD *)(v5 + 16) + 2LL) |= 1u;
    }
    else
    {
      *(_DWORD *)(MmWriteableSharedUserData + 892) = *(_DWORD *)(*(_QWORD *)(EtwpCoverageContext + 16) + 24LL);
      *(_WORD *)(*(_QWORD *)(v5 + 16) + 2LL) &= ~1u;
    }
  }
  EtwpCoverageLockOwner = 0LL;
  EtwpCoverageCoreTracingEnabled = v0;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
  KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
  KeLeaveCriticalRegion();
}
