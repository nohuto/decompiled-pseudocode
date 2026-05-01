/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXAEA_K@Z @ 0x18029D154
 * Callers:
 *     ?GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@3@@Z @ 0x1800A75D8 (-GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@U-$pair@KVString@Internal@W.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18001D4AC (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAVString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAPEAVString@Internal@Windows@@QEAV123@0PEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x18029D1C4 (--$_Uninitialized_move@PEAVString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@.c)
 */

__int64 __fastcall std::vector<Windows::Internal::String>::_Reallocate<0>(_QWORD *a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  size_t size_of; // rax
  void *v6; // rsi

  v4 = (__int64)(a1[1] - *a1) >> 3;
  size_of = std::_Get_size_of_n<8>(*a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_move<Windows::Internal::String *>(*a1, a1[1], v6);
  return std::vector<Windows::Internal::String>::_Change_array((__int64)a1, (__int64)v6, v4, *a2);
}
