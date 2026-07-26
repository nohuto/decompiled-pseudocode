/*
 * XREFs of ?ndisCheckWatchdogTimer@@YAEXZ @ 0x14004D9D0
 * Callers:
 *     ndis5InterruptDpc @ 0x1400D72D0 (ndis5InterruptDpc.c)
 * Callees:
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

bool ndisCheckWatchdogTimer(void)
{
  NTSTATUS v0; // r8d
  ULONG v1; // ecx
  struct _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+20h] [rbp-28h] BYREF

  memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
  v0 = KeQueryDpcWatchdogInformation(&WatchdogInformation);
  v1 = 30 * (WatchdogInformation.DpcWatchdogLimit / 0x64);
  return v0 >= 0 && v1 && WatchdogInformation.DpcWatchdogCount < v1;
}
