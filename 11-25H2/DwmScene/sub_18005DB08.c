/*
 * XREFs of sub_18005DB08 @ 0x18005DB08
 * Callers:
 *     sub_18005CA04 @ 0x18005CA04 (sub_18005CA04.c)
 * Callees:
 *     sub_180087600 @ 0x180087600 (sub_180087600.c)
 */

__int64 __fastcall sub_18005DB08(__int64 a1, __int64 *a2)
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
  return sub_180087600(a1, v5);
}
