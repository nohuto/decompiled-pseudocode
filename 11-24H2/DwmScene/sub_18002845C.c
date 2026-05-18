/*
 * XREFs of sub_18002845C @ 0x18002845C
 * Callers:
 *     sub_18002863C @ 0x18002863C (sub_18002863C.c)
 *     sub_180041974 @ 0x180041974 (sub_180041974.c)
 *     sub_18005B2DC @ 0x18005B2DC (sub_18005B2DC.c)
 * Callees:
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 */

__int64 __fastcall sub_18002845C(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = 0;
  sub_18002811C(a2);
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
