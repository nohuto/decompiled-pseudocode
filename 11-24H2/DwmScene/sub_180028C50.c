/*
 * XREFs of sub_180028C50 @ 0x180028C50
 * Callers:
 *     sub_180029504 @ 0x180029504 (sub_180029504.c)
 *     sub_1800297B8 @ 0x1800297B8 (sub_1800297B8.c)
 *     sub_180029814 @ 0x180029814 (sub_180029814.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 sub_180028C50()
{
  __int64 result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x58uLL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
