/*
 * XREFs of ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x140143B48
 * Callers:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z @ 0x1401677D0 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140052980 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x140069B30 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x140135F90 (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 *     KRegKey::QueryValueBlob__lambda_ccaa62be061b52f00216e46c9dac6cb5___ @ 0x14014335C (KRegKey--QueryValueBlob__lambda_ccaa62be061b52f00216e46c9dac6cb5___.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015BF20 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 */

char __fastcall ndisBindReadProtocolDriverFromV2Registry(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  char v2; // r14
  Rtl::KString *value; // rdx
  unsigned __int8 v5[8]; // [rsp+78h] [rbp-90h] BYREF
  KRegKey v6; // [rsp+80h] [rbp-88h] BYREF
  KRegKey v7; // [rsp+88h] [rbp-80h] BYREF
  _GUID v8; // [rsp+90h] [rbp-78h] BYREF
  wchar_t pszSrc[304]; // [rsp+A8h] [rbp-60h] BYREF

  a1->ProtocolBindFlags = 0;
  v6.m_ptr = 0LL;
  v2 = 1;
  if ( (int)KRegKey::Open(
              &v6,
              1u,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup",
              0LL) < 0
    || (value = a1->Name.__ptr_.__value_,
        v8 = 0LL,
        KRegKey::QueryValueBlob__lambda_ccaa62be061b52f00216e46c9dac6cb5___(&v6.m_ptr, &value->_UNICODE_STRING, &v8) < 0)
    || (int)RtlStringCchPrintfW(
              pszSrc,
              300LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\{%08x-%04x-%04x-%02x%02"
               "x-%02x%02x%02x%02x%02x%02x}\\Kernel",
              v8.Data1,
              v8.Data2,
              v8.Data3,
              v8.Data4[0],
              v8.Data4[1],
              v8.Data4[2],
              v8.Data4[3],
              v8.Data4[4],
              v8.Data4[5],
              v8.Data4[6],
              v8.Data4[7]) < 0 )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v6.m_ptr);
    return 0;
  }
  else
  {
    v7.m_ptr = 0LL;
    if ( (int)KRegKey::Open(&v7, 1u, pszSrc, 0LL) < 0
      || (v5[0] = 0, KRegKey::QueryValueBoolean(&v7, L"NoStartAtBoot", v5, 1u) < 0) )
    {
      v2 = 0;
    }
    else
    {
      if ( !v5[0] )
        a1->ProtocolBindFlags |= 1u;
      a1->Guid = v8;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v7.m_ptr);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v6.m_ptr);
    return v2;
  }
}
