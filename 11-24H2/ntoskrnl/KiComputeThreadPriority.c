/*
 * XREFs of KiComputeThreadPriority @ 0x140280090
 * Callers:
 *     KiSatisfyThreadWait @ 0x14027E6C0 (KiSatisfyThreadWait.c)
 *     KiExitThreadWait @ 0x14027F5C0 (KiExitThreadWait.c)
 *     KiPerformWaitDeferredWork @ 0x14027F7B0 (KiPerformWaitDeferredWork.c)
 *     KiFastExitThreadWait @ 0x14027FE50 (KiFastExitThreadWait.c)
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1402AE6EC (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 *     KiRemoveBoostThread @ 0x1402CBC34 (KiRemoveBoostThread.c)
 *     KiWakePriQueueWaiter @ 0x1402CD480 (KiWakePriQueueWaiter.c)
 *     KeAdjustWobPriority @ 0x1402D17A4 (KeAdjustWobPriority.c)
 *     PspRevertContainerImpersonation @ 0x1402D21C0 (PspRevertContainerImpersonation.c)
 *     KeRemoveQueueEx @ 0x1402D4100 (KeRemoveQueueEx.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeYieldExecution @ 0x14031B9F0 (KeYieldExecution.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14031FE60 (KiAbThreadRemoveBoostsSlow.c)
 *     KeRemovePriQueue @ 0x14032F920 (KeRemovePriQueue.c)
 *     KiBeginThreadWait @ 0x1403305F0 (KiBeginThreadWait.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     KiInitializeForegroundBoostThread @ 0x1403A2590 (KiInitializeForegroundBoostThread.c)
 *     KiComputeEffectivePriority @ 0x1403FCAF0 (KiComputeEffectivePriority.c)
 *     KiClearPriorityFloor @ 0x140440D50 (KiClearPriorityFloor.c)
 *     KiSetDisableBoostThread @ 0x140446F84 (KiSetDisableBoostThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1404470CC (KeSetPriorityAndQuantumProcess.c)
 *     KeAdjustPriorityFloor @ 0x140470A3C (KeAdjustPriorityFloor.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1404993FC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KeBoostPriorityThread @ 0x1404DD768 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1404DDF20 (KeSetBasePriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1404F4630 (KiApplyForegroundBoostThread.c)
 *     ?KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x1405C698C (-KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z.c)
 *     ?KiComputeNewPriorityStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x1405C6A4C (-KiComputeNewPriorityStacking@@YAJPEAU_KTHREAD@@CE@Z.c)
 * Callees:
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x1405C275C (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall KiComputeThreadPriority(__int64 a1, char a2, char a3)
{
  int v6; // edx
  int v7; // r8d
  int v8; // ecx
  int v9; // ecx
  char v10; // dl
  char v11; // cl
  unsigned int v12; // eax
  int v13; // ecx

  if ( (unsigned int)Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline() )
  {
    v7 = *(char *)(a1 + 563);
    if ( v7 < 16 )
    {
      if ( (a2 & 1) == 0 )
      {
        v9 = v7 + (*(_WORD *)(a1 + 518) & 0xF);
        if ( !__OFSUB__(v9, v7) && v9 != v7 )
          v7 += *(_WORD *)(a1 + 518) & 0xF;
      }
      if ( (a2 & 4) == 0 )
      {
        v10 = *(_BYTE *)(a1 + 870);
        v11 = v10 - a3;
        if ( v10 <= a3 )
          v11 = 0;
        v7 += v11;
      }
      if ( v7 >= 16 )
        v7 = 15;
      if ( (a2 & 2) == 0 && (unsigned __int8)(*(unsigned __int16 *)(a1 + 518) >> 4) > v7 )
        v7 = (unsigned __int8)(*(unsigned __int16 *)(a1 + 518) >> 4);
    }
  }
  else
  {
    v6 = *(char *)(a1 + 563);
    v7 = v6;
    if ( v6 < 16 )
    {
      if ( (a2 & 1) == 0 )
      {
        v8 = v6 + (*(_WORD *)(a1 + 518) & 0xF);
        if ( !__OFSUB__(v8, v6) && v8 != v6 )
          v7 = v6 + (*(_WORD *)(a1 + 518) & 0xF);
      }
      if ( (a2 & 4) == 0 && v6 + *(char *)(a1 + 870) > v7 )
        v7 = v6 + *(char *)(a1 + 870);
      if ( (a2 & 2) == 0 && (unsigned __int8)(*(unsigned __int16 *)(a1 + 518) >> 4) > v7 )
        v7 = (unsigned __int8)(*(unsigned __int16 *)(a1 + 518) >> 4);
      if ( v7 >= 16 && (*(_DWORD *)(a1 + 120) & 0x400000) == 0 )
        v7 = 15;
    }
  }
  v12 = *(_DWORD *)(a1 + 856);
  if ( v12 )
  {
    _BitScanReverse((unsigned int *)&v13, v12);
    if ( v7 < v13 )
      return (unsigned int)v13;
  }
  return (unsigned int)v7;
}
