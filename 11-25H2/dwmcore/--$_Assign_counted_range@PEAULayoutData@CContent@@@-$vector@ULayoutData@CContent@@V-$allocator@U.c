/*
 * XREFs of ??$_Assign_counted_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXPEAULayoutData@CContent@@_K@Z @ 0x18029F108
 * Callers:
 *     ??4?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18029F4AC (--4-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAX_K@Z @ 0x18029FD9C (-_Clear_and_reserve_geometric@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

char *__fastcall std::vector<CContent::LayoutData>::_Assign_counted_range<CContent::LayoutData *>(
        char **a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // rdi
  char *v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rbx
  char *result; // rax

  v3 = *a1;
  v6 = a2;
  if ( a3 <= 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 3) )
  {
    v8 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - v3) >> 3);
    if ( a3 <= v8 )
    {
      v7 = 5 * a3;
    }
    else
    {
      memmove_0(v3, a2, 8 * ((a1[1] - v3) >> 3));
      v3 = a1[1];
      a2 = &v6[40 * v8];
      v7 = 5 * (a3 - v8);
    }
  }
  else
  {
    std::vector<CContent::LayoutData>::_Clear_and_reserve_geometric(a1, a3);
    v3 = *a1;
    v7 = 5 * a3;
    a2 = v6;
  }
  v9 = 8 * v7;
  memmove_0(v3, a2, 8 * v7);
  result = &v3[v9];
  a1[1] = &v3[v9];
  return result;
}
