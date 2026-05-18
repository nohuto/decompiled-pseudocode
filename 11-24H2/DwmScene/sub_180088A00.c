/*
 * XREFs of sub_180088A00 @ 0x180088A00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 *     sub_180032CBC @ 0x180032CBC (sub_180032CBC.c)
 *     sub_180078578 @ 0x180078578 (sub_180078578.c)
 *     sub_18008712C @ 0x18008712C (sub_18008712C.c)
 *     sub_1800873C8 @ 0x1800873C8 (sub_1800873C8.c)
 *     sub_1800874E4 @ 0x1800874E4 (sub_1800874E4.c)
 *     sub_1800876C8 @ 0x1800876C8 (sub_1800876C8.c)
 *     sub_18008786C @ 0x18008786C (sub_18008786C.c)
 *     sub_180087ACC @ 0x180087ACC (sub_180087ACC.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180088A00(__int64 a1)
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

  sub_180078578(a1);
  sub_180011C04(a1 + 56, &v9);
  v2 = (__int64 *)sub_18001268C(v9, &v7);
  sub_180032CBC(v3, &v13, v2);
  if ( v8 )
    sub_18001060C(v8);
  if ( v10 )
    sub_18001060C(v10);
  sub_180087ACC(a1, &v11);
  sub_1800876C8(v15, &v11, *(float *)(a1 + 1840));
  LODWORD(v7) = *(_DWORD *)(a1 + 1848);
  v15[5] = *sub_1800874E4(&v9, (float *)&v7);
  v7 = a1;
  sub_18008712C((__int64)v16, &v7);
  v4 = sub_1800873C8(v13, &v9, v15);
  sub_180011110((_QWORD *)(a1 + 1768), v4);
  if ( v10 )
    sub_18001060C(v10);
  *(_WORD *)(a1 + 1896) = 1;
  result = sub_18008786C(v15, v5);
  if ( v12 )
    result = sub_18001060C(v12);
  if ( v14 )
    return sub_18001060C(v14);
  return result;
}
