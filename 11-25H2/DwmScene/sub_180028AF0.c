/*
 * XREFs of sub_180028AF0 @ 0x180028AF0
 * Callers:
 *     sub_1800293A4 @ 0x1800293A4 (sub_1800293A4.c)
 *     sub_180029658 @ 0x180029658 (sub_180029658.c)
 *     sub_1800296B4 @ 0x1800296B4 (sub_1800296B4.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 sub_180028AF0()
{
  __int64 result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x58uLL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
