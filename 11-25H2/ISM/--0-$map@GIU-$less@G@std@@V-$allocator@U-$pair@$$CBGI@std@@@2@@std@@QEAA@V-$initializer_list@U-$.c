/*
 * XREFs of ??0?$map@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBGI@std@@@1@@Z @ 0x180070C6C
 * Callers:
 *     _dynamic_initializer_for__c_handedModifierMapping__ @ 0x180009700 (_dynamic_initializer_for__c_handedModifierMapping__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Emplace_hint@AEBU?$pair@$$CBGI@std@@@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBGI@1@@Z @ 0x180070D10 (--$_Emplace_hint@AEBU-$pair@$$CBGI@std@@@-$_Tree@V-$_Tmap_traits@GIU-$less@G@std@@V-$allocator@U.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::map<unsigned short,unsigned int>::map<unsigned short,unsigned int>(__int64 a1, __m128i *a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  __m128i v5; // xmm0
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi

  qword_180246E08 = 0LL;
  qword_180246E10 = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  qword_180246E08 = (__int64)v4;
  v5 = *a2;
  v6 = a2->m128i_i64[0];
  v7 = _mm_srli_si128(v5, 8).m128i_u64[0];
  while ( v6 != v7 )
  {
    std::_Tree<std::_Tmap_traits<unsigned short,unsigned int,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned int>>,0>>::_Emplace_hint<std::pair<unsigned short const,unsigned int> const &>(
      v3,
      v4,
      v6);
    v6 += 8LL;
  }
  return &qword_180246E08;
}
