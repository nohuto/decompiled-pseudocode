/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x1409A0E90
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1404A8140 (PopCoalescingSetActiveState.c)
 *     PopCoalescingPowerSettingCallback @ 0x14074F350 (PopCoalescingPowerSettingCallback.c)
 *     PopHardDiskPowerSettingCallback @ 0x140A9A900 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x140C30AB4 (PopCoalescingInitialize.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x1409A2DCC (PopSetPowerSettingValueAcDc.c)
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
