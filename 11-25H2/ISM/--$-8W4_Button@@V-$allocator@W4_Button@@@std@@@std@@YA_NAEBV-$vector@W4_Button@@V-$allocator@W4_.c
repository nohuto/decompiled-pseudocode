/*
 * XREFs of ??$?8W4_Button@@V?$allocator@W4_Button@@@std@@@std@@YA_NAEBV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@0@0@Z @ 0x18019D9E8
 * Callers:
 *     std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___ @ 0x18019E118 (std--find_if_std--_Tree_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair_unsigned_int_c.c)
 *     ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x18019EAEC (-FindExactComboButtonMatch@ButtonRecognizer@@AEBA-AV-$reverse_iterator@V-$_Tree_const_iterator@V.c)
 *     ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x18019EE84 (-IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV-$vector@W4_Button@@V-$allocator@W4_Button@@.c)
 * Callees:
 *     <none>
 */

char __fastcall std::operator==<enum _Button,std::allocator<enum _Button>>(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // r8
  __int64 v3; // r9

  v2 = *(_DWORD **)a1;
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 != a2[1] - *a2 )
    return 0;
  v3 = *a2 - (_QWORD)v2;
  while ( v2 != *(_DWORD **)(a1 + 8) )
  {
    if ( *v2 != *(_DWORD *)((char *)v2 + v3) )
      return 0;
    ++v2;
  }
  return 1;
}
