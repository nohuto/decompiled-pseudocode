/*
 * XREFs of ?GetDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEAPEA_W00@Z @ 0x1800A2798
 * Callers:
 *     ?NotifyForDesktopSpotlightUpdates@SetDesktopWallpaperService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800A2BBC (-NotifyForDesktopSpotlightUpdates@SetDesktopWallpaperService@Actions@CreativeFramework@@AEAAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A498 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D630 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlight@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800561D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlight@@@details@wil@@QEAAX_NW4.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180056B0C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180081000 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?SHRegAllocData@@YAJPEAUHKEY__@@PEB_W1HPEAPEAXPEAK@Z @ 0x1800A2DE4 (-SHRegAllocData@@YAJPEAUHKEY__@@PEB_W1HPEAPEAXPEAK@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

__int64 __fastcall CreativeFramework::DesktopSpotlightHelpers::GetDesktopSpotlightCreative(
        void **this,
        wchar_t **a2,
        wchar_t **a3,
        wchar_t **a4)
{
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  unsigned int v10; // ebx
  DWORD i; // r15d
  unsigned __int64 v12; // rax
  int v13; // eax
  int v14; // r9d
  int v15; // esi
  const wchar_t *v16; // rsi
  int v17; // eax
  int v18; // r14d
  int v19; // eax
  __int64 v20; // rdx
  unsigned int *lpcbMaxSubKeyLen; // [rsp+28h] [rbp-D8h]
  HKEY hKey; // [rsp+60h] [rbp-A0h] BYREF
  DWORD cSubKeys; // [rsp+68h] [rbp-98h] BYREF
  DWORD cchName; // [rsp+6Ch] [rbp-94h] BYREF
  wchar_t *v26[4]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR Name[264]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  if ( this )
    *this = 0LL;
  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSpotlight>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_DesktopSpotlight>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    (__int64)a4);
  hKey = 0LL;
  v7 = RegOpenKeyExW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Spotlight",
         0,
         0x20019u,
         &hKey);
  if ( !v7 )
  {
    v9 = 0LL;
    cSubKeys = 0;
    v7 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, &cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( v7 )
    {
      v8 = 37LL;
      goto LABEL_11;
    }
    for ( i = 0; i < cSubKeys; ++i )
    {
      cchName = 261;
      v7 = RegEnumKeyExW(hKey, i, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
      if ( v7 )
      {
        v8 = 42LL;
        goto LABEL_11;
      }
      v12 = _wcstoui64(Name, 0LL, 10);
      if ( v12 > v9 )
        v9 = v12;
    }
    if ( v9 )
    {
      memset(v26, 0, 24);
      v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
              v26,
              L"%llu",
              v9);
      v15 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x36,
          (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
          (const char *)(unsigned int)v13);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v26);
        v10 = v15;
        goto LABEL_34;
      }
      v16 = v26[0];
      if ( this )
      {
        v17 = SHRegAllocData(hKey, v26[0], L"contentId", v14, this, lpcbMaxSubKeyLen);
        v18 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3A,
            (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
            (const char *)(unsigned int)v17);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v26);
          v10 = v18;
          goto LABEL_34;
        }
      }
      if ( a2 )
      {
        v19 = SHRegAllocData(hKey, v16, L"landscapeImage", v14, (void **)a2, lpcbMaxSubKeyLen);
        v10 = v19;
        if ( v19 < 0 )
        {
          v20 = 62LL;
LABEL_28:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v20,
            (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
            (const char *)(unsigned int)v19);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v26);
          goto LABEL_34;
        }
      }
      if ( a3 )
      {
        v19 = SHRegAllocData(hKey, v16, L"portraitImage", v14, (void **)a3, lpcbMaxSubKeyLen);
        v10 = v19;
        if ( v19 < 0 )
        {
          v20 = 66LL;
          goto LABEL_28;
        }
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v26);
    }
    v10 = 0;
    goto LABEL_34;
  }
  v8 = 34LL;
LABEL_11:
  v10 = wil::details::in1diag3::Return_Win32(
          retaddr,
          v8,
          (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
          (const char *)v7);
LABEL_34:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return v10;
}
