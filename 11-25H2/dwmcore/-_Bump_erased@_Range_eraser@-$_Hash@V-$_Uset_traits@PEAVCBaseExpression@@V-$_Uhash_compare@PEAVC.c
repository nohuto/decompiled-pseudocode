/*
 * XREFs of ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18025AE04
 * Callers:
 *     ?_Unchecked_erase@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@AEAAPEAU?$_List_node@PEAVCBaseExpression@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1801CBAF8 (-_Unchecked_erase@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpres.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBII@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18027D080 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@s.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Range_eraser::_Bump_erased(
        _QWORD *a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  v2 = (_QWORD *)a1[2];
  a1[2] = *v2;
  std::_Deallocate<16,0>(v2, 0x18uLL);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
