/*
 * XREFs of ??$?RAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@?$less@X@std@@QEBA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180064F5C
 * Callers:
 *     ??$_Eqrange@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@PEAU12@@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x180064E90 (--$_Eqrange@V-$basic_string_view@GU-$char_traits@G@std@@@std@@@-$_Tree@V-$_Tmap_traits@V-$basic_.c)
 *     ??$find@V?$basic_string_view@GU?$char_traits@G@std@@@std@@U?$less@X@2@$0A@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x1800952D8 (--$find@V-$basic_string_view@GU-$char_traits@G@std@@@std@@U-$less@X@2@$0A@@-$_Tree@V-$_Tmap_trai.c)
 * Callees:
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x180064FA0 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 */

__int64 __fastcall std::less<void>::operator()<std::basic_string_view<unsigned short> const &,std::wstring const &>(
        __int64 a1,
        __m128i *a2,
        _QWORD *a3)
{
  _QWORD *v3; // rax

  v3 = a3;
  if ( a3[3] > 7uLL )
    v3 = (_QWORD *)*a3;
  return (unsigned int)std::_Traits_compare<std::char_traits<unsigned short>>(
                         a2->m128i_i64[0],
                         _mm_srli_si128(*a2, 8).m128i_u64[0],
                         v3,
                         a3[2]) >> 31;
}
