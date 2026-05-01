/*
 * XREFs of ?ComposeWin32AppIdForJavaApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x180577468
 * Callers:
 *     ?GetAppIdForSpecialCategoryApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGI@Z @ 0x1805767B0 (-GetAppIdForSpecialCategoryApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800561C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?find_last_path_segment@wil@@YAPEBGPEBG@Z @ 0x180105F18 (-find_last_path_segment@wil@@YAPEBGPEBG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801068A4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x1803DFB6C (--$str_printf@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@wil@@YA-AV-$basic_s.c)
 *     ?GetCertSignerHashFromExe@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180571B0C (-GetCertSignerHashFromExe@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEB.c)
 *     ?PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x180576C10 (-PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$unique_any_t@V-$unique_.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall ComposeWin32AppIdForJavaApp(_OWORD *a1, const WCHAR *a2, _QWORD *a3)
{
  const unsigned __int16 *last_path_segment; // rax
  __int64 v7; // r8
  void **v8; // r9
  __int64 v9; // rax
  void *v11[2]; // [rsp+30h] [rbp-49h] BYREF
  __int128 v12; // [rsp+40h] [rbp-39h] BYREF
  __m128i si128; // [rsp+50h] [rbp-29h]
  void *v14[4]; // [rsp+60h] [rbp-19h] BYREF
  void *v15[4]; // [rsp+80h] [rbp+7h] BYREF

  v11[0] = a1;
  v12 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v12) = 0;
  if ( a3[1] )
  {
    last_path_segment = wil::find_last_path_segment(a2, a2);
    Windows::Internal::FamilySafety::AppLimits::PercentEncodeAndToLower(v11, (__int64)last_path_segment);
    GetCertSignerHashFromExe((__int64)v14, (__int64)a2, v7);
    if ( v14[2] )
    {
      v8 = v14;
      if ( v14[3] > (void *)7 )
        v8 = (void **)v14[0];
      v9 = wil::str_printf<std::wstring>((__int64)v15, (__int64)L"win32:%s_%s!java=%s", v11[0], v8, *a3);
    }
    else
    {
      v9 = wil::str_printf<std::wstring>((__int64)v15, (__int64)L"win32:%s_!java=%s", v11[0], *a3);
    }
    std::wstring::operator=((__int64)&v12, v9);
    std::wstring::_Tidy_deallocate(v15);
    *a1 = v12;
    a1[1] = si128;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v12) = 0;
    std::wstring::_Tidy_deallocate(v14);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(v11);
  }
  else
  {
    *a1 = 0LL;
    *((_QWORD *)a1 + 2) = 0LL;
    *((_QWORD *)a1 + 3) = 7LL;
    *(_WORD *)a1 = 0;
  }
  std::wstring::_Tidy_deallocate((void **)&v12);
  return a1;
}
