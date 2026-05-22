/*
 * XREFs of ?_Buy_raw@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K@Z @ 0x18017D20C
 * Callers:
 *     ??$_Construct_n@PEBU?$pair@G_N@std@@PEBU12@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K$$QEAPEBU?$pair@G_N@1@1@Z @ 0x180096E70 (--$_Construct_n@PEBU-$pair@G_N@std@@PEBU12@@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@s.c)
 *     ??$_Assign_counted_range@PEAU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEAU?$pair@G_N@1@_K@Z @ 0x18017DA9C (--$_Assign_counted_range@PEAU-$pair@G_N@std@@@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N.c)
 *     ??$_Assign_counted_range@PEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXPEAW4_Button@@_K@Z @ 0x1801A501C (--$_Assign_counted_range@PEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801A5850 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@V?$initializer_list@W4_Button@@@1@AEBV?$allocator@W4_Button@@@1@@Z @ 0x1801A58F8 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@V-$initializer_list@W4_Button@@@.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x1800154A8 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<std::pair<unsigned short,bool>>::_Buy_raw(_QWORD *a1, unsigned __int64 a2)
{
  size_t size_of; // rax
  char *v5; // rax
  char *result; // rax

  size_of = std::_Get_size_of_n<4>(a2);
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = &v5[4 * a2];
  a1[2] = result;
  return result;
}
