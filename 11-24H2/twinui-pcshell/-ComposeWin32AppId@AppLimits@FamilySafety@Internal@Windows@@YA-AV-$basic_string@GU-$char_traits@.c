/*
 * XREFs of ?ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV56@1@Z @ 0x1805765C0
 * Callers:
 *     ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180576714 (-ComputeAppIdFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800561C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?find_last_path_segment@wil@@YAPEBGPEBG@Z @ 0x180105F18 (-find_last_path_segment@wil@@YAPEBGPEBG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801068A4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x1803DFB6C (--$str_printf@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@wil@@YA-AV-$basic_s.c)
 *     ?PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x180576C10 (-PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$unique_any_t@V-$unique_.c)
 *     ?TrimWhitespaceAndLimit@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV56@_K@Z @ 0x180576D24 (-TrimWhitespaceAndLimit@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_tr.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall Windows::Internal::FamilySafety::AppLimits::ComposeWin32AppId(
        _QWORD *a1,
        const WCHAR *a2,
        _QWORD *a3)
{
  const unsigned __int16 *last_path_segment; // rax
  __int64 v6; // rax
  void **v7; // rdx
  __int64 v8; // rax
  void *v10; // [rsp+20h] [rbp-39h] BYREF
  int v11; // [rsp+28h] [rbp-31h]
  void *v12[2]; // [rsp+30h] [rbp-29h] BYREF
  void *Src[4]; // [rsp+40h] [rbp-19h] BYREF
  void *v14[4]; // [rsp+60h] [rbp+7h] BYREF

  v12[1] = a1;
  *(_OWORD *)a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 7LL;
  *(_WORD *)a1 = 0;
  v11 = 1;
  last_path_segment = wil::find_last_path_segment(a2, a2);
  Windows::Internal::FamilySafety::AppLimits::PercentEncodeAndToLower(&v10, last_path_segment);
  Windows::Internal::FamilySafety::AppLimits::TrimWhitespaceAndLimit(Src);
  if ( a3[2] )
  {
    if ( a3[3] > 7uLL )
      a3 = (_QWORD *)*a3;
    v6 = wil::str_printf<std::wstring>((__int64)v14, (__int64)L"win32:%s_%s", v10, a3);
    goto LABEL_10;
  }
  if ( !Src[2] )
  {
    v6 = wil::str_printf<std::wstring>((__int64)v14, (__int64)L"win32:%s_", v10);
LABEL_10:
    std::wstring::operator=((__int64)a1, v6);
    std::wstring::_Tidy_deallocate(v14);
    goto LABEL_11;
  }
  v7 = Src;
  if ( Src[3] > (void *)7 )
    v7 = (void **)Src[0];
  Windows::Internal::FamilySafety::AppLimits::PercentEncodeAndToLower(v12, v7);
  v8 = wil::str_printf<std::wstring>((__int64)v14, (__int64)L"win32:%s_!dev=%s", v10, v12[0]);
  std::wstring::operator=((__int64)a1, v8);
  std::wstring::_Tidy_deallocate(v14);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(v12);
LABEL_11:
  std::wstring::_Tidy_deallocate(Src);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v10);
  return a1;
}
