/*
 * XREFs of KiComputeThreadPriority @ 0x14024FA80
 * Callers:
 *     KeRemovePriQueue @ 0x140208340 (KeRemovePriQueue.c)
 *     KiBeginThreadWait @ 0x140209010 (KiBeginThreadWait.c)
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     KiSatisfyThreadWait @ 0x14024E0B0 (KiSatisfyThreadWait.c)
 *     KiExitThreadWait @ 0x14024EFB0 (KiExitThreadWait.c)
 *     KiPerformWaitDeferredWork @ 0x14024F1A0 (KiPerformWaitDeferredWork.c)
 *     KiFastExitThreadWait @ 0x14024F840 (KiFastExitThreadWait.c)
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     KeAdjustWobPriority @ 0x1402A2074 (KeAdjustWobPriority.c)
 *     PspRevertContainerImpersonation @ 0x1402A2A90 (PspRevertContainerImpersonation.c)
 *     KeRemoveQueueEx @ 0x1402A49D0 (KeRemoveQueueEx.c)
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 *     KiRemoveBoostThread @ 0x1403230A4 (KiRemoveBoostThread.c)
 *     KiWakePriQueueWaiter @ 0x1403248F0 (KiWakePriQueueWaiter.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     KeYieldExecution @ 0x14033C510 (KeYieldExecution.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x140340980 (KiAbThreadRemoveBoostsSlow.c)
 *     KiInitializeForegroundBoostThread @ 0x1403B3D80 (KiInitializeForegroundBoostThread.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1403B6408 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     KeSetPriorityThread @ 0x1403F96D0 (KeSetPriorityThread.c)
 *     KiComputeEffectivePriority @ 0x1404024F0 (KiComputeEffectivePriority.c)
 *     KiClearPriorityFloor @ 0x140448630 (KiClearPriorityFloor.c)
 *     KiSetDisableBoostThread @ 0x140451ED4 (KiSetDisableBoostThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14045201C (KeSetPriorityAndQuantumProcess.c)
 *     KeAdjustPriorityFloor @ 0x140474C2C (KeAdjustPriorityFloor.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14049E5FC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KeBoostPriorityThread @ 0x1404E7068 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1404E7260 (KeSetBasePriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1404F6D4C (KiApplyForegroundBoostThread.c)
 *     ?KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x1405C925C (-KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z.c)
 *     ?KiComputeNewPriorityStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x1405C931C (-KiComputeNewPriorityStacking@@YAJPEAU_KTHREAD@@CE@Z.c)
 * Callees:
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x1405C5094 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
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
