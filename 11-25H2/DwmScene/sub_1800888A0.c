/*
 * XREFs of sub_1800888A0 @ 0x1800888A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_180032B5C @ 0x180032B5C (sub_180032B5C.c)
 *     sub_180078418 @ 0x180078418 (sub_180078418.c)
 *     sub_180086FCC @ 0x180086FCC (sub_180086FCC.c)
 *     sub_180087268 @ 0x180087268 (sub_180087268.c)
 *     sub_180087384 @ 0x180087384 (sub_180087384.c)
 *     sub_180087568 @ 0x180087568 (sub_180087568.c)
 *     sub_18008770C @ 0x18008770C (sub_18008770C.c)
 *     sub_18008796C @ 0x18008796C (sub_18008796C.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800888A0(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+40h] [rbp-C0h]
  __int64 v9; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B0h]
  __int64 v11; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+60h] [rbp-A0h]
  __int64 v13; // [rsp+68h] [rbp-98h] BYREF
  __int64 v14; // [rsp+70h] [rbp-90h]
  _QWORD v15[15]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v16[72]; // [rsp+F8h] [rbp-8h] BYREF

  sub_180078418(a1);
  sub_180011B04(a1 + 56, &v9);
  v2 = (__int64 *)sub_18001258C(v9, &v7);
  sub_180032B5C(v3, &v13, v2);
  if ( v8 )
    sub_18001050C(v8);
  if ( v10 )
    sub_18001050C(v10);
  sub_18008796C(a1, &v11);
  sub_180087568(v15, &v11, *(float *)(a1 + 1840));
  LODWORD(v7) = *(_DWORD *)(a1 + 1848);
  v15[5] = *sub_180087384(&v9, (float *)&v7);
  v7 = a1;
  sub_180086FCC((__int64)v16, &v7);
  v4 = sub_180087268(v13, &v9, v15);
  sub_180011010((_QWORD *)(a1 + 1768), v4);
  if ( v10 )
    sub_18001050C(v10);
  *(_WORD *)(a1 + 1896) = 1;
  result = sub_18008770C(v15, v5);
  if ( v12 )
    result = sub_18001050C(v12);
  if ( v14 )
    return sub_18001050C(v14);
  return result;
}
