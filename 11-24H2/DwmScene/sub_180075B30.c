/*
 * XREFs of sub_180075B30 @ 0x180075B30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_1800176A4 @ 0x1800176A4 (sub_1800176A4.c)
 *     sub_18002C5D8 @ 0x18002C5D8 (sub_18002C5D8.c)
 *     sub_18004094C @ 0x18004094C (sub_18004094C.c)
 *     sub_180042074 @ 0x180042074 (sub_180042074.c)
 *     sub_1800420D4 @ 0x1800420D4 (sub_1800420D4.c)
 *     sub_180042184 @ 0x180042184 (sub_180042184.c)
 *     sub_180042348 @ 0x180042348 (sub_180042348.c)
 *     sub_180042490 @ 0x180042490 (sub_180042490.c)
 *     sub_18004C380 @ 0x18004C380 (sub_18004C380.c)
 *     sub_18004C3C8 @ 0x18004C3C8 (sub_18004C3C8.c)
 *     sub_18004C6FC @ 0x18004C6FC (sub_18004C6FC.c)
 *     sub_18004CE40 @ 0x18004CE40 (sub_18004CE40.c)
 *     sub_18005B0FC @ 0x18005B0FC (sub_18005B0FC.c)
 *     sub_18005B4F8 @ 0x18005B4F8 (sub_18005B4F8.c)
 *     sub_18005B5DC @ 0x18005B5DC (sub_18005B5DC.c)
 *     sub_18005B954 @ 0x18005B954 (sub_18005B954.c)
 *     sub_18005C2CC @ 0x18005C2CC (sub_18005C2CC.c)
 *     sub_180076594 @ 0x180076594 (sub_180076594.c)
 *     sub_180079324 @ 0x180079324 (sub_180079324.c)
 *     sub_1800796F0 @ 0x1800796F0 (sub_1800796F0.c)
 *     sub_1800797BC @ 0x1800797BC (sub_1800797BC.c)
 *     sub_180079E2C @ 0x180079E2C (sub_180079E2C.c)
 *     sub_18007A394 @ 0x18007A394 (sub_18007A394.c)
 *     sub_18007A9C4 @ 0x18007A9C4 (sub_18007A9C4.c)
 *     sub_18007E3AC @ 0x18007E3AC (sub_18007E3AC.c)
 *     sub_18007E508 @ 0x18007E508 (sub_18007E508.c)
 *     sub_18007E5A4 @ 0x18007E5A4 (sub_18007E5A4.c)
 *     sub_18007E93C @ 0x18007E93C (sub_18007E93C.c)
 */

