/*
 * XREFs of PspApplyJobLimitsToProcess @ 0x1408D8CC0
 * Callers:
 *     PspSetJobLimitsProcessCallback @ 0x1408D7DD0 (PspSetJobLimitsProcessCallback.c)
 *     PspApplyJobChainLimitsToProcess @ 0x1408D8B68 (PspApplyJobChainLimitsToProcess.c)
 * Callees:
 *     PspSetProcessPriorityByClass @ 0x140269154 (PspSetProcessPriorityByClass.c)
 *     KeSetQuantumProcess @ 0x14026A954 (KeSetQuantumProcess.c)
 *     KeSetDisableQuantumProcess @ 0x14026AD74 (KeSetDisableQuantumProcess.c)
 *     PspUpdatePebForAffinityChange @ 0x14083C4B8 (PspUpdatePebForAffinityChange.c)
 *     PspLockJobMemoryLimitsShared @ 0x1408DE168 (PspLockJobMemoryLimitsShared.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1408DE1F4 (PspUnlockJobMemoryLimitsShared.c)
 *     PspSetProcessAffinitySafe @ 0x140A48864 (PspSetProcessAffinitySafe.c)
 */

void __fastcall PspApplyJobLimitsToProcess(struct _KPROCESS *a1, __int16 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  unsigned int v7; // esi
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v8) = 0;
  CurrentThread = KeGetCurrentThread();
  v5 = a1[1].Padding[3];
  if ( (a2 & 0x20) == 0 && (*(_DWORD *)(v5 + 1056) & 0x20) != 0 )
  {
    HIBYTE(a1[1].KernelWaitTime) = *(_BYTE *)(v5 + 1100);
    PspSetProcessPriorityByClass((int)a1, BYTE2(a1[2].ContextSwitches) == 2);
  }
  if ( (a2 & 0x10) == 0
    && (*(_DWORD *)(v5 + 1056) & 0x10) != 0
    && (int)PspSetProcessAffinitySafe(a1, (__int64)&v8) >= 0
    && (_DWORD)v8 )
  {
    PspUpdatePebForAffinityChange((__int64)CurrentThread, (__int64)a1);
  }
  if ( (a2 & 0x100) == 0 )
  {
    PspLockJobMemoryLimitsShared(v5, CurrentThread);
    if ( (*(_DWORD *)(v5 + 1056) & 0x100) != 0 )
      v6 = *(_QWORD *)(v5 + 1016);
    else
      v6 = 0LL;
    *(_QWORD *)&a1[2].ProcessLock = v6;
    PspUnlockJobMemoryLimitsShared(v5, CurrentThread);
  }
  if ( (a2 & 0x80u) == 0 && HIBYTE(a1[1].KernelWaitTime) != 1 )
  {
    v7 = *(_DWORD *)(v5 + 1060);
    if ( v7 >= 0xA )
      v7 = *(_DWORD *)(v5 + 580);
    if ( PspUseJobSchedulingClasses )
      KeSetQuantumProcess((__int64)a1, *((_BYTE *)PspJobSchedulingClasses + v7));
    KeSetDisableQuantumProcess((__int64)a1, v7 == 9);
  }
}
