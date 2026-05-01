/*
 * XREFs of ?ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ @ 0x180673EBC
 * Callers:
 *     ?subscribe_to_services@RdpShellExtensionHost@@UEAAXPEAUIServiceProvider@@@Z @ 0x180674A30 (-subscribe_to_services@RdpShellExtensionHost@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x180192020 (--$Write@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801CF810 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?IsRemoteAppSession@@YA_NXZ @ 0x18020BDA8 (-IsRemoteAppSession@@YA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1802BB350 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1802CAD00 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$try_get_value@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@YA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x18033A2D4 (--$try_get_value@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@@YA-AV-$.c)
 *     ??1?$_Optional_destruct_base@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0A@@std@@QEAA@XZ @ 0x18033A528 (--1-$_Optional_destruct_base@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0A@@.c)
 *     ??$make_range@V?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@@wil@@YA?AV?$pointer_range@V?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@@details@0@V?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@0@0@Z @ 0x1806733B0 (--$make_range@V-$iterator_t@V-$key_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ??0?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@QEAA@PEAUHKEY__@@@Z @ 0x1806734C8 (--0-$iterator_t@V-$key_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ??0?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@AEBV012@@Z @ 0x180673540 (--0-$key_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@@Q.c)
 *     ??1?$pointer_range@V?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@@details@wil@@QEAA@XZ @ 0x180673720 (--1-$pointer_range@V-$iterator_t@V-$key_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$.c)
 *     ??Y?$iterator_t@V?$key_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@QEAAAEAV012@_K@Z @ 0x1806739AC (--Y-$iterator_t@V-$key_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ?CreateRdpShellExtension@RdpShellExtensionHost@@IEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180673C50 (-CreateRdpShellExtension@RdpShellExtensionHost@@IEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?Provider@RdpShellExtensionHostTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180674484 (-Provider@RdpShellExtensionHostTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?open_unique_key_nothrow@reg@wil@@YAJPEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@W4key_access@12@@Z @ 0x180674998 (-open_unique_key_nothrow@reg@wil@@YAJPEAUHKEY__@@PEBGAEAV-$unique_any_t@V-$unique_storage@U-$res.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall RdpShellExtensionHost::ProcessAllRdpShellExtensions(RdpShellExtensionHost *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 result; // rax
  void **v5; // rax
  int v6; // edi
  void *v7; // rsi
  const char *v8; // r9
  const char *v9; // rax
  const WCHAR *v10; // rcx
  const struct _tlgProvider_t *v11; // r8
  __int64 v12; // r9
  LPCWCH *v13; // rcx
  const WCHAR *v14; // rcx
  char **v15; // rax
  const WCHAR **v16; // rax
  const WCHAR *v17; // rcx
  const WCHAR *v18; // rcx
  char **v19; // rax
  const struct _tlgProvider_t *v20; // r8
  __int64 v21; // r9
  const WCHAR *v22; // rcx
  const WCHAR *v23; // rax
  char **v24; // rax
  int RdpShellExtension; // eax
  const char *v26; // r9
  const WCHAR **v27; // [rsp+30h] [rbp-1B8h]
  HKEY v28; // [rsp+40h] [rbp-1A8h] BYREF
  const WCHAR *v29; // [rsp+48h] [rbp-1A0h] BYREF
  const WCHAR *v30; // [rsp+50h] [rbp-198h] BYREF
  int v31[2]; // [rsp+58h] [rbp-190h] BYREF
  __int128 v32; // [rsp+60h] [rbp-188h] BYREF
  __int64 v33; // [rsp+70h] [rbp-178h]
  unsigned __int64 v34; // [rsp+78h] [rbp-170h]
  __int64 v35; // [rsp+80h] [rbp-168h]
  int v36; // [rsp+88h] [rbp-160h]
  int v37; // [rsp+8Ch] [rbp-15Ch]
  __int64 v38; // [rsp+90h] [rbp-158h]
  LPCWCH lpString1[3]; // [rsp+98h] [rbp-150h] BYREF
  unsigned __int64 v40; // [rsp+B0h] [rbp-138h]
  char v41; // [rsp+B8h] [rbp-130h]
  char *v42[3]; // [rsp+D0h] [rbp-118h] BYREF
  unsigned __int64 v43; // [rsp+E8h] [rbp-100h]
  void *v44; // [rsp+F0h] [rbp-F8h]
  int v45; // [rsp+F8h] [rbp-F0h]
  void *v46[5]; // [rsp+108h] [rbp-E0h] BYREF
  int v47; // [rsp+130h] [rbp-B8h]
  void *v48[7]; // [rsp+140h] [rbp-A8h] BYREF
  _BYTE v49[56]; // [rsp+178h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  v28 = 0LL;
  v2 = wil::reg::open_unique_key_nothrow(HKEY_LOCAL_MACHINE, L"Software\\Classes\\RdpShellExtension");
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v28);
    return v3;
  }
  *((_DWORD *)this + 26) = 3;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 41) = 1;
  *((_DWORD *)this + 42) = 72;
  *((_DWORD *)this + 40) = 1;
  v30 = (const WCHAR *)&v32;
  v37 = 0;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 7LL;
  LOWORD(v32) = 0;
  v35 = 0LL;
  v36 = -1;
  v38 = 0LL;
  try
  {
    v5 = (void **)wil::reg::iterator_t<wil::reg::key_iterator_data<std::wstring>>::iterator_t<wil::reg::key_iterator_data<std::wstring>>(
                    (__int64)lpString1,
                    (__int64)v28);
    wil::make_range<wil::reg::iterator_t<wil::reg::key_iterator_data<std::wstring>>>((__int64)v48, v5, (void **)&v32);
    wil::reg::key_iterator_data<std::wstring>::key_iterator_data<std::wstring>((__int64)v42, (__int64)v48);
    wil::reg::key_iterator_data<std::wstring>::key_iterator_data<std::wstring>((__int64)v46, (__int64)v49);
    v6 = v47;
    v7 = v46[4];
    while ( 1 )
    {
      if ( (v45 == -1 || v6 == -1 || v44 == v7) && v45 == v6 )
      {
        std::wstring::_Tidy_deallocate(v46);
        std::wstring::_Tidy_deallocate((void **)v42);
        wil::details::pointer_range<wil::reg::iterator_t<wil::reg::key_iterator_data<std::wstring>>>::~pointer_range<wil::reg::iterator_t<wil::reg::key_iterator_data<std::wstring>>>(v48);
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v28);
        return 0LL;
      }
      if ( v45 == -1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x6E7,
          (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry_helpers.h",
          v26);
      wil::reg::try_get_value<std::wstring>((__int64)&v32, v28);
      wil::reg::try_get_value<std::wstring>((__int64)lpString1, v28);
      if ( !(_BYTE)v35 )
      {
        v9 = (const char *)v42;
        if ( v43 > 7 )
          v9 = v42[0];
        wil::details::in1diag3::Log_IfFailedMsg(
          retaddr,
          74LL,
          (__int64)"pcshell\\twinui\\rdpshellextensionhost\\lib\\rdpshellextensionhost.cpp",
          (const char *)0x80070002LL,
          (unsigned __int64)"CLSID %ls",
          v9);
        goto LABEL_58;
      }
      if ( v41 )
      {
        v10 = (const WCHAR *)lpString1;
        if ( v40 > 7 )
          v10 = lpString1[0];
        if ( CompareStringOrdinal(v10, -1, L"DESKTOP", -1, 1) == 2 )
        {
          if ( IsRemoteAppSession() )
          {
            v11 = RdpShellExtensionHostTelemetry::Provider();
            if ( *(_DWORD *)v11 <= 5u )
              goto LABEL_58;
            v13 = lpString1;
            if ( v40 > 7 )
              v13 = (LPCWCH *)lpString1[0];
            *(_QWORD *)v31 = v13;
            v14 = (const WCHAR *)&v32;
            if ( v34 > 7 )
              v14 = (const WCHAR *)v32;
            v15 = v42;
            if ( v43 > 7 )
              v15 = (char **)v42[0];
            v30 = (const WCHAR *)v15;
            v27 = (const WCHAR **)v31;
            v16 = &v30;
LABEL_41:
            v29 = v14;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
              (__int64)v11,
              byte_18081D189,
              (__int64)v11,
              v12,
              v16,
              &v29,
              v27);
            goto LABEL_58;
          }
          ++*((_DWORD *)this + 23);
          goto LABEL_44;
        }
        if ( v41 )
        {
          v17 = (const WCHAR *)lpString1;
          if ( v40 > 7 )
            v17 = lpString1[0];
          if ( CompareStringOrdinal(v17, -1, L"RAIL", -1, 1) == 2 )
          {
            if ( !IsRemoteAppSession() )
            {
              v11 = RdpShellExtensionHostTelemetry::Provider();
              if ( *(_DWORD *)v11 <= 5u )
                goto LABEL_58;
              v18 = (const WCHAR *)lpString1;
              if ( v40 > 7 )
                v18 = lpString1[0];
              v30 = v18;
              v14 = (const WCHAR *)&v32;
              if ( v34 > 7 )
                v14 = (const WCHAR *)v32;
              v19 = v42;
              if ( v43 > 7 )
                v19 = (char **)v42[0];
              *(_QWORD *)v31 = v19;
              v27 = &v30;
              v16 = (const WCHAR **)v31;
              goto LABEL_41;
            }
            ++*((_DWORD *)this + 24);
            goto LABEL_44;
          }
        }
      }
      ++*((_DWORD *)this + 22);
LABEL_44:
      v20 = RdpShellExtensionHostTelemetry::Provider();
      if ( *(_DWORD *)v20 > 4u )
      {
        if ( v41 )
        {
          v22 = (const WCHAR *)lpString1;
          if ( v40 > 7 )
            v22 = lpString1[0];
        }
        else
        {
          v22 = L"Unspecified";
        }
        v30 = v22;
        v23 = (const WCHAR *)&v32;
        if ( v34 > 7 )
          v23 = (const WCHAR *)v32;
        v29 = v23;
        v24 = v42;
        if ( v43 > 7 )
          v24 = (char **)v42[0];
        *(_QWORD *)v31 = v24;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          (__int64)v20,
          byte_18081D14B,
          (__int64)v20,
          v21,
          (const WCHAR **)v31,
          &v29,
          &v30);
      }
      if ( !(_BYTE)v35 )
        std::_Throw_bad_optional_access();
      RdpShellExtension = RdpShellExtensionHost::CreateRdpShellExtension((__int64)this, (const WCHAR *)&v32);
      if ( RdpShellExtension < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x74,
          (int)"pcshell\\twinui\\rdpshellextensionhost\\lib\\rdpshellextensionhost.cpp",
          (const char *)(unsigned int)RdpShellExtension);
LABEL_58:
      std::_Optional_destruct_base<std::wstring,0>::~_Optional_destruct_base<std::wstring,0>((__int64)lpString1);
      std::_Optional_destruct_base<std::wstring,0>::~_Optional_destruct_base<std::wstring,0>((__int64)&v32);
      wil::reg::iterator_t<wil::reg::key_iterator_data<std::wstring>>::operator+=((wchar_t *)v42);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x79,
                           (int)"pcshell\\twinui\\rdpshellextensionhost\\lib\\rdpshellextensionhost.cpp",
                           v8);
  }
  return result;
}
