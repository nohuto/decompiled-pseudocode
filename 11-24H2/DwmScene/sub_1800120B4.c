/*
 * XREFs of sub_1800120B4 @ 0x1800120B4
 * Callers:
 *     sub_180036B60 @ 0x180036B60 (sub_180036B60.c)
 *     sub_180082B60 @ 0x180082B60 (sub_180082B60.c)
 * Callees:
 *     sub_180012270 @ 0x180012270 (sub_180012270.c)
 */

__int64 __fastcall sub_1800120B4(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_180012270(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
