/*
 * XREFs of ?GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z @ 0x14007A104
 * Callers:
 *     ?GetAudioModules@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x14001BC40 (-GetAudioModules@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAU-$IVector@PEAV.c)
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x140055AD0 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

__int64 __fastcall GuidToHString(struct _GUID *a1, HSTRING *a2)
{
  HRESULT String; // ebx
  __int64 v4; // rdx
  __int64 v6; // rdx
  GUID rguid; // [rsp+20h] [rbp-78h] BYREF
  WCHAR sz[40]; // [rsp+30h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  rguid = *a1;
  if ( !StringFromGUID2(&rguid, sz, 39) )
  {
    String = -2147024809;
    v4 = 56LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)(unsigned int)String);
    return (unsigned int)String;
  }
  v6 = -1LL;
  do
    ++v6;
  while ( sz[v6] );
  String = WindowsCreateString(sz, v6, a2);
  if ( String < 0 )
  {
    v4 = 57LL;
    goto LABEL_3;
  }
  return 0LL;
}
