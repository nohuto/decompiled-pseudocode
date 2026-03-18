/*
 * XREFs of KiComputeThreadPriority @ 0x1402E7250
 * Callers:
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x140204704 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     KiSetDisableBoostThread @ 0x140269078 (KiSetDisableBoostThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402691AC (KeSetPriorityAndQuantumProcess.c)
 *     KiInitializeForegroundBoostThread @ 0x14026B4D4 (KiInitializeForegroundBoostThread.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KiRemoveBoostThread @ 0x14027EE94 (KiRemoveBoostThread.c)
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14029BB60 (KiAbThreadRemoveBoostsSlow.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x14029EC50 (KeRemoveQueueEx.c)
 *     KiExitThreadWait @ 0x1402E5EA0 (KiExitThreadWait.c)
 *     KiPerformWaitDeferredWork @ 0x1402E6090 (KiPerformWaitDeferredWork.c)
 *     KiWakePriQueueWaiter @ 0x1402E6BE0 (KiWakePriQueueWaiter.c)
 *     KiFastExitThreadWait @ 0x1402E7020 (KiFastExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x1402F4960 (KiSatisfyThreadWait.c)
 *     KeRemovePriQueue @ 0x140305410 (KeRemovePriQueue.c)
 *     KiBeginThreadWait @ 0x1403059F0 (KiBeginThreadWait.c)
 *     KeAdjustWobPriority @ 0x140306698 (KeAdjustWobPriority.c)
 *     PspRevertContainerImpersonation @ 0x140308400 (PspRevertContainerImpersonation.c)
 *     KiComputeEffectivePriority @ 0x140316760 (KiComputeEffectivePriority.c)
 *     KeSetPriorityThread @ 0x1403778B0 (KeSetPriorityThread.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403E8170 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiClearPriorityFloor @ 0x14044D0F8 (KiClearPriorityFloor.c)
 *     KeSetBasePriorityThread @ 0x1404713B0 (KeSetBasePriorityThread.c)
 *     KeAdjustPriorityFloor @ 0x140475A2C (KeAdjustPriorityFloor.c)
 *     KeBoostPriorityThread @ 0x1404B71EC (KeBoostPriorityThread.c)
 *     KiComputeNewPriority @ 0x1404E8FCC (KiComputeNewPriority.c)
 *     KiApplyForegroundBoostThread @ 0x1404F46AC (KiApplyForegroundBoostThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeThreadPriority(__int64 a1, char a2)
{
  int v3; // ecx
  int v4; // r9d
  int v5; // r8d
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx

  v3 = *(char *)(a1 + 563);
  v4 = v3;
  if ( v3 < 16 )
  {
    if ( (a2 & 1) == 0 )
    {
      v5 = v3 + (*(_WORD *)(a1 + 518) & 0xF);
      if ( !__OFSUB__(v5, v3) && v5 != v3 )
        v4 = v3 + (*(_WORD *)(a1 + 518) & 0xF);
    }
    if ( (a2 & 4) == 0 )
    {
      v6 = *(char *)(a1 + 870) + v3;
      if ( v6 > v4 )
        v4 = v6;
    }
    if ( (a2 & 2) == 0 && (unsigned __int8)(*(unsigned __int16 *)(a1 + 518) >> 4) > v4 )
      v4 = (unsigned __int8)(*(unsigned __int16 *)(a1 + 518) >> 4);
    if ( v4 >= 16 && (*(_DWORD *)(a1 + 120) & 0x400000) == 0 )
      v4 = 15;
  }
  v7 = *(_DWORD *)(a1 + 856);
  if ( v7 )
  {
    _BitScanReverse((unsigned int *)&v8, v7);
    if ( v4 < v8 )
      return (unsigned int)v8;
  }
  return (unsigned int)v4;
}
