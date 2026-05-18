/*
 * XREFs of sub_180028AD0 @ 0x180028AD0
 * Callers:
 *     sub_180028E6C @ 0x180028E6C (sub_180028E6C.c)
 *     sub_180028F84 @ 0x180028F84 (sub_180028F84.c)
 *     sub_18006CF4C @ 0x18006CF4C (sub_18006CF4C.c)
 * Callees:
 *     sub_180029200 @ 0x180029200 (sub_180029200.c)
 */

__int64 __fastcall sub_180028AD0(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_180029200(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
