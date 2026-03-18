/*
 * XREFs of UserNotifyUniversalScaleFactorChanged @ 0x1401BEA84
 * Callers:
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1401CA940 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x140087D30 (GreIncrementDisplaySettingsUniqueness.c)
 *     xxxResetDisplayDevice @ 0x1400A2770 (xxxResetDisplayDevice.c)
 *     xxxSendNotifyMessage @ 0x14023B9E4 (xxxSendNotifyMessage.c)
 */

__int64 UserNotifyUniversalScaleFactorChanged()
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  int CurrentWin32kSessionId; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF

  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &CurrentWin32kSessionId);
  GreIncrementDisplaySettingsUniqueness(v0);
  xxxSendNotifyMessage(v1, 26LL);
  v6 = 0;
  UserSessionState = W32GetUserSessionState(v2);
  return xxxResetDisplayDevice(*(_QWORD *)(UserSessionState + 19200), &v6, 0LL);
}
