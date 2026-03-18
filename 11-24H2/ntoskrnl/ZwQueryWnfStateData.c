/*
 * XREFs of ZwQueryWnfStateData @ 0x1406A9210
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405EFEF0 (RtlRaiseCustomSystemEventTrigger.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x140694C3C (UcpRetrieveCurrentConfigSettings.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A35DD0 (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x140A363D4 (RtlpFcNotifyFeatureUsageTarget.c)
 *     PopBatteryWorker @ 0x140AC7D70 (PopBatteryWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateData(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
