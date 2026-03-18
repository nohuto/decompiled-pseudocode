/*
 * XREFs of PopEsWorkItemSchedule @ 0x140A36FBC
 * Callers:
 *     PopEsWnfSubscriptionGpAndMdmCallback @ 0x140750E40 (PopEsWnfSubscriptionGpAndMdmCallback.c)
 *     PopEsInStandbyAcDcCallback @ 0x140A36BB0 (PopEsInStandbyAcDcCallback.c)
 *     PopEsQueueStateEvaluation @ 0x140A36D7C (PopEsQueueStateEvaluation.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140A36DA0 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x140AA5680 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsInit @ 0x140C21968 (PopEsInit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
