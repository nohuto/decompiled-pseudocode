/*
 * XREFs of PopEsWorkItemSchedule @ 0x140A3BCA4
 * Callers:
 *     PopEsWnfSubscriptionGpAndMdmCallback @ 0x14075D870 (PopEsWnfSubscriptionGpAndMdmCallback.c)
 *     PopEsQueueStateEvaluation @ 0x140A3BA78 (PopEsQueueStateEvaluation.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140A3BAA0 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x140AAAC70 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsInStandbyAcDcCallback @ 0x140AC94B0 (PopEsInStandbyAcDcCallback.c)
 *     PopEsInit @ 0x140C32A6C (PopEsInit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
