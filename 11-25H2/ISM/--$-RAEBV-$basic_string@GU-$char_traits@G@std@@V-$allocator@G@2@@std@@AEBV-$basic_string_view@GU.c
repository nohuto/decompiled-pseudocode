/*
 * XREFs of ??$?RAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@?$less@X@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x180064BC4
 * Callers:
 *     ??$_Eqrange@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@PEAU12@@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x180064A60 (--$_Eqrange@V-$basic_string_view@GU-$char_traits@G@std@@@std@@@-$_Tree@V-$_Tmap_traits@V-$basic_.c)
 *     ??$find@V?$basic_string_view@GU?$char_traits@G@std@@@std@@U?$less@X@2@$0A@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x1800950D8 (--$find@V-$basic_string_view@GU-$char_traits@G@std@@@std@@U-$less@X@2@$0A@@-$_Tree@V-$_Tmap_trai.c)
 * Callees:
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180064C28 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 */

__int64 __fastcall std::less<void>::operator()<std::wstring const &,std::basic_string_view<unsigned short> const &>(
        __int64 a1,
        _QWORD *a2,
        __m128i *a3)
{
  _QWORD *v3; // rcx
  unsigned __int64 v4; // r11
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned int v7; // eax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r11

  v3 = a2;
  if ( a2[3] > 7uLL )
    v3 = (_QWORD *)*a2;
  v4 = a2[2];
  v5 = a3->m128i_i64[0];
  v6 = _mm_srli_si128(*a3, 8).m128i_u64[0];
  if ( v6 >= v4 )
    v6 = v4;
  v7 = std::_WChar_traits<unsigned short>::compare(v3, v5, v6);
  if ( !v7 )
  {
    if ( v9 < v8 )
      v7 = -1;
    else
      v7 = v9 > v8;
  }
  return v7 >> 31;
}
