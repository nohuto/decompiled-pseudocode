/*
 * XREFs of ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180016214
 * Callers:
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18000CF44 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 *     AudioServerGetDevicePeriod @ 0x180082430 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetMixFormat @ 0x1800827D0 (AudioServerGetMixFormat.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x180082E80 (AudioServerGetSharedModeEnginePeriod.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180110120 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValidContainerType@@YAJU_GUID@@@Z @ 0x180016280 (-IsValidContainerType@@YAJU_GUID@@@Z.c)
 */

__int64 __fastcall ValidateVadServerSettings(IID *a1)
{
  __int64 v2; // rdx
  IID rclsid; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a1[3].Data1 >= 0x18 )
  {
    v2 = 1337LL;
    goto LABEL_5;
  }
  rclsid = a1[1];
  if ( (int)IsValidContainerType(&rclsid) < 0 )
  {
    v2 = 1339LL;
    goto LABEL_5;
  }
  if ( *(_DWORD *)&a1[3].Data2 > 4u )
  {
    v2 = 1341LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  return 0LL;
}
