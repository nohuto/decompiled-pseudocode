/*
 * XREFs of ?GetAppServiceName@@YAJPEBGPEAPEAG@Z @ 0x18004F5C0
 * Callers:
 *     ?ProcessSpatialAudioFormatElement@@YAJV?$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@wil@@PEBGPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x18006E13C (-ProcessSpatialAudioFormatElement@@YAJV-$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@w.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800271C8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180028CC0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18004FB30 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C133C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall GetAppServiceName(char *a1, unsigned __int16 **a2)
{
  char *v3; // rax
  __int64 v4; // r8
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  _WORD *v7; // rbx
  unsigned __int64 i; // rax
  unsigned __int64 v9; // rsi
  unsigned __int16 *v10; // rax
  unsigned __int16 *v11; // rdi
  int v12; // eax
  unsigned int v13; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID pv; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int16 *v17; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( !a1 )
  {
    v5 = -2147024809;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB5,
      (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)v5);
    return v5;
  }
  v3 = a1;
  v4 = 65LL;
  do
  {
    if ( !*(_WORD *)v3 )
      break;
    v3 += 2;
    --v4;
  }
  while ( v4 );
  v5 = v4 == 0 ? 0x80070057 : 0;
  v6 = (65 - v4) & -(__int64)(v4 != 0);
  if ( !v4 )
    goto LABEL_21;
  if ( v6 > 0x1E )
    v6 = 30LL;
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &pv,
    a1,
    v6,
    (const char *)(65 - v4));
  v7 = pv;
  if ( !pv )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE,
      (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)0x8007000ELL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
    return 2147942414LL;
  }
  for ( i = 0LL; i < v6; ++i )
  {
    if ( v7[i] == 95 )
      v7[i] = 46;
  }
  v9 = v6 + 7;
  v10 = (unsigned __int16 *)CoTaskMemAlloc(2 * (v6 + 7) + 2);
  v11 = v10;
  if ( !v10 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD0,
      (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)0x8007000ELL);
    CoTaskMemFree(v7);
    return 2147942414LL;
  }
  *v10 = 0;
  v10[v9] = 0;
  v17 = v10;
  v12 = StringCchPrintfW(v10, v9 + 1, L"com.%s", v7);
  v13 = v12;
  if ( v12 >= 0 )
  {
    *a2 = v11;
    CoTaskMemFree(v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD2,
      (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)(unsigned int)v12);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v17);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
    return v13;
  }
}
