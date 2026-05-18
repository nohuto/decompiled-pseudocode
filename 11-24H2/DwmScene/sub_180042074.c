/*
 * XREFs of sub_180042074 @ 0x180042074
 * Callers:
 *     sub_1800424B8 @ 0x1800424B8 (sub_1800424B8.c)
 *     sub_180043314 @ 0x180043314 (sub_180043314.c)
 *     sub_180043870 @ 0x180043870 (sub_180043870.c)
 *     sub_180043E04 @ 0x180043E04 (sub_180043E04.c)
 *     sub_18004D4BC @ 0x18004D4BC (sub_18004D4BC.c)
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 *     sub_180076630 @ 0x180076630 (sub_180076630.c)
 *     sub_1800769C0 @ 0x1800769C0 (sub_1800769C0.c)
 *     sub_180077074 @ 0x180077074 (sub_180077074.c)
 *     sub_18008F800 @ 0x18008F800 (sub_18008F800.c)
 * Callees:
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 */

__int64 __fastcall sub_180042074(__int64 a1, __int64 a2, int a3)
{
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  sub_180011B5C(a2);
  return a1;
}
