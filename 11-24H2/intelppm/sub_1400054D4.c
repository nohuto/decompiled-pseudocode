/*
 * XREFs of sub_1400054D4 @ 0x1400054D4
 * Callers:
 *     sub_140029798 @ 0x140029798 (sub_140029798.c)
 *     sub_140042830 @ 0x140042830 (sub_140042830.c)
 *     sub_14004599C @ 0x14004599C (sub_14004599C.c)
 *     sub_140045D48 @ 0x140045D48 (sub_140045D48.c)
 *     sub_140046638 @ 0x140046638 (sub_140046638.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400054D4(__int64 a1, int a2, __int64 a3)
{
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)a3 = a1;
  *(_QWORD *)(a3 + 8) = a1;
  *(_DWORD *)(a3 + 24) = a2;
}
