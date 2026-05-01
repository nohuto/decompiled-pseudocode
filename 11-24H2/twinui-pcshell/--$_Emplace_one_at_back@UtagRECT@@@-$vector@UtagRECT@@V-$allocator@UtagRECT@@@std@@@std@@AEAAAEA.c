/*
 * XREFs of ??$_Emplace_one_at_back@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAAEAUtagRECT@@$$QEAU2@@Z @ 0x18022223C
 * Callers:
 *     std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Windows::Foundation::Rect______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______lambda_4c658d99aeacf5e09ef3fae70976934f___ @ 0x18059C240 (std--transform_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Windows--Foundation--Re.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<tagRECT>::_Emplace_one_at_back<tagRECT>(__int64 a1, _OWORD *a2)
{
  _BYTE *v3; // rdx
  char *result; // rax

  v3 = *(_BYTE **)(a1 + 8);
  if ( v3 == *(_BYTE **)(a1 + 16) )
    return std::vector<tagRECT>::_Emplace_reallocate<tagRECT>((const void **)a1, v3, a2);
  *(_OWORD *)v3 = *a2;
  result = *(char **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 16;
  return result;
}
