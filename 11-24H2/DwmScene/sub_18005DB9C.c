/*
 * XREFs of sub_18005DB9C @ 0x18005DB9C
 * Callers:
 *     sub_18005C6E4 @ 0x18005C6E4 (sub_18005C6E4.c)
 * Callees:
 *     sub_18008BB04 @ 0x18008BB04 (sub_18008BB04.c)
 */

__int64 __fastcall sub_18005DB9C(__int64 a1, __int64 *a2)
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
  return sub_18008BB04(a1, v5);
}
