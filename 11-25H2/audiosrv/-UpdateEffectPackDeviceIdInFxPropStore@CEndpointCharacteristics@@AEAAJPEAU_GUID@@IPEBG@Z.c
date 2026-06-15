/*
 * XREFs of ?UpdateEffectPackDeviceIdInFxPropStore@CEndpointCharacteristics@@AEAAJPEAU_GUID@@IPEBG@Z @ 0x1801300B8
 * Callers:
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180040B98 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@VEffectPack@@@std@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x180004D04 (--$Write@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800271C8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180028CC0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180055680 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetApoDeviceIdPKey@@YAJPEBGPEAU_tagpropertykey@@@Z @ 0x18015DDBC (-GetApoDeviceIdPKey@@YAJPEBGPEAU_tagpropertykey@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::UpdateEffectPackDeviceIdInFxPropStore(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        unsigned int a3,
        char *a4)
{
  unsigned int i; // ebx
  const char *v9; // r9
  void *v10; // rax
  int ApoDeviceIdPKey; // eax
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD *v15; // rcx
  LPOLESTR lpsz; // [rsp+40h] [rbp-29h] BYREF
  void *v18; // [rsp+48h] [rbp-21h] BYREF
  const WCHAR *v19; // [rsp+50h] [rbp-19h] BYREF
  const WCHAR *v20; // [rsp+58h] [rbp-11h] BYREF
  const WCHAR *v21; // [rsp+60h] [rbp-9h] BYREF
  PROPVARIANT pvar[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v23; // [rsp+78h] [rbp+Fh]
  struct _tagpropertykey v24; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  for ( i = 0; i < a3; ++i )
  {
    lpsz = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&lpsz,
      0LL);
    StringFromCLSID(&a2[i], &lpsz);
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v18,
      a4,
      0xFFFFFFFFFFFFFFFFuLL,
      v9);
    v10 = v18;
    if ( !v18 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7BA,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x8007000ELL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v18);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&lpsz);
      return 2147942414LL;
    }
    pvar[0] = (PROPVARIANT)31;
    v23 = 0LL;
    v18 = 0LL;
    pvar[1] = v10;
    memset(&v24, 0, sizeof(v24));
    ApoDeviceIdPKey = GetApoDeviceIdPKey(lpsz, &v24);
    if ( ApoDeviceIdPKey < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1985LL,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)ApoDeviceIdPKey);
    v12 = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)this + 11) + 48LL))(
            *((_QWORD *)this + 11),
            &v24,
            pvar);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1987LL,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v12);
    v15 = (_DWORD *)*((_QWORD *)this + 1036);
    if ( *v15 > 5u )
    {
      v19 = (const WCHAR *)*((_QWORD *)this + 6);
      v20 = (const WCHAR *)a4;
      v21 = lpsz;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        (int)v15,
        (int)&unk_1801A4DC8,
        v13,
        v14,
        &v21,
        &v20,
        &v19);
    }
    PropVariantClear(pvar);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v18);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&lpsz);
  }
  return 0LL;
}
