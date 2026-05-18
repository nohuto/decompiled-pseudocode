/*
 * XREFs of sub_180045B9C @ 0x180045B9C
 * Callers:
 *     sub_180045AF8 @ 0x180045AF8 (sub_180045AF8.c)
 * Callees:
 *     sub_180046164 @ 0x180046164 (sub_180046164.c)
 *     sub_1800462A4 @ 0x1800462A4 (sub_1800462A4.c)
 *     sub_18004637C @ 0x18004637C (sub_18004637C.c)
 *     sub_1800464F4 @ 0x1800464F4 (sub_1800464F4.c)
 *     sub_18004667C @ 0x18004667C (sub_18004667C.c)
 *     sub_1800467B4 @ 0x1800467B4 (sub_1800467B4.c)
 *     sub_1800468DC @ 0x1800468DC (sub_1800468DC.c)
 *     sub_180046AA8 @ 0x180046AA8 (sub_180046AA8.c)
 *     sub_180046BD0 @ 0x180046BD0 (sub_180046BD0.c)
 */

__int64 __fastcall sub_180045B9C(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 292) = v2;
  *(_DWORD *)(a1 + 296) = v2;
  if ( (v2 & 0x100) != 0 )
    result = sub_1800467B4(a1);
  if ( (v2 & 0x80u) != 0 )
    result = sub_180046164(a1);
  if ( (v2 & 1) != 0 )
    result = sub_180046AA8(a1);
  if ( (v2 & 2) != 0 )
    result = sub_180046BD0(a1);
  if ( (v2 & 0x10000000) != 0 )
  {
    result = sub_18004637C(a1);
  }
  else if ( (v2 & 0x40) != 0 )
  {
    result = sub_1800462A4(a1);
  }
  if ( (v2 & 0x10) != 0 )
    result = sub_18004667C(a1, *(_QWORD *)(a2 + 64), 0LL);
  if ( (v2 & 0x20) != 0 )
    result = sub_1800468DC(a1, *(_QWORD *)(a2 + 80), 0LL);
  if ( (v2 & 0x400) != 0 )
    return sub_1800464F4(a1, *(_QWORD *)(a2 + 104), *(_QWORD *)(a2 + 96));
  return result;
}
