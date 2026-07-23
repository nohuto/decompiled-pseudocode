/*
 * XREFs of CmpWorkItemQueueWork @ 0x14021E9B0
 * Callers:
 *     CmFcManagerNotifyFeatureUsage @ 0x14021E1F8 (CmFcManagerNotifyFeatureUsage.c)
 *     CmFcManagerRecordFeatureUsage @ 0x14048C624 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcpManagerDrainUsageNotificationsDpc @ 0x1404A9A20 (CmFcpManagerDrainUsageNotificationsDpc.c)
 *     CmFcpManagerFlushUsageTimerRoutine @ 0x1404CC4B0 (CmFcpManagerFlushUsageTimerRoutine.c)
 *     CmpNotifyMachineHiveLoaded @ 0x140666178 (CmpNotifyMachineHiveLoaded.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc @ 0x140667100 (CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc.c)
 *     CmFcpManagerPublishUsageTimerRoutine @ 0x140667150 (CmFcpManagerPublishUsageTimerRoutine.c)
 *     CmFcpManagerRetryUsageNotificationsTimerRoutine @ 0x140667170 (CmFcpManagerRetryUsageNotificationsTimerRoutine.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1407D1FA0 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A2B2EC (CmFcpManagerPublishChangeNotifications.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x140A8CD40 (CmFcpManagerProcessUsageDataProviders.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x140A8CF00 (CmFcpManagerPublishFeatureUsageData.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140A9CFDC (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     CmFcManagerFlushFeatureUsage @ 0x140AA3DAC (CmFcManagerFlushFeatureUsage.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void __fastcall CmpWorkItemQueueWork(PWORK_QUEUE_ITEM WorkItem)
{
  if ( (_InterlockedExchange((volatile __int32 *)&WorkItem[1].List.Blink, 3) & 1) == 0 )
  {
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&WorkItem[1]);
    ExQueueWorkItem(WorkItem, SHIDWORD(WorkItem[1].List.Blink));
  }
}
