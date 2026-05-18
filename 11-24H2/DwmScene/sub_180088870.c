/*
 * XREFs of sub_180088870 @ 0x180088870
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 *     sub_180032CBC @ 0x180032CBC (sub_180032CBC.c)
 *     sub_18004094C @ 0x18004094C (sub_18004094C.c)
 *     sub_180078578 @ 0x180078578 (sub_180078578.c)
 *     sub_1800873C8 @ 0x1800873C8 (sub_1800873C8.c)
 *     sub_1800874E4 @ 0x1800874E4 (sub_1800874E4.c)
 *     sub_1800876C8 @ 0x1800876C8 (sub_1800876C8.c)
 *     sub_18008786C @ 0x18008786C (sub_18008786C.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180088870(__int64 a1)
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

  sub_180078578(a1);
  sub_180011C04(a1 + 56, &v10);
  v2 = (__int64 *)sub_18001268C(v10, &v12);
  sub_180032CBC(v3, &v14, v2);
  if ( v13 )
    sub_18001060C(v13);
  if ( v11 )
    sub_18001060C(v11);
  v4 = sub_18004094C(a1 + 8, &v10);
  v12 = a1 + 1900;
  v5 = v4[1];
  v13 = v5;
  *v4 = 0LL;
  v4[1] = 0LL;
  if ( v11 )
    sub_18001060C(v11);
  sub_1800876C8(v16, &v12, *(float *)(a1 + 1852));
  v9 = *(_DWORD *)(a1 + 1860);
  v16[5] = *sub_1800874E4(&v10, (float *)&v9);
  v6 = sub_1800873C8(v14, &v10, v16);
  sub_180011110((_QWORD *)(a1 + 1784), v6);
  if ( v11 )
    sub_18001060C(v11);
  *(_BYTE *)(a1 + 1898) = 1;
  result = sub_18008786C(v16, v7);
  if ( v5 )
    result = sub_18001060C(v5);
  if ( v15 )
    return sub_18001060C(v15);
  return result;
}
