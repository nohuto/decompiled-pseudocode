/*
 * XREFs of WritePointerDeviceSettings @ 0x1401B6B80
 * Callers:
 *     xxxSystemParametersInfo @ 0x140173780 (xxxSystemParametersInfo.c)
 * Callees:
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1400A8D38 (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 *     SendCrosshairPropertiesChanged @ 0x140147BF0 (SendCrosshairPropertiesChanged.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x1401B666C (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     SetTouchInputStatus @ 0x1401B6AB0 (SetTouchInputStatus.c)
 *     ValidateQWORDDoubleRange @ 0x1401B6ADC (ValidateQWORDDoubleRange.c)
 *     WriteDWORDSettingValue @ 0x1401B6B04 (WriteDWORDSettingValue.c)
 *     WriteQWORDSettingValue @ 0x1401B6ED4 (WriteQWORDSettingValue.c)
 *     WriteSettingValues @ 0x1401B6F50 (WriteSettingValues.c)
 */

__int64 __fastcall WritePointerDeviceSettings(__int64 a1, unsigned int *a2, int a3)
{
  int v5; // ebp
  unsigned int v6; // esi
  _DWORD *UserSessionState; // rax
  _DWORD *v8; // rbx
  int v9; // ebp
  int v10; // ebp
  void *PointerDeviceConfigurationKey; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // r8d

  v5 = a1;
  v6 = 0;
  UserSessionState = (_DWORD *)W32GetUserSessionState(a1);
  v8 = UserSessionState + 4348;
  v9 = v5 - 147;
  if ( v9 )
  {
    v10 = v9 - 32;
    if ( v10 )
    {
      if ( v10 == 2 && (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
      {
        PointerDeviceConfigurationKey = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(10LL, 131078LL);
        *((_OWORD *)v8 + 74) = *(_OWORD *)a2;
        *((_OWORD *)v8 + 75) = *((_OWORD *)a2 + 1);
        *((_OWORD *)v8 + 76) = *((_OWORD *)a2 + 2);
        *((_QWORD *)v8 + 154) = *((_QWORD *)a2 + 6);
        v12 = *((_QWORD *)v8 + 150);
        v8[296] = *a2 != 0;
        v8[297] = a2[1] != 0;
        v8[298] = a2[2] != 0;
        v8[302] = a2[6] != 0;
        v8[306] = a2[10] != 0;
        v13 = ValidateQWORDDoubleRange(v12, 0.01, 1.0, 0.5);
        v14 = *((_QWORD *)v8 + 152);
        *((_QWORD *)v8 + 150) = v13;
        v15 = ValidateQWORDDoubleRange(v14, 0.01, 1.0, 0.5);
        v16 = *((_QWORD *)v8 + 154);
        *((_QWORD *)v8 + 152) = v15;
        *((_QWORD *)v8 + 154) = ValidateQWORDDoubleRange(v16, 0.01, 1.0, 0.5);
        v6 = 1;
        if ( a3 )
        {
          WriteDWORDSettingValue(PointerDeviceConfigurationKey, L"PenFeedbackEnabled", v17);
          WriteDWORDSettingValue(PointerDeviceConfigurationKey, L"PenInteractionFeedbackEnabled", v8[297]);
          WriteDWORDSettingValue(PointerDeviceConfigurationKey, L"PenInkFeedbackEnabled", v8[298]);
          WriteQWORDSettingValue(PointerDeviceConfigurationKey);
          WriteDWORDSettingValue(PointerDeviceConfigurationKey, L"TouchpadFeedbackEnabled", v8[302]);
          WriteQWORDSettingValue(PointerDeviceConfigurationKey);
          WriteDWORDSettingValue(PointerDeviceConfigurationKey, L"MouseFeedbackEnabled", v8[306]);
          WriteQWORDSettingValue(PointerDeviceConfigurationKey);
        }
        ZwClose(PointerDeviceConfigurationKey);
      }
    }
    else
    {
      UserSessionState[4639] = *a2;
      v6 = 1;
      if ( !a3 || (v6 = WriteSettingValues(9LL, UserSessionState + 4636, 1LL)) != 0 )
      {
        if ( !v8[292] )
          v8[292] = 1;
        SendCrosshairPropertiesChanged(*a2);
      }
    }
  }
  else
  {
    v6 = 1;
    UserSessionState[4351] = *a2 == 0;
    UserSessionState[4355] = a2[1];
    UserSessionState[4359] = a2[2];
    UserSessionState[4363] = a2[3];
    UserSessionState[4367] = a2[5];
    UserSessionState[4371] = a2[6];
    UserSessionState[4375] = a2[7];
    UserSessionState[4379] = a2[8];
    UserSessionState[4383] = a2[9];
    UserSessionState[4387] = a2[10];
    UserSessionState[4391] = a2[11];
    UserSessionState[4395] = a2[12];
    UserSessionState[4399] = a2[13];
    UserSessionState[4403] = a2[14];
    UserSessionState[4407] = a2[15];
    UserSessionState[4411] = a2[16];
    SetTouchInputStatus(a2[7]);
    if ( !a3 || (v6 = WriteSettingValues(2LL, v8, 16LL)) != 0 )
    {
      if ( !v8[64] )
        v8[64] = 1;
      v8[71] = a2[4];
      if ( a3 )
        v6 = WriteSettingValues(3LL, v8 + 68, 1LL);
      if ( v6 && !v8[72] )
        v8[72] = 1;
    }
  }
  return v6;
}
