/*
 * XREFs of ZwQueryWnfStateData @ 0x1406AA1B0
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405ED4D0 (RtlRaiseCustomSystemEventTrigger.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x140695D0C (UcpRetrieveCurrentConfigSettings.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A2B2EC (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x140A2B8E4 (RtlpFcNotifyFeatureUsageTarget.c)
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryWnfStateData(
        PCWNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        PWNF_CHANGE_STAMP ChangeStamp,
        PVOID Buffer,
        PULONG BufferSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
