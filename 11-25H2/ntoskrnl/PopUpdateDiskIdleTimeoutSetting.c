/*
 * XREFs of PopUpdateDiskIdleTimeoutSetting @ 0x140A8FF7C
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1404AC1B8 (PopCoalescingSetActiveState.c)
 *     PopCoalescingPowerSettingCallback @ 0x140744F60 (PopCoalescingPowerSettingCallback.c)
 *     PopHardDiskPowerSettingCallback @ 0x140A9A350 (PopHardDiskPowerSettingCallback.c)
 *     PopCoalescingInitialize @ 0x140C1D890 (PopCoalescingInitialize.c)
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x1409649CC (PopSetPowerSettingValueAcDc.c)
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
    return PopSetPowerSettingValueAcDc((__int64)&GUID_DISK_IDLE_TIMEOUT, 4u, (__int64)&PopCurrentDiskIdleTimeout);
  }
  return result;
}
