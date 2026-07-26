/*
 * XREFs of ndisEtwCaptureMiniportDriverData @ 0x1400A0C6C
 * Callers:
 *     ndisEtwWriteMiniportRundown @ 0x1400A13F8 (ndisEtwWriteMiniportRundown.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x14006CDB0 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14006D500 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ??4?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x14008DE80 (--4-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV0.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAXXZ @ 0x140098710 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$inte.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     KRegKey::QueryValueBlob__lambda_4e383e8896c9b02b63d9444740c78be8____0 @ 0x140142A1C (KRegKey--QueryValueBlob__lambda_4e383e8896c9b02b63d9444740c78be8____0.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x140173E10 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 */

__int64 __fastcall ndisEtwCaptureMiniportDriverData(
        PDEVICE_OBJECT DeviceObject,
        void **a2,
        void **a3,
        void **a4,
        _OWORD *a5)
{
  void **v9; // rax
  int v11; // ebx
  int v12; // edi
  __int64 v13; // rdx
  int v14; // ebx
  unsigned int v15; // edi
  void *v16; // [rsp+20h] [rbp-40h] BYREF
  void *v17; // [rsp+28h] [rbp-38h] BYREF
  void *v18; // [rsp+30h] [rbp-30h] BYREF
  void *v19; // [rsp+38h] [rbp-28h] BYREF
  __int128 v20; // [rsp+40h] [rbp-20h] BYREF

  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(a2, 0LL);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(a3, 0LL);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(a4, 0LL);
  v16 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  *a5 = 0LL;
  v20 = 0LL;
  v9 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::put(&v16);
  if ( IoOpenDeviceRegistryKey(DeviceObject, 2u, 0x80000000, v9) )
  {
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v17, 0LL);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v18, 0LL);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v19, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v16);
    return 240LL;
  }
  else
  {
    v11 = (unsigned int)KRegKey::QueryValueString(&v16, L"DriverDate", &v19) != 0 ? 0x10 : 0;
    v12 = v11 | 0x20;
    if ( !(unsigned int)KRegKey::QueryValueString(&v16, L"DriverVersion", &v18) )
      v12 = v11;
    v14 = v12 | 0x40;
    if ( !(unsigned int)KRegKey::QueryValueString(&v16, L"InfPath", &v17) )
      v14 = v12;
    v15 = v14 | 0x80;
    if ( !(unsigned int)KRegKey::QueryValueBlob__lambda_4e383e8896c9b02b63d9444740c78be8____0(&v16, v13, &v20) )
      v15 = v14;
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::operator=(a2, &v19);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::operator=(a3, &v18);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::operator=(a4, &v17);
    *a5 = v20;
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v17, 0LL);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v18, 0LL);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v19, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v16);
    return v15;
  }
}
