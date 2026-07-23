/*
 * XREFs of EtwpCoverageReset @ 0x1407AB2EC
 * Callers:
 *     EtwpCoverageFlushWorkItemCallback @ 0x1407AB130 (EtwpCoverageFlushWorkItemCallback.c)
 *     EtwpCoverageResetWorkItemCallback @ 0x1407AB7F0 (EtwpCoverageResetWorkItemCallback.c)
 *     EtwSetProcessTelemetryCoverage @ 0x1408DCC48 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwTelemetryCoverageReport @ 0x14044D270 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x1404C3E84 (TelemetryCoverageStringHashInternal.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpCoverageFreeStringBuffers @ 0x1407AB240 (EtwpCoverageFreeStringBuffers.c)
 *     EtwpCoverageFlushPending @ 0x140A9A3F0 (EtwpCoverageFlushPending.c)
 */

void __fastcall EtwpCoverageReset(__int64 a1, __int64 a2)
{
  char v2; // bp
  struct _KTHREAD *CurrentThread; // rax
  char *v5; // rax
  signed __int8 v6; // cf
  char *v7; // rsi
  __int64 v8; // rcx
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL) )
  {
    if ( (unsigned int)dword_140E0920C < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140E09208 )
      {
        v9 = 0;
        dword_140E09208 = TelemetryCoverageStringHashInternal(off_140E09200, &v9);
      }
      EtwTelemetryCoverageReport((__int64)&off_140E09200, a2);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = (char *)KeAbPreAcquire((__int64)&EtwpCoverageLock, 0LL);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&EtwpCoverageLock, 0LL);
    v7 = v5;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&EtwpCoverageLock, v5, (__int64)&EtwpCoverageLock);
    if ( v7 )
      v7[10] = 1;
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    if ( (v2 & 4) == 0 || (*(_DWORD *)(a1 + 36) & 1) != 0 )
    {
      if ( (v2 & 1) != 0
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
