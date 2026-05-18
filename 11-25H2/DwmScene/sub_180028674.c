/*
 * XREFs of sub_180028674 @ 0x180028674
 * Callers:
 *     sub_18002869C @ 0x18002869C (sub_18002869C.c)
 *     sub_180053528 @ 0x180053528 (sub_180053528.c)
 * Callees:
 *     sub_18002808C @ 0x18002808C (sub_18002808C.c)
 */

__int64 __fastcall sub_180028674(__int64 a1, __int64 a2)
{
  *(_QWORD *)a2 = a1;
  *(_BYTE *)(a2 + 8) = 1;
  sub_18002808C(a1);
  return a2;
}
