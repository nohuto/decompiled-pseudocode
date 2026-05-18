/*
 * XREFs of sub_180031270 @ 0x180031270
 * Callers:
 *     sub_18001575C @ 0x18001575C (sub_18001575C.c)
 *     sub_180015880 @ 0x180015880 (sub_180015880.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011C8C @ 0x180011C8C (sub_180011C8C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     j_unknown_libname_81 @ 0x180012100 (j_unknown_libname_81.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_1800238EC @ 0x1800238EC (sub_1800238EC.c)
 *     sub_180025240 @ 0x180025240 (sub_180025240.c)
 *     sub_180025294 @ 0x180025294 (sub_180025294.c)
 *     sub_18002863C @ 0x18002863C (sub_18002863C.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_18002B794 @ 0x18002B794 (sub_18002B794.c)
 *     sub_18002BE14 @ 0x18002BE14 (sub_18002BE14.c)
 *     sub_18002C0B4 @ 0x18002C0B4 (sub_18002C0B4.c)
 *     sub_18002C884 @ 0x18002C884 (sub_18002C884.c)
 *     sub_18002E1E4 @ 0x18002E1E4 (sub_18002E1E4.c)
 *     sub_18003172C @ 0x18003172C (sub_18003172C.c)
 *     sub_180032310 @ 0x180032310 (sub_180032310.c)
 *     sub_180032B84 @ 0x180032B84 (sub_180032B84.c)
 *     sub_180033C18 @ 0x180033C18 (sub_180033C18.c)
 *     sub_180033DF4 @ 0x180033DF4 (sub_180033DF4.c)
 *     sub_180053048 @ 0x180053048 (sub_180053048.c)
 *     sub_180053308 @ 0x180053308 (sub_180053308.c)
 *     sub_18005B214 @ 0x18005B214 (sub_18005B214.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_180031270(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  unsigned int v7; // eax
  int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r8
  _BYTE *v12; // rbx
  _QWORD *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 i; // rbx
  _QWORD *v26; // rcx
  __int64 *v27; // rbx
  __int64 *v28; // r14
  _QWORD *v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rcx
  _BYTE *v33; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+38h] [rbp-C8h]
  __int128 v35; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v36; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v37; // [rsp+58h] [rbp-A8h]
  _BYTE v38[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v39[16]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v40[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v41[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v42[7]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v43; // [rsp+F8h] [rbp-8h]
  _BYTE pExceptionObject[56]; // [rsp+100h] [rbp+0h] BYREF

  sub_18002863C(a1 + 8, (__int64)v39);
  sub_18002863C(a1 + 1104, (__int64)v38);
  sub_18002894C(*a2 + 24, v4);
  if ( !*(_DWORD *)(a1 + 552) && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2) )
  {
    v5 = *(_QWORD **)(a1 + 88);
    v6 = *(_QWORD **)(a1 + 96);
    while ( v5 != v6 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 32LL))(*v5) )
      {
        std::string::string(
          v41,
          "This Engine instance cannot create multiple devices because it was created with option General.EngineDeviceMode==Single.");
        v7 = (unsigned int)std::string::string(
                             v40,
                             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\sourc"
                             "e\\engine\\engine.cpp");
        sub_180068668((unsigned int)pExceptionObject, v7, v8, (unsigned int)v41, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      v5 += 2;
    }
  }
  sub_18001CAFC(&stru_1801B9288, 3);
  v9 = sub_18002C0B4((__int64)v40, *a2 + 80);
  sub_1800138F8(v9);
  sub_18001CAFC(&stru_1801B9288, 3);
  sub_180011B5C((__int64)v40);
  if ( (unsigned int)sub_180025294(*a2) )
  {
    sub_18003172C(a1, &v33, v10, 0LL);
    v35 = 0LL;
    sub_180032310(a1, &v36, v11, &v35);
    if ( v36 )
      sub_180053048(v33, &v36);
    if ( v37 )
      sub_18001060C((__int64)v37);
    v12 = v33;
    v13 = sub_180025240(*a2, &v36, 0);
    sub_180053308(v12, v13);
    if ( v37 )
      sub_18001060C((__int64)v37);
    sub_180015274(&v36, a2);
    sub_18002E1E4((__int64 *)(a1 + 184), (__int64)v40, (__int64)&v36);
    v14 = unknown_libname_81(&v35, &v33);
    v15 = *v14;
    *v14 = *(_QWORD *)(v16 + 48);
    *(_QWORD *)(v16 + 48) = v15;
    v17 = v14[1];
    v14[1] = *(_QWORD *)(v16 + 56);
    *(_QWORD *)(v16 + 56) = v17;
    if ( *((_QWORD *)&v35 + 1) )
      sub_18001060C(*((__int64 *)&v35 + 1));
    if ( v37 )
      sub_180010644(v37);
    if ( v34 )
      sub_18001060C(v34);
  }
  sub_18002867C(a1 + 112, (__int64)&v33);
  v18 = *(_QWORD **)(a1 + 96);
  if ( v18 == *(_QWORD **)(a1 + 104) )
  {
    sub_18002C884((__int64 *)(a1 + 88), *(_QWORD *)(a1 + 96), a2);
  }
  else
  {
    j_unknown_libname_81(v18, a2);
    *(_QWORD *)(a1 + 96) += 16LL;
  }
  sub_180011044((__int64)&v33);
  sub_180033DF4(a1);
  v19 = unknown_libname_81(v41, a2);
  v36 = v19;
  v21 = **(_QWORD **)(v20 + 18560);
  *(_QWORD *)&v35 = v21;
  while ( !*(_BYTE *)(v21 + 25) )
  {
    v22 = unknown_libname_81(v40, v19);
    sub_18005B214(v23, v22);
    sub_18001C420((__int64 *)&v35);
    v21 = v35;
  }
  v24 = v19[1];
  if ( v24 )
    sub_18001060C(v24);
  for ( i = 0LL; i < (__int64)(*(_QWORD *)(a1 + 896) - *(_QWORD *)(a1 + 888)) >> 4; ++i )
  {
    sub_180032B84(a1, &v33, i);
    if ( v33 && (v33[40] & 2) != 0 )
      (*(void (__fastcall **)(_BYTE *, __int64 *))(*(_QWORD *)v33 + 16LL))(v33, a2);
    if ( v34 )
      sub_18001060C(v34);
  }
  unknown_libname_81(&v33, a2);
  v43 = 0LL;
  v26 = (_QWORD *)sub_18002B794(v42, &v33);
  v43 = v26;
  if ( v34 )
  {
    sub_18001060C(v34);
    v26 = v43;
  }
  v27 = *(__int64 **)(a1 + 704);
  v28 = *(__int64 **)(a1 + 712);
  if ( v27 != v28 )
  {
    do
    {
      sub_18002867C(*v27 + 16, (__int64)v40);
      sub_18002BE14(*v27, (__int64)v42);
      sub_180011044((__int64)v40);
      v27 += 2;
    }
    while ( v27 != v28 );
    v26 = v43;
  }
  if ( v26 )
  {
    v29 = v42;
    LOBYTE(v29) = v26 != v42;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v26 + 32LL))(v26, v29);
  }
  v30 = *a2;
  sub_180011C8C((__int64 *)&v35);
  v31 = v35;
  *(_QWORD *)(v30 + 440) = v35;
  sub_1800238EC(v31 - *(_QWORD *)(v30 + 424));
  sub_18001CAFC(&stru_1801B9228, 3);
  sub_180033C18(a1);
  sub_180011044((__int64)v38);
  return sub_180011044((__int64)v39);
}
