/*
 * XREFs of ??$_Find_lower_bound@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@AEBUhstring@winrt@@@Z @ 0x1800FBC90
 * Callers:
 *     ??$_Emplace@AEBUhstring@winrt@@AEBN@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@AEBN@Z @ 0x1800FB750 (--$_Emplace@AEBUhstring@winrt@@AEBN@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@wi.c)
 *     ??$_Find@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x1800FB940 (--$_Find@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@std@.c)
 *     ??$_Find_hint@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x1800FB988 (--$_Find_hint@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@winrt@@.c)
 * Callees:
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x1800CCAF8 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800FCA90 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<winrt::hstring,double,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,double>>,0>>::_Find_lower_bound<winrt::hstring>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 *v6; // rbx
  __m128i v7; // xmm6
  char **v8; // rax
  int v9; // eax
  int v10; // eax
  _BYTE v12[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v6 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v6;
  while ( !*((_BYTE *)v6 + 25) )
  {
    *(_QWORD *)a2 = v6;
    v7 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(a3, v12);
    v8 = (char **)winrt::hstring::operator std::basic_string_view<unsigned short>(v6 + 4, v13);
    LOBYTE(v9) = std::_Traits_compare<std::char_traits<unsigned short>>(
                   *v8,
                   _mm_srli_si128(*(__m128i *)v8, 8).m128i_u64[0],
                   (char *)v7.m128i_i64[0],
                   _mm_srli_si128(v7, 8).m128i_u64[0]);
    if ( v9 >= 0 )
    {
      *(_QWORD *)(a2 + 16) = v6;
      v10 = 1;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
      v10 = 0;
    }
    *(_DWORD *)(a2 + 8) = v10;
  }
  return a2;
}
