/*
 * XREFs of sub_18008F800 @ 0x18008F800
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_180042074 @ 0x180042074 (sub_180042074.c)
 *     sub_18008D71C @ 0x18008D71C (sub_18008D71C.c)
 */

// Hidden C++ exception states: #wind=12
__int64 *__fastcall sub_18008F800(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE *v15; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+30h] [rbp-D8h]
  __int64 v17[2]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v18[32]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v19[32]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v20[32]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v21[32]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v22[32]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v23[32]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v24[32]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v25[32]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v26[32]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v27[32]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v28[32]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v29[64]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v30[64]; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v31[64]; // [rsp+228h] [rbp+120h] BYREF
  _BYTE v32[64]; // [rsp+268h] [rbp+160h] BYREF
  _BYTE v33[64]; // [rsp+2A8h] [rbp+1A0h] BYREF
  _BYTE v34[64]; // [rsp+2E8h] [rbp+1E0h] BYREF
  _BYTE v35[64]; // [rsp+328h] [rbp+220h] BYREF
  _BYTE v36[64]; // [rsp+368h] [rbp+260h] BYREF
  _BYTE v37[64]; // [rsp+3A8h] [rbp+2A0h] BYREF
  _BYTE v38[64]; // [rsp+3E8h] [rbp+2E0h] BYREF
  _BYTE v39[64]; // [rsp+428h] [rbp+320h] BYREF
  __int64 v40; // [rsp+468h] [rbp+360h] BYREF

  v17[1] = (__int64)a2;
  LODWORD(v16) = 0;
  v3 = sub_180017054((__int64)v18, (__int64)&unk_1801C7DD8);
  sub_180042074((__int64)v29, v3, 8);
  v4 = sub_180017054((__int64)v19, (__int64)&unk_1801C7D18);
  sub_180042074((__int64)v30, v4, 6);
  v5 = sub_180017054((__int64)v20, (__int64)&unk_1801C7E18);
  sub_180042074((__int64)v31, v5, 8);
  v6 = sub_180017054((__int64)v21, (__int64)&unk_1801C7D38);
  sub_180042074((__int64)v32, v6, 6);
  v7 = sub_180017054((__int64)v22, (__int64)&unk_1801C7DF8);
  sub_180042074((__int64)v33, v7, 8);
  v8 = sub_180017054((__int64)v23, (__int64)&unk_1801C7D78);
  sub_180042074((__int64)v34, v8, 5);
  v9 = sub_180017054((__int64)v24, (__int64)&unk_1801C7E38);
  sub_180042074((__int64)v35, v9, 8);
  v10 = sub_180017054((__int64)v25, (__int64)&unk_1801C7DB8);
  sub_180042074((__int64)v36, v10, 6);
  v11 = sub_180017054((__int64)v26, (__int64)&unk_1801C7E78);
  sub_180042074((__int64)v37, v11, 8);
  v12 = sub_180017054((__int64)v27, (__int64)&unk_1801C7D98);
  sub_180042074((__int64)v38, v12, 2);
  v13 = sub_180017054((__int64)v28, (__int64)&unk_1801C7F18);
  sub_180042074((__int64)v39, v13, 2);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v17[0] = (__int64)&v40;
  v15 = v29;
  sub_18008D71C(a2, 0xBuLL, (__int64 *)&v15, v17);
  LODWORD(v16) = 1;
  sub_18000B6A4((__int64)v29, 64LL, 11LL, (void (__fastcall *)(__int64))sub_180042490);
  return a2;
}
