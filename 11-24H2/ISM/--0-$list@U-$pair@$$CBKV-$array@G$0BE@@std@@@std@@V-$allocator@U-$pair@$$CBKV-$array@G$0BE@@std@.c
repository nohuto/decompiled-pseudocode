/*
 * XREFs of ??0?$list@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@@std@@QEAA@AEBV?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@1@@Z @ 0x18009A678
 * Callers:
 *     ??0?$_Hash@V?$_Umap_traits@KV?$array@G$0BE@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@1@@Z @ 0x18004A6C4 (--0-$_Hash@V-$_Umap_traits@KV-$array@G$0BE@@std@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned long const,std::array<unsigned short,20>>>::list<std::pair<unsigned long const,std::array<unsigned short,20>>>(
        _QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  *v2 = v2;
  v2[1] = v2;
  *a1 = v2;
  return a1;
}
