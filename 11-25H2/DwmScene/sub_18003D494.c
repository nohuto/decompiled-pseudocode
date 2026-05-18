/*
 * XREFs of sub_18003D494 @ 0x18003D494
 * Callers:
 *     sub_18003D548 @ 0x18003D548 (sub_18003D548.c)
 *     sub_18003D5EC @ 0x18003D5EC (sub_18003D5EC.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18003CF64 @ 0x18003CF64 (sub_18003CF64.c)
 */

__int64 *__fastcall sub_18003D494(__int64 *a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_18003CF64(1uLL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  *a1 = v3;
  return a1;
}
