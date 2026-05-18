/*
 * XREFs of sub_180047D1C @ 0x180047D1C
 * Callers:
 *     sub_1800474A4 @ 0x1800474A4 (sub_1800474A4.c)
 * Callees:
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 */

__int64 __fastcall sub_180047D1C(__int64 a1, __int64 a2)
{
  sub_18001244C((__int64 *)a1, (_QWORD *)a2);
  *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  sub_18001244C((__int64 *)(a1 + 24), (_QWORD *)(a2 + 24));
  sub_18001244C((__int64 *)(a1 + 40), (_QWORD *)(a2 + 40));
  sub_18001244C((__int64 *)(a1 + 56), (_QWORD *)(a2 + 56));
  sub_18001244C((__int64 *)(a1 + 72), (_QWORD *)(a2 + 72));
  return a1;
}
