/*
 * XREFs of ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801A5850
 * Callers:
 *     std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___ @ 0x1801A5708 (std--find_if_std--_Tree_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair_unsigned_int_c.c)
 *     ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x1801A60FC (-FindExactComboButtonMatch@ButtonRecognizer@@AEBA-AV-$reverse_iterator@V-$_Tree_const_iterator@V.c)
 *     ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1801A6494 (-IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV-$vector@W4_Button@@V-$allocator@W4_Button@@.c)
 * Callees:
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18009C2AC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     ?_Buy_raw@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K@Z @ 0x18017D20C (-_Buy_raw@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@AEAAX_K@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@std@@QEAA@XZ @ 0x1801A5A94 (--1-$_Tidy_guard@V-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@@std@@QEAA@XZ.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

void **__fastcall std::vector<enum _Button>::vector<enum _Button>(void **a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  signed __int64 v5; // rbx
  char *v6; // rdi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2;
  if ( v4 )
  {
    if ( v4 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
    std::vector<std::pair<unsigned short,bool>>::_Buy_raw(a1, v4);
    v5 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    v6 = (char *)*a1;
    memmove_0(*a1, *(const void **)a2, v5);
    v8 = 0LL;
    a1[1] = &v6[4 * (v5 >> 2)];
    std::_Tidy_guard<std::vector<enum _Button>>::~_Tidy_guard<std::vector<enum _Button>>(&v8);
  }
  return a1;
}
