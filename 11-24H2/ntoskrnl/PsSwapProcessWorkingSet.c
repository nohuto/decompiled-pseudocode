/*
 * XREFs of PsSwapProcessWorkingSet @ 0x140774624
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140A4C914 (MmProcessWorkingSetControl.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     PspLockProcessShared @ 0x14033E760 (PspLockProcessShared.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     PspComputeExecutionState @ 0x1408E7EA8 (PspComputeExecutionState.c)
 *     PspRequestProcessExecutionState @ 0x140A8B914 (PspRequestProcessExecutionState.c)
 *     PspChangeProcessExecutionState @ 0x140AD16D4 (PspChangeProcessExecutionState.c)
 */

__int64 __fastcall PsSwapProcessWorkingSet(PEPROCESS Process, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 v5; // bl
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

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
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v10, v11, v12);
  return v9;
}
