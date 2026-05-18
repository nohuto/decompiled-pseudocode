/*
 * XREFs of sub_18008F1A8 @ 0x18008F1A8
 * Callers:
 *     sub_1800746A0 @ 0x1800746A0 (sub_1800746A0.c)
 *     sub_180076D60 @ 0x180076D60 (sub_180076D60.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     j_unknown_libname_81 @ 0x180012100 (j_unknown_libname_81.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180040A68 @ 0x180040A68 (sub_180040A68.c)
 *     sub_18004C6FC @ 0x18004C6FC (sub_18004C6FC.c)
 *     sub_18005B4F8 @ 0x18005B4F8 (sub_18005B4F8.c)
 *     sub_18005BAC8 @ 0x18005BAC8 (sub_18005BAC8.c)
 *     sub_18007E36C @ 0x18007E36C (sub_18007E36C.c)
 *     sub_18007E4A4 @ 0x18007E4A4 (sub_18007E4A4.c)
 *     sub_18007E93C @ 0x18007E93C (sub_18007E93C.c)
 *     sub_18007F020 @ 0x18007F020 (sub_18007F020.c)
 *     sub_18008D800 @ 0x18008D800 (sub_18008D800.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008F1A8(__int64 a1, __int64 a2, char a3)
{
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // ebx
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r8
  bool v19; // bl
  __int64 v20; // r14
  __int64 result; // rax
  _QWORD *v22; // rax
  __int64 v23; // r8
  __int64 *v24; // rax
  _QWORD *v25; // rbx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 *v28; // rax
  _QWORD *v29; // rbx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 *v32; // rax
  _QWORD *v33; // rbx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 *v36; // rbx
  _QWORD *v37; // rax
  _QWORD *v38; // rcx
  __int64 *v40; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v41; // [rsp+40h] [rbp-C0h]
  __int64 v42; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+58h] [rbp-A8h]
  __int64 v45; // [rsp+60h] [rbp-A0h]
  __int64 v46; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h]
  __int128 v48; // [rsp+80h] [rbp-80h]
  __int64 v49; // [rsp+90h] [rbp-70h]
  _BYTE v50[20]; // [rsp+98h] [rbp-68h]
  char v51; // [rsp+ACh] [rbp-54h]
  int v52; // [rsp+ADh] [rbp-53h]
  int v53; // [rsp+B4h] [rbp-4Ch]
  unsigned int v54; // [rsp+C0h] [rbp-40h]
  int v55; // [rsp+C4h] [rbp-3Ch]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  __int64 v57; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v58; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v59; // [rsp+E8h] [rbp-18h]
  __int64 v60; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v61; // [rsp+100h] [rbp+0h] BYREF
  __int64 v62; // [rsp+108h] [rbp+8h]
  __int64 v63; // [rsp+110h] [rbp+10h] BYREF
  __int64 v64; // [rsp+120h] [rbp+20h] BYREF
  __int64 v65; // [rsp+128h] [rbp+28h]
  __int64 v66; // [rsp+130h] [rbp+30h] BYREF
  _DWORD v67[3]; // [rsp+140h] [rbp+40h] BYREF
  char v68; // [rsp+14Ch] [rbp+4Ch] BYREF

  v45 = *(_QWORD *)(a2 + 18688);
  v5 = 23;
  if ( *(int *)(a1 + 104) < 40960 )
    v5 = 0;
  v6 = 0;
  if ( (*(_DWORD *)(v45 + 560) & 2) == 0 )
    v6 = v5;
  v55 = v6;
  v7 = sub_18005BAC8(*(_QWORD *)(a1 + 56));
  v8 = sub_18005BAC8(*(_QWORD *)(a1 + 56));
  v9 = sub_18005BAC8(*(_QWORD *)(a1 + 56));
  v10 = sub_18005BAC8(*(_QWORD *)(a1 + 56));
  v54 = v10;
  v11 = v7;
  v12 = 1LL << v7;
  v56 = v12;
  if ( a3 )
  {
    v67[0] = v8;
    v67[1] = v9;
    v67[2] = v10;
    v40 = (__int64 *)v67;
    v13 = (__int64 *)&v68;
  }
  else
  {
    v42 = __PAIR64__(v9, v8);
    v40 = &v42;
    v13 = &v43;
  }
  v41 = v13;
  v14 = sub_18004C6FC(v11, (_DWORD **)&v40);
  v15 = 0LL;
  v16 = 1LL << v8;
  v17 = 1LL << v9;
  v42 = 1LL << v9;
  do
  {
    v18 = v12 | v15;
    v19 = a3 && _bittest64(&v18, v54);
    v20 = v18 & v16;
    result = v18 & v17;
    if ( !v19 || !v20 && !result )
    {
      sub_18005B4F8(*(_QWORD *)(a1 + 56), &v40, v18, v14 & ~v18, 1);
      *(_QWORD *)&v48 = 0LL;
      BYTE8(v48) = 0;
      *(_OWORD *)&v50[4] = 0LL;
      v53 = 3;
      LODWORD(v46) = 0;
      HIDWORD(v46) = 2 - v19;
      v47 = v55 & (unsigned int)-(v20 != 0);
      v52 = 16843009;
      HIDWORD(v48) = 2;
      v49 = 0x200000002LL;
      *(_DWORD *)v50 = 7;
      v51 = 1;
      sub_180040A68(v45, &v43);
      sub_18007F020(v43, (__int64)&v46, 0LL);
      v22 = unknown_libname_81(&v57, &v43);
      sub_18007E36C(v23, v22);
      if ( !v19 )
      {
        HIDWORD(v46) = 1;
        v24 = sub_180040A68(v45, &v58);
        sub_180011110(&v43, v24);
        if ( v59 )
          sub_18001060C(v59);
        sub_18007F020(v43, (__int64)&v46, 0LL);
        v25 = unknown_libname_81(&v60, &v43);
        sub_18001254C((__int64 *)(v26 + 64), v25);
        v27 = v25[1];
        if ( v27 )
          sub_18001060C(v27);
        HIBYTE(v52) = 0;
        v28 = sub_180040A68(v45, &v61);
        sub_180011110(&v43, v28);
        if ( v62 )
          sub_18001060C(v62);
        sub_18007F020(v43, (__int64)&v46, 0LL);
        v29 = unknown_libname_81(&v63, &v43);
        sub_18001254C((__int64 *)(v30 + 80), v29);
        v31 = v29[1];
        if ( v31 )
          sub_18001060C(v31);
        HIDWORD(v46) = 2;
        v32 = sub_180040A68(v45, &v64);
        sub_180011110(&v43, v32);
        if ( v65 )
          sub_18001060C(v65);
        sub_18007F020(v43, (__int64)&v46, 0LL);
        v33 = unknown_libname_81(&v66, &v43);
        sub_18001254C((__int64 *)(v34 + 96), v33);
        v35 = v33[1];
        if ( v35 )
          sub_18001060C(v35);
      }
      LODWORD(v46) = 0;
      v49 = 0LL;
      *(_QWORD *)v50 = 0LL;
      v48 = 0LL;
      if ( v20 )
      {
        v47 = *(_QWORD *)(a1 + 112);
        sub_18007E93C((__int64)v40, (__int64)&v46);
      }
      else
      {
        v47 = *(_QWORD *)(a1 + 120);
        sub_18007E93C((__int64)v40, (__int64)&v46);
        v36 = v40;
        v37 = std::string::string(&v46, byte_1800F7C80);
        sub_18007E4A4(v36, 5, (__int64)v37);
      }
      v38 = *(_QWORD **)(a1 + 136);
      if ( v38 == *(_QWORD **)(a1 + 144) )
      {
        result = (__int64)sub_18008D800((__int64 *)(a1 + 128), *(_QWORD *)(a1 + 136), &v40);
      }
      else
      {
        result = (__int64)j_unknown_libname_81(v38, &v40);
        *(_QWORD *)(a1 + 136) += 16LL;
      }
      if ( v44 )
        result = sub_18001060C(v44);
      if ( v41 )
        result = sub_18001060C((__int64)v41);
      v17 = v42;
    }
    v15 = v14 & ((~v14 | v15) + 1);
    v12 = v56;
  }
  while ( v15 );
  return result;
}
