/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x1409BA840
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1404ADA60 (PopCoalescingSetActiveState.c)
 *     PopCoalescingPowerSettingCallback @ 0x140751030 (PopCoalescingPowerSettingCallback.c)
 *     PopHardDiskPowerSettingCallback @ 0x140A9F530 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x140C2E994 (PopCoalescingInitialize.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x1409BC77C (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopUpdateDiskIdleTimeoutSetting()
{
  int v0; // ecx
  __int64 result; // rax

  v0 = PopDiskIdleTimeout;
  if ( (PopCoalescingState & 1) != 0 )
    v0 = PopDiskCoalescingTimeout;
  if ( v0 != PopCurrentDiskIdleTimeout )
  {
    PopCurrentDiskIdleTimeout = v0;
    return PopSetPowerSettingValueAcDc(&GUID_DISK_IDLE_TIMEOUT, 4LL, &PopCurrentDiskIdleTimeout);
  }
  return result;
}
