/*
 * XREFs of ??$_Assign_counted_range@PEBH@?$vector@HV?$allocator@H@std@@@std@@AEAAXPEBH_K@Z @ 0x18022AA40
 * Callers:
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x1800C54C4 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x1802BC850 (-_Clear_and_reserve_geometric@-$vector@HV-$allocator@H@std@@@std@@AEAAX_K@Z.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

char *__fastcall std::vector<int>::_Assign_counted_range<int const *>(char **a1, char *a2, unsigned __int64 a3)
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
    std::vector<int>::_Clear_and_reserve_geometric(a1, a3);
    v3 = *a1;
    v7 = 4 * a3;
    a2 = v5;
  }
  memmove_0(v3, a2, v7);
  result = &v3[v7];
  a1[1] = &v3[v7];
  return result;
}
