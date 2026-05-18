/*
 * XREFs of sub_180028540 @ 0x180028540
 * Callers:
 *     sub_1800240E4 @ 0x1800240E4 (sub_1800240E4.c)
 *     sub_18002986C @ 0x18002986C (sub_18002986C.c)
 *     sub_18002F488 @ 0x18002F488 (sub_18002F488.c)
 *     sub_18003D6A8 @ 0x18003D6A8 (sub_18003D6A8.c)
 *     sub_18003D74C @ 0x18003D74C (sub_18003D74C.c)
 * Callees:
 *     sub_180023FEC @ 0x180023FEC (sub_180023FEC.c)
 */

__int64 __fastcall sub_180028540(__int64 a1, int a2)
{
  sub_180023FEC((_QWORD *)a1);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return a1;
}
