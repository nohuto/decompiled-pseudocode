/*
 * XREFs of ?_Buy_nonzero@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K@Z @ 0x1801D091C
 * Callers:
 *     ??0?$vector@GV?$allocator@G@std@@@std@@QEAA@_KAEBV?$allocator@G@1@@Z @ 0x1801D0674 (--0-$vector@GV-$allocator@G@std@@@std@@QEAA@_KAEBV-$allocator@G@1@@Z.c)
 *     ?IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ @ 0x1801D06D8 (-IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180048A38 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 */

char *__fastcall std::vector<unsigned short>::_Buy_nonzero(_QWORD *a1, unsigned __int64 a2)
{
  size_t size_of; // rax
  char *v5; // rax
  char *result; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  size_of = std::_Get_size_of_n<2>(a2);
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = &v5[2 * a2];
  a1[2] = result;
  return result;
}
