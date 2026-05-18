/*
 * XREFs of sub_18004A1AC @ 0x18004A1AC
 * Callers:
 *     sub_18004B3E8 @ 0x18004B3E8 (sub_18004B3E8.c)
 *     sub_180059D50 @ 0x180059D50 (sub_180059D50.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 sub_18004A1AC()
{
  __int64 result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
