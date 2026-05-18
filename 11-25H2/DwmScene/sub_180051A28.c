/*
 * XREFs of sub_180051A28 @ 0x180051A28
 * Callers:
 *     sub_180026858 @ 0x180026858 (sub_180026858.c)
 *     sub_18004E110 @ 0x18004E110 (sub_18004E110.c)
 *     sub_180051970 @ 0x180051970 (sub_180051970.c)
 *     sub_180052020 @ 0x180052020 (sub_180052020.c)
 *     sub_180069108 @ 0x180069108 (sub_180069108.c)
 *     sub_18006BDB0 @ 0x18006BDB0 (sub_18006BDB0.c)
 *     sub_1800854D0 @ 0x1800854D0 (sub_1800854D0.c)
 *     sub_1800C81A8 @ 0x1800C81A8 (sub_1800C81A8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18000FFE4 @ 0x18000FFE4 (sub_18000FFE4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800130E0 @ 0x1800130E0 (sub_1800130E0.c)
 *     sub_180024550 @ 0x180024550 (sub_180024550.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 *     sub_1800346A8 @ 0x1800346A8 (sub_1800346A8.c)
 *     sub_180037090 @ 0x180037090 (sub_180037090.c)
 *     sub_18004D82C @ 0x18004D82C (sub_18004D82C.c)
 *     sub_18004E6D4 @ 0x18004E6D4 (sub_18004E6D4.c)
 *     sub_180050BE0 @ 0x180050BE0 (sub_180050BE0.c)
 *     sub_180050D9C @ 0x180050D9C (sub_180050D9C.c)
 *     sub_180050E34 @ 0x180050E34 (sub_180050E34.c)
 *     sub_180050F0C @ 0x180050F0C (sub_180050F0C.c)
 *     sub_1800513B0 @ 0x1800513B0 (sub_1800513B0.c)
 *     sub_180051ED8 @ 0x180051ED8 (sub_180051ED8.c)
 *     sub_180051F28 @ 0x180051F28 (sub_180051F28.c)
 *     sub_1800522A8 @ 0x1800522A8 (sub_1800522A8.c)
 *     sub_1800524F4 @ 0x1800524F4 (sub_1800524F4.c)
 *     sub_1800526B8 @ 0x1800526B8 (sub_1800526B8.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180051A28(
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
  sub_1800526B8(a1 + 136, 0LL);
  if ( a4 )
  {
    v16 = (void **)sub_180050D9C(&v39, &v41, &v40, &v43, &a5, &a7, &a6);
    v17 = 2;
  }
  else
  {
    v16 = (void **)sub_180050E34(&v50, &v41, &v40, &a5, &a7, &a6);
    v17 = 1;
  }
  v18 = (int **)(a1 + 128);
  sub_180050BE0((void **)(a1 + 128), v16);
  if ( (v17 & 2) != 0 )
  {
    v17 &= ~2u;
    sub_1800513B0((void **)&v39);
  }
  if ( (v17 & 1) != 0 )
    sub_1800513B0(&v50);
  sub_180051ED8(v48, *v18, v12, v13);
  if ( v14 )
    sub_180027C70(a1, 1, 1);
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
        sub_180068508((unsigned int)pExceptionObject, v37, v38, (unsigned int)&v50, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      sub_180051F28(a1, v48, v14);
      sub_180027C70(a1, 2, 0);
      sub_180027C70(v22, v21 + 4, v21);
      v20 = 1;
    }
    else
    {
      sub_1800346A8((__int64)v19, (__int64 *)&v46);
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
            sub_180051F28(a1, v48, v25);
            v20 = 1;
          }
          if ( v51 )
            sub_18001050C(v51);
          v23 += 2;
        }
        while ( v23 != v24 );
        LODWORD(v13) = v44;
      }
      sub_1800130E0((__int64)&v46);
    }
    v19 = v39;
  }
  v26 = v42;
  if ( v42 && (v19[138] == 1 || !v20) )
  {
    v27 = *v18;
    v28 = sub_1800522A8((unsigned int)(*v18)[4], (unsigned int)**v18, (unsigned int)(*v18)[1]);
    if ( (v27[5] & 0x10) != 0 )
      v28 *= 6;
    if ( v27[2] * v28 != (_DWORD)v13 )
    {
      std::string::string(&v50, "Wrong buffer size");
      v35 = (unsigned int)std::string::string(
                            &v46,
                            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source"
                            "\\engine\\texture.cpp");
      sub_180068508((unsigned int)pExceptionObject, v35, v36, (unsigned int)&v50, 1);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    sub_18004D82C(&v39, (unsigned int)v13);
    sub_18000FFE4(v39, (unsigned int)v13, v26, (unsigned int)v13);
    v29 = sub_180050F0C((__int64 *)&v42, (__int64)v48, (__int64 *)&v39, &v45);
    v30 = *v29;
    *v29 = 0LL;
    sub_1800526B8(a1 + 136, v30);
    sub_180037090(&v42);
    sub_180024550((void **)&v39);
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
  sub_1800524F4(a1, _mm_unpacklo_ps(v32, v33).m128_u64[0]);
  return sub_18004E6D4((__int64)v49);
}
