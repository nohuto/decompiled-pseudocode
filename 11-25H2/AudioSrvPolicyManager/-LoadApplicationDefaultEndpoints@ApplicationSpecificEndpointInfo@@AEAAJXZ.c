/*
 * XREFs of ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180048160
 * Callers:
 *     ?RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z @ 0x180048810 (-RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180006B20 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180010054 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x1800100B0 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180015310 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800173A8 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180017420 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001BA28 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ??$make_unique_cotaskmem_nothrow@$$BY0A@G@wil@@YA?AV?$unique_ptr@$$BY0A@GU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x1800476E8 (--$make_unique_cotaskmem_nothrow@$$BY0A@G@wil@@YA-AV-$unique_ptr@$$BY0A@GU-$function_deleter@P6A.c)
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x1800483DC (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 *     ?ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z @ 0x18004863C (-ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z.c)
 *     ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180048CC8 (-UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_00.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180048EA4 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ApplicationSpecificEndpointInfo::LoadApplicationDefaultEndpoints(
        ApplicationSpecificEndpointInfo *this)
{
  HKEY v2; // rdi
  __int64 v3; // r8
  const char *v4; // r9
  WCHAR *v5; // rbx
  DWORD i; // r14d
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int updated; // eax
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  DWORD cbMaxValueNameLen; // [rsp+60h] [rbp-29h] BYREF
  DWORD cValues; // [rsp+64h] [rbp-25h] BYREF
  DWORD cchValueName; // [rsp+68h] [rbp-21h] BYREF
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v21; // [rsp+6Ch] [rbp-1Dh] BYREF
  unsigned int v22; // [rsp+70h] [rbp-19h] BYREF
  unsigned __int16 *v23; // [rsp+78h] [rbp-11h] BYREF
  HKEY hKey; // [rsp+80h] [rbp-9h] BYREF
  LPWSTR lpValueName; // [rsp+88h] [rbp-1h] BYREF
  _BYTE v26[32]; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  hKey = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &hKey,
    0LL);
  if ( (int)ApplicationSpecificEndpointInfo::GetAppKey(this, 0x20019u, 0, &hKey) >= 0 )
  {
    cValues = 0;
    cbMaxValueNameLen = 0;
    v2 = hKey;
    if ( !RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cValues, &cbMaxValueNameLen, 0LL, 0LL, 0LL) )
    {
      wil::make_unique_cotaskmem_nothrow<unsigned short [0]>(&lpValueName, ++cbMaxValueNameLen, v3, v4);
      v5 = lpValueName;
      if ( !lpValueName )
      {
        v12 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1A8,
          (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)0x8007000ELL);
        goto LABEL_22;
      }
      for ( i = 0; i < cValues; ++i )
      {
        cchValueName = cbMaxValueNameLen;
        v7 = RegEnumValueW(v2, i, v5, &cchValueName, 0LL, 0LL, 0LL, 0LL);
        if ( v7 )
        {
          v12 = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x1B9,
                  (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
                  (const char *)v7);
          goto LABEL_19;
        }
        if ( cchValueName )
        {
          std::wstring::wstring((__int64)v26, v5);
          if ( std::wstring::find(v26) == -1 )
          {
            v23 = 0LL;
            v22 = 0;
            v21 = eRender;
            updated = ApplicationSpecificEndpointInfo::ReadKey(v2, v5, &v23);
            v12 = updated;
            if ( updated < 0 )
            {
              v13 = 458LL;
LABEL_17:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v13,
                (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
                (const char *)(unsigned int)updated);
              wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v23);
              std::wstring::~wstring((__int64)v26, v14, v15, v16);
LABEL_19:
              CoTaskMemFree(v5);
              goto LABEL_22;
            }
            if ( (int)ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey(
                        v5,
                        &v21,
                        (enum __MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001 *)&v22) >= 0 )
            {
              updated = ApplicationSpecificEndpointInfo::UpdateState(this, v22, (unsigned int)v21, v23);
              v12 = updated;
              if ( updated < 0 )
              {
                v13 = 468LL;
                goto LABEL_17;
              }
            }
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v23);
          }
          std::wstring::~wstring((__int64)v26, v8, v9, v10);
        }
      }
      CoTaskMemFree(v5);
    }
  }
  v12 = 0;
LABEL_22:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return v12;
}
