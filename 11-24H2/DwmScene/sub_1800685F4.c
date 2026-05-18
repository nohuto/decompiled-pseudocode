/*
 * XREFs of sub_1800685F4 @ 0x1800685F4
 * Callers:
 *     sub_18005ED18 @ 0x18005ED18 (sub_18005ED18.c)
 *     sub_180067A50 @ 0x180067A50 (sub_180067A50.c)
 * Callees:
 *     sub_18003D460 @ 0x18003D460 (sub_18003D460.c)
 *     sub_18005DDBC @ 0x18005DDBC (sub_18005DDBC.c)
 */

unsigned __int64 __fastcall sub_1800685F4(_QWORD *a1)
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
      sub_18005DDBC((__int64)a1, (__int64)v2);
      *(_QWORD *)a1[1] = a1[1];
      *(_QWORD *)(a1[1] + 8LL) = a1[1];
      a1[2] = 0LL;
      v4 = (unsigned __int64 *)a1[4];
      v5 = (unsigned __int64 *)a1[3];
      v6 = a1[1];
      return sub_18003D460(v5, v4, &v6);
    }
    else
    {
      return sub_1800684A0(a1, *v2, a1[1]);
    }
  }
  return result;
}
