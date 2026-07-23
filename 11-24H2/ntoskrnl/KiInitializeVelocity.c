/*
 * XREFs of KiInitializeVelocity @ 0x140C2A6C8
 * Callers:
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     Feature_HaltOnAddress_QueuedSpinLock__private_ReportDeviceUsage @ 0x1404F3C8C (Feature_HaltOnAddress_QueuedSpinLock__private_ReportDeviceUsage.c)
 *     Feature_HaltOnAddress_Barrier__private_ReportDeviceUsage @ 0x1404F3CF4 (Feature_HaltOnAddress_Barrier__private_ReportDeviceUsage.c)
 *     Feature_ShortThreadQuantum__private_ReportDeviceUsage @ 0x1404F3D5C (Feature_ShortThreadQuantum__private_ReportDeviceUsage.c)
 *     Feature_AntiStarvationThreadBoostCountVariable__private_IsEnabledDeviceUsageNoInline @ 0x1405B2054 (Feature_AntiStarvationThreadBoostCountVariable__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_AntiStarvationThreadScanCountVariable__private_IsEnabledDeviceUsageNoInline @ 0x1405B20E8 (Feature_AntiStarvationThreadScanCountVariable__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_EffectivePriorityNotAlwaysRankBiased__private_GetVariant @ 0x1405B213C (Feature_EffectivePriorityNotAlwaysRankBiased__private_GetVariant.c)
 *     Feature_EffectivePriorityNotAlwaysRankBiased__private_IsEnabledDeviceUsageNoInline @ 0x1405B217C (Feature_EffectivePriorityNotAlwaysRankBiased__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_IldeLatencyAwareStandbyStealing__private_IsEnabledDeviceUsageNoInline @ 0x1405B21D0 (Feature_IldeLatencyAwareStandbyStealing__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_AvoidSmtGroupings__private_IsEnabledDeviceUsageNoInline @ 0x1405B22B0 (Feature_Servicing_AvoidSmtGroupings__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_PassiveInterrupt_ForceIdle__private_IsEnabledDeviceUsageNoInline @ 0x1405B2358 (Feature_Servicing_PassiveInterrupt_ForceIdle__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_SharedReadyQueueLock__private_IsEnabledDeviceUsageNoInline @ 0x1405B23AC (Feature_Servicing_SharedReadyQueueLock__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 KiInitializeVelocity()
{
  __int64 result; // rax

  Feature_HaltOnAddress_QueuedSpinLock__private_ReportDeviceUsage();
  KiVelocityFlags |= 0x10000u;
  Feature_HaltOnAddress_Barrier__private_ReportDeviceUsage();
  KiVelocityFlags |= 0x20000u;
  Feature_ShortThreadQuantum__private_ReportDeviceUsage();
  KiVelocityFlags |= 0x40000u;
  if ( (unsigned int)Feature_Servicing_SharedReadyQueueLock__private_IsEnabledDeviceUsageNoInline() )
    KiVelocityFlags |= 0x200000u;
  if ( (unsigned int)Feature_Servicing_AvoidSmtGroupings__private_IsEnabledDeviceUsageNoInline() )
    KiVelocityFlags |= 0x800000u;
  if ( (unsigned int)Feature_IldeLatencyAwareStandbyStealing__private_IsEnabledDeviceUsageNoInline() )
    KiVelocityFlags |= 0x1000000u;
  if ( (unsigned int)Feature_EffectivePriorityNotAlwaysRankBiased__private_IsEnabledDeviceUsageNoInline() )
  {
    KiVelocityFlags |= 0x2000000u;
    KiVelocityEffectivePriorityNotAlwaysRankBiasedVariant = Feature_EffectivePriorityNotAlwaysRankBiased__private_GetVariant();
  }
  if ( (unsigned int)Feature_AntiStarvationThreadScanCountVariable__private_IsEnabledDeviceUsageNoInline() )
    KiVelocityFlags |= 0x4000000u;
  if ( (unsigned int)Feature_AntiStarvationThreadBoostCountVariable__private_IsEnabledDeviceUsageNoInline() )
    KiVelocityFlags |= 0x8000000u;
  result = Feature_Servicing_PassiveInterrupt_ForceIdle__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
    KiVelocityFlags |= 0x10000000u;
  return result;
}
