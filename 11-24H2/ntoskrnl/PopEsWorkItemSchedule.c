/*
 * XREFs of PopEsWorkItemSchedule @ 0x140A31484
 * Callers:
 *     PopEsWnfSubscriptionGpAndMdmCallback @ 0x14075C810 (PopEsWnfSubscriptionGpAndMdmCallback.c)
 *     PopEsQueueStateEvaluation @ 0x140A31258 (PopEsQueueStateEvaluation.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140A31280 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x140AA5EA0 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsInStandbyAcDcCallback @ 0x140AC73D0 (PopEsInStandbyAcDcCallback.c)
 *     PopEsInit @ 0x140C34BAC (PopEsInit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
