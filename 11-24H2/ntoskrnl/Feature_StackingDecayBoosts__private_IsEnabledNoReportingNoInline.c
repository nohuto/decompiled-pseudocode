/*
 * XREFs of Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x1405C5094
 * Callers:
 *     KiComputeThreadPriority @ 0x14024FA80 (KiComputeThreadPriority.c)
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 *     KeYieldExecution @ 0x14033C510 (KeYieldExecution.c)
 *     KeSetPriorityThread @ 0x1403F96D0 (KeSetPriorityThread.c)
 *     KiComputeEffectivePriority @ 0x1404024F0 (KiComputeEffectivePriority.c)
 *     KiSetForegroundBoost @ 0x14045257C (KiSetForegroundBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1404E6D30 (KiUpdateVPBackingThreadPriority.c)
 *     KeBoostPriorityThread @ 0x1404E7068 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1404E7260 (KeSetBasePriorityThread.c)
 *     KiComputeNewPriority @ 0x1404EA2E0 (KiComputeNewPriority.c)
 * Callees:
 *     Feature_StackingDecayBoosts__private_IsEnabledFallback @ 0x1405C5078 (Feature_StackingDecayBoosts__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( (Feature_StackingDecayBoosts__private_featureState & 2) != 0 )
    return Feature_StackingDecayBoosts__private_featureState & 1;
  else
    return Feature_StackingDecayBoosts__private_IsEnabledFallback(
             (unsigned int)Feature_StackingDecayBoosts__private_featureState,
             0,
             a3,
             a4);
}
