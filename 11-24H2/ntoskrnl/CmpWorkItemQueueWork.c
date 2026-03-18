/*
 * XREFs of CmpWorkItemQueueWork @ 0x1403A68B0
 * Callers:
 *     CmFcManagerNotifyFeatureUsage @ 0x1403A4D48 (CmFcManagerNotifyFeatureUsage.c)
 *     CmFcManagerRecordFeatureUsage @ 0x1403A6974 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcpManagerDrainUsageNotificationsDpc @ 0x1403A6B40 (CmFcpManagerDrainUsageNotificationsDpc.c)
 *     CmFcpManagerFlushUsageTimerRoutine @ 0x1404D32F0 (CmFcpManagerFlushUsageTimerRoutine.c)
 *     CmpNotifyMachineHiveLoaded @ 0x140667888 (CmpNotifyMachineHiveLoaded.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc @ 0x140668810 (CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc.c)
 *     CmFcpManagerPublishUsageTimerRoutine @ 0x140668860 (CmFcpManagerPublishUsageTimerRoutine.c)
 *     CmFcpManagerRetryUsageNotificationsTimerRoutine @ 0x140668880 (CmFcpManagerRetryUsageNotificationsTimerRoutine.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1407D1AB0 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A35DD0 (CmFcpManagerPublishChangeNotifications.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x140A90644 (CmFcpManagerProcessUsageDataProviders.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x140A90804 (CmFcpManagerPublishFeatureUsageData.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140AA1C4C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     CmFcManagerFlushFeatureUsage @ 0x140AA8D00 (CmFcManagerFlushFeatureUsage.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void __fastcall CmpWorkItemQueueWork(PWORK_QUEUE_ITEM WorkItem)
{
  if ( (_InterlockedExchange((volatile __int32 *)&WorkItem[1].List.Blink, 3) & 1) == 0 )
  {
    ExAcquireRundownProtection((PEX_RUNDOWN_REF)&WorkItem[1]);
    ExQueueWorkItem(WorkItem, SHIDWORD(WorkItem[1].List.Blink));
  }
}
