/*
 * XREFs of ?ProcessSpatialAudioFormatElement@@YAJV?$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@wil@@PEBGPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x18006E13C
 * Callers:
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEBU_tlgProvider_t@@@Z @ 0x180149860 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEB.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800271C8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180028CC0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?GetAppServiceName@@YAJPEBGPEAPEAG@Z @ 0x18004F5C0 (-GetAppServiceName@@YAJPEBGPEAPEAG@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005563C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180055680 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800A5E94 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ProcessSpatialAudioFormatElement(
        __int64 *a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  __int64 v7; // rsi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HSTRING, __int64 *); // rdi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // r15d
  const WCHAR **v16; // r14
  const WCHAR *v17; // rdi
  UINT32 StringLen; // ebx
  const WCHAR *StringRawBuffer; // rax
  unsigned __int16 *v20; // rdi
  const char *v21; // r9
  __int64 v22; // rbx
  unsigned __int16 *v23; // rdx
  __int64 v25; // [rsp+30h] [rbp-51h] BYREF
  unsigned __int16 *v26; // [rsp+38h] [rbp-49h] BYREF
  HSTRING v27; // [rsp+40h] [rbp-41h] BYREF
  __int64 v28; // [rsp+48h] [rbp-39h] BYREF
  __int64 v29; // [rsp+50h] [rbp-31h] BYREF
  unsigned __int16 *v30; // [rsp+58h] [rbp-29h] BYREF
  _BYTE *v31; // [rsp+60h] [rbp-21h]
  __int64 *v32; // [rsp+68h] [rbp-19h]
  HSTRING string; // [rsp+70h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v30 = a2;
  v32 = a1;
  v31 = a5;
  v7 = 0LL;
  *a5 = 0;
  v29 = 0LL;
  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))*a1)(
         *a1,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v29);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE3,
      (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)(unsigned int)v8);
LABEL_13:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v29);
    goto LABEL_30;
  }
  v25 = 0LL;
  v10 = v29;
  v11 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v29 + 48LL);
  v25 = 0LL;
  if ( WindowsCreateStringReference(L"@Name", 5u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v12 = v11(v10, string, &v25);
  v9 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)(unsigned int)v12);
LABEL_12:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
    goto LABEL_13;
  }
  v28 = 0LL;
  v13 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v25)(
          v25,
          &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
          &v28);
  v9 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE9,
      (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)(unsigned int)v13);
LABEL_11:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
    goto LABEL_12;
  }
  v27 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v28 + 152LL))(v28, &v27);
  v9 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC,
      (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)(unsigned int)v14);
    Windows::Internal::String::~String((Windows::Internal::String *)&v27);
    goto LABEL_11;
  }
  v15 = 0;
  v16 = (const WCHAR **)(a3 + 8);
  while ( v7 < 7 )
  {
    v17 = *v16;
    StringLen = WindowsGetStringLen(v27);
    StringRawBuffer = WindowsGetStringRawBuffer(v27, 0LL);
    if ( CompareStringOrdinal(StringRawBuffer, StringLen, v17, -1, 1) == 2 )
    {
      v26 = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)&v26,
        0LL);
      v20 = v30;
      if ( (int)GetAppServiceName((char *)v30, &v26) >= 0 )
      {
        v22 = 32LL * v15;
        *(_BYTE *)(v22 + a3) = 1;
        wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
          &v30,
          (char *)v20,
          0xFFFFFFFFFFFFFFFFuLL,
          v21);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
          (_QWORD *)(v22 + a3 + 16),
          &v30);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v30);
        v23 = v26;
        v26 = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          (void **)(v22 + a3 + 24),
          v23);
      }
      *v31 = 1;
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v26);
      break;
    }
    ++v15;
    ++v7;
    v16 += 4;
  }
  if ( v27 )
    WindowsDeleteString(v27);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  v9 = 0;
LABEL_30:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(a1);
  return v9;
}
