/*
 * XREFs of sub_180043710 @ 0x180043710
 * Callers:
 *     sub_1800750C0 @ 0x1800750C0 (sub_1800750C0.c)
 *     sub_180076C70 @ 0x180076C70 (sub_180076C70.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_180041F14 @ 0x180041F14 (sub_180041F14.c)
 *     sub_180042024 @ 0x180042024 (sub_180042024.c)
 *     sub_18004C220 @ 0x18004C220 (sub_18004C220.c)
 *     sub_18005C16C @ 0x18005C16C (sub_18005C16C.c)
 *     sub_1800791C4 @ 0x1800791C4 (sub_1800791C4.c)
 *     sub_180079590 @ 0x180079590 (sub_180079590.c)
 *     sub_180079CCC @ 0x180079CCC (sub_180079CCC.c)
 *     sub_180079E74 @ 0x180079E74 (sub_180079E74.c)
 *     sub_18007A7FC @ 0x18007A7FC (sub_18007A7FC.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_180043710(__int64 a1, __int64 a2)
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
  sub_18004C220(a1, &v37, 0LL);
  v4 = sub_180016F54((__int64)v40, (__int64)&unk_1801C6FE8);
  sub_180041F14((__int64)v47, v4, 7);
  v5 = sub_180016F54((__int64)v41, (__int64)&unk_1801C7008);
  sub_180041F14((__int64)v48, v5, 7);
  v6 = sub_180016F54((__int64)v40, (__int64)&unk_1801C7028);
  sub_180041F14((__int64)v49, v6, 2);
  v7 = sub_180016F54((__int64)v41, (__int64)&unk_1801C7048);
  sub_180041F14((__int64)v50, v7, 2);
  v8 = sub_180016F54((__int64)v40, (__int64)&unk_1801C7068);
  sub_180041F14((__int64)v51, v8, 2);
  sub_180079590(v37, v47, 5LL, 0LL);
  v9 = sub_180079E74(v37, &unk_1801C6FE8);
  v42 = xmmword_1800F7620;
  v43 = xmmword_1800F7630;
  v44 = xmmword_1800F7640;
  v45 = xmmword_1800F7650;
  sub_18007A7FC(v37, v9, &v42);
  v10 = sub_180079E74(v37, &unk_1801C7008);
  v42 = xmmword_1800F7620;
  v43 = xmmword_1800F7630;
  v44 = xmmword_1800F7640;
  v45 = xmmword_1800F7650;
  sub_18007A7FC(v37, v10, &v42);
  sub_180079CCC(v37);
  v11 = unknown_libname_81(&v39, &v37);
  sub_18005C16C(v12, v11);
  sub_18000B2D4((__int64)v47, 64LL, 5LL, (void (__fastcall *)(__int64))sub_180042330);
  if ( v38 )
    sub_18001050C(v38);
  sub_18004C220(a1, &v37, 9LL);
  sub_1800791C4(v37, &unk_1801C7208, 7LL, 3LL);
  v40[0] = 0LL;
  v13 = sub_180016F54((__int64)v41, (__int64)&unk_1801C7088);
  sub_180042024((__int64)v47, v13, v14, v40);
  v40[0] = 0LL;
  v15 = sub_180016F54((__int64)&v42, (__int64)&unk_1801C70A8);
  sub_180042024((__int64)v48, v15, v16, v40);
  v40[0] = 0LL;
  v17 = sub_180016F54((__int64)v41, (__int64)&unk_1801C70C8);
  sub_180042024((__int64)v49, v17, v18, v40);
  v40[0] = 0LL;
  v19 = sub_180016F54((__int64)&v42, (__int64)&unk_1801C70E8);
  sub_180042024((__int64)v50, v19, v20, v40);
  v40[0] = 0LL;
  v21 = sub_180016F54((__int64)v41, (__int64)&unk_1801C7108);
  sub_180042024((__int64)v51, v21, v22, v40);
  v40[0] = 0LL;
  v23 = sub_180016F54((__int64)&v42, (__int64)&unk_1801C7128);
  sub_180042024((__int64)v52, v23, v24, v40);
  v40[0] = 0LL;
  v25 = sub_180016F54((__int64)v41, (__int64)&unk_1801C7148);
  sub_180042024((__int64)v53, v25, v26, v40);
  v40[0] = 0LL;
  v27 = sub_180016F54((__int64)&v42, (__int64)&unk_1801C7168);
  sub_180042024((__int64)v54, v27, v28, v40);
  v40[0] = 0LL;
  v29 = sub_180016F54((__int64)v41, (__int64)&unk_1801C7188);
  sub_180042024((__int64)v55, v29, v30, v40);
  v40[0] = 0LL;
  v31 = sub_180016F54((__int64)&v42, (__int64)&unk_1801C71A8);
  sub_180042024((__int64)v56, v31, v32, v40);
  sub_180079590(v37, v47, 10LL, 0LL);
  sub_1800791C4(v37, &unk_1801C7228, 5LL, 3LL);
  sub_1800791C4(v37, &unk_1801C7248, 5LL, 3LL);
  sub_1800791C4(v37, &unk_1801C7268, 5LL, 3LL);
  sub_1800791C4(v37, &unk_1801C71C8, 5LL, 3LL);
  sub_1800791C4(v37, &unk_1801C71E8, 5LL, 3LL);
  sub_180079CCC(v37);
  v33 = unknown_libname_81(v40, &v37);
  sub_18005C16C(v34, v33);
  result = sub_18000B2D4((__int64)v47, 64LL, 10LL, (void (__fastcall *)(__int64))sub_180042330);
  if ( v38 )
    result = sub_18001050C(v38);
  v36 = *(_QWORD *)(a2 + 8);
  if ( v36 )
    return sub_18001050C(v36);
  return result;
}
