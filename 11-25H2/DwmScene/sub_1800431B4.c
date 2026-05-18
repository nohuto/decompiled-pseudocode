/*
 * XREFs of sub_1800431B4 @ 0x1800431B4
 * Callers:
 *     sub_1800750C0 @ 0x1800750C0 (sub_1800750C0.c)
 *     sub_180076C70 @ 0x180076C70 (sub_180076C70.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180013198 @ 0x180013198 (sub_180013198.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_180041F14 @ 0x180041F14 (sub_180041F14.c)
 *     sub_180041F74 @ 0x180041F74 (sub_180041F74.c)
 *     sub_180042024 @ 0x180042024 (sub_180042024.c)
 *     sub_1800420D4 @ 0x1800420D4 (sub_1800420D4.c)
 *     sub_1800421E8 @ 0x1800421E8 (sub_1800421E8.c)
 *     sub_180042298 @ 0x180042298 (sub_180042298.c)
 *     sub_18004C220 @ 0x18004C220 (sub_18004C220.c)
 *     sub_18005C16C @ 0x18005C16C (sub_18005C16C.c)
 *     sub_180079590 @ 0x180079590 (sub_180079590.c)
 *     sub_180079CCC @ 0x180079CCC (sub_180079CCC.c)
 */

// Hidden C++ exception states: #wind=32
__int64 __fastcall sub_1800431B4(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r8
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax
  void *v12; // rax
  void *v13; // rax
  void *v14; // rax
  void *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // r9
  __int64 result; // rax
  __int64 v43; // rcx
  _BYTE v44[32]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v45[32]; // [rsp+48h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+68h] [rbp-98h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h] BYREF
  __int64 v48; // [rsp+80h] [rbp-80h]
  __int64 v49; // [rsp+88h] [rbp-78h]
  _BYTE v50[64]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v51[64]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v52[64]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v53[64]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v54[64]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v55[64]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v56[64]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v57[64]; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v58[64]; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v59[64]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE v60[64]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v61[64]; // [rsp+350h] [rbp+250h] BYREF
  _BYTE v62[64]; // [rsp+390h] [rbp+290h] BYREF
  _BYTE v63[64]; // [rsp+3D0h] [rbp+2D0h] BYREF
  _BYTE v64[64]; // [rsp+410h] [rbp+310h] BYREF
  _BYTE v65[64]; // [rsp+450h] [rbp+350h] BYREF
  _BYTE v66[64]; // [rsp+490h] [rbp+390h] BYREF
  _BYTE v67[64]; // [rsp+4D0h] [rbp+3D0h] BYREF
  _BYTE v68[64]; // [rsp+510h] [rbp+410h] BYREF
  _BYTE v69[64]; // [rsp+550h] [rbp+450h] BYREF
  _BYTE v70[64]; // [rsp+590h] [rbp+490h] BYREF
  _BYTE v71[64]; // [rsp+5D0h] [rbp+4D0h] BYREF
  _BYTE v72[64]; // [rsp+610h] [rbp+510h] BYREF
  _BYTE v73[64]; // [rsp+650h] [rbp+550h] BYREF
  _BYTE v74[64]; // [rsp+690h] [rbp+590h] BYREF
  _BYTE v75[64]; // [rsp+6D0h] [rbp+5D0h] BYREF
  _BYTE v76[64]; // [rsp+710h] [rbp+610h] BYREF
  _BYTE v77[64]; // [rsp+750h] [rbp+650h] BYREF
  _BYTE v78[64]; // [rsp+790h] [rbp+690h] BYREF
  _BYTE v79[64]; // [rsp+7D0h] [rbp+6D0h] BYREF

  v49 = a2;
  sub_18004C220(a1, &v47, 2LL);
  si128 = (__m128i)xmmword_18018C5F0;
  v3 = sub_180016F54((__int64)v44, (__int64)&unk_1801C6D08);
  sub_180041F74((__int64)v50, v3, v4, (__int128 *)si128.m128i_i8);
  si128 = (__m128i)xmmword_18018C550;
  v5 = sub_180016F54((__int64)v45, (__int64)&unk_1801C6D28);
  sub_180041F74((__int64)v51, v5, v6, (__int128 *)si128.m128i_i8);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018C610);
  v7 = sub_180016F54((__int64)v44, (__int64)&unk_1801C6D48);
  sub_180042024((__int64)v52, v7, v8, (__int128 *)si128.m128i_i8);
  v9 = sub_180013198(v45, (__int64)&unk_1801C6DC8, (__int64)&unk_1801C6CE8);
  sub_180042298((__int64)v53, (__int64)v9);
  v10 = sub_180013198(v44, (__int64)&unk_1801C6DE8, (__int64)&unk_1801C6CE8);
  sub_180042298((__int64)v54, (__int64)v10);
  v11 = sub_180013198(v45, (__int64)&unk_1801C6E08, (__int64)&unk_1801C6CE8);
  sub_180042298((__int64)v55, (__int64)v11);
  v12 = sub_180013198(v44, (__int64)&unk_1801C6E28, (__int64)&unk_1801C6CE8);
  sub_180042298((__int64)v56, (__int64)v12);
  v13 = sub_180013198(v45, (__int64)&unk_1801C6E48, (__int64)&unk_1801C6CE8);
  sub_180042298((__int64)v57, (__int64)v13);
  v14 = sub_180013198(v44, (__int64)&unk_1801C6E68, (__int64)&unk_1801C6CE8);
  sub_180042298((__int64)v58, (__int64)v14);
  v15 = sub_180013198(v45, (__int64)&unk_1801C6E88, (__int64)&unk_1801C6CE8);
  sub_180042298((__int64)v59, (__int64)v15);
  v16 = sub_180016F54((__int64)v44, (__int64)&unk_1801C6EA8);
  sub_180041F14((__int64)v60, v16, 0);
  v17 = sub_180016F54((__int64)v45, (__int64)&unk_1801C6EC8);
  sub_180041F14((__int64)v61, v17, 0);
  v18 = sub_180016F54((__int64)v44, (__int64)&unk_1801C6D88);
  sub_1800421E8((__int64)v62, v18, v19, 1.0);
  v20 = sub_180016F54((__int64)v45, (__int64)&unk_1801C6EE8);
  sub_1800420D4((__int64)v63, v20);
  v21 = sub_180016F54((__int64)v44, (__int64)&unk_1801C6F08);
  sub_1800421E8((__int64)v64, v21, v22, 0.5);
  v23 = sub_180016F54((__int64)v45, (__int64)&unk_1801C6F28);
  sub_180041F14((__int64)v65, v23, 5);
  si128 = 0LL;
  v24 = sub_180016F54((__int64)v44, (__int64)&unk_1801C6DA8);
  sub_180041F74((__int64)v66, v24, v25, (__int128 *)si128.m128i_i8);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018C610);
  v26 = sub_180016F54((__int64)v45, (__int64)&unk_1801C6D68);
  sub_180042024((__int64)v67, v26, v27, (__int128 *)si128.m128i_i8);
  v28 = sub_180016F54((__int64)v44, (__int64)&unk_1801C6F48);
  sub_180042298((__int64)v68, v28);
  v29 = sub_180016F54((__int64)v45, (__int64)&unk_1801C6F68);
  sub_180042298((__int64)v69, v29);
  v30 = sub_180016F54((__int64)v44, (__int64)&unk_1801C6F88);
  sub_180042298((__int64)v70, v30);
  v31 = sub_180016F54((__int64)v45, (__int64)&unk_1801C6FA8);
  sub_180042298((__int64)v71, v31);
  v32 = sub_180016F54((__int64)v44, (__int64)&unk_1801C6FC8);
  sub_180042298((__int64)v72, v32);
  v33 = sub_180016F54((__int64)v45, (__int64)&unk_1801C6DC8);
  sub_180041F14((__int64)v73, v33, 8);
  v34 = sub_180016F54((__int64)v44, (__int64)&unk_1801C6DE8);
  sub_180041F14((__int64)v74, v34, 8);
  v35 = sub_180016F54((__int64)v45, (__int64)&unk_1801C6E08);
  sub_180041F14((__int64)v75, v35, 8);
  v36 = sub_180016F54((__int64)v44, (__int64)&unk_1801C6E28);
  sub_180041F14((__int64)v76, v36, 8);
  v37 = sub_180016F54((__int64)v45, (__int64)&unk_1801C6E68);
  sub_180041F14((__int64)v77, v37, 8);
  v38 = sub_180016F54((__int64)v44, (__int64)&unk_1801C6E48);
  sub_180041F14((__int64)v78, v38, 8);
  v39 = sub_180016F54((__int64)v45, (__int64)&unk_1801C6E88);
  sub_180041F14((__int64)v79, v39, 8);
  sub_180079590(v47, v50, 30LL, 0LL);
  sub_180079CCC(v47);
  v40 = unknown_libname_81(&si128, &v47);
  sub_18005C16C(v41, v40);
  result = sub_18000B2D4((__int64)v50, 64LL, 30LL, (void (__fastcall *)(__int64))sub_180042330);
  if ( v48 )
    result = sub_18001050C(v48);
  v43 = *(_QWORD *)(a2 + 8);
  if ( v43 )
    return sub_18001050C(v43);
  return result;
}
