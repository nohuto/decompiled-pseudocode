/*
 * XREFs of sub_180043E04 @ 0x180043E04
 * Callers:
 *     sub_180075220 @ 0x180075220 (sub_180075220.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_180042074 @ 0x180042074 (sub_180042074.c)
 *     sub_180042490 @ 0x180042490 (sub_180042490.c)
 *     sub_18004C380 @ 0x18004C380 (sub_18004C380.c)
 *     sub_18005C2CC @ 0x18005C2CC (sub_18005C2CC.c)
 *     sub_180079204 @ 0x180079204 (sub_180079204.c)
 *     sub_1800796F0 @ 0x1800796F0 (sub_1800796F0.c)
 *     sub_1800797BC @ 0x1800797BC (sub_1800797BC.c)
 *     sub_180079E2C @ 0x180079E2C (sub_180079E2C.c)
 *     sub_180079FD4 @ 0x180079FD4 (sub_180079FD4.c)
 *     sub_18007A990 @ 0x18007A990 (sub_18007A990.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall sub_180043E04(__int64 a1, __int64 a2)
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
  sub_18004C380(a1, &v53, 7LL);
  v3 = sub_180017054((__int64)v57, (__int64)&unk_1801C8A38);
  sub_180042074((__int64)v65, v3, 7);
  v4 = sub_180017054((__int64)v56, (__int64)&unk_1801C8A58);
  sub_180042074((__int64)v66, v4, 7);
  v5 = sub_180017054((__int64)v57, (__int64)&unk_1801C8A78);
  sub_180042074((__int64)v67, v5, 5);
  v6 = sub_180017054((__int64)v56, (__int64)&unk_1801C8A98);
  sub_180042074((__int64)v68, v6, 5);
  v7 = sub_180017054((__int64)v57, (__int64)&unk_1801C8AB8);
  sub_180042074((__int64)v69, v7, 5);
  v8 = sub_180017054((__int64)v56, (__int64)&unk_1801C8AD8);
  sub_180042074((__int64)v70, v8, 5);
  v9 = sub_180017054((__int64)v57, (__int64)&unk_1801C8AF8);
  sub_180042074((__int64)v71, v9, 5);
  v10 = sub_180017054((__int64)v56, (__int64)&unk_1801C8B18);
  sub_180042074((__int64)v72, v10, 7);
  v11 = sub_180017054((__int64)v57, (__int64)&unk_1801C8B38);
  sub_180042074((__int64)v73, v11, 7);
  v12 = sub_180017054((__int64)v56, (__int64)&unk_1801C8B58);
  sub_180042074((__int64)v74, v12, 5);
  v13 = sub_180017054((__int64)v57, (__int64)&unk_1801C8B78);
  sub_180042074((__int64)v75, v13, 6);
  v14 = sub_180017054((__int64)v56, (__int64)&unk_1801C8BD8);
  sub_180042074((__int64)v76, v14, 6);
  sub_1800796F0(v53, v65, 12LL, 0LL);
  v15 = v53;
  v16 = sub_180017054((__int64)v56, (__int64)&unk_1801C8C38);
  sub_180042074((__int64)v60, v16, 5);
  sub_1800797BC(v15, v60, 1LL);
  sub_180042490((__int64)v60);
  v17 = v53;
  v18 = sub_180017054((__int64)v56, (__int64)&unk_1801C8C18);
  sub_180042074((__int64)v60, v18, 2);
  sub_1800797BC(v17, v60, 1LL);
  sub_180042490((__int64)v60);
  v19 = v53;
  v20 = sub_180017054((__int64)v56, (__int64)&unk_1801C8BF8);
  sub_180042074((__int64)v60, v20, 2);
  sub_1800797BC(v19, v60, 0LL);
  sub_180042490((__int64)v60);
  v21 = v53;
  v22 = sub_180017054((__int64)v56, (__int64)&unk_1801C8C58);
  sub_180042074((__int64)v60, v22, 2);
  sub_1800797BC(v21, v60, 0LL);
  sub_180042490((__int64)v60);
  v23 = v53;
  v24 = sub_180017054((__int64)v56, (__int64)&unk_1801C8C78);
  sub_180042074((__int64)v60, v24, 2);
  sub_1800797BC(v23, v60, 0LL);
  sub_180042490((__int64)v60);
  v25 = v53;
  v26 = sub_180017054((__int64)v56, (__int64)&unk_1801C8C98);
  sub_180042074((__int64)v60, v26, 6);
  sub_1800797BC(v25, v60, 0LL);
  sub_180042490((__int64)v60);
  v27 = v53;
  v28 = sub_180017054((__int64)v56, (__int64)&unk_1801C8B98);
  sub_180042074((__int64)v60, v28, 2);
  sub_1800797BC(v27, v60, 0LL);
  sub_180042490((__int64)v60);
  v29 = v53;
  v30 = sub_180017054((__int64)v56, (__int64)&unk_1801C8BB8);
  sub_180042074((__int64)v60, v30, 2);
  sub_1800797BC(v29, v60, 0LL);
  sub_180042490((__int64)v60);
  v31 = sub_180079FD4(v53, &unk_1801C8BF8);
  *(_DWORD *)sub_180079204(v53, v31) = 0;
  v32 = sub_180079FD4(v53, &unk_1801C8C18);
  *(_DWORD *)sub_180079204(v53, v32) = 0;
  v33 = sub_180079FD4(v53, &unk_1801C8C38);
  v55[0] = 0LL;
  v55[1] = _mm_srli_si128((__m128i)xmmword_18018D650, 8).m128i_u64[0];
  sub_18007A990(v53, v33, v55);
  v34 = sub_180079FD4(v53, &unk_1801C8C58);
  *(_DWORD *)sub_180079204(v53, v34) = 0;
  v35 = sub_180079FD4(v53, &unk_1801C8C78);
  *(_DWORD *)sub_180079204(v53, v35) = 0;
  v36 = sub_180079FD4(v53, &unk_1801C8BB8);
  *(_DWORD *)sub_180079204(v53, v36) = 0;
  v37 = v53;
  v38 = sub_180017054((__int64)v56, (__int64)&unk_1801C8CD8);
  sub_180042074((__int64)v61, v38, 8);
  v39 = (unsigned __int16)sub_1800797BC(v37, v61, 0LL);
  sub_180042490((__int64)v61);
  v40 = v53;
  v41 = sub_180017054((__int64)v57, (__int64)&unk_1801C8CF8);
  sub_180042074((__int64)v62, v41, 8);
  v42 = (unsigned __int16)sub_1800797BC(v40, v62, 0LL);
  sub_180042490((__int64)v62);
  v43 = v53;
  v44 = sub_180017054((__int64)v59, (__int64)&unk_1801C8D18);
  sub_180042074((__int64)v63, v44, 8);
  v45 = (unsigned __int16)sub_1800797BC(v43, v63, 0LL);
  sub_180042490((__int64)v63);
  v46 = v53;
  v47 = sub_180017054((__int64)v60, (__int64)&unk_1801C8CB8);
  sub_180042074((__int64)v64, v47, 8);
  v48 = (unsigned __int16)sub_1800797BC(v46, v64, 0LL);
  sub_180042490((__int64)v64);
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
  sub_180079E2C(v53);
  v49 = unknown_libname_81(v55, &v53);
  sub_18005C2CC(v50, v49);
  result = sub_18000B6A4((__int64)v65, 64LL, 12LL, (void (__fastcall *)(__int64))sub_180042490);
  if ( v54 )
    result = sub_18001060C(v54);
  v52 = *(_QWORD *)(a2 + 8);
  if ( v52 )
    return sub_18001060C(v52);
  return result;
}
