/*
 * XREFs of ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180045940
 * Callers:
 *     ?RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z @ 0x180045FF0 (-RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180009830 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18000FDB4 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18000FE10 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180015760 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800175C8 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180017640 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001BB58 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     ??$make_unique_cotaskmem_nothrow@$$BY0A@G@wil@@YA?AV?$unique_ptr@$$BY0A@GU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x180044EC8 (--$make_unique_cotaskmem_nothrow@$$BY0A@G@wil@@YA-AV-$unique_ptr@$$BY0A@GU-$function_deleter@P6A.c)
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180045BBC (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 *     ?ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z @ 0x180045E1C (-ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z.c)
 *     ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x1800464A8 (-UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_00.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180046684 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
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
  int updated; // eax
  unsigned int v9; // esi
  __int64 v10; // rdx
  DWORD cbMaxValueNameLen; // [rsp+60h] [rbp-29h] BYREF
  DWORD cValues; // [rsp+64h] [rbp-25h] BYREF
  DWORD cchValueName; // [rsp+68h] [rbp-21h] BYREF
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v15; // [rsp+6Ch] [rbp-1Dh] BYREF
  unsigned int v16; // [rsp+70h] [rbp-19h] BYREF
  unsigned __int16 *v17; // [rsp+78h] [rbp-11h] BYREF
  HKEY hKey; // [rsp+80h] [rbp-9h] BYREF
  LPWSTR lpValueName; // [rsp+88h] [rbp-1h] BYREF
  _BYTE v20[32]; // [rsp+90h] [rbp+7h] BYREF
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
        v9 = -2147024882;
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
          v9 = wil::details::in1diag3::Return_Win32(
                 retaddr,
                 (void *)0x1B9,
                 (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
                 (const char *)v7);
          goto LABEL_19;
        }
        if ( cchValueName )
        {
          std::wstring::wstring((__int64)v20, (__int64)v5);
          if ( std::wstring::find(v20) == -1 )
          {
            v17 = 0LL;
            v16 = 0;
            v15 = eRender;
            updated = ApplicationSpecificEndpointInfo::ReadKey(v2, v5, &v17);
            v9 = updated;
            if ( updated < 0 )
            {
              v10 = 458LL;
LABEL_17:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v10,
                (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
                (const char *)(unsigned int)updated);
              wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v17);
              std::wstring::~wstring((__int64)v20);
LABEL_19:
              CoTaskMemFree(v5);
              goto LABEL_22;
            }
            if ( (int)ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey(
                        v5,
                        &v15,
                        (enum __MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001 *)&v16) >= 0 )
            {
              updated = ApplicationSpecificEndpointInfo::UpdateState(this, v16, (unsigned int)v15, v17);
              v9 = updated;
              if ( updated < 0 )
              {
                v10 = 468LL;
                goto LABEL_17;
              }
            }
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v17);
          }
          std::wstring::~wstring((__int64)v20);
        }
      }
      CoTaskMemFree(v5);
    }
  }
  v9 = 0;
LABEL_22:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return v9;
}
