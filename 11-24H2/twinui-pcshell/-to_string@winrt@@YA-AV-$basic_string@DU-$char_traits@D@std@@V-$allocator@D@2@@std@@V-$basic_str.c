/*
 * XREFs of ?to_string@winrt@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x180664E30
 * Callers:
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int___________ @ 0x180661960 (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hstring_std--uno.c)
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64___________ @ 0x180661CB8 (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hst_ea_180661CB8.c)
 *     ?HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x180669030 (-HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     WINRT_IMPL_WideCharToMultiByte @ 0x1802D2B10 (WINRT_IMPL_WideCharToMultiByte.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180319E14 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$0A@D@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXD_K@Z @ 0x180662020 (--$_Construct@$0A@D@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXD_K@Z.c)
 */

__int64 __fastcall winrt::to_string(__int64 a1, __int64 a2)
{
  const WCHAR *v2; // rbp
  int v3; // esi
  int v5; // eax
  __int64 v6; // rdx
  int cbMultiByte; // edi
  CHAR *lpMultiByteStr; // rax
  __int128 v9; // xmm0
  __m128i v10; // xmm1
  LPSTR v12[2]; // [rsp+50h] [rbp-48h] BYREF
  __m128i si128; // [rsp+60h] [rbp-38h]

  v2 = *(const WCHAR **)a2;
  v3 = *(_DWORD *)(a2 + 8);
  v5 = WINRT_IMPL_WideCharToMultiByte(0xFDE9u, 0, *(LPCWCH *)a2, v3, 0LL, 0, 0LL, 0LL);
  cbMultiByte = v5;
  if ( v5 )
  {
    si128 = 0LL;
    *(_OWORD *)v12 = 0LL;
    std::string::_Construct<0,char>(v12, v6, v5);
    lpMultiByteStr = (CHAR *)v12;
    if ( si128.m128i_i64[1] > 0xFuLL )
      lpMultiByteStr = v12[0];
    WINRT_IMPL_WideCharToMultiByte(0xFDE9u, 0, v2, v3, lpMultiByteStr, cbMultiByte, 0LL, 0LL);
    v9 = *(_OWORD *)v12;
    LOBYTE(v12[0]) = 0;
    v10 = si128;
    *(_OWORD *)a1 = v9;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    *(__m128i *)(a1 + 16) = v10;
    std::string::_Tidy_deallocate((__int64)v12);
  }
  else
  {
    *(_OWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 15LL;
    *(_BYTE *)a1 = 0;
  }
  return a1;
}
