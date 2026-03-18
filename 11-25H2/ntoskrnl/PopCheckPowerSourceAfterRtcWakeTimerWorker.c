/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140B4F470
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404A4824 (PopOkayToQueueNextWorkItem.c)
 *     NtInitiatePowerAction @ 0x140748B20 (NtInitiatePowerAction.c)
 *     PopCurrentPowerStatePrecise @ 0x140A22BFC (PopCurrentPowerStatePrecise.c)
 *     PopQueryPowerSettingUlong @ 0x140AAF530 (PopQueryPowerSettingUlong.c)
 */

LONG PopCheckPowerSourceAfterRtcWakeTimerWorker()
{
  __int64 v0; // r9
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+58h] [rbp+10h] BYREF
  int v4; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( PopSleepStats )
  {
    PopCurrentPowerStatePrecise((__int64)&v2, 0LL);
    if ( !(_BYTE)v2 )
    {
      v3 = 0;
      PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, &v4, &v3);
      if ( !v3 )
      {
        LOBYTE(v0) = 1;
        NtInitiatePowerAction(dword_140F0B3C0, (unsigned int)dword_140F0B3C4, 0x80000000LL, v0);
      }
    }
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_140F0A448);
  return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
}
