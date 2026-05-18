/*
 * XREFs of sub_180059F80 @ 0x180059F80
 * Callers:
 *     sub_180059E00 @ 0x180059E00 (sub_180059E00.c)
 *     sub_18005AAA4 @ 0x18005AAA4 (sub_18005AAA4.c)
 *     sub_1800CD140 @ 0x1800CD140 (sub_1800CD140.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18002D710 @ 0x18002D710 (sub_18002D710.c)
 */

__int64 sub_180059F80()
{
  unsigned __int64 v0; // rax
  __int64 result; // rax

  v0 = sub_18002D710(1uLL);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(v0);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
