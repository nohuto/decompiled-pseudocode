/*
 * XREFs of EtwpCoverageProvEnableCallback @ 0x140A81160
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     EtwTelemetryCoverageReport @ 0x1404575C0 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x1404CAC28 (TelemetryCoverageStringHashInternal.c)
 */

void EtwpCoverageProvEnableCallback()
{
  unsigned __int8 v0; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v2; // rax
  signed __int8 v3; // cf
  __int64 *v4; // rsi
  __int64 v5; // rdx
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( dword_140E090B0 && (byte_140E090C0 & 1) != 0 && (qword_140E090C8 & 1) == qword_140E090C8 )
  {
    v0 = 1;
    if ( !EtwpCoverageCoreTracingEnabled && (unsigned int)dword_140E090F4 < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140E090F0 )
        dword_140E090F0 = TelemetryCoverageStringHashInternal(off_140E090E8, v6);
      EtwTelemetryCoverageReport(&off_140E090E8);
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
    ExfAcquirePushLockExclusiveEx(&EtwpCoverageLock, v2, (__int64)&EtwpCoverageLock);
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
