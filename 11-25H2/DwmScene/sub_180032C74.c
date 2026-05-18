/*
 * XREFs of sub_180032C74 @ 0x180032C74
 * Callers:
 *     sub_180033460 @ 0x180033460 (sub_180033460.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_1800175E4 @ 0x1800175E4 (sub_1800175E4.c)
 *     sub_18001B2B0 @ 0x18001B2B0 (sub_18001B2B0.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@PEAU32@@Z @ 0x18001CB8C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@@std@.c)
 *     sub_18002CB3C @ 0x18002CB3C (sub_18002CB3C.c)
 *     sub_18002E514 @ 0x18002E514 (sub_18002E514.c)
 *     sub_18002E730 @ 0x18002E730 (sub_18002E730.c)
 *     sub_18002E7FC @ 0x18002E7FC (sub_18002E7FC.c)
 *     sub_18002EA90 @ 0x18002EA90 (sub_18002EA90.c)
 *     sub_18002EB5C @ 0x18002EB5C (sub_18002EB5C.c)
 *     sub_18002EC28 @ 0x18002EC28 (sub_18002EC28.c)
 *     sub_18004BB0C @ 0x18004BB0C (sub_18004BB0C.c)
 *     sub_18004C040 @ 0x18004C040 (sub_18004C040.c)
 *     sub_1800734FC @ 0x1800734FC (sub_1800734FC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180032C74(_QWORD *a1, unsigned int a2)
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
    sub_1800175E4((void **)(v4 + 18664), (__int64)(a1 + 77));
  unknown_libname_81(&v30, a1 + 80);
  v5 = v30;
  if ( !v30 )
  {
    v6 = sub_1800734FC(&v49, a2);
    v5 = *(_DWORD **)v6;
    v7 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 8) = 0LL;
    if ( v50 )
      sub_18001050C(v50);
    v30 = v5;
    v8 = v31;
    v31 = v7;
    if ( v8 )
      sub_18001050C(v8);
  }
  if ( v5[2] != a2 )
  {
    std::string::string(&v49, "Shader database platform is incompatible with engine shader platform");
    sub_18001B2B0((__int64)pExceptionObject, (__int64)&v49, 0);
    throw (Spectre::Utils::SpectreException *)pExceptionObject;
  }
  (*(void (__fastcall **)(_DWORD *, void **))(*(_QWORD *)v5 + 8LL))(v5, v42);
  for ( i = *(_QWORD **)v42[0]; !*((_BYTE *)i + 25); i = j )
  {
    sub_180016F54((__int64)v51, (__int64)(i + 4));
    v10 = *((_DWORD *)i + 20);
    *(_QWORD *)&v29 = &v45;
    v45 = 0LL;
    v46 = 0LL;
    v47 = *((_OWORD *)i + 4);
    v11 = sub_180016F54((__int64)v48, (__int64)v51);
    sub_18004C040(v4, v11, v10, &v45);
    sub_180011A5C((__int64)v51);
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
  v14 = sub_18002EA90(&v43);
  v15 = *v14;
  v16 = v14[1];
  *v14 = 0LL;
  v14[1] = 0LL;
  a1[8] = v15;
  v17 = a1[9];
  a1[9] = v16;
  if ( v17 )
    sub_18001050C(v17);
  if ( v44 )
    sub_18001050C(v44);
  v18 = a1[64];
  v32 = 0LL;
  v19 = a1[9];
  if ( v19 )
    _InterlockedAdd((volatile signed __int32 *)(v19 + 8), 1u);
  v32 = *((_OWORD *)a1 + 4);
  sub_18004BB0C(v18, &v32);
  sub_18002E7FC(&v41);
  v20 = a1[64];
  v34 = 0LL;
  if ( *((_QWORD *)&v41 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL), 1u);
  v34 = v41;
  sub_18004BB0C(v20, &v34);
  sub_18002EB5C(&v40);
  v21 = a1[64];
  v35 = 0LL;
  if ( *((_QWORD *)&v40 + 1) )
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v40 + 1) + 8LL), 1u);
  v35 = v40;
  sub_18004BB0C(v21, &v35);
  sub_18002E730(&v29);
  v22 = a1[64];
  v36 = 0LL;
  v23 = *((_QWORD *)&v29 + 1);
  if ( *((_QWORD *)&v29 + 1) )
  {
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL), 1u);
    v23 = *((_QWORD *)&v29 + 1);
  }
  v36 = v29;
  sub_18004BB0C(v22, &v36);
  sub_18002EC28(&v33);
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
  sub_18004BB0C(v24, &v37);
  sub_18002E514(&v38);
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
  sub_18004BB0C(v26, &v39);
  if ( v27 )
    sub_18001050C(v27);
  if ( v25 )
    sub_18001050C(v25);
  if ( v23 )
    sub_18001050C(v23);
  if ( *((_QWORD *)&v40 + 1) )
    sub_18001050C(*((__int64 *)&v40 + 1));
  if ( *((_QWORD *)&v41 + 1) )
    sub_18001050C(*((__int64 *)&v41 + 1));
  result = sub_18002CB3C(v42, (__int64)v42);
  if ( v31 )
    return sub_18001050C(v31);
  return result;
}
