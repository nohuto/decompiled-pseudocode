/*
 * XREFs of sub_180051B88 @ 0x180051B88
 * Callers:
 *     sub_1800269B8 @ 0x1800269B8 (sub_1800269B8.c)
 *     sub_18004E270 @ 0x18004E270 (sub_18004E270.c)
 *     sub_180051AD0 @ 0x180051AD0 (sub_180051AD0.c)
 *     sub_180052180 @ 0x180052180 (sub_180052180.c)
 *     sub_180069268 @ 0x180069268 (sub_180069268.c)
 *     sub_18006BF10 @ 0x18006BF10 (sub_18006BF10.c)
 *     sub_180085630 @ 0x180085630 (sub_180085630.c)
 *     sub_1800C8308 @ 0x1800C8308 (sub_1800C8308.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_1800100E4 @ 0x1800100E4 (sub_1800100E4.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800131E0 @ 0x1800131E0 (sub_1800131E0.c)
 *     sub_1800246B0 @ 0x1800246B0 (sub_1800246B0.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_180034808 @ 0x180034808 (sub_180034808.c)
 *     sub_1800371F0 @ 0x1800371F0 (sub_1800371F0.c)
 *     sub_18004D98C @ 0x18004D98C (sub_18004D98C.c)
 *     sub_18004E834 @ 0x18004E834 (sub_18004E834.c)
 *     sub_180050D40 @ 0x180050D40 (sub_180050D40.c)
 *     sub_180050EFC @ 0x180050EFC (sub_180050EFC.c)
 *     sub_180050F94 @ 0x180050F94 (sub_180050F94.c)
 *     sub_18005106C @ 0x18005106C (sub_18005106C.c)
 *     sub_180051510 @ 0x180051510 (sub_180051510.c)
 *     sub_180052038 @ 0x180052038 (sub_180052038.c)
 *     sub_180052088 @ 0x180052088 (sub_180052088.c)
 *     sub_180052408 @ 0x180052408 (sub_180052408.c)
 *     sub_180052654 @ 0x180052654 (sub_180052654.c)
 *     sub_180052818 @ 0x180052818 (sub_180052818.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180051B88(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        const void *a8,
        unsigned int a9,
        __int64 a10)
{
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // r14
  int v15; // edi
  void **v16; // rax
  char v17; // bl
  int **v18; // r15
  _DWORD *v19; // rax
  char v20; // r12
  int v21; // r8d
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  _QWORD *v24; // r14
  void *v25; // r13
  const void *v26; // r14
  int *v27; // rbx
  int v28; // eax
  __int64 *v29; // rax
  __int64 v30; // rdx
  int *v31; // rax
  __m128 v32; // xmm0
  __m128 v33; // xmm1
  unsigned int v35; // eax
  int v36; // r8d
  unsigned int v37; // eax
  int v38; // r8d
  _DWORD *v39; // [rsp+40h] [rbp-C0h] BYREF
  int v40; // [rsp+48h] [rbp-B8h] BYREF
  int v41; // [rsp+50h] [rbp-B0h] BYREF
  const void *v42; // [rsp+58h] [rbp-A8h] BYREF
  int v43; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v44; // [rsp+68h] [rbp-98h]
  unsigned int v45; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v46; // [rsp+78h] [rbp-88h] BYREF
  _QWORD *v47; // [rsp+80h] [rbp-80h]
  _BYTE v48[24]; // [rsp+98h] [rbp-68h] BYREF
  char v49[32]; // [rsp+B0h] [rbp-50h] BYREF
  void *v50; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v51; // [rsp+D8h] [rbp-28h]
  _BYTE pExceptionObject[56]; // [rsp+F0h] [rbp-10h] BYREF

  v41 = a2;
  v40 = a3;
  v43 = a4;
  v12 = (__int64)a8;
  v42 = a8;
  v13 = a9;
  v44 = a9;
  v45 = a9;
  v14 = a10;
  v15 = 0;
  LODWORD(v39) = 0;
  sub_180052818(a1 + 136, 0LL);
  if ( a4 )
  {
    v16 = (void **)sub_180050EFC(&v39, &v41, &v40, &v43, &a5, &a7, &a6);
    v17 = 2;
  }
  else
  {
    v16 = (void **)sub_180050F94(&v50, &v41, &v40, &a5, &a7, &a6);
    v17 = 1;
  }
  v18 = (int **)(a1 + 128);
  sub_180050D40((void **)(a1 + 128), v16);
  if ( (v17 & 2) != 0 )
  {
    v17 &= ~2u;
    sub_180051510((void **)&v39);
  }
  if ( (v17 & 1) != 0 )
    sub_180051510(&v50);
  sub_180052038(v48, *v18, v12, v13);
  if ( v14 )
    sub_180027DD0(a1, 1, 1);
  v19 = *(_DWORD **)(a1 + 72);
  v39 = v19;
  v20 = 0;
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
  {
    if ( v14 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14) )
      {
        std::string::string(&v50, "Texture cannot be created to just target generic devices");
        v37 = (unsigned int)std::string::string(
                              &v46,
                              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\sour"
                              "ce\\engine\\texture.cpp");
        sub_180068668((unsigned int)pExceptionObject, v37, v38, (unsigned int)&v50, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      sub_180052088(a1, v48, v14);
      sub_180027DD0(a1, 2, 0);
      sub_180027DD0(v22, v21 + 4, v21);
      v20 = 1;
    }
    else
    {
      sub_180034808((__int64)v19, (__int64 *)&v46);
      v23 = v46;
      v24 = v47;
      if ( v46 != v47 )
      {
        do
        {
          unknown_libname_81(&v50, v23);
          v25 = v50;
          if ( !(*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v50 + 32LL))(v50) )
          {
            sub_180052088(a1, v48, v25);
            v20 = 1;
          }
          if ( v51 )
            sub_18001060C(v51);
          v23 += 2;
        }
        while ( v23 != v24 );
        LODWORD(v13) = v44;
      }
      sub_1800131E0((__int64)&v46);
    }
    v19 = v39;
  }
  v26 = v42;
  if ( v42 && (v19[138] == 1 || !v20) )
  {
    v27 = *v18;
    v28 = sub_180052408((unsigned int)(*v18)[4], (unsigned int)**v18, (unsigned int)(*v18)[1]);
    if ( (v27[5] & 0x10) != 0 )
      v28 *= 6;
    if ( v27[2] * v28 != (_DWORD)v13 )
    {
      std::string::string(&v50, "Wrong buffer size");
      v35 = (unsigned int)std::string::string(
                            &v46,
                            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source"
                            "\\engine\\texture.cpp");
      sub_180068668((unsigned int)pExceptionObject, v35, v36, (unsigned int)&v50, 1);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    sub_18004D98C(&v39, (unsigned int)v13);
    sub_1800100E4(v39, (unsigned int)v13, v26, (unsigned int)v13);
    v29 = sub_18005106C((__int64 *)&v42, (__int64)v48, (__int64 *)&v39, &v45);
    v30 = *v29;
    *v29 = 0LL;
    sub_180052818(a1 + 136, v30);
    sub_1800371F0(&v42);
    sub_1800246B0((void **)&v39);
  }
  v31 = *v18;
  v32 = 0LL;
  if ( *v18 )
  {
    v15 = v31[1];
    v32.m128_f32[0] = (float)*v31;
  }
  v33 = 0LL;
  v33.m128_f32[0] = (float)v15;
  sub_180052654(a1, _mm_unpacklo_ps(v32, v33).m128_u64[0]);
  return sub_18004E834((__int64)v49);
}
