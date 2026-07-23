/*
 * XREFs of ExCleanTimerResolutionRequest @ 0x1404A17F8
 * Callers:
 *     PspExitProcess @ 0x1408F2E70 (PspExitProcess.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ZwSetTimerResolution @ 0x1406AABF0 (ZwSetTimerResolution.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409A9310 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409A9374 (ExReleaseTimeRefreshLockExclusive.c)
 *     PoDiagFreeUsermodeStack @ 0x140A913A8 (PoDiagFreeUsermodeStack.c)
 */

__int64 ExCleanTimerResolutionRequest()
{
  _KPROCESS *Process; // rbx
  KIRQL v1; // al
  unsigned __int64 DeepFreezeStartTime; // r9
  _KAFFINITY_EX *Affinity; // r8
  _KAB_UM_PROCESS_TREE *Trees; // rdi
  __int64 result; // rax
  ULONG ActualTime; // [rsp+30h] [rbp+8h] BYREF

  ActualTime = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x100000000000LL) != 0 )
    ZwSetTimerResolution(KeMaximumIncrement, 0, &ActualTime);
  ExAcquireTimeRefreshLockExclusive();
  v1 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  DeepFreezeStartTime = Process[3].DeepFreezeStartTime;
  if ( *(_KPROCESS **)(DeepFreezeStartTime + 8) != (_KPROCESS *)&Process[3].DeepFreezeStartTime
    || (Affinity = Process[3].Affinity, *(_KPROCESS **)&Affinity->Count != (_KPROCESS *)&Process[3].DeepFreezeStartTime) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)&Affinity->Count = DeepFreezeStartTime;
  *(_QWORD *)(DeepFreezeStartTime + 8) = Affinity;
  KeReleaseSpinLock(&ExpKernelResolutionLock, v1);
  Trees = Process[3].AutoBoostState.Trees;
  Process[3].AutoBoostState.Trees = 0LL;
  result = ExReleaseTimeRefreshLockExclusive();
  if ( Trees )
    return PoDiagFreeUsermodeStack(Trees);
  return result;
}
