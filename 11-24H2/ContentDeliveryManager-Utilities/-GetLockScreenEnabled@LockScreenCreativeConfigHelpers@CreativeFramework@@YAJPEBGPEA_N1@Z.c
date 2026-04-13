/*
 * XREFs of ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x18005245C
 * Callers:
 *     ?IsLockScreenEnabled@ContentManagementService@ContentManagement@@UEAAJPEAE0@Z @ 0x1800539D0 (-IsLockScreenEnabled@ContentManagementService@ContentManagement@@UEAAJPEAE0@Z.c)
 * Callees:
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180029924 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A404 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A468 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18002AAD8 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180033D90 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D810 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003FB88 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x180051780 (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 *     ?IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ @ 0x180053514 (-IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ.c)
 *     ?IsContentDeliveryAllowedOverrideInEffect@ContentDeliveryManagerDebugSettings@CreativeFramework@@YA_NPEA_N@Z @ 0x1800535A4 (-IsContentDeliveryAllowedOverrideInEffect@ContentDeliveryManagerDebugSettings@CreativeFramework@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180056B44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@details@wil@@QEAAX_N.c)
 */

__int64 __fastcall CreativeFramework::LockScreenCreativeConfigHelpers::GetLockScreenEnabled(
        CreativeFramework::LockScreenCreativeConfigHelpers *this,
        bool *a2,
        bool *a3,
        bool *a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  bool v8; // al
  int v9; // esi
  CreativeFramework::Policy *v10; // rcx
  bool v11; // zf
  char v12; // al
  unsigned __int16 **v13; // rdx
  int CurrentUserSidString; // eax
  signed int v15; // ebx
  int v16; // eax
  LSTATUS v17; // eax
  signed int v18; // ebx
  int v19; // eax
  HKEY v20; // rbx
  LSTATUS v21; // eax
  __int64 v22; // rdx
  LSTATUS ValueW; // eax
  LSTATUS v24; // eax
  HKEY hKey; // [rsp+40h] [rbp-29h] BYREF
  void *v27; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v28[8]; // [rsp+50h] [rbp-19h] BYREF
  LPCWSTR lpSubKey[3]; // [rsp+58h] [rbp-11h] BYREF
  LPCWSTR v30[10]; // [rsp+70h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  CreativeFramework::LockScreenCreativeConfigHelpers *pdwValue; // [rsp+D0h] [rbp+67h] BYREF
  int pvData; // [rsp+D8h] [rbp+6Fh] BYREF
  DWORD pcbData; // [rsp+E0h] [rbp+77h] BYREF
  DWORD v35; // [rsp+E8h] [rbp+7Fh] BYREF

  pdwValue = this;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  LOBYTE(pdwValue) = 0;
  if ( !CreativeFramework::ContentDeliveryManagerDebugSettings::IsContentDeliveryAllowedOverrideInEffect(
          (CreativeFramework::ContentDeliveryManagerDebugSettings *)&pdwValue,
          a2) )
  {
    v9 = 1;
    LOBYTE(v6) = 1;
    LOBYTE(v7) = 3;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowsSpotlightV3>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetImpl'::`2'::impl,
      v6,
      v7);
    LODWORD(pdwValue) = 0;
    SLGetWindowsInformationDWORD(L"ContentDeliveryManager-License-ContentDeliveryAllowed", (DWORD *)&pdwValue);
    if ( (_DWORD)pdwValue || (v11 = !CreativeFramework::Policy::IsAnyMicrosoftDomainAccount(v10), v12 = 0, !v11) )
      v12 = 1;
    if ( !v12 )
      return 0LL;
    v27 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &v27,
      0LL);
    CurrentUserSidString = CreativeFramework::LockScreenCreativeConfigHelpers::GetCurrentUserSidString(
                             (CreativeFramework::LockScreenCreativeConfigHelpers *)&v27,
                             v13);
    v15 = CurrentUserSidString;
    if ( CurrentUserSidString < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x129,
        (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
        (const char *)(unsigned int)CurrentUserSidString);
LABEL_44:
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v27);
      return (unsigned int)v15;
    }
    memset(lpSubKey, 0, sizeof(lpSubKey));
    v16 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
            (__int64)lpSubKey,
            L"%s\\%s",
            v27,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager");
    v15 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12D,
        (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
        (const char *)(unsigned int)v16);
LABEL_43:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpSubKey);
      goto LABEL_44;
    }
    hKey = 0LL;
    v17 = RegOpenKeyExW(HKEY_USERS, lpSubKey[0], 0, 9u, &hKey);
    v18 = v17;
    if ( v17 > 0 )
      v18 = (unsigned __int16)v17 | 0x80070000;
    if ( v18 < 0 )
    {
      memset(v30, 0, 24);
      v9 = 0;
      v19 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
              (__int64)v30,
              L"%s\\%s",
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Creative",
              v27);
      v15 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13C,
          (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
          (const char *)(unsigned int)v19);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v30);
LABEL_42:
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
        goto LABEL_43;
      }
      v20 = hKey;
      if ( hKey )
      {
        wil::last_error_context::last_error_context((wil::last_error_context *)v28);
        RegCloseKey(v20);
        wil::last_error_context::~last_error_context((wil::last_error_context *)v28);
      }
      hKey = 0LL;
      v21 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, v30[0], 0, 9u, &hKey);
      v15 = v21;
      if ( v21 > 0 )
        v15 = (unsigned __int16)v21 | 0x80070000;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v30);
      if ( v15 < 0 )
      {
        v22 = 319LL;
LABEL_41:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
          (const char *)(unsigned int)v15);
        goto LABEL_42;
      }
    }
    pvData = 0;
    pcbData = 4;
    ValueW = RegGetValueW(hKey, 0LL, L"RotatingLockScreenEnabled", 0x10u, 0LL, &pvData, &pcbData);
    v15 = ValueW;
    if ( ValueW > 0 )
      v15 = (unsigned __int16)ValueW | 0x80070000;
    if ( v15 == -2147024894 )
    {
      pvData = v9;
    }
    else if ( v15 < 0 )
    {
      v22 = 331LL;
      goto LABEL_41;
    }
    LODWORD(pdwValue) = 0;
    v35 = 4;
    v24 = RegGetValueW(hKey, 0LL, L"RotatingLockScreenOverlayEnabled", 0x10u, 0LL, &pdwValue, &v35);
    v15 = v24;
    if ( v24 > 0 )
      v15 = (unsigned __int16)v24 | 0x80070000;
    if ( v15 == -2147024894 )
    {
      LODWORD(pdwValue) = v9;
    }
    else
    {
      if ( v15 < 0 )
      {
        v22 = 344LL;
        goto LABEL_41;
      }
      v9 = (int)pdwValue;
    }
    if ( a2 )
      *a2 = pvData != 0;
    if ( a3 )
      *a3 = v9 != 0;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpSubKey);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v27);
    return 0LL;
  }
  v8 = (char)pdwValue;
  if ( a2 )
    *a2 = (char)pdwValue;
  if ( a3 )
    *a3 = v8;
  return 0LL;
}
