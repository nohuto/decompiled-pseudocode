/*
 * XREFs of sub_180076F14 @ 0x180076F14
 * Callers:
 *     sub_180077900 @ 0x180077900 (sub_180077900.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_180041F14 @ 0x180041F14 (sub_180041F14.c)
 *     sub_180041F74 @ 0x180041F74 (sub_180041F74.c)
 *     sub_180042024 @ 0x180042024 (sub_180042024.c)
 *     sub_1800421E8 @ 0x1800421E8 (sub_1800421E8.c)
 *     sub_180042330 @ 0x180042330 (sub_180042330.c)
 *     sub_18004C220 @ 0x18004C220 (sub_18004C220.c)
 *     sub_18005C16C @ 0x18005C16C (sub_18005C16C.c)
 *     sub_180076E8C @ 0x180076E8C (sub_180076E8C.c)
 *     sub_1800791C4 @ 0x1800791C4 (sub_1800791C4.c)
 *     sub_180079590 @ 0x180079590 (sub_180079590.c)
 *     sub_18007965C @ 0x18007965C (sub_18007965C.c)
 *     sub_180079CCC @ 0x180079CCC (sub_180079CCC.c)
 *     sub_180079E74 @ 0x180079E74 (sub_180079E74.c)
 *     sub_18007A7FC @ 0x18007A7FC (sub_18007A7FC.c)
 */

