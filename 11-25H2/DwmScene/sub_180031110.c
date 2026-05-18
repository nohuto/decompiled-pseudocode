/*
 * XREFs of sub_180031110 @ 0x180031110
 * Callers:
 *     sub_18001565C @ 0x18001565C (sub_18001565C.c)
 *     sub_180015780 @ 0x180015780 (sub_180015780.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011B8C @ 0x180011B8C (sub_180011B8C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     j_unknown_libname_81 @ 0x180012000 (j_unknown_libname_81.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_18002378C @ 0x18002378C (sub_18002378C.c)
 *     sub_1800250E0 @ 0x1800250E0 (sub_1800250E0.c)
 *     sub_180025134 @ 0x180025134 (sub_180025134.c)
 *     sub_1800284DC @ 0x1800284DC (sub_1800284DC.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_18002B634 @ 0x18002B634 (sub_18002B634.c)
 *     sub_18002BCB4 @ 0x18002BCB4 (sub_18002BCB4.c)
 *     sub_18002BF54 @ 0x18002BF54 (sub_18002BF54.c)
 *     sub_18002C724 @ 0x18002C724 (sub_18002C724.c)
 *     sub_18002E084 @ 0x18002E084 (sub_18002E084.c)
 *     sub_1800315CC @ 0x1800315CC (sub_1800315CC.c)
 *     sub_1800321B0 @ 0x1800321B0 (sub_1800321B0.c)
 *     sub_180032A24 @ 0x180032A24 (sub_180032A24.c)
 *     sub_180033AB8 @ 0x180033AB8 (sub_180033AB8.c)
 *     sub_180033C94 @ 0x180033C94 (sub_180033C94.c)
 *     sub_180052EE8 @ 0x180052EE8 (sub_180052EE8.c)
 *     sub_1800531A8 @ 0x1800531A8 (sub_1800531A8.c)
 *     sub_18005B0B4 @ 0x18005B0B4 (sub_18005B0B4.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_180031110(__int64 a1, __int64 *a2)
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

  sub_1800284DC(a1 + 8, (__int64)v39);
  sub_1800284DC(a1 + 1104, (__int64)v38);
  sub_1800287EC(*a2 + 24, v4);
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
        sub_180068508((unsigned int)pExceptionObject, v7, v8, (unsigned int)v41, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      v5 += 2;
    }
  }
  sub_18001C99C(&stru_1801B8288, 3);
  v9 = sub_18002BF54((__int64)v40, *a2 + 80);
  sub_1800137F8(v9);
  sub_18001C99C(&stru_1801B8288, 3);
  sub_180011A5C((__int64)v40);
  if ( (unsigned int)sub_180025134(*a2) )
  {
    sub_1800315CC(a1, &v33, v10, 0LL);
    v35 = 0LL;
    sub_1800321B0(a1, &v36, v11, &v35);
    if ( v36 )
      sub_180052EE8(v33, &v36);
    if ( v37 )
      sub_18001050C((__int64)v37);
    v12 = v33;
    v13 = sub_1800250E0(*a2, &v36, 0);
    sub_1800531A8(v12, v13);
    if ( v37 )
      sub_18001050C((__int64)v37);
    sub_180015174(&v36, a2);
    sub_18002E084((__int64 *)(a1 + 184), (__int64)v40, (__int64)&v36);
    v14 = unknown_libname_81(&v35, &v33);
    v15 = *v14;
    *v14 = *(_QWORD *)(v16 + 48);
    *(_QWORD *)(v16 + 48) = v15;
    v17 = v14[1];
    v14[1] = *(_QWORD *)(v16 + 56);
    *(_QWORD *)(v16 + 56) = v17;
    if ( *((_QWORD *)&v35 + 1) )
      sub_18001050C(*((__int64 *)&v35 + 1));
    if ( v37 )
      sub_180010544(v37);
    if ( v34 )
      sub_18001050C(v34);
  }
  sub_18002851C(a1 + 112, (__int64)&v33);
  v18 = *(_QWORD **)(a1 + 96);
  if ( v18 == *(_QWORD **)(a1 + 104) )
  {
    sub_18002C724((__int64 *)(a1 + 88), *(_QWORD *)(a1 + 96), a2);
  }
  else
  {
    j_unknown_libname_81(v18, a2);
    *(_QWORD *)(a1 + 96) += 16LL;
  }
  sub_180010F44((__int64)&v33);
  sub_180033C94(a1);
  v19 = unknown_libname_81(v41, a2);
  v36 = v19;
  v21 = **(_QWORD **)(v20 + 18560);
  *(_QWORD *)&v35 = v21;
  while ( !*(_BYTE *)(v21 + 25) )
  {
    v22 = unknown_libname_81(v40, v19);
    sub_18005B0B4(v23, v22);
    sub_18001C2C0((__int64 *)&v35);
    v21 = v35;
  }
  v24 = v19[1];
  if ( v24 )
    sub_18001050C(v24);
  for ( i = 0LL; i < (__int64)(*(_QWORD *)(a1 + 896) - *(_QWORD *)(a1 + 888)) >> 4; ++i )
  {
    sub_180032A24(a1, &v33, i);
    if ( v33 && (v33[40] & 2) != 0 )
      (*(void (__fastcall **)(_BYTE *, __int64 *))(*(_QWORD *)v33 + 16LL))(v33, a2);
    if ( v34 )
      sub_18001050C(v34);
  }
  unknown_libname_81(&v33, a2);
  v43 = 0LL;
  v26 = (_QWORD *)sub_18002B634(v42, &v33);
  v43 = v26;
  if ( v34 )
  {
    sub_18001050C(v34);
    v26 = v43;
  }
  v27 = *(__int64 **)(a1 + 704);
  v28 = *(__int64 **)(a1 + 712);
  if ( v27 != v28 )
  {
    do
    {
      sub_18002851C(*v27 + 16, (__int64)v40);
      sub_18002BCB4(*v27, (__int64)v42);
      sub_180010F44((__int64)v40);
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
  sub_180011B8C((__int64 *)&v35);
  v31 = v35;
  *(_QWORD *)(v30 + 440) = v35;
  sub_18002378C(v31 - *(_QWORD *)(v30 + 424));
  sub_18001C99C(&stru_1801B8228, 3);
  sub_180033AB8(a1);
  sub_180010F44((__int64)v38);
  return sub_180010F44((__int64)v39);
}
