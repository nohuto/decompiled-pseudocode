/*
 * XREFs of sub_18005DC68 @ 0x18005DC68
 * Callers:
 *     sub_18005CB64 @ 0x18005CB64 (sub_18005CB64.c)
 * Callees:
 *     sub_180087760 @ 0x180087760 (sub_180087760.c)
 */

__int64 __fastcall sub_18005DC68(__int64 a1, __int64 *a2)
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
  return sub_180087760(a1, v5);
}
