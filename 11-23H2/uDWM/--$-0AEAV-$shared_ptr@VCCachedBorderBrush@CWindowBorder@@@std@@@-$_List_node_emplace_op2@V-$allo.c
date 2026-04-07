/*
 * XREFs of ??$?0AEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@1@AEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@1@@Z @ 0x180032268
 * Callers:
 *     ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x180033374 (-GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4Sha.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180032448 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(32LL);
  a1[1] = v5;
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = 0LL;
  if ( a3[1] )
  {
    *(_QWORD *)(v5 + 16) = *a3;
    v6 = a3[1];
    *(_QWORD *)(v5 + 24) = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
  }
  return a1;
}
