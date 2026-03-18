/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140B5F5B0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404A4D54 (PopOkayToQueueNextWorkItem.c)
 *     NtInitiatePowerAction @ 0x140754BF0 (NtInitiatePowerAction.c)
 *     PopCurrentPowerStatePrecise @ 0x140A2C144 (PopCurrentPowerStatePrecise.c)
 *     PopQueryPowerSettingUlong @ 0x140AB4520 (PopQueryPowerSettingUlong.c)
 */

LONG PopCheckPowerSourceAfterRtcWakeTimerWorker()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+58h] [rbp+10h] BYREF
  int v3; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0LL;
  if ( PopSleepStats )
  {
    PopCurrentPowerStatePrecise((__int64)&v1, 0LL);
    if ( !(_BYTE)v1 )
    {
      v2 = 0;
      PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, &v3, &v2);
      if ( !v2 )
        NtInitiatePowerAction(dword_140F0B660, (unsigned int)dword_140F0B664, 0x80000000, 1);
    }
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_140F0AAE8);
  return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
}
