/*
 * XREFs of sub_180088710 @ 0x180088710
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_180032B5C @ 0x180032B5C (sub_180032B5C.c)
 *     sub_1800407EC @ 0x1800407EC (sub_1800407EC.c)
 *     sub_180078418 @ 0x180078418 (sub_180078418.c)
 *     sub_180087268 @ 0x180087268 (sub_180087268.c)
 *     sub_180087384 @ 0x180087384 (sub_180087384.c)
 *     sub_180087568 @ 0x180087568 (sub_180087568.c)
 *     sub_18008770C @ 0x18008770C (sub_18008770C.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180088710(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C0h]
  __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B0h]
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h]
  _QWORD v16[24]; // [rsp+70h] [rbp-90h] BYREF

  sub_180078418(a1);
  sub_180011B04(a1 + 56, &v10);
  v2 = (__int64 *)sub_18001258C(v10, &v12);
  sub_180032B5C(v3, &v14, v2);
  if ( v13 )
    sub_18001050C(v13);
  if ( v11 )
    sub_18001050C(v11);
  v4 = sub_1800407EC(a1 + 8, &v10);
  v12 = a1 + 1900;
  v5 = v4[1];
  v13 = v5;
  *v4 = 0LL;
  v4[1] = 0LL;
  if ( v11 )
    sub_18001050C(v11);
  sub_180087568(v16, &v12, *(float *)(a1 + 1852));
  v9 = *(_DWORD *)(a1 + 1860);
  v16[5] = *sub_180087384(&v10, (float *)&v9);
  v6 = sub_180087268(v14, &v10, v16);
  sub_180011010((_QWORD *)(a1 + 1784), v6);
  if ( v11 )
    sub_18001050C(v11);
  *(_BYTE *)(a1 + 1898) = 1;
  result = sub_18008770C(v16, v7);
  if ( v5 )
    result = sub_18001050C(v5);
  if ( v15 )
    return sub_18001050C(v15);
  return result;
}
