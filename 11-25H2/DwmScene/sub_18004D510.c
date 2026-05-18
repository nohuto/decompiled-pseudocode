/*
 * XREFs of sub_18004D510 @ 0x18004D510
 * Callers:
 *     sub_18004C040 @ 0x18004C040 (sub_18004C040.c)
 *     sub_18004C918 @ 0x18004C918 (sub_18004C918.c)
 *     sub_1800C6E70 @ 0x1800C6E70 (sub_1800C6E70.c)
 *     sub_1800C7C60 @ 0x1800C7C60 (sub_1800C7C60.c)
 *     sub_1800C9950 @ 0x1800C9950 (sub_1800C9950.c)
 *     sub_1800C9BB0 @ 0x1800C9BB0 (sub_1800C9BB0.c)
 *     sub_1800C9E10 @ 0x1800C9E10 (sub_1800C9E10.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18004D510(__int64 a1)
{
  return *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) && *(_DWORD *)(a1 + 32) == *(_DWORD *)(a1 + 24);
}
