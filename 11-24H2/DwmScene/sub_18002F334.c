/*
 * XREFs of sub_18002F334 @ 0x18002F334
 * Callers:
 *     sub_18002F9DC @ 0x18002F9DC (sub_18002F9DC.c)
 *     sub_180069914 @ 0x180069914 (sub_180069914.c)
 *     sub_1800BC6D0 @ 0x1800BC6D0 (sub_1800BC6D0.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18002D710 @ 0x18002D710 (sub_18002D710.c)
 */

__int64 *__fastcall sub_18002F334(__int64 *a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_18002D710(1uLL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  *a1 = v3;
  return a1;
}
