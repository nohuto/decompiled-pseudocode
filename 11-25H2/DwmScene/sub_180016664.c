/*
 * XREFs of sub_180016664 @ 0x180016664
 * Callers:
 *     sub_18001A81C @ 0x18001A81C (sub_18001A81C.c)
 *     sub_1800789B4 @ 0x1800789B4 (sub_1800789B4.c)
 *     sub_18007AB68 @ 0x18007AB68 (sub_18007AB68.c)
 *     sub_180084D78 @ 0x180084D78 (sub_180084D78.c)
 *     sub_180094CE8 @ 0x180094CE8 (sub_180094CE8.c)
 *     sub_1800CCD2C @ 0x1800CCD2C (sub_1800CCD2C.c)
 * Callees:
 *     sub_180016AE4 @ 0x180016AE4 (sub_180016AE4.c)
 */

__int64 __fastcall sub_180016664(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_180016AE4(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
