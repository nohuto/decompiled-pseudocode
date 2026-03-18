/*
 * XREFs of EtwpCoverageReset @ 0x1407AAE1C
 * Callers:
 *     EtwpCoverageFlushWorkItemCallback @ 0x1407AAC60 (EtwpCoverageFlushWorkItemCallback.c)
 *     EtwpCoverageResetWorkItemCallback @ 0x1407AB320 (EtwpCoverageResetWorkItemCallback.c)
 *     EtwSetProcessTelemetryCoverage @ 0x1409047E8 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EtwTelemetryCoverageReport @ 0x140457F60 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x1404CA964 (TelemetryCoverageStringHashInternal.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     EtwpCoverageFreeStringBuffers @ 0x1407AAD70 (EtwpCoverageFreeStringBuffers.c)
 *     EtwpCoverageFlushPending @ 0x140A9F020 (EtwpCoverageFlushPending.c)
 */

void __fastcall EtwpCoverageReset(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  signed __int8 v6; // cf
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  int v9; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL) )
  {
    if ( (unsigned int)dword_140E0916C < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140E09168 )
      {
        v9 = 0;
        dword_140E09168 = TelemetryCoverageStringHashInternal(off_140E09160, &v9);
      }
      EtwTelemetryCoverageReport(&off_140E09160);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = KeAbPreAcquire((__int64)&EtwpCoverageLock, 0LL);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&EtwpCoverageLock, 0LL);
    v7 = v5;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&EtwpCoverageLock, (__int64)v5, (__int64)&EtwpCoverageLock);
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
