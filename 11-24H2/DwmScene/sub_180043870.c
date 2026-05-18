/*
 * XREFs of sub_180043870 @ 0x180043870
 * Callers:
 *     sub_180075220 @ 0x180075220 (sub_180075220.c)
 *     sub_180076DD0 @ 0x180076DD0 (sub_180076DD0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_180042074 @ 0x180042074 (sub_180042074.c)
 *     sub_180042184 @ 0x180042184 (sub_180042184.c)
 *     sub_18004C380 @ 0x18004C380 (sub_18004C380.c)
 *     sub_18005C2CC @ 0x18005C2CC (sub_18005C2CC.c)
 *     sub_180079324 @ 0x180079324 (sub_180079324.c)
 *     sub_1800796F0 @ 0x1800796F0 (sub_1800796F0.c)
 *     sub_180079E2C @ 0x180079E2C (sub_180079E2C.c)
 *     sub_180079FD4 @ 0x180079FD4 (sub_180079FD4.c)
 *     sub_18007A95C @ 0x18007A95C (sub_18007A95C.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_180043870(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // ax
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // r10
  __int64 result; // rax
  __int64 v36; // rcx
  __int64 v37; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v38; // [rsp+28h] [rbp-D8h]
  __int64 v39; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v40[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v41[32]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v42; // [rsp+80h] [rbp-80h] BYREF
  __int128 v43; // [rsp+90h] [rbp-70h]
  __int128 v44; // [rsp+A0h] [rbp-60h]
  __int128 v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+C0h] [rbp-40h]
  _BYTE v47[64]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v48[64]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v49[64]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v50[64]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v51[64]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v52[64]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v53[64]; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v54[64]; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v55[64]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE v56[64]; // [rsp+310h] [rbp+210h] BYREF

  v46 = a2;
  sub_18004C380(a1, &v37, 0LL);
  v4 = sub_180017054((__int64)v40, (__int64)&unk_1801C7FF8);
  sub_180042074((__int64)v47, v4, 7);
  v5 = sub_180017054((__int64)v41, (__int64)&unk_1801C8018);
  sub_180042074((__int64)v48, v5, 7);
  v6 = sub_180017054((__int64)v40, (__int64)&unk_1801C8038);
  sub_180042074((__int64)v49, v6, 2);
  v7 = sub_180017054((__int64)v41, (__int64)&unk_1801C8058);
  sub_180042074((__int64)v50, v7, 2);
  v8 = sub_180017054((__int64)v40, (__int64)&unk_1801C8078);
  sub_180042074((__int64)v51, v8, 2);
  sub_1800796F0(v37, v47, 5LL, 0LL);
  v9 = sub_180079FD4(v37, &unk_1801C7FF8);
  v42 = xmmword_1800F8620;
  v43 = xmmword_1800F8630;
  v44 = xmmword_1800F8640;
  v45 = xmmword_1800F8650;
  sub_18007A95C(v37, v9, &v42);
  v10 = sub_180079FD4(v37, &unk_1801C8018);
  v42 = xmmword_1800F8620;
  v43 = xmmword_1800F8630;
  v44 = xmmword_1800F8640;
  v45 = xmmword_1800F8650;
  sub_18007A95C(v37, v10, &v42);
  sub_180079E2C(v37);
  v11 = unknown_libname_81(&v39, &v37);
  sub_18005C2CC(v12, v11);
  sub_18000B6A4((__int64)v47, 64LL, 5LL, (void (__fastcall *)(__int64))sub_180042490);
  if ( v38 )
    sub_18001060C(v38);
  sub_18004C380(a1, &v37, 9LL);
  sub_180079324(v37, &unk_1801C8218, 7LL, 3LL);
  v40[0] = 0LL;
  v13 = sub_180017054((__int64)v41, (__int64)&unk_1801C8098);
  sub_180042184((__int64)v47, v13, v14, v40);
  v40[0] = 0LL;
  v15 = sub_180017054((__int64)&v42, (__int64)&unk_1801C80B8);
  sub_180042184((__int64)v48, v15, v16, v40);
  v40[0] = 0LL;
  v17 = sub_180017054((__int64)v41, (__int64)&unk_1801C80D8);
  sub_180042184((__int64)v49, v17, v18, v40);
  v40[0] = 0LL;
  v19 = sub_180017054((__int64)&v42, (__int64)&unk_1801C80F8);
  sub_180042184((__int64)v50, v19, v20, v40);
  v40[0] = 0LL;
  v21 = sub_180017054((__int64)v41, (__int64)&unk_1801C8118);
  sub_180042184((__int64)v51, v21, v22, v40);
  v40[0] = 0LL;
  v23 = sub_180017054((__int64)&v42, (__int64)&unk_1801C8138);
  sub_180042184((__int64)v52, v23, v24, v40);
  v40[0] = 0LL;
  v25 = sub_180017054((__int64)v41, (__int64)&unk_1801C8158);
  sub_180042184((__int64)v53, v25, v26, v40);
  v40[0] = 0LL;
  v27 = sub_180017054((__int64)&v42, (__int64)&unk_1801C8178);
  sub_180042184((__int64)v54, v27, v28, v40);
  v40[0] = 0LL;
  v29 = sub_180017054((__int64)v41, (__int64)&unk_1801C8198);
  sub_180042184((__int64)v55, v29, v30, v40);
  v40[0] = 0LL;
  v31 = sub_180017054((__int64)&v42, (__int64)&unk_1801C81B8);
  sub_180042184((__int64)v56, v31, v32, v40);
  sub_1800796F0(v37, v47, 10LL, 0LL);
  sub_180079324(v37, &unk_1801C8238, 5LL, 3LL);
  sub_180079324(v37, &unk_1801C8258, 5LL, 3LL);
  sub_180079324(v37, &unk_1801C8278, 5LL, 3LL);
  sub_180079324(v37, &unk_1801C81D8, 5LL, 3LL);
  sub_180079324(v37, &unk_1801C81F8, 5LL, 3LL);
  sub_180079E2C(v37);
  v33 = unknown_libname_81(v40, &v37);
  sub_18005C2CC(v34, v33);
  result = sub_18000B6A4((__int64)v47, 64LL, 10LL, (void (__fastcall *)(__int64))sub_180042490);
  if ( v38 )
    result = sub_18001060C(v38);
  v36 = *(_QWORD *)(a2 + 8);
  if ( v36 )
    return sub_18001060C(v36);
  return result;
}
