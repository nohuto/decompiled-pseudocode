/*
 * XREFs of ?DeleteRegistryEntry@EffectPackConfigurationManager@@CAXU_GUID@@@Z @ 0x1800F8BA4
 * Callers:
 *     ?OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z @ 0x1800F8CB0 (-OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B742C (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?GetEffectPackRegistryPath@@YAJU_GUID@@_KPEAG@Z @ 0x180125BAC (-GetEffectPackRegistryPath@@YAJU_GUID@@_KPEAG@Z.c)
 */

void __fastcall EffectPackConfigurationManager::DeleteRegistryEntry(struct _GUID *a1, unsigned __int64 a2)
{
  LSTATUS v2; // eax
  LSTATUS v3; // eax
  HKEY hKey[2]; // [rsp+30h] [rbp-238h] BYREF
  WCHAR SubKey[264]; // [rsp+40h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  *(struct _GUID *)hKey = *a1;
  if ( GetEffectPackRegistryPath((struct _GUID *)hKey, a2, SubKey) >= 0 )
  {
    hKey[0] = 0LL;
    if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 3u, hKey) )
    {
      v2 = RegDeleteTreeW(hKey[0], 0LL);
      if ( v2 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          142LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
          (const char *)(unsigned int)v2);
      v3 = RegDeleteKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          145LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
          (const char *)(unsigned int)v3);
    }
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(hKey);
  }
}
