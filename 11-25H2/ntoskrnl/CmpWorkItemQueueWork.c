/*
 * XREFs of CmpWorkItemQueueWork @ 0x1403B8E30
 * Callers:
 *     CmFcManagerNotifyFeatureUsage @ 0x1403B8968 (CmFcManagerNotifyFeatureUsage.c)
 *     CmFcManagerRecordFeatureUsage @ 0x1403B8E68 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcpManagerDrainUsageNotificationsDpc @ 0x1403B9040 (CmFcpManagerDrainUsageNotificationsDpc.c)
 *     CmFcpManagerFlushUsageTimerRoutine @ 0x1403BA450 (CmFcpManagerFlushUsageTimerRoutine.c)
 *     CmpNotifyMachineHiveLoaded @ 0x14065BF84 (CmpNotifyMachineHiveLoaded.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc @ 0x14065CD40 (CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc.c)
 *     CmFcpManagerPublishUsageTimerRoutine @ 0x14065CD90 (CmFcpManagerPublishUsageTimerRoutine.c)
 *     CmFcpManagerRetryUsageNotificationsTimerRoutine @ 0x14065CDB0 (CmFcpManagerRetryUsageNotificationsTimerRoutine.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1407C2370 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A3050C (CmFcpManagerPublishChangeNotifications.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x140A8D7AC (CmFcpManagerProcessUsageDataProviders.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x140A8D96C (CmFcpManagerPublishFeatureUsageData.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140A9C35C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     CmFcManagerFlushFeatureUsage @ 0x140AA3C78 (CmFcManagerFlushFeatureUsage.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 */

void __fastcall CmpWorkItemQueueWork(PWORK_QUEUE_ITEM WorkItem)
{
  if ( (_InterlockedExchange((volatile __int32 *)&WorkItem[1].List.Blink, 3) & 1) == 0 )
  {
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&WorkItem[1]);
    ExQueueWorkItem(WorkItem, SHIDWORD(WorkItem[1].List.Blink));
  }
}
