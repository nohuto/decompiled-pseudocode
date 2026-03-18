/*
 * XREFs of ReadInputHapticSettings @ 0x1401B67D0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1400A8D38 (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 *     ReadDWORDSettingValue @ 0x1401B6714 (ReadDWORDSettingValue.c)
 *     ReadQWORDSettingValue @ 0x1401B69EC (ReadQWORDSettingValue.c)
 *     ValidateQWORDDoubleRange @ 0x1401B6ADC (ValidateQWORDDoubleRange.c)
 */

__int64 ReadInputHapticSettings()
{
  void *PointerDeviceConfigurationKey; // rdi
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  int v3; // ebx
  __int64 v4; // rsi
  bool v5; // zf
  __int64 v7; // [rsp+30h] [rbp+10h] BYREF

  PointerDeviceConfigurationKey = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(10LL, 131097LL);
  UserSessionState = W32GetUserSessionState(v1);
  v3 = 0;
  v4 = UserSessionState;
  if ( !PointerDeviceConfigurationKey )
    return 0LL;
  LODWORD(v7) = *(_DWORD *)(UserSessionState + 18576);
  ReadDWORDSettingValue(PointerDeviceConfigurationKey, L"PenFeedbackEnabled", &v7);
  v5 = (_DWORD)v7 == 0;
  LODWORD(v7) = *(_DWORD *)(v4 + 18580);
  *(_DWORD *)(v4 + 18576) = !v5;
  ReadDWORDSettingValue(PointerDeviceConfigurationKey, L"PenInteractionFeedbackEnabled", &v7);
  *(_DWORD *)(v4 + 18580) = v7 != 0;
  LODWORD(v7) = *(_DWORD *)(v4 + 18584);
  ReadDWORDSettingValue(PointerDeviceConfigurationKey, L"PenInkFeedbackEnabled", &v7);
  *(_DWORD *)(v4 + 18584) = v7 != 0;
  v7 = *(_QWORD *)(v4 + 18592);
  ReadQWORDSettingValue(PointerDeviceConfigurationKey);
  *(_QWORD *)(v4 + 18592) = ValidateQWORDDoubleRange(v7);
  LODWORD(v7) = *(_DWORD *)(v4 + 18600);
  ReadDWORDSettingValue(PointerDeviceConfigurationKey, L"TouchpadFeedbackEnabled", &v7);
  *(_DWORD *)(v4 + 18600) = v7 != 0;
  v7 = *(_QWORD *)(v4 + 18608);
  ReadQWORDSettingValue(PointerDeviceConfigurationKey);
  *(_QWORD *)(v4 + 18608) = ValidateQWORDDoubleRange(v7);
  LODWORD(v7) = *(_DWORD *)(v4 + 18616);
  ReadDWORDSettingValue(PointerDeviceConfigurationKey, L"MouseFeedbackEnabled", &v7);
  LOBYTE(v3) = (_DWORD)v7 != 0;
  v7 = *(_QWORD *)(v4 + 18624);
  *(_DWORD *)(v4 + 18616) = v3;
  ReadQWORDSettingValue(PointerDeviceConfigurationKey);
  *(_QWORD *)(v4 + 18624) = ValidateQWORDDoubleRange(v7);
  ZwClose(PointerDeviceConfigurationKey);
  return 1LL;
}
