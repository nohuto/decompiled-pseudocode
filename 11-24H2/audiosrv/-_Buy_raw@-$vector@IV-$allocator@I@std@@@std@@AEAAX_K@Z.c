/*
 * XREFs of ?_Buy_raw@?$vector@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x180139484
 * Callers:
 *     ??0?$vector@IV?$allocator@I@std@@@std@@QEAA@AEBV01@@Z @ 0x18013037C (--0-$vector@IV-$allocator@I@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x1801396B4 (-_Clear_and_reserve_geometric@-$vector@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18012EDB0 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 */

char *__fastcall std::vector<unsigned int>::_Buy_raw(_QWORD *a1, unsigned __int64 a2)
{
  SIZE_T size_of; // rax
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
