/*
 * XREFs of sub_18005DA3C @ 0x18005DA3C
 * Callers:
 *     sub_18005C584 @ 0x18005C584 (sub_18005C584.c)
 * Callees:
 *     sub_18008B9A4 @ 0x18008B9A4 (sub_18008B9A4.c)
 */

__int64 __fastcall sub_18005DA3C(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v5[0] = v2;
  v3 = a2[1];
  a2[1] = 0LL;
  v5[1] = v3;
  return sub_18008B9A4(a1, v5);
}
