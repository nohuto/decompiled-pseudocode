/*
 * XREFs of ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CB_K_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@AEAAXXZ @ 0x1800C40E4
 * Callers:
 *     ?GetAllAppTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@XZ @ 0x1800C30BC (-GetAllAppTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$unord.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned __int64 const,unsigned __int64>>::_Alloc_sentinel_and_proxy(_QWORD *a1)
{
  _QWORD *result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *result = result;
  result[1] = result;
  *a1 = result;
  return result;
}
