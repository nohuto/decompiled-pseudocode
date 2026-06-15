/*
 * XREFs of ??$_Assign_counted_range@PEAI@?$vector@IV?$allocator@I@std@@@std@@AEAAXPEAI_K@Z @ 0x18012E444
 * Callers:
 *     ??4?$vector@_NV?$allocator@_N@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180130A28 (--4-$vector@_NV-$allocator@_N@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x1801396B4 (-_Clear_and_reserve_geometric@-$vector@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 */

char *__fastcall std::vector<unsigned int>::_Assign_counted_range<unsigned int *>(
        char **a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // rdi
  char *v5; // r15
  size_t v7; // rbx
  unsigned __int64 v8; // rbp
  char *result; // rax

  v3 = *a1;
  v5 = a2;
  if ( a3 <= (a1[2] - *a1) >> 2 )
  {
    v8 = (a1[1] - v3) >> 2;
    if ( a3 <= v8 )
    {
      v7 = 4 * a3;
    }
    else
    {
      memmove_0(v3, a2, 4 * v8);
      v3 = a1[1];
      a2 = &v5[4 * v8];
      v7 = 4 * (a3 - v8);
    }
  }
  else
  {
    std::vector<unsigned int>::_Clear_and_reserve_geometric(a1, a3);
    v3 = *a1;
    v7 = 4 * a3;
    a2 = v5;
  }
  memmove_0(v3, a2, v7);
  result = &v3[v7];
  a1[1] = &v3[v7];
  return result;
}
