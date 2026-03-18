/*
 * XREFs of KiComputeNewPriority @ 0x1404EA2E0
 * Callers:
 *     KiQueueReadyThread @ 0x140295020 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 *     KiDirectSwitchThread @ 0x14042B970 (KiDirectSwitchThread.c)
 * Callees:
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x1405C5094 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     ?KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x1405C925C (-KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z.c)
 *     ?KiComputeNewPriorityStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x1405C931C (-KiComputeNewPriorityStacking@@YAJPEAU_KTHREAD@@CE@Z.c)
 */

__int64 __fastcall KiComputeNewPriority(struct _KTHREAD *a1, __int64 a2, unsigned __int8 a3)
{
  signed __int8 v5; // dl

  if ( (unsigned int)Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(a1) )
    return KiComputeNewPriorityStacking(a1, v5, a3);
  else
    return KiComputeNewPriorityNonStacking(a1, v5, a3);
}
