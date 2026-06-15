/*
 * XREFs of _lambda_cd6f2b70438ec48af9647ef981891005_::operator() @ 0x180129EE0
 * Callers:
 *     ?IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ @ 0x18012D56C (-IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ.c)
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180009E10 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800271C8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180055680 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?StringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1800719A8 (-StringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall lambda_cd6f2b70438ec48af9647ef981891005_::operator()(_BYTE **a1)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, void **); // rdi
  HRESULT v6; // eax
  LPVOID v7; // rbx
  __int64 (__fastcall *v8)(LPVOID, void *, _QWORD); // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // r10d
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  void *v14; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 **); // [rsp+50h] [rbp-B0h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp-A8h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 **); // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v18; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v19; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v21; // [rsp+80h] [rbp-80h] BYREF
  DWORD pcbData; // [rsp+88h] [rbp-78h] BYREF
  PROPVARIANT pvar[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-60h]
  WCHAR SubKey[264]; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR String1[264]; // [rsp+2C0h] [rbp+1C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4F8h] [rbp+3F8h]

  v21 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, _QWORD, __int64 **))(**(_QWORD **)*a1 + 24LL))(
         *(_QWORD *)*a1,
         &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
         23LL,
         0LL,
         &v21);
  if ( v2 >= 0 )
  {
    v13 = 0LL;
    v3 = *v21;
    v13 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v3 + 32))(v21, 0LL, &v13);
    if ( v2 < 0 )
    {
LABEL_3:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
      goto LABEL_27;
    }
    v14 = 0LL;
    v4 = v13;
    v5 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v13 + 80LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v14,
      0LL);
    v2 = v5(v4, &v14);
    if ( v2 < 0 )
    {
LABEL_5:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v14);
      goto LABEL_3;
    }
    ppv = 0LL;
    v6 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv);
    v2 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2406,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v6);
LABEL_8:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
      goto LABEL_5;
    }
    v15 = 0LL;
    v7 = ppv;
    v8 = *(__int64 (__fastcall **)(LPVOID, void *, _QWORD))(*(_QWORD *)ppv + 40LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v15);
    v2 = v8(v7, v14, &v15);
    if ( v2 < 0 )
    {
LABEL_10:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
      goto LABEL_8;
    }
    v18 = 0LL;
    v2 = (**v15)(v15, &GUID_3ade56af_4375_4413_9c91_4c652595ab07, &v18);
    if ( v2 < 0 )
    {
LABEL_12:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
      goto LABEL_10;
    }
    v17 = 0LL;
    v9 = *v18;
    v17 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 **)))(v9 + 24))(
           v18,
           &v17);
    if ( v2 < 0 )
    {
LABEL_14:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
      goto LABEL_12;
    }
    v19 = 0LL;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v19);
    v2 = (**v17)(v17, &GUID_d666063f_1587_4e43_81f1_b948e807363f, &v19);
    if ( v2 < 0 )
    {
LABEL_16:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
      goto LABEL_14;
    }
    v20 = 0LL;
    v10 = *v19;
    v20 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v10 + 32))(v19, 0LL, &v20);
    if ( v2 < 0 )
    {
LABEL_18:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
      goto LABEL_16;
    }
    *(_OWORD *)pvar = 0LL;
    v24 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64, const DEVPROPKEY *, PROPVARIANT *))(*(_QWORD *)v20 + 40LL))(
           v20,
           &DEVPKEY_Device_Driver,
           pvar);
    if ( v2 < 0 )
    {
LABEL_20:
      PropVariantClear(pvar);
      goto LABEL_18;
    }
    if ( LOWORD(pvar[0]) == 31 )
    {
      pcbData = 520;
      v2 = StringCbCopyW((char *)SubKey, 0x208uLL, (char *)L"SYSTEM\\CurrentControlSet\\Control\\Class\\");
      if ( v2 < 0 )
        goto LABEL_20;
      v2 = StringCbCatW(SubKey, v11, (char *)pvar[1]);
      if ( v2 < 0 )
        goto LABEL_20;
      if ( !RegGetValueW(HKEY_LOCAL_MACHINE, SubKey, L"Driver", 2u, 0LL, String1, &pcbData) )
        *a1[1] = CompareStringOrdinal(String1, -1, L"smwdm.sys", 9, 1) == 2;
    }
    PropVariantClear(pvar);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v14);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
    v2 = 0;
  }
LABEL_27:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
  return (unsigned int)v2;
}