// Hidden C++ exception states: #wind=24
char __fastcall sub_180076F14(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int16 v5; // ax
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int16 v10; // ax
  __int64 v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // r8
  _QWORD *v50; // rax
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rbx
  _QWORD *v65; // rax
  __int64 v66; // r8
  _QWORD *v67; // rax
  __int64 v68; // r8
  char result; // al
  __int64 v70; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v71; // [rsp+40h] [rbp-C0h]
  __int128 v72[2]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v73[32]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v74; // [rsp+88h] [rbp-78h] BYREF
  __int128 v75; // [rsp+98h] [rbp-68h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-58h] BYREF
  __m128i v77; // [rsp+B8h] [rbp-48h] BYREF
  __m128i v78; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v79; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v80; // [rsp+F0h] [rbp-10h]
  __int128 v81; // [rsp+100h] [rbp+0h]
  __int128 v82; // [rsp+110h] [rbp+10h]
  _BYTE v83[64]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v84[64]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v85[64]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v86[64]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v87[64]; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v88[64]; // [rsp+260h] [rbp+160h] BYREF
  _BYTE v89[64]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v90[64]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _BYTE v91[64]; // [rsp+320h] [rbp+220h] BYREF
  _BYTE v92[64]; // [rsp+360h] [rbp+260h] BYREF
  _BYTE v93[64]; // [rsp+3A0h] [rbp+2A0h] BYREF
  _BYTE v94[64]; // [rsp+3E0h] [rbp+2E0h] BYREF
  _BYTE v95[64]; // [rsp+420h] [rbp+320h] BYREF
  _BYTE v96[64]; // [rsp+460h] [rbp+360h] BYREF
  _BYTE v97[64]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v98[64]; // [rsp+4E0h] [rbp+3E0h] BYREF
  _BYTE v99[64]; // [rsp+520h] [rbp+420h] BYREF
  _BYTE v100[64]; // [rsp+560h] [rbp+460h] BYREF
  _BYTE v101[64]; // [rsp+5A0h] [rbp+4A0h] BYREF
  _BYTE v102[64]; // [rsp+5E0h] [rbp+4E0h] BYREF
  _BYTE v103[64]; // [rsp+620h] [rbp+520h] BYREF

  sub_18004C220(a2, &v70, 0);
  v3 = v70;
  v4 = sub_180016F54((__int64)v72, (__int64)&unk_1801C8568);
  sub_180041F14((__int64)&v79, v4, 7);
  sub_18007965C(v3, &v79, 0LL);
  sub_180042330((__int64)&v79);
  v5 = sub_180079E74(v70, &unk_1801C8568);
  v79 = xmmword_1800F7620;
  v80 = xmmword_1800F7630;
  v81 = xmmword_1800F7640;
  v82 = xmmword_1800F7650;
  sub_18007A7FC(v70, v5, &v79);
  sub_180079CCC(v70);
  v6 = unknown_libname_81(&v74, &v70);
  sub_18005C16C(v7, v6);
  if ( v71 )
    sub_18001050C(v71);
  sub_18004C220(a2, &v70, 4u);
  v8 = v70;
  v9 = sub_180016F54((__int64)v72, (__int64)&unk_1801C7948);
  sub_180041F14((__int64)&v79, v9, 7);
  sub_18007965C(v8, &v79, 1LL);
  sub_180042330((__int64)&v79);
  v10 = sub_180079E74(v70, &unk_1801C7948);
  v79 = xmmword_1800F7620;
  v80 = xmmword_1800F7630;
  v81 = xmmword_1800F7640;
  v82 = xmmword_1800F7650;
  sub_18007A7FC(v70, v10, &v79);
  v11 = v70;
  v12 = sub_180016F54((__int64)v72, (__int64)&unk_1801C7968);
  sub_180041F14((__int64)&v79, v12, 5);
  sub_18007965C(v11, &v79, 1LL);
  sub_180042330((__int64)&v79);
  sub_180079CCC(v70);
  v13 = unknown_libname_81(&v74, &v70);
  sub_18005C16C(v14, v13);
  if ( v71 )
    sub_18001050C(v71);
  sub_18004C220(a2, &v70, 2u);
  v15 = v70;
  v16 = sub_180016F54((__int64)v72, (__int64)&unk_1801C8588);
  sub_180041F14((__int64)&v79, v16, 8);
  v17 = (unsigned __int16)sub_18007965C(v15, &v79, 0LL);
  sub_180042330((__int64)&v79);
  *(_DWORD *)(*(_QWORD *)(v70 + 104)
            + 40LL * *(unsigned int *)(*(_QWORD *)(v70 + 56) + 56LL * *(unsigned __int16 *)(v70 + 2 * v17 + 128) + 40)
            + 32) = 11;
  v18 = v70;
  v19 = sub_180016F54((__int64)v72, (__int64)&unk_1801C8768);
  sub_180041F14((__int64)&v79, v19, 8);
  v20 = (unsigned __int16)sub_18007965C(v18, &v79, 0LL);
  sub_180042330((__int64)&v79);
  *(_DWORD *)(*(_QWORD *)(v70 + 104)
            + 40LL * *(unsigned int *)(*(_QWORD *)(v70 + 56) + 56LL * *(unsigned __int16 *)(v70 + 2 * v20 + 128) + 40)
            + 32) = 12;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018C610);
  v77 = si128;
  v78 = si128;
  v72[0] = (__int128)si128;
  v75 = 0LL;
  v74 = 0LL;
  sub_180076E8C(0.25, 0.25, 0.25, (__int64)&v75, (__int64)&v74);
  v21 = sub_180016F54((__int64)v73, (__int64)&unk_1801C85A8);
  sub_180041F14((__int64)v86, v21, 2);
  v22 = sub_180016F54((__int64)&v79, (__int64)&unk_1801C85C8);
  sub_1800421E8((__int64)v87, v22, v23, 1.0);
  v24 = sub_180016F54((__int64)v73, (__int64)&unk_1801C85E8);
  sub_180041F14((__int64)v88, v24, 2);
  v25 = sub_180016F54((__int64)&v79, (__int64)&unk_1801C8608);
  sub_180041F14((__int64)v89, v25, 2);
  v26 = sub_180016F54((__int64)v73, (__int64)&unk_1801C8628);
  sub_180042024((__int64)v90, v26, v27, &v75);
  v28 = sub_180016F54((__int64)&v79, (__int64)&unk_1801C8648);
  sub_180042024((__int64)v91, v28, v29, &v74);
  v30 = sub_180016F54((__int64)v73, (__int64)&unk_1801C8668);
  sub_180041F74((__int64)v92, v30, v31, (__int128 *)si128.m128i_i8);
  v32 = sub_180016F54((__int64)&v79, (__int64)&unk_1801C8688);
  sub_180041F74((__int64)v93, v32, v33, (__int128 *)v77.m128i_i8);
  v34 = sub_180016F54((__int64)v73, (__int64)&unk_1801C86A8);
  sub_180041F74((__int64)v94, v34, v35, (__int128 *)v78.m128i_i8);
  v36 = sub_180016F54((__int64)&v79, (__int64)&unk_1801C86C8);
  sub_180041F74((__int64)v95, v36, v37, v72);
  v38 = sub_180016F54((__int64)v73, (__int64)&unk_1801C86E8);
  sub_180041F14((__int64)v96, v38, 5);
  v39 = sub_180016F54((__int64)&v79, (__int64)&unk_1801C8708);
  sub_180041F14((__int64)v97, v39, 5);
  v40 = sub_180016F54((__int64)v73, (__int64)&unk_1801C8728);
  sub_180041F14((__int64)v98, v40, 5);
  v41 = sub_180016F54((__int64)&v79, (__int64)&unk_1801C8748);
  sub_180041F14((__int64)v99, v41, 5);
  v72[0] = 0LL;
  v42 = sub_180016F54((__int64)v73, (__int64)&unk_1801C8788);
  sub_180042024((__int64)v100, v42, v43, v72);
  v72[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_18018C610);
  v44 = sub_180016F54((__int64)&v79, (__int64)&unk_1801C87A8);
  sub_180041F74((__int64)v101, v44, v45, v72);
  v72[0] = 0LL;
  v46 = sub_180016F54((__int64)v73, (__int64)&unk_1801C87C8);
  sub_180041F74((__int64)v102, v46, v47, v72);
  v72[0] = 0LL;
  v48 = sub_180016F54((__int64)&v79, (__int64)&unk_1801C87E8);
  sub_180041F74((__int64)v103, v48, v49, v72);
  sub_180079590(v70, v86, 18LL, 0LL);
  sub_180079CCC(v70);
  v50 = unknown_libname_81(v72, &v70);
  sub_18005C16C(v51, v50);
  sub_18000B2D4((__int64)v86, 64LL, 18LL, (void (__fastcall *)(__int64))sub_180042330);
  if ( v71 )
    sub_18001050C(v71);
  sub_18004C220(a2, &v70, 6u);
  v52 = sub_180016F54((__int64)&v79, (__int64)&unk_1801C7448);
  sub_180041F14((__int64)v86, v52, 2);
  v53 = sub_180016F54((__int64)v73, (__int64)&unk_1801C7468);
  sub_180041F14((__int64)v87, v53, 2);
  v54 = sub_180016F54((__int64)&v79, (__int64)&unk_1801C7488);
  sub_180041F14((__int64)v88, v54, 2);
  v55 = sub_180016F54((__int64)v73, (__int64)&unk_1801C74E8);
  sub_180041F14((__int64)v89, v55, 2);
  sub_180079590(v70, v86, 4LL, 1LL);
  v56 = v70;
  v57 = sub_180016F54((__int64)&v79, (__int64)&unk_1801C77C8);
  sub_180041F14((__int64)v83, v57, 8);
  v58 = (unsigned __int16)sub_18007965C(v56, v83, 1LL);
  sub_180042330((__int64)v83);
  v59 = v70;
  v60 = sub_180016F54((__int64)v73, (__int64)&unk_1801C77E8);
  sub_180041F14((__int64)v84, v60, 8);
  v61 = (unsigned __int16)sub_18007965C(v59, v84, 1LL);
  sub_180042330((__int64)v84);
  v62 = v70;
  v63 = sub_180016F54((__int64)v72, (__int64)&unk_1801C7808);
  sub_180041F14((__int64)v85, v63, 8);
  v64 = (unsigned __int16)sub_18007965C(v62, v85, 1LL);
  sub_180042330((__int64)v85);
  *(_DWORD *)(*(_QWORD *)(v70 + 104)
            + 40LL * *(unsigned int *)(*(_QWORD *)(v70 + 56) + 56LL * *(unsigned __int16 *)(v70 + 2 * v58 + 128) + 40)
            + 32) = 5;
  *(_DWORD *)(*(_QWORD *)(v70 + 104)
            + 40LL * *(unsigned int *)(*(_QWORD *)(v70 + 56) + 56LL * *(unsigned __int16 *)(v70 + 2 * v61 + 128) + 40)
            + 32) = 6;
  *(_DWORD *)(*(_QWORD *)(v70 + 104)
            + 40LL * *(unsigned int *)(*(_QWORD *)(v70 + 56) + 56LL * *(unsigned __int16 *)(v70 + 2 * v64 + 128) + 40)
            + 32) = 7;
  sub_180079CCC(v70);
  v65 = unknown_libname_81(v72, &v70);
  sub_18005C16C(v66, v65);
  sub_18000B2D4((__int64)v86, 64LL, 4LL, (void (__fastcall *)(__int64))sub_180042330);
  if ( v71 )
    sub_18001050C(v71);
  sub_18004C220(a2, &v70, 9u);
  sub_1800791C4(v70, &unk_1801C7208, 7LL, 3LL);
  sub_1800791C4(v70, &unk_1801C7228, 5LL, 3LL);
  sub_1800791C4(v70, &unk_1801C7268, 5LL, 3LL);
  sub_1800791C4(v70, &unk_1801C71C8, 5LL, 3LL);
  sub_1800791C4(v70, &unk_1801C71E8, 5LL, 3LL);
  sub_180079CCC(v70);
  v67 = unknown_libname_81(v72, &v70);
  result = sub_18005C16C(v68, v67);
  if ( v71 )
    return sub_18001050C(v71);
  return result;
}
