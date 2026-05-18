/*
 * XREFs of sub_1800318EC @ 0x1800318EC
 * Callers:
 *     sub_180033660 @ 0x180033660 (sub_180033660.c)
 *     sub_180034044 @ 0x180034044 (sub_180034044.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_180024FD0 @ 0x180024FD0 (sub_180024FD0.c)
 *     sub_180025240 @ 0x180025240 (sub_180025240.c)
 *     sub_180025294 @ 0x180025294 (sub_180025294.c)
 *     sub_180025BE8 @ 0x180025BE8 (sub_180025BE8.c)
 *     sub_180028584 @ 0x180028584 (sub_180028584.c)
 *     sub_18002863C @ 0x18002863C (sub_18002863C.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_1800287FC @ 0x1800287FC (sub_1800287FC.c)
 *     sub_180029CE0 @ 0x180029CE0 (sub_180029CE0.c)
 *     sub_18002C0B4 @ 0x18002C0B4 (sub_18002C0B4.c)
 *     sub_18002D550 @ 0x18002D550 (sub_18002D550.c)
 *     sub_18002E1E4 @ 0x18002E1E4 (sub_18002E1E4.c)
 *     sub_180031E24 @ 0x180031E24 (sub_180031E24.c)
 *     sub_180031EBC @ 0x180031EBC (sub_180031EBC.c)
 *     sub_180032794 @ 0x180032794 (sub_180032794.c)
 *     sub_1800331D0 @ 0x1800331D0 (sub_1800331D0.c)
 *     sub_180033280 @ 0x180033280 (sub_180033280.c)
 *     sub_180033C18 @ 0x180033C18 (sub_180033C18.c)
 *     sub_180033F84 @ 0x180033F84 (sub_180033F84.c)
 *     sub_180034854 @ 0x180034854 (sub_180034854.c)
 *     sub_1800369A0 @ 0x1800369A0 (sub_1800369A0.c)
 *     sub_18004C564 @ 0x18004C564 (sub_18004C564.c)
 *     sub_18007BFA8 @ 0x18007BFA8 (sub_18007BFA8.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800318EC(_QWORD *a1, _QWORD *a2)
{
  _BYTE *v3; // rsi
  __int64 v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rax
  _QWORD *i; // rax
  unsigned int v9; // r12d
  unsigned int v10; // r15d
  unsigned int j; // r14d
  __int64 v12; // rbx
  __int64 v13; // rdx
  _BOOL8 v14; // r14
  __int64 v15; // rax
  _QWORD *v16; // rax
  unsigned int k; // ebx
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rbx
  _QWORD *v21; // r14
  _QWORD *v22; // rsi
  __int64 *v23; // r14
  __int64 *m; // rbx
  __int64 v25; // rcx
  __int64 result; // rax
  __int64 v27; // rcx
  __int128 v28; // [rsp+30h] [rbp-69h] BYREF
  __int64 v29; // [rsp+40h] [rbp-59h] BYREF
  __int64 v30; // [rsp+48h] [rbp-51h]
  _BYTE *v31; // [rsp+50h] [rbp-49h] BYREF
  __int64 v32; // [rsp+58h] [rbp-41h]
  _QWORD v33[3]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v34[16]; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v35[16]; // [rsp+88h] [rbp-11h] BYREF
  _BYTE v36[32]; // [rsp+98h] [rbp-1h] BYREF

  v31 = (_BYTE *)*a2;
  v3 = v31;
  v4 = a2[1];
  v32 = v4;
  *a2 = 0LL;
  a2[1] = 0LL;
  v28 = 0LL;
  v5 = unknown_libname_81(&v29, &v31);
  sub_1800331D0(a1, 8LL, v5, &v28);
  sub_18002867C((__int64)(a1 + 1), (__int64)v35);
  sub_18002863C((__int64)(a1 + 138), (__int64)v34);
  v6 = unknown_libname_81(&v28, &v31);
  sub_180034854(a1, v6);
  sub_18001CAFC(&stru_1801B9288, 3);
  v7 = sub_18002C0B4((__int64)v36, (__int64)(v3 + 80));
  sub_1800138F8(v7);
  sub_18001CAFC(&stru_1801B9288, 3);
  sub_180011B5C((__int64)v36);
  sub_1800287FC((__int64)(a1 + 14), (__int64)&v28);
  if ( *((_QWORD **)v3 + 456) != a1 )
    goto LABEL_53;
  for ( i = (_QWORD *)a1[11]; i != (_QWORD *)a1[12] && (_BYTE *)*i != v3; i += 2 )
    ;
  if ( i == (_QWORD *)a1[12] )
  {
LABEL_53:
    sub_18001CAFC(&stru_1801B9288, 3);
    sub_180028584((__int64)&v28);
    sub_180011044((__int64)v34);
    result = sub_180011044((__int64)v35);
    if ( !v4 )
      return result;
    v27 = v4;
    return sub_18001060C(v27);
  }
  sub_180028584((__int64)&v28);
  sub_18002867C((__int64)(v3 + 24), (__int64)v36);
  v9 = *((_DWORD *)v3 + 61);
  v10 = sub_180025294((__int64)v3);
  for ( j = 0; j < v10; ++j )
  {
    sub_180025240((__int64)v3, &v28, j);
    v12 = v28;
    sub_18002863C(v28 + 8, (__int64)v33);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 320LL))(v12, &v29);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 360LL))(v12, 0LL);
    sub_180029CE0((__int64)&v29);
    sub_180011044((__int64)v33);
    if ( *((_QWORD *)&v28 + 1) )
      sub_18001060C(*((__int64 *)&v28 + 1));
  }
  sub_180015274(&v28, &v31);
  v13 = sub_18002D550(a1 + 23, v33, (__int64)&v28)[2];
  v14 = !*(_BYTE *)(v13 + 25) && *((_QWORD *)&v28 + 1) >= *(_QWORD *)(v13 + 40);
  if ( *((_QWORD *)&v28 + 1) )
    sub_180010644(*((volatile signed __int32 **)&v28 + 1));
  if ( v14 )
  {
    sub_180015274(&v28, &v31);
    v15 = sub_18002E1E4(a1 + 23, (__int64)v33, (__int64)&v28);
    unknown_libname_81(&v29, (_QWORD *)(*(_QWORD *)v15 + 48LL));
    if ( *((_QWORD *)&v28 + 1) )
      sub_180010644(*((volatile signed __int32 **)&v28 + 1));
    sub_180015274(&v28, &v31);
    sub_1800369A0(a1 + 23, &v28);
    if ( *((_QWORD *)&v28 + 1) )
      sub_180010644(*((volatile signed __int32 **)&v28 + 1));
    sub_180031E24(a1, &v29);
    if ( v30 )
      sub_18001060C(v30);
  }
  v16 = unknown_libname_81(v33, &v31);
  sub_180031EBC(a1, v16);
  if ( v3[3640] )
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v3 + 8LL))(v3);
  for ( k = 0; k < v10; ++k )
  {
    sub_180025240((__int64)v3, &v28, k);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28 + 176LL))(v28);
    if ( *((_QWORD *)&v28 + 1) )
      sub_18001060C(*((__int64 *)&v28 + 1));
  }
  v18 = **(_QWORD **)(a1[64] + 18560LL);
  v29 = v18;
  while ( !*(_BYTE *)(v18 + 25) )
  {
    v19 = *(_QWORD *)(v18 + 64);
    v20 = (_QWORD *)(v19 + 256);
    v21 = (_QWORD *)(v19 + 416);
    while ( v20 != v21 )
    {
      if ( *v20 )
        sub_18007BFA8(*v20);
      v20 += 2;
    }
    sub_18001C420(&v29);
    v18 = v29;
  }
  sub_18004C564(a1[64], v9);
  while ( (unsigned int)sub_180025294((__int64)v3) )
  {
    sub_180025240((__int64)v3, &v28, 0);
    sub_180024FD0((__int64)v3, (__int64 *)&v28);
    if ( *((_QWORD *)&v28 + 1) )
      sub_18001060C(*((__int64 *)&v28 + 1));
  }
  if ( v3[3640] )
    sub_180025BE8(v3);
  sub_180011044((__int64)v36);
  sub_18002867C((__int64)(a1 + 14), (__int64)v36);
  v22 = (_QWORD *)(a1[11] + 16LL * (unsigned int)sub_180032794(a1, &v31));
  v23 = (__int64 *)a1[12];
  for ( m = v22 + 2; m != v23; m += 2 )
  {
    sub_180011110(v22, m);
    v22 += 2;
  }
  v25 = *(_QWORD *)(a1[12] - 8LL);
  if ( v25 )
    sub_18001060C(v25);
  a1[12] -= 16LL;
  sub_180011044((__int64)v36);
  v28 = 0LL;
  sub_180011110(&v31, (__int64 *)&v28);
  if ( *((_QWORD *)&v28 + 1) )
    sub_18001060C(*((__int64 *)&v28 + 1));
  sub_18001CAFC(&stru_1801B9288, 3);
  sub_18001CAFC(&stru_1801B9288, 3);
  sub_180033C18(a1);
  sub_180033F84(a1);
  sub_180033280(a1);
  sub_180011044((__int64)v34);
  result = sub_180011044((__int64)v35);
  v27 = v32;
  if ( v32 )
    return sub_18001060C(v27);
  return result;
}