// Hidden C++ exception states: #wind=26
__int64 __fastcall sub_180075B30(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r15
  __int64 v5; // r13
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  _DWORD *v15; // rsi
  _DWORD *v16; // r12
  __int64 v17; // r13
  __int64 v18; // r15
  __int64 v19; // rbx
  _QWORD *v20; // rax
  _QWORD *v21; // rbx
  __int64 v22; // r14
  char v23; // al
  __int64 *v24; // rax
  _QWORD *v25; // rax
  char v26; // al
  __int64 *v27; // rax
  _QWORD *v28; // rax
  char v29; // al
  __int64 *v30; // rax
  _QWORD *v31; // rax
  char v32; // al
  __int64 *v33; // rax
  _QWORD *v34; // rbx
  _QWORD *v35; // rax
  _QWORD *v36; // r9
  __int64 v37; // rbx
  __int64 *v38; // rax
  _QWORD *v39; // rbx
  _QWORD *v40; // rax
  _QWORD *v41; // r9
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // r8
  __int64 v68; // rbx
  __int64 v69; // rax
  __int64 v70; // rbx
  _QWORD *v71; // rax
  __int64 v72; // r9
  __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // r8
  __int64 result; // rax
  int v77; // [rsp+20h] [rbp-E0h]
  __int64 v79; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v80; // [rsp+58h] [rbp-A8h]
  __int128 v81; // [rsp+60h] [rbp-A0h]
  __int64 v82; // [rsp+70h] [rbp-90h]
  __int64 v83; // [rsp+78h] [rbp-88h]
  __int64 v84[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v85; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v86; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v87; // [rsp+B0h] [rbp-50h]
  __int64 v88; // [rsp+B8h] [rbp-48h]
  __int64 v89; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v90; // [rsp+D0h] [rbp-30h]
  __int64 v91; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v92; // [rsp+E0h] [rbp-20h]
  __int64 v93; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v94; // [rsp+F0h] [rbp-10h]
  __int64 v95; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v96; // [rsp+100h] [rbp+0h]
  __int64 v97; // [rsp+108h] [rbp+8h] BYREF
  __int64 v98; // [rsp+110h] [rbp+10h]
  __m128i si128; // [rsp+118h] [rbp+18h] BYREF
  int v100; // [rsp+128h] [rbp+28h]
  int v101; // [rsp+12Ch] [rbp+2Ch]
  _QWORD v102[8]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v103[64]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v104[64]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v105[64]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v106[64]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v107[64]; // [rsp+270h] [rbp+170h] BYREF
  _BYTE v108[64]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v109[64]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _BYTE v110[64]; // [rsp+330h] [rbp+230h] BYREF
  _BYTE v111[64]; // [rsp+370h] [rbp+270h] BYREF
  _BYTE v112[64]; // [rsp+3B0h] [rbp+2B0h] BYREF
  _BYTE v113[64]; // [rsp+3F0h] [rbp+2F0h] BYREF
  _BYTE v114[64]; // [rsp+430h] [rbp+330h] BYREF
  _BYTE v115[64]; // [rsp+470h] [rbp+370h] BYREF
  _BYTE v116[64]; // [rsp+4B0h] [rbp+3B0h] BYREF
  _BYTE v117[64]; // [rsp+4F0h] [rbp+3F0h] BYREF
  _BYTE v118[64]; // [rsp+530h] [rbp+430h] BYREF
  _BYTE v119[64]; // [rsp+570h] [rbp+470h] BYREF
  _BYTE v120[64]; // [rsp+5B0h] [rbp+4B0h] BYREF

  v4 = a2;
  v89 = a2;
  v5 = a1;
  v6 = sub_18004094C(a1 + 8, v84);
  v7 = sub_180017054((__int64)&v86, (__int64)&unk_1801C8F18);
  v8 = sub_18004C3C8(v4, &v91, v7, v6);
  v9 = (__int64 *)(v5 + 56);
  sub_180011110((_QWORD *)(v5 + 56), v8);
  if ( v92 )
    sub_18001060C(v92);
  v10 = *v9;
  v11 = std::string::string(&v86, "ImageProcessing");
  sub_180076594(v10, v11);
  sub_1800176A4((void **)(*v9 + 528), (__int64)a3);
  LODWORD(v85) = sub_18005B0FC(*v9, (__int64)&unk_1801C9218);
  v84[0] = (__int64)&v85;
  v84[1] = (__int64)&v85 + 4;
  v85 = sub_18004C6FC(v12, (_DWORD **)v84);
  si128.m128i_i32[0] = sub_18005B0FC(*v9, (__int64)&unk_1801C9238);
  si128.m128i_i32[1] = sub_18005B0FC(*v9, (__int64)&unk_1801C9258);
  si128.m128i_i32[2] = sub_18005B0FC(*v9, (__int64)&unk_1801C9278);
  si128.m128i_i32[3] = sub_18005B0FC(*v9, (__int64)&unk_1801C9298);
  v100 = sub_18005B0FC(*v9, (__int64)&unk_1801C92B8);
  v101 = sub_18005B0FC(*v9, (__int64)&unk_1801C92D8);
  v84[0] = (__int64)&si128;
  v84[1] = (__int64)v102;
  v14 = sub_18004C6FC(v13, (_DWORD **)v84);
  v15 = (_DWORD *)*a3;
  v16 = (_DWORD *)a3[1];
  if ( (_DWORD *)*a3 != v16 )
  {
    v17 = v85;
    v18 = v14;
    do
    {
      *(_DWORD *)(*v9 + 552) = *v15;
      v19 = *v9;
      v20 = std::string::string(v84, "ImageProcessingCameraEffects");
      sub_18005B5DC(v19, (__int64 *)&v86, (__int64)v20, v17, v77, v18);
      v21 = v86;
      v22 = v87;
      while ( v21 != (_QWORD *)v22 )
      {
        LODWORD(v79) = 0;
        v80 = 33LL;
        v81 = 0LL;
        v82 = 0LL;
        v83 = 0LL;
        sub_18007E93C(*v21, &v79);
        v21 += 2;
      }
      *(_OWORD *)v84 = 0LL;
      v23 = sub_18005B0FC(*v9, (__int64)&unk_1801C91F8);
      v24 = sub_18005B4F8(*v9, &v91, 1LL << v23, 0LL, 0);
      sub_180011110(v84, v24);
      if ( v92 )
        sub_18001060C(v92);
      v25 = std::string::string(v102, "ImageProcessingBlur");
      sub_18007E508(v84[0], v25);
      LODWORD(v79) = 0;
      v80 = 33LL;
      v81 = 0LL;
      v82 = 0LL;
      v83 = 0LL;
      sub_18007E93C(v84[0], &v79);
      v26 = sub_18005B0FC(*v9, (__int64)&unk_1801C91D8);
      v27 = sub_18005B4F8(*v9, &v93, 1LL << v26, 0LL, 0);
      sub_180011110(v84, v27);
      if ( v94 )
        sub_18001060C(v94);
      v28 = std::string::string(v102, "ImageProcessingBlur");
      sub_18007E508(v84[0], v28);
      LODWORD(v79) = 0;
      v80 = 33LL;
      v81 = 0LL;
      v82 = 0LL;
      v83 = 0LL;
      sub_18007E93C(v84[0], &v79);
      v29 = sub_18005B0FC(*v9, (__int64)&unk_1801C91B8);
      v30 = sub_18005B4F8(*v9, &v95, 1LL << v29, 0LL, 0);
      sub_180011110(v84, v30);
      if ( v96 )
        sub_18001060C(v96);
      v31 = std::string::string(v102, "ImageProcessingBlur");
      sub_18007E508(v84[0], v31);
      LODWORD(v79) = 0;
      v80 = 33LL;
      v81 = 0LL;
      v82 = 0LL;
      v83 = 0LL;
      sub_18007E93C(v84[0], &v79);
      v32 = sub_18005B0FC(*v9, (__int64)&unk_1801C9198);
      v33 = sub_18005B4F8(*v9, &v97, 1LL << v32, 0LL, 0);
      sub_180011110(v84, v33);
      if ( v98 )
        sub_18001060C(v98);
      v34 = std::string::string(v102, byte_1800F7C80);
      v35 = std::string::string(&v79, "ImageProcessingFullscreen");
      v36 = v34;
      v37 = v84[0];
      sub_18007E5A4(v84[0], v35, 0LL, v36);
      sub_18007E3AC(v37, 14, 2, 3, 1);
      LODWORD(v79) = 0;
      v80 = 33LL;
      v81 = 0LL;
      v82 = 0LL;
      v83 = 0LL;
      sub_18007E93C(v37, &v79);
      v38 = sub_18005B4F8(*v9, &si128, 0LL, 0LL, 0);
      sub_180011110(v84, v38);
      if ( si128.m128i_i64[1] )
        sub_18001060C(si128.m128i_i64[1]);
      v39 = std::string::string(&v79, byte_1800F7C80);
      v40 = std::string::string(v102, "ImageProcessingFullscreen");
      v41 = v39;
      v42 = v84[0];
      sub_18007E5A4(v84[0], v40, 0LL, v41);
      sub_18007E3AC(v42, 0, 2, 0, 1);
      LODWORD(v79) = 0;
      v80 = 33LL;
      v81 = 0LL;
      v82 = 0LL;
      v83 = 0LL;
      sub_18007E93C(v42, &v79);
      *(_DWORD *)(*v9 + 552) = 0;
      if ( v84[1] )
        sub_18001060C(v84[1]);
      if ( v86 )
      {
        sub_18002C5D8((__int64)v86, v87);
        sub_180010234(v86, (v88 - (_QWORD)v86) & 0xFFFFFFFFFFFFFFF0uLL);
      }
      ++v15;
    }
    while ( v15 != v16 );
    v4 = v89;
    v5 = a1;
  }
  sub_18004C380(v4, v84, 6u);
  v43 = sub_180017054((__int64)&v79, (__int64)&unk_1801C8F38);
  sub_180042074((__int64)v103, v43, 8);
  v44 = sub_180017054((__int64)v102, (__int64)&unk_1801C8F58);
  sub_180042074((__int64)v104, v44, 8);
  v45 = sub_180017054((__int64)&v79, (__int64)&unk_1801C8F78);
  sub_180042348((__int64)v105, v45, v46, 1.0);
  sub_1800796F0(v84[0], v103, 3LL, 0LL);
  sub_18007A9C4(v84[0], &unk_1801C8F58, 9LL);
  v47 = sub_180017054((__int64)&v79, (__int64)&unk_1801C8FD8);
  sub_180042074((__int64)v106, v47, 2);
  v48 = sub_180017054((__int64)v102, (__int64)&unk_1801C8FF8);
  sub_180042348((__int64)v107, v48, v49, 1.0);
  v50 = sub_180017054((__int64)&v79, (__int64)&unk_1801C9018);
  sub_180042074((__int64)v108, v50, 2);
  v51 = sub_180017054((__int64)v102, (__int64)&unk_1801C9038);
  sub_180042074((__int64)v109, v51, 5);
  v52 = sub_180017054((__int64)&v79, (__int64)&unk_1801C9058);
  sub_180042074((__int64)v110, v52, 5);
  v53 = sub_180017054((__int64)v102, (__int64)&unk_1801C9078);
  sub_180042074((__int64)v111, v53, 5);
  v54 = sub_180017054((__int64)&v79, (__int64)&unk_1801C9098);
  sub_180042074((__int64)v112, v54, 5);
  si128 = 0LL;
  v55 = sub_180017054((__int64)v102, (__int64)&unk_1801C90D8);
  sub_180042184((__int64)v113, v55, v56, (__int128 *)si128.m128i_i8);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018D600);
  v57 = sub_180017054((__int64)&v79, (__int64)&unk_1801C90F8);
  sub_1800420D4((__int64)v114, v57, v58, (__int128 *)si128.m128i_i8);
  si128 = 0LL;
  v59 = sub_180017054((__int64)v102, (__int64)&unk_1801C9118);
  sub_1800420D4((__int64)v115, v59, v60, (__int128 *)si128.m128i_i8);
  si128 = 0LL;
  v61 = sub_180017054((__int64)&v79, (__int64)&unk_1801C9138);
  sub_1800420D4((__int64)v116, v61, v62, (__int128 *)si128.m128i_i8);
  v63 = sub_180017054((__int64)v102, (__int64)&unk_1801C9158);
  sub_180042074((__int64)v117, v63, 5);
  v64 = sub_180017054((__int64)&v79, (__int64)&unk_1801C9178);
  sub_180042074((__int64)v118, v64, 5);
  v65 = sub_180017054((__int64)v102, (__int64)&unk_1801C8298);
  sub_180042074((__int64)v119, v65, 5);
  si128 = (__m128i)xmmword_18018D380;
  v66 = sub_180017054((__int64)&v79, (__int64)&unk_1801C8FB8);
  sub_180042184((__int64)v120, v66, v67, (__int128 *)si128.m128i_i8);
  sub_1800796F0(v84[0], v106, 15LL, 1LL);
  sub_18007A394(v84[0], 16LL);
  sub_180079324(v84[0], &unk_1801C8F98, 5LL, *(unsigned int *)(v5 + 112));
  v68 = v84[0];
  v69 = sub_180017054((__int64)&v79, (__int64)&unk_1801C90B8);
  sub_180042074((__int64)v102, v69, 8);
  v70 = (unsigned __int16)sub_1800797BC(v68, v102, 1LL);
  sub_180042490((__int64)v102);
  *(_DWORD *)(*(_QWORD *)(v84[0] + 104)
            + 40LL
            * *(unsigned int *)(*(_QWORD *)(v84[0] + 56) + 56LL * *(unsigned __int16 *)(v84[0] + 2 * v70 + 128) + 40)
            + 32) = 12;
  sub_180079E2C(v84[0]);
  v71 = unknown_libname_81(&si128, v84);
  sub_18005C2CC(v72, v71);
  sub_18000B6A4((__int64)v106, 64LL, 15LL, (void (__fastcall *)(__int64))sub_180042490);
  sub_18000B6A4((__int64)v103, 64LL, 3LL, (void (__fastcall *)(__int64))sub_180042490);
  if ( v84[1] )
    sub_18001060C(v84[1]);
  v73 = sub_180017054((__int64)&v79, (__int64)&unk_1801C8ED8);
  sub_18004CE40(v4, &v89, v73);
  unknown_libname_81(v84, (_QWORD *)(v89 + 160));
  v74 = unknown_libname_81(&si128, v84);
  sub_18005C2CC(v75, v74);
  result = sub_18005B954(*v9);
  if ( v84[1] )
    result = sub_18001060C(v84[1]);
  if ( v90 )
    return sub_18001060C(v90);
  return result;
}
