/*
 * XREFs of sub_18003062C @ 0x18003062C
 * Callers:
 *     sub_180034C38 @ 0x180034C38 (sub_180034C38.c)
 * Callees:
 *     sub_18002DF98 @ 0x18002DF98 (sub_18002DF98.c)
 */

__int64 __fastcall sub_18003062C(__int64 *a1, __int64 a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  return *(_QWORD *)sub_18002DF98(a1, (__int64)v3, a2) + 64LL;
}
