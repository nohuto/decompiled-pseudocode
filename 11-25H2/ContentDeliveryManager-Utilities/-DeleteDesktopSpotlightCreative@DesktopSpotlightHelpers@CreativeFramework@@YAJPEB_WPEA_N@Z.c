/*
 * XREFs of ?DeleteDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_WPEA_N@Z @ 0x1800A23BC
 * Callers:
 *     ?NotifyForDesktopSpotlightUpdates@SetDesktopWallpaperService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800A2BBC (-NotifyForDesktopSpotlightUpdates@SetDesktopWallpaperService@Actions@CreativeFramework@@AEAAJXZ.c)
 *     ?Unstage@SetDesktopWallpaperService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800A3360 (-Unstage@SetDesktopWallpaperService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A498 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AB80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180056B0C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?c_str@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAPEB_WXZ @ 0x18007FB20 (-c_str@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAPEB_WXZ.c)
 *     ?_Destroy@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@IEAAXPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@0@Z @ 0x180087BE8 (-_Destroy@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator.c)
 *     ?push_back@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800A218C (-push_back@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocato.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall CreativeFramework::DesktopSpotlightHelpers::DeleteDesktopSpotlightCreative(
        LPCWCH lpString2,
        wchar_t *a2,
        bool *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  DWORD i; // edi
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  void *v15; // rbx
  unsigned int ValueW; // eax
  __int64 v17; // rcx
  void *v18; // rbx
  __int128 v19; // rdi
  _QWORD *j; // rbx
  const WCHAR *v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // ebx
  HKEY hKey; // [rsp+60h] [rbp-488h] BYREF
  DWORD pcbData; // [rsp+68h] [rbp-480h] BYREF
  DWORD cSubKeys; // [rsp+6Ch] [rbp-47Ch] BYREF
  DWORD cchName; // [rsp+70h] [rbp-478h] BYREF
  __int128 v29; // [rsp+78h] [rbp-470h] BYREF
  __int64 v30; // [rsp+88h] [rbp-460h]
  _QWORD v31[4]; // [rsp+90h] [rbp-458h] BYREF
  WCHAR Name[264]; // [rsp+B0h] [rbp-438h] BYREF
  WCHAR pvData[256]; // [rsp+2C0h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4E8h] [rbp+0h]

  if ( a2 )
    *(_BYTE *)a2 = 0;
  hKey = 0LL;
  v5 = RegOpenKeyExW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Spotlight",
         0,
         0xF003Fu,
         &hKey);
  if ( v5 )
  {
    v6 = wil::details::in1diag3::Return_Win32(
           retaddr,
           100LL,
           (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
           (const char *)v5);
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    return v6;
  }
  else
  {
    v29 = 0LL;
    v30 = 0LL;
    cSubKeys = 0;
    v8 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, &cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( v8 )
    {
      v10 = wil::details::in1diag3::Return_Win32(
              retaddr,
              105LL,
              (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
              (const char *)v8);
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
      return v10;
    }
    else
    {
      for ( i = 0; i < cSubKeys; ++i )
      {
        cchName = 261;
        pcbData = 256;
        v12 = RegEnumKeyExW(hKey, i, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
        if ( v12 )
        {
          v14 = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  112LL,
                  (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\ContentDeliveryManager\\Deskto"
                           "pSpotlightHelpers.h",
                  (const char *)v12);
          v15 = (void *)v29;
          if ( (_QWORD)v29 )
          {
            std::vector<std::wstring>::_Destroy(v13, (_QWORD *)v29, *((_QWORD **)&v29 + 1));
            operator delete(v15);
          }
LABEL_12:
          wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
          return v14;
        }
        ValueW = RegGetValueW(hKey, Name, L"contentId", 2u, 0LL, pvData, &pcbData);
        if ( ValueW )
        {
          v14 = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  113LL,
                  (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\ContentDeliveryManager\\Deskto"
                           "pSpotlightHelpers.h",
                  (const char *)ValueW);
          v18 = (void *)v29;
          if ( (_QWORD)v29 )
          {
            std::vector<std::wstring>::_Destroy(v17, (_QWORD *)v29, *((_QWORD **)&v29 + 1));
            operator delete(v18);
          }
          goto LABEL_12;
        }
        if ( CompareStringOrdinal(pvData, -1, lpString2, -1, 0) == 2 )
        {
          std::wstring::wstring((__int64)v31);
          std::vector<std::wstring>::push_back((__int64 *)&v29, (unsigned __int64)v31);
          std::wstring::_Tidy(v31, 1, 0LL);
        }
      }
      v19 = v29;
      if ( (_QWORD)v29 != *((_QWORD *)&v29 + 1) )
      {
        if ( a2 )
          *(_BYTE *)a2 = 1;
        for ( j = (_QWORD *)v19; j != *((_QWORD **)&v19 + 1); j += 4 )
        {
          v21 = (const WCHAR *)std::wstring::c_str(j);
          v22 = RegDeleteKeyExW(hKey, v21, 0, 0);
          if ( v22 )
          {
            v24 = wil::details::in1diag3::Return_Win32(
                    retaddr,
                    130LL,
                    (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\ContentDeliveryManager\\Desk"
                             "topSpotlightHelpers.h",
                    (const char *)v22);
            if ( (_QWORD)v19 )
            {
              std::vector<std::wstring>::_Destroy(v23, (_QWORD *)v19, *((_QWORD **)&v19 + 1));
              operator delete((void *)v19);
            }
            wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
            return v24;
          }
        }
      }
      if ( (_QWORD)v19 )
      {
        std::vector<std::wstring>::_Destroy(v9, (_QWORD *)v19, *((_QWORD **)&v19 + 1));
        operator delete((void *)v19);
      }
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
      return 0LL;
    }
  }
}
