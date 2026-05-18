/*
 * XREFs of sub_18006951C @ 0x18006951C
 * Callers:
 *     sub_180069914 @ 0x180069914 (sub_180069914.c)
 * Callees:
 *     sub_1800694FC @ 0x1800694FC (sub_1800694FC.c)
 *     sub_1800695BC @ 0x1800695BC (sub_1800695BC.c)
 *     sub_180069830 @ 0x180069830 (sub_180069830.c)
 *     sub_18006997C @ 0x18006997C (sub_18006997C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006951C(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  v2 = 8LL;
  v6 = 8LL;
  v4 = sub_1800694FC((__int64)a1, &v6);
  *a1 = v4;
  a1[1] = v4;
  a1[2] = v4 + 640;
  v6 = (unsigned __int64)a1;
  do
  {
    sub_180069830(v3, v4);
    v4 += 80LL;
    --v2;
  }
  while ( v2 );
  sub_1800695BC(v4, v4);
  a1[1] = v4;
  v6 = 0LL;
  return sub_18006997C(&v6);
}
