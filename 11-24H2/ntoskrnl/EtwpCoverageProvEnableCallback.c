/*
 * XREFs of EtwpCoverageProvEnableCallback @ 0x140A804A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwTelemetryCoverageReport @ 0x14044D270 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x1404C3E84 (TelemetryCoverageStringHashInternal.c)
 */

void __fastcall EtwpCoverageProvEnableCallback(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // di
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // rax
  signed __int8 v5; // cf
  char *v6; // rsi
  __int64 v7; // rdx
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( dword_140E09218 && (byte_140E09228 & 1) != 0 && (qword_140E09230 & 1) == qword_140E09230 )
  {
    v2 = 1;
    if ( !EtwpCoverageCoreTracingEnabled && (unsigned int)dword_140E091DC < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140E091D8 )
        dword_140E091D8 = TelemetryCoverageStringHashInternal(off_140E091D0, v8);
      EtwTelemetryCoverageReport((__int64)&off_140E091D0, a2);
    }
  }
  else
  {
    v2 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (char *)KeAbPreAcquire((__int64)&EtwpCoverageLock, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&EtwpCoverageLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&EtwpCoverageLock, v4, (__int64)&EtwpCoverageLock);
  if ( v6 )
    v6[10] = 1;
  v7 = EtwpCoverageContext;
  if ( EtwpCoverageContext && EtwpCoverageCoreTracingEnabled != v2 )
  {
    if ( v2 )
    {
      *(_DWORD *)(MmWriteableSharedUserData + 892) = -256;
      *(_WORD *)(*(_QWORD *)(v7 + 16) + 2LL) |= 1u;
    }
    else
    {
      *(_DWORD *)(MmWriteableSharedUserData + 892) = *(_DWORD *)(*(_QWORD *)(EtwpCoverageContext + 16) + 24LL);
      *(_WORD *)(*(_QWORD *)(v7 + 16) + 2LL) &= ~1u;
    }
  }
  EtwpCoverageLockOwner = 0LL;
  EtwpCoverageCoreTracingEnabled = v2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
  KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
  KeLeaveCriticalRegion();
}
