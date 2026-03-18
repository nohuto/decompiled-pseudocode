/*
 * XREFs of EtwpCoverageReset @ 0x14079BA4C
 * Callers:
 *     EtwpCoverageFlushWorkItemCallback @ 0x14079B890 (EtwpCoverageFlushWorkItemCallback.c)
 *     EtwpCoverageResetWorkItemCallback @ 0x14079BF50 (EtwpCoverageResetWorkItemCallback.c)
 *     EtwSetProcessTelemetryCoverage @ 0x140A579D4 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     EtwTelemetryCoverageReport @ 0x1404575C0 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x1404CAC28 (TelemetryCoverageStringHashInternal.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwpCoverageFreeStringBuffers @ 0x14079B9A0 (EtwpCoverageFreeStringBuffers.c)
 *     EtwpCoverageFlushPending @ 0x140A99E48 (EtwpCoverageFlushPending.c)
 */

void __fastcall EtwpCoverageReset(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rax
  signed __int8 v6; // cf
  __int64 *v7; // rsi
  __int64 v8; // rcx
  int v9; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL) )
  {
    if ( (unsigned int)dword_140E09124 < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140E09120 )
      {
        v9 = 0;
        dword_140E09120 = TelemetryCoverageStringHashInternal(off_140E09118, &v9);
      }
      EtwTelemetryCoverageReport(&off_140E09118);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = KeAbPreAcquire((__int64)&EtwpCoverageLock, 0LL);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&EtwpCoverageLock, 0LL);
    v7 = v5;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&EtwpCoverageLock, v5, (__int64)&EtwpCoverageLock);
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    if ( (a2 & 4) == 0 || (*(_DWORD *)(a1 + 36) & 1) != 0 )
    {
      if ( (a2 & 1) != 0
        || (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - *(_DWORD *)(a1 + 24) > 0x927C0 )
      {
        *(_DWORD *)(a1 + 36) &= ~1u;
        EtwpCoverageFlushPending(a1);
        memset_0((void *)(*(_QWORD *)(a1 + 16) + 52LL), 0, 4LL * *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL));
        EtwpCoverageFreeStringBuffers(a1, 1);
        *(_DWORD *)(*(_QWORD *)a1 + 4LL) = 0;
        **(_DWORD **)a1 = ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
        v8 = *(_QWORD *)(a1 + 16);
        if ( (*(_BYTE *)(v8 + 2) & 1) == 0 )
          *(_DWORD *)(MmWriteableSharedUserData + 892) = *(_DWORD *)(v8 + 24);
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 20LL) = (MEMORY[0xFFFFF78000000320]
                                                  * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_DWORD *)(*(_QWORD *)a1 + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 20LL);
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL) = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 36) |= 1u;
      }
    }
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegion();
  }
}
