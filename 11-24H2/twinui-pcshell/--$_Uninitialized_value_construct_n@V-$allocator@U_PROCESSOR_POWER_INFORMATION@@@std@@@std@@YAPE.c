/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@U_PROCESSOR_POWER_INFORMATION@@@std@@@std@@YAPEAU_PROCESSOR_POWER_INFORMATION@@PEAU1@_KAEAV?$allocator@U_PROCESSOR_POWER_INFORMATION@@@0@@Z @ 0x180344860
 * Callers:
 *     ??0?$vector@U_PROCESSOR_POWER_INFORMATION@@V?$allocator@U_PROCESSOR_POWER_INFORMATION@@@std@@@std@@QEAA@_KAEBV?$allocator@U_PROCESSOR_POWER_INFORMATION@@@1@@Z @ 0x180347198 (--0-$vector@U_PROCESSOR_POWER_INFORMATION@@V-$allocator@U_PROCESSOR_POWER_INFORMATION@@@std@@@st.c)
 * Callees:
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

char *__fastcall std::_Uninitialized_value_construct_n<std::allocator<_PROCESSOR_POWER_INFORMATION>>(
        char *a1,
        __int64 a2)
{
  char *v2; // rdi
  __int64 v3; // rbx

  v2 = a1;
  if ( a2 )
  {
    v3 = 24 * a2;
    memset_0(a1, 0, 24 * a2);
    v2 += v3;
  }
  return v2;
}
