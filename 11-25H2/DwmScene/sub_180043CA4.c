/*
 * XREFs of sub_180043CA4 @ 0x180043CA4
 * Callers:
 *     sub_1800750C0 @ 0x1800750C0 (sub_1800750C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_180041F14 @ 0x180041F14 (sub_180041F14.c)
 *     sub_180042330 @ 0x180042330 (sub_180042330.c)
 *     sub_18004C220 @ 0x18004C220 (sub_18004C220.c)
 *     sub_18005C16C @ 0x18005C16C (sub_18005C16C.c)
 *     sub_1800790A4 @ 0x1800790A4 (sub_1800790A4.c)
 *     sub_180079590 @ 0x180079590 (sub_180079590.c)
 *     sub_18007965C @ 0x18007965C (sub_18007965C.c)
 *     sub_180079CCC @ 0x180079CCC (sub_180079CCC.c)
 *     sub_180079E74 @ 0x180079E74 (sub_180079E74.c)
 *     sub_18007A830 @ 0x18007A830 (sub_18007A830.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall sub_180043CA4(__int64 a1, __int64 a2)
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
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  unsigned __int16 v31; // ax
  unsigned __int16 v32; // ax
  unsigned __int16 v33; // ax
  unsigned __int16 v34; // ax
  unsigned __int16 v35; // ax
  unsigned __int16 v36; // ax
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rbx
  _QWORD *v49; // rax
  __int64 v50; // r9
  __int64 result; // rax
  __int64 v52; // rcx
  __int64 v53; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v54; // [rsp+28h] [rbp-D8h]
  _QWORD v55[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v56[32]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v57[32]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v58; // [rsp+80h] [rbp-80h]
  _BYTE v59[40]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v60[64]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v61[64]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v62[64]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v63[64]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v64[64]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v65[64]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v66[64]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v67[64]; // [rsp+270h] [rbp+170h] BYREF
  _BYTE v68[64]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v69[64]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _BYTE v70[64]; // [rsp+330h] [rbp+230h] BYREF
  _BYTE v71[64]; // [rsp+370h] [rbp+270h] BYREF
  _BYTE v72[64]; // [rsp+3B0h] [rbp+2B0h] BYREF
  _BYTE v73[64]; // [rsp+3F0h] [rbp+2F0h] BYREF
  _BYTE v74[64]; // [rsp+430h] [rbp+330h] BYREF
  _BYTE v75[64]; // [rsp+470h] [rbp+370h] BYREF
  _BYTE v76[64]; // [rsp+4B0h] [rbp+3B0h] BYREF

  v58 = a2;
  sub_18004C220(a1, &v53, 7LL);
  v3 = sub_180016F54((__int64)v57, (__int64)&unk_1801C7A28);
  sub_180041F14((__int64)v65, v3, 7);
  v4 = sub_180016F54((__int64)v56, (__int64)&unk_1801C7A48);
  sub_180041F14((__int64)v66, v4, 7);
  v5 = sub_180016F54((__int64)v57, (__int64)&unk_1801C7A68);
  sub_180041F14((__int64)v67, v5, 5);
  v6 = sub_180016F54((__int64)v56, (__int64)&unk_1801C7A88);
  sub_180041F14((__int64)v68, v6, 5);
  v7 = sub_180016F54((__int64)v57, (__int64)&unk_1801C7AA8);
  sub_180041F14((__int64)v69, v7, 5);
  v8 = sub_180016F54((__int64)v56, (__int64)&unk_1801C7AC8);
  sub_180041F14((__int64)v70, v8, 5);
  v9 = sub_180016F54((__int64)v57, (__int64)&unk_1801C7AE8);
  sub_180041F14((__int64)v71, v9, 5);
  v10 = sub_180016F54((__int64)v56, (__int64)&unk_1801C7B08);
  sub_180041F14((__int64)v72, v10, 7);
  v11 = sub_180016F54((__int64)v57, (__int64)&unk_1801C7B28);
  sub_180041F14((__int64)v73, v11, 7);
  v12 = sub_180016F54((__int64)v56, (__int64)&unk_1801C7B48);
  sub_180041F14((__int64)v74, v12, 5);
  v13 = sub_180016F54((__int64)v57, (__int64)&unk_1801C7B68);
  sub_180041F14((__int64)v75, v13, 6);
  v14 = sub_180016F54((__int64)v56, (__int64)&unk_1801C7BC8);
  sub_180041F14((__int64)v76, v14, 6);
  sub_180079590(v53, v65, 12LL, 0LL);
  v15 = v53;
  v16 = sub_180016F54((__int64)v56, (__int64)&unk_1801C7C28);
  sub_180041F14((__int64)v60, v16, 5);
  sub_18007965C(v15, v60, 1LL);
  sub_180042330((__int64)v60);
  v17 = v53;
  v18 = sub_180016F54((__int64)v56, (__int64)&unk_1801C7C08);
  sub_180041F14((__int64)v60, v18, 2);
  sub_18007965C(v17, v60, 1LL);
  sub_180042330((__int64)v60);
  v19 = v53;
  v20 = sub_180016F54((__int64)v56, (__int64)&unk_1801C7BE8);
  sub_180041F14((__int64)v60, v20, 2);
  sub_18007965C(v19, v60, 0LL);
  sub_180042330((__int64)v60);
  v21 = v53;
  v22 = sub_180016F54((__int64)v56, (__int64)&unk_1801C7C48);
  sub_180041F14((__int64)v60, v22, 2);
  sub_18007965C(v21, v60, 0LL);
  sub_180042330((__int64)v60);
  v23 = v53;
  v24 = sub_180016F54((__int64)v56, (__int64)&unk_1801C7C68);
  sub_180041F14((__int64)v60, v24, 2);
  sub_18007965C(v23, v60, 0LL);
  sub_180042330((__int64)v60);
  v25 = v53;
  v26 = sub_180016F54((__int64)v56, (__int64)&unk_1801C7C88);
  sub_180041F14((__int64)v60, v26, 6);
  sub_18007965C(v25, v60, 0LL);
  sub_180042330((__int64)v60);
  v27 = v53;
  v28 = sub_180016F54((__int64)v56, (__int64)&unk_1801C7B88);
  sub_180041F14((__int64)v60, v28, 2);
  sub_18007965C(v27, v60, 0LL);
  sub_180042330((__int64)v60);
  v29 = v53;
  v30 = sub_180016F54((__int64)v56, (__int64)&unk_1801C7BA8);
  sub_180041F14((__int64)v60, v30, 2);
  sub_18007965C(v29, v60, 0LL);
  sub_180042330((__int64)v60);
  v31 = sub_180079E74(v53, &unk_1801C7BE8);
  *(_DWORD *)sub_1800790A4(v53, v31) = 0;
  v32 = sub_180079E74(v53, &unk_1801C7C08);
  *(_DWORD *)sub_1800790A4(v53, v32) = 0;
  v33 = sub_180079E74(v53, &unk_1801C7C28);
  v55[0] = 0LL;
  v55[1] = _mm_srli_si128((__m128i)xmmword_18018C660, 8).m128i_u64[0];
  sub_18007A830(v53, v33, v55);
  v34 = sub_180079E74(v53, &unk_1801C7C48);
  *(_DWORD *)sub_1800790A4(v53, v34) = 0;
  v35 = sub_180079E74(v53, &unk_1801C7C68);
  *(_DWORD *)sub_1800790A4(v53, v35) = 0;
  v36 = sub_180079E74(v53, &unk_1801C7BA8);
  *(_DWORD *)sub_1800790A4(v53, v36) = 0;
  v37 = v53;
  v38 = sub_180016F54((__int64)v56, (__int64)&unk_1801C7CC8);
  sub_180041F14((__int64)v61, v38, 8);
  v39 = (unsigned __int16)sub_18007965C(v37, v61, 0LL);
  sub_180042330((__int64)v61);
  v40 = v53;
  v41 = sub_180016F54((__int64)v57, (__int64)&unk_1801C7CE8);
  sub_180041F14((__int64)v62, v41, 8);
  v42 = (unsigned __int16)sub_18007965C(v40, v62, 0LL);
  sub_180042330((__int64)v62);
  v43 = v53;
  v44 = sub_180016F54((__int64)v59, (__int64)&unk_1801C7D08);
  sub_180041F14((__int64)v63, v44, 8);
  v45 = (unsigned __int16)sub_18007965C(v43, v63, 0LL);
  sub_180042330((__int64)v63);
  v46 = v53;
  v47 = sub_180016F54((__int64)v60, (__int64)&unk_1801C7CA8);
  sub_180041F14((__int64)v64, v47, 8);
  v48 = (unsigned __int16)sub_18007965C(v46, v64, 0LL);
  sub_180042330((__int64)v64);
  *(_DWORD *)(*(_QWORD *)(v53 + 104)
            + 40LL * *(unsigned int *)(*(_QWORD *)(v53 + 56) + 56LL * *(unsigned __int16 *)(v53 + 2 * v39 + 128) + 40)
            + 32) = 0;
  *(_DWORD *)(*(_QWORD *)(v53 + 104)
            + 40LL * *(unsigned int *)(*(_QWORD *)(v53 + 56) + 56LL * *(unsigned __int16 *)(v53 + 2 * v42 + 128) + 40)
            + 32) = 2;
  *(_DWORD *)(*(_QWORD *)(v53 + 104)
            + 40LL * *(unsigned int *)(*(_QWORD *)(v53 + 56) + 56LL * *(unsigned __int16 *)(v53 + 2 * v45 + 128) + 40)
            + 32) = 13;
  *(_DWORD *)(*(_QWORD *)(v53 + 104)
            + 40LL * *(unsigned int *)(*(_QWORD *)(v53 + 56) + 56LL * *(unsigned __int16 *)(v53 + 2 * v48 + 128) + 40)
            + 32) = 12;
  sub_180079CCC(v53);
  v49 = unknown_libname_81(v55, &v53);
  sub_18005C16C(v50, v49);
  result = sub_18000B2D4((__int64)v65, 64LL, 12LL, (void (__fastcall *)(__int64))sub_180042330);
  if ( v54 )
    result = sub_18001050C(v54);
  v52 = *(_QWORD *)(a2 + 8);
  if ( v52 )
    return sub_18001050C(v52);
  return result;
}
