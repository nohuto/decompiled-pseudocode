/*
 * XREFs of ExCleanTimerResolutionRequest @ 0x1404A6E8C
 * Callers:
 *     PspExitProcess @ 0x1409387A0 (PspExitProcess.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ZwSetTimerResolution @ 0x1406A9C50 (ZwSetTimerResolution.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409B1FC0 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409B2024 (ExReleaseTimeRefreshLockExclusive.c)
 *     PoDiagFreeUsermodeStack @ 0x140A94BF8 (PoDiagFreeUsermodeStack.c)
 */

__int64 ExCleanTimerResolutionRequest()
{
  _KPROCESS *Process; // rbx
  KIRQL v1; // al
  unsigned __int64 DeepFreezeStartTime; // r9
  _KAFFINITY_EX *Affinity; // r8
  _KAB_UM_PROCESS_TREE *Trees; // rdi
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x100000000000LL) != 0 )
    ZwSetTimerResolution((unsigned int)KeMaximumIncrement, 0LL, &v6);
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
