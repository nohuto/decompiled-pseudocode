/*
 * XREFs of sub_180068494 @ 0x180068494
 * Callers:
 *     sub_18005EBB8 @ 0x18005EBB8 (sub_18005EBB8.c)
 *     sub_1800678F0 @ 0x1800678F0 (sub_1800678F0.c)
 * Callees:
 *     sub_18003D300 @ 0x18003D300 (sub_18003D300.c)
 *     sub_18005DC5C @ 0x18005DC5C (sub_18005DC5C.c)
 */

unsigned __int64 __fastcall sub_180068494(_QWORD *a1)
{
  __int64 *v2; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 *v4; // rdx
  unsigned __int64 *v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1[2] )
  {
    v2 = (__int64 *)a1[1];
    if ( a1[7] >> 3 <= a1[2] )
    {
      sub_18005DC5C((__int64)a1, (__int64)v2);
      *(_QWORD *)a1[1] = a1[1];
      *(_QWORD *)(a1[1] + 8LL) = a1[1];
      a1[2] = 0LL;
      v4 = (unsigned __int64 *)a1[4];
      v5 = (unsigned __int64 *)a1[3];
      v6 = a1[1];
      return sub_18003D300(v5, v4, &v6);
    }
    else
    {
      return sub_180068340(a1, *v2, a1[1]);
    }
  }
  return result;
}
