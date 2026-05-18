/*
 * XREFs of sub_180032DD4 @ 0x180032DD4
 * Callers:
 *     sub_1800335C0 @ 0x1800335C0 (sub_1800335C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_1800176A4 @ 0x1800176A4 (sub_1800176A4.c)
 *     sub_18001B410 @ 0x18001B410 (sub_18001B410.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@PEAU32@@Z @ 0x18001CCEC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@@std@.c)
 *     sub_18002CC9C @ 0x18002CC9C (sub_18002CC9C.c)
 *     sub_18002E674 @ 0x18002E674 (sub_18002E674.c)
 *     sub_18002E890 @ 0x18002E890 (sub_18002E890.c)
 *     sub_18002E95C @ 0x18002E95C (sub_18002E95C.c)
 *     sub_18002EBF0 @ 0x18002EBF0 (sub_18002EBF0.c)
 *     sub_18002ECBC @ 0x18002ECBC (sub_18002ECBC.c)
 *     sub_18002ED88 @ 0x18002ED88 (sub_18002ED88.c)
 *     sub_18004BC6C @ 0x18004BC6C (sub_18004BC6C.c)
 *     sub_18004C1A0 @ 0x18004C1A0 (sub_18004C1A0.c)
 *     sub_18007365C @ 0x18007365C (sub_18007365C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180032DD4(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // r15
  _DWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  _QWORD *i; // rbx
  unsigned int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *j; // rax
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 result; // rax
  __int128 v29; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h]
  __int128 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v33; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v34; // [rsp+70h] [rbp-90h] BYREF
  __int128 v35; // [rsp+80h] [rbp-80h] BYREF
  __int128 v36; // [rsp+90h] [rbp-70h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v38; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v39; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v40; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v41; // [rsp+E0h] [rbp-20h] BYREF
  void *v42[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v43; // [rsp+100h] [rbp+0h] BYREF
  __int64 v44; // [rsp+108h] [rbp+8h]
  __int128 v45; // [rsp+110h] [rbp+10h] BYREF
  __int64 v46; // [rsp+120h] [rbp+20h]
  __int128 v47; // [rsp+128h] [rbp+28h]
  _BYTE v48[32]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v49; // [rsp+158h] [rbp+58h] BYREF
  __int64 v50; // [rsp+160h] [rbp+60h]
  _BYTE v51[32]; // [rsp+178h] [rbp+78h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+198h] [rbp+98h] BYREF

  v4 = a1[64];
  if ( a1[78] != a1[77] )
    sub_1800176A4((void **)(v4 + 18664), (__int64)(a1 + 77));
  unknown_libname_81(&v30, a1 + 80);
  v5 = v30;
  if ( !v30 )
  {
    v6 = sub_18007365C(&v49, a2);
    v5 = *(_DWORD **)v6;
    v7 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 8) = 0LL;
    if ( v50 )
      sub_18001060C(v50);
    v30 = v5;
    v8 = v31;
    v31 = v7;
    if ( v8 )
      sub_18001060C(v8);
  }
  if ( v5[2] != a2 )
  {
    std::string::string(&v49, "Shader database platform is incompatible with engine shader platform");
    sub_18001B410((__int64)pExceptionObject, (__int64)&v49, 0);
    throw (Spectre::Utils::SpectreException *)pExceptionObject;
  }
  (*(void (__fastcall **)(_DWORD *, void **))(*(_QWORD *)v5 + 8LL))(v5, v42);
  for ( i = *(_QWORD **)v42[0]; !*((_BYTE *)i + 25); i = j )
  {
    sub_180017054((__int64)v51, (__int64)(i + 4));
    v10 = *((_DWORD *)i + 20);
    *(_QWORD *)&v29 = &v45;
    v45 = 0LL;
    v46 = 0LL;
    v47 = *((_OWORD *)i + 4);
    v11 = sub_180017054((__int64)v48, (__int64)v51);
    sub_18004C1A0(v4, v11, v10, &v45);
    sub_180011B5C((__int64)v51);
    v12 = i[2];
    if ( *(_BYTE *)(v12 + 25) )
    {
      for ( j = (_QWORD *)i[1]; !*((_BYTE *)j + 25) && i == (_QWORD *)j[2]; j = (_QWORD *)j[1] )
        i = j;
    }
    else
    {
      j = std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Min((_QWORD *)v12);
    }
  }
  v14 = sub_18002EBF0(&v43);
  v15 = *v14;
  v16 = v14[1];
  *v14 = 0LL;
  v14[1] = 0LL;
  a1[8] = v15;
  v17 = a1[9];
  a1[9] = v16;
  if ( v17 )
    sub_18001060C(v17);
  if ( v44 )
    sub_18001060C(v44);
  v18 = a1[64];
  v32 = 0LL;
  v19 = a1[9];
  if ( v19 )
    _InterlockedAdd((volatile signed __int32 *)(v19 + 8), 1u);
  v32 = *((_OWORD *)a1 + 4);
  sub_18004BC6C(v18, &v32);
  sub_18002E95C(&v41);
  v20 = a1[64];
  v34 = 0LL;
  if ( *((_QWORD *)&v41 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL), 1u);
  v34 = v41;
  sub_18004BC6C(v20, &v34);
  sub_18002ECBC(&v40);
  v21 = a1[64];
  v35 = 0LL;
  if ( *((_QWORD *)&v40 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v40 + 1) + 8LL), 1u);
  v35 = v40;
  sub_18004BC6C(v21, &v35);
  sub_18002E890(&v29);
  v22 = a1[64];
  v36 = 0LL;
  v23 = *((_QWORD *)&v29 + 1);
  if ( *((_QWORD *)&v29 + 1) )
  {
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL), 1u);
    v23 = *((_QWORD *)&v29 + 1);
  }
  v36 = v29;
  sub_18004BC6C(v22, &v36);
  sub_18002ED88(&v33);
  v24 = a1[64];
  v37 = 0LL;
  v25 = *((_QWORD *)&v33 + 1);
  if ( *((_QWORD *)&v33 + 1) )
  {
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 8LL), 1u);
    v23 = *((_QWORD *)&v29 + 1);
    v25 = *((_QWORD *)&v33 + 1);
  }
  v37 = v33;
  sub_18004BC6C(v24, &v37);
  sub_18002E674(&v38);
  v26 = a1[64];
  v39 = 0LL;
  v27 = *((_QWORD *)&v38 + 1);
  if ( *((_QWORD *)&v38 + 1) )
  {
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v38 + 1) + 8LL), 1u);
    v23 = *((_QWORD *)&v29 + 1);
    v25 = *((_QWORD *)&v33 + 1);
    v27 = *((_QWORD *)&v38 + 1);
  }
  v39 = v38;
  sub_18004BC6C(v26, &v39);
  if ( v27 )
    sub_18001060C(v27);
  if ( v25 )
    sub_18001060C(v25);
  if ( v23 )
    sub_18001060C(v23);
  if ( *((_QWORD *)&v40 + 1) )
    sub_18001060C(*((__int64 *)&v40 + 1));
  if ( *((_QWORD *)&v41 + 1) )
    sub_18001060C(*((__int64 *)&v41 + 1));
  result = sub_18002CC9C(v42, (__int64)v42);
  if ( v31 )
    return sub_18001060C(v31);
  return result;
}
