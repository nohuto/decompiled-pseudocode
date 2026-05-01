/*
 * XREFs of ?HasHandheldScreenSize@@YA_NXZ @ 0x18000A63C
 * Callers:
 *     IsGamingFullScreenExperienceSupported @ 0x18000DC10 (IsGamingFullScreenExperienceSupported.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006714 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x18000AB0C (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000D350 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18000D370 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     powf_0 @ 0x18000F24E (powf_0.c)
 *     sqrtf_0 @ 0x18000F25A (sqrtf_0.c)
 *     __security_check_cookie @ 0x18000F280 (__security_check_cookie.c)
 */

char HasHandheldScreenSize(void)
{
  int IntegratedDisplaySize; // eax
  HDEVINFO ClassDevsW; // rdi
  char v3; // r14
  DWORD v4; // r15d
  HKEY v5; // rsi
  unsigned int v6; // r8d
  const char *v7; // r9
  unsigned int v8; // r8d
  float v9; // xmm7_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm6_4
  unsigned int v13; // eax
  unsigned int v14; // r8d
  void *v15; // rdx
  unsigned int v16; // r8d
  const char *v17; // r9
  unsigned int v18; // r8d
  const char *v19; // r9
  unsigned int KeyType; // [rsp+28h] [rbp-E0h]
  DWORD Type[2]; // [rsp+38h] [rbp-D0h] BYREF
  double DeviceInfoData[5]; // [rsp+40h] [rbp-C8h] BYREF
  BYTE Data[256]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  DeviceInfoData[0] = 0.0;
  IntegratedDisplaySize = GetIntegratedDisplaySize(DeviceInfoData);
  if ( IntegratedDisplaySize >= 0 )
  {
    if ( DeviceInfoData[0] < 9.5 )
      return 1;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\gamingexperience.cpp",
      (const char *)(unsigned int)IntegratedDisplaySize);
  }
  ClassDevsW = SetupDiGetClassDevsW(&GUID_DEVCLASS_MONITOR, 0LL, 0LL, 2u);
  if ( ClassDevsW == (HDEVINFO)-1LL )
    return 0;
  v3 = 0;
  v4 = 0;
  memset(&DeviceInfoData[1], 0, 32);
  LODWORD(DeviceInfoData[1]) = 32;
  while ( SetupDiEnumDeviceInfo(ClassDevsW, v4, (PSP_DEVINFO_DATA)&DeviceInfoData[1]) )
  {
    v5 = SetupDiOpenDevRegKey(ClassDevsW, (PSP_DEVINFO_DATA)&DeviceInfoData[1], 1u, 0, 1u, 0x20019u);
    if ( v5 == HKEY_CURRENT_USER_LOCAL_SETTINGS|0x7FFFFFF8LL )
    {
      wil::details::in1diag3::_Log_GetLastError(retaddr, (void *)0x57, v6, v7);
    }
    else
    {
      Type[1] = 0;
      Type[0] = 256;
      if ( RegQueryValueExW(v5, L"EDID", 0LL, &Type[1], Data, Type) )
      {
        v9 = (float)Data[21] * 0.39370099;
        v10 = (float)Data[22] * 0.39370099;
        if ( v9 > 0.0 && v10 > 0.0 )
        {
          v11 = powf_0(v10, 2.0);
          v12 = v11 + powf_0(v9, 2.0);
          if ( sqrtf_0(v12) < 9.5 )
            v3 = 1;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Win32(retaddr, (void *)0x62, v8, (const char *)1, KeyType);
      }
      v13 = RegCloseKey(v5);
      if ( v13 )
        wil::details::in1diag3::_Log_Win32(retaddr, (void *)0x71, v14, (const char *)v13, KeyType);
    }
    ++v4;
    if ( v3 )
      goto LABEL_23;
  }
  if ( GetLastError() != 259 )
    wil::details::in1diag3::Log_GetLastError(retaddr, v15, v16, v17);
LABEL_23:
  if ( SetupDiDestroyDeviceInfoList(ClassDevsW) )
    wil::details::in1diag3::_Log_GetLastError(retaddr, (void *)0x75, v18, v19);
  return v3;
}
