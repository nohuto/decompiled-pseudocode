/*
 * XREFs of Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x1405C275C
 * Callers:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 *     KeYieldExecution @ 0x14031B9F0 (KeYieldExecution.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     KiComputeEffectivePriority @ 0x1403FCAF0 (KiComputeEffectivePriority.c)
 *     KiSetForegroundBoost @ 0x14044762C (KiSetForegroundBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1404DD430 (KiUpdateVPBackingThreadPriority.c)
 *     KeBoostPriorityThread @ 0x1404DD768 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1404DDF20 (KeSetBasePriorityThread.c)
 *     KiComputeNewPriority @ 0x1404E1290 (KiComputeNewPriority.c)
 * Callees:
 *     Feature_StackingDecayBoosts__private_IsEnabledFallback @ 0x1405C2740 (Feature_StackingDecayBoosts__private_IsEnabledFallback.c)
 */

__int64 Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_StackingDecayBoosts__private_featureState & 2) != 0 )
    return Feature_StackingDecayBoosts__private_featureState & 1;
  else
    return Feature_StackingDecayBoosts__private_IsEnabledFallback(
             (unsigned int)Feature_StackingDecayBoosts__private_featureState,
             0);
}
