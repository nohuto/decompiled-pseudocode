/*
 * XREFs of sub_180059E20 @ 0x180059E20
 * Callers:
 *     sub_180059CA0 @ 0x180059CA0 (sub_180059CA0.c)
 *     sub_18005A944 @ 0x18005A944 (sub_18005A944.c)
 *     sub_1800CCFE0 @ 0x1800CCFE0 (sub_1800CCFE0.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18002D5B0 @ 0x18002D5B0 (sub_18002D5B0.c)
 */

__int64 sub_180059E20()
{
  unsigned __int64 v0; // rax
  __int64 result; // rax

  v0 = sub_18002D5B0(1uLL);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(v0);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
