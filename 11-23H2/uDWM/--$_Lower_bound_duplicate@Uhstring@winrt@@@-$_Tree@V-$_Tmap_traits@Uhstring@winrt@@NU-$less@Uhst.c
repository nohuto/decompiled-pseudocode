/*
 * XREFs of ??$_Lower_bound_duplicate@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x1800FBDA4
 * Callers:
 *     ??$_Emplace@AEBUhstring@winrt@@AEBN@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@AEBN@Z @ 0x1800FB750 (--$_Emplace@AEBUhstring@winrt@@AEBN@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@wi.c)
 *     ??$_Find@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x1800FB940 (--$_Find@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@std@.c)
 *     ??$_Find_hint@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x1800FB988 (--$_Find_hint@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@winrt@@.c)
 * Callees:
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x1800CCAF8 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800FCA90 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 */

bool __fastcall std::_Tree<std::_Tmap_traits<winrt::hstring,double,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,double>>,0>>::_Lower_bound_duplicate<winrt::hstring>(
        __int64 a1,
        __int64 a2)
{
  char v2; // bl
  __m128i v3; // xmm6
  __int64 v4; // r9
  char **v5; // rax
  int v6; // eax
  _BYTE v8[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v3 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(a2 + 32, v8);
    v5 = (char **)winrt::hstring::operator std::basic_string_view<unsigned short>(v4, v9);
    LOBYTE(v6) = std::_Traits_compare<std::char_traits<unsigned short>>(
                   *v5,
                   _mm_srli_si128(*(__m128i *)v5, 8).m128i_u64[0],
                   (char *)v3.m128i_i64[0],
                   _mm_srli_si128(v3, 8).m128i_u64[0]);
    return v6 >= 0;
  }
  return v2;
}
