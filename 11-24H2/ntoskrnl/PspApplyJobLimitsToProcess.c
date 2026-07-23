/*
 * XREFs of PspApplyJobLimitsToProcess @ 0x1408D873C
 * Callers:
 *     PspSetJobLimitsProcessCallback @ 0x1408D7870 (PspSetJobLimitsProcessCallback.c)
 *     PspApplyJobChainLimitsToProcess @ 0x1408D85E4 (PspApplyJobChainLimitsToProcess.c)
 * Callees:
 *     KeSetDisableQuantumProcess @ 0x1403A2824 (KeSetDisableQuantumProcess.c)
 *     PspSetProcessPriorityByClass @ 0x140447074 (PspSetProcessPriorityByClass.c)
 *     KeSetQuantumProcess @ 0x140447788 (KeSetQuantumProcess.c)
 *     PspLockJobMemoryLimitsShared @ 0x14085ED08 (PspLockJobMemoryLimitsShared.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x14085ED94 (PspUnlockJobMemoryLimitsShared.c)
 *     PspUpdatePebForAffinityChange @ 0x1408DF878 (PspUpdatePebForAffinityChange.c)
 *     PspSetProcessAffinitySafe @ 0x140A42004 (PspSetProcessAffinitySafe.c)
 */

__int64 __fastcall PspApplyJobLimitsToProcess(struct _KPROCESS *a1, __int16 a2)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // esi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  result = (__int64)&retaddr;
  LODWORD(v10) = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = a1[1].Padding[3];
  if ( (a2 & 0x20) == 0 )
  {
    result = *(unsigned int *)(v6 + 1056);
    if ( (result & 0x20) != 0 )
    {
      HIBYTE(a1[1].KernelWaitTime) = *(_BYTE *)(v6 + 1100);
      result = PspSetProcessPriorityByClass((int)a1, BYTE2(a1[2].ContextSwitches) == 2);
    }
  }
  if ( (a2 & 0x10) == 0 )
  {
    result = *(unsigned int *)(v6 + 1056);
    if ( (result & 0x10) != 0 )
    {
      result = PspSetProcessAffinitySafe(a1, (__int64)&v10);
      if ( (int)result >= 0 )
      {
        if ( (_DWORD)v10 )
          result = PspUpdatePebForAffinityChange(CurrentThread, a1);
      }
    }
  }
  if ( (a2 & 0x100) == 0 )
  {
    PspLockJobMemoryLimitsShared(v6, (__int64)CurrentThread);
    if ( (*(_DWORD *)(v6 + 1056) & 0x100) != 0 )
      v7 = *(_QWORD *)(v6 + 1016);
    else
      v7 = 0LL;
    *(_QWORD *)&a1[2].ProcessLock = v7;
    result = (__int64)PspUnlockJobMemoryLimitsShared(v6, (__int64)CurrentThread);
  }
  if ( (a2 & 0x80u) == 0 && HIBYTE(a1[1].KernelWaitTime) != 1 )
  {
    v8 = *(_DWORD *)(v6 + 1060);
    if ( v8 >= 0xA )
      v8 = *(_DWORD *)(v6 + 580);
    if ( PspUseJobSchedulingClasses )
      KeSetQuantumProcess((__int64)a1, *((_BYTE *)PspJobSchedulingClasses + v8));
    return KeSetDisableQuantumProcess((__int64)a1, v8 == 9);
  }
  return result;
}
