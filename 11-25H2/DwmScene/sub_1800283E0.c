/*
 * XREFs of sub_1800283E0 @ 0x1800283E0
 * Callers:
 *     sub_180023F84 @ 0x180023F84 (sub_180023F84.c)
 *     sub_18002970C @ 0x18002970C (sub_18002970C.c)
 *     sub_18002F328 @ 0x18002F328 (sub_18002F328.c)
 *     sub_18003D548 @ 0x18003D548 (sub_18003D548.c)
 *     sub_18003D5EC @ 0x18003D5EC (sub_18003D5EC.c)
 * Callees:
 *     sub_180023E8C @ 0x180023E8C (sub_180023E8C.c)
 */

__int64 __fastcall sub_1800283E0(__int64 a1, int a2)
{
  sub_180023E8C((_QWORD *)a1);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return a1;
}
