/*
 * XREFs of PsSwapProcessWorkingSet @ 0x140774844
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140A434A4 (MmProcessWorkingSetControl.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     PspLockProcessShared @ 0x14031DC40 (PspLockProcessShared.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PspComputeExecutionState @ 0x1408D86EC (PspComputeExecutionState.c)
 *     PspRequestProcessExecutionState @ 0x140A87E04 (PspRequestProcessExecutionState.c)
 *     PspChangeProcessExecutionState @ 0x140ACFA40 (PspChangeProcessExecutionState.c)
 */

__int64 __fastcall PsSwapProcessWorkingSet(PEPROCESS Process, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 v5; // bl
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // ebx

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  PspLockProcessShared((__int64)Process, (__int64)CurrentThread);
  v6 = Process[1].Padding[3];
  if ( v6 )
  {
    v7 = v6 + 56;
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 56), 1u);
    v5 = PspComputeExecutionState(v6);
  }
  else
  {
    v7 = 56LL;
  }
  v8 = v5 | 2u;
  if ( !a2 )
    v8 = v5 & 0xFD;
  PspRequestProcessExecutionState(Process, v8, 1LL);
  if ( v6 )
    ExReleaseResourceLite((PERESOURCE)v7);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
  KeAbPostRelease((ULONG_PTR)&Process[1]);
  v9 = PspChangeProcessExecutionState(Process);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return v9;
}
