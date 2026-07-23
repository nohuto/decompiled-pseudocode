/*
 * XREFs of KiComputeNewPriority @ 0x1404E1290
 * Callers:
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 * Callees:
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x1405C275C (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     ?KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x1405C698C (-KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z.c)
 *     ?KiComputeNewPriorityStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x1405C6A4C (-KiComputeNewPriorityStacking@@YAJPEAU_KTHREAD@@CE@Z.c)
 */

__int64 __fastcall KiComputeNewPriority(struct _KTHREAD *a1, __int64 a2, unsigned __int8 a3)
{
  signed __int8 v5; // dl

  if ( (unsigned int)Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(a1) )
    return KiComputeNewPriorityStacking(a1, v5, a3);
  else
    return KiComputeNewPriorityNonStacking(a1, v5, a3);
}
