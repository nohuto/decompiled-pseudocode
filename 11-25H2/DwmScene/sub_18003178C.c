/*
 * XREFs of sub_18003178C @ 0x18003178C
 * Callers:
 *     sub_180033500 @ 0x180033500 (sub_180033500.c)
 *     sub_180033EE4 @ 0x180033EE4 (sub_180033EE4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_180024E70 @ 0x180024E70 (sub_180024E70.c)
 *     sub_1800250E0 @ 0x1800250E0 (sub_1800250E0.c)
 *     sub_180025134 @ 0x180025134 (sub_180025134.c)
 *     sub_180025A88 @ 0x180025A88 (sub_180025A88.c)
 *     sub_180028424 @ 0x180028424 (sub_180028424.c)
 *     sub_1800284DC @ 0x1800284DC (sub_1800284DC.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_18002869C @ 0x18002869C (sub_18002869C.c)
 *     sub_180029B80 @ 0x180029B80 (sub_180029B80.c)
 *     sub_18002BF54 @ 0x18002BF54 (sub_18002BF54.c)
 *     sub_18002D3F0 @ 0x18002D3F0 (sub_18002D3F0.c)
 *     sub_18002E084 @ 0x18002E084 (sub_18002E084.c)
 *     sub_180031CC4 @ 0x180031CC4 (sub_180031CC4.c)
 *     sub_180031D5C @ 0x180031D5C (sub_180031D5C.c)
 *     sub_180032634 @ 0x180032634 (sub_180032634.c)
 *     sub_180033070 @ 0x180033070 (sub_180033070.c)
 *     sub_180033120 @ 0x180033120 (sub_180033120.c)
 *     sub_180033AB8 @ 0x180033AB8 (sub_180033AB8.c)
 *     sub_180033E24 @ 0x180033E24 (sub_180033E24.c)
 *     sub_1800346F4 @ 0x1800346F4 (sub_1800346F4.c)
 *     sub_180036840 @ 0x180036840 (sub_180036840.c)
 *     sub_18004C404 @ 0x18004C404 (sub_18004C404.c)
 *     sub_18007BE48 @ 0x18007BE48 (sub_18007BE48.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_18003178C(_QWORD *a1, _QWORD *a2)
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
  sub_180033070(a1, 8LL, v5, &v28);
  sub_18002851C((__int64)(a1 + 1), (__int64)v35);
  sub_1800284DC((__int64)(a1 + 138), (__int64)v34);
  v6 = unknown_libname_81(&v28, &v31);
  sub_1800346F4(a1, v6);
  sub_18001C99C(&stru_1801B8288, 3);
  v7 = sub_18002BF54((__int64)v36, (__int64)(v3 + 80));
  sub_1800137F8(v7);
  sub_18001C99C(&stru_1801B8288, 3);
  sub_180011A5C((__int64)v36);
  sub_18002869C((__int64)(a1 + 14), (__int64)&v28);
  if ( *((_QWORD **)v3 + 456) != a1 )
    goto LABEL_53;
  for ( i = (_QWORD *)a1[11]; i != (_QWORD *)a1[12] && (_BYTE *)*i != v3; i += 2 )
    ;
  if ( i == (_QWORD *)a1[12] )
  {
LABEL_53:
    sub_18001C99C(&stru_1801B8288, 3);
    sub_180028424((__int64)&v28);
    sub_180010F44((__int64)v34);
    result = sub_180010F44((__int64)v35);
    if ( !v4 )
      return result;
    v27 = v4;
    return sub_18001050C(v27);
  }
  sub_180028424((__int64)&v28);
  sub_18002851C((__int64)(v3 + 24), (__int64)v36);
  v9 = *((_DWORD *)v3 + 61);
  v10 = sub_180025134((__int64)v3);
  for ( j = 0; j < v10; ++j )
  {
    sub_1800250E0((__int64)v3, &v28, j);
    v12 = v28;
    sub_1800284DC(v28 + 8, (__int64)v33);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 320LL))(v12, &v29);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 360LL))(v12, 0LL);
    sub_180029B80((__int64)&v29);
    sub_180010F44((__int64)v33);
    if ( *((_QWORD *)&v28 + 1) )
      sub_18001050C(*((__int64 *)&v28 + 1));
  }
  sub_180015174(&v28, &v31);
  v13 = sub_18002D3F0(a1 + 23, v33, (__int64)&v28)[2];
  v14 = !*(_BYTE *)(v13 + 25) && *((_QWORD *)&v28 + 1) >= *(_QWORD *)(v13 + 40);
  if ( *((_QWORD *)&v28 + 1) )
    sub_180010544(*((volatile signed __int32 **)&v28 + 1));
  if ( v14 )
  {
    sub_180015174(&v28, &v31);
    v15 = sub_18002E084(a1 + 23, (__int64)v33, (__int64)&v28);
    unknown_libname_81(&v29, (_QWORD *)(*(_QWORD *)v15 + 48LL));
    if ( *((_QWORD *)&v28 + 1) )
      sub_180010544(*((volatile signed __int32 **)&v28 + 1));
    sub_180015174(&v28, &v31);
    sub_180036840(a1 + 23, &v28);
    if ( *((_QWORD *)&v28 + 1) )
      sub_180010544(*((volatile signed __int32 **)&v28 + 1));
    sub_180031CC4(a1, &v29);
    if ( v30 )
      sub_18001050C(v30);
  }
  v16 = unknown_libname_81(v33, &v31);
  sub_180031D5C(a1, v16);
  if ( v3[3640] )
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v3 + 8LL))(v3);
  for ( k = 0; k < v10; ++k )
  {
    sub_1800250E0((__int64)v3, &v28, k);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28 + 176LL))(v28);
    if ( *((_QWORD *)&v28 + 1) )
      sub_18001050C(*((__int64 *)&v28 + 1));
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
        sub_18007BE48(*v20);
      v20 += 2;
    }
    sub_18001C2C0(&v29);
    v18 = v29;
  }
  sub_18004C404(a1[64], v9);
  while ( (unsigned int)sub_180025134((__int64)v3) )
  {
    sub_1800250E0((__int64)v3, &v28, 0);
    sub_180024E70((__int64)v3, (__int64 *)&v28);
    if ( *((_QWORD *)&v28 + 1) )
      sub_18001050C(*((__int64 *)&v28 + 1));
  }
  if ( v3[3640] )
    sub_180025A88(v3);
  sub_180010F44((__int64)v36);
  sub_18002851C((__int64)(a1 + 14), (__int64)v36);
  v22 = (_QWORD *)(a1[11] + 16LL * (unsigned int)sub_180032634(a1, &v31));
  v23 = (__int64 *)a1[12];
  for ( m = v22 + 2; m != v23; m += 2 )
  {
    sub_180011010(v22, m);
    v22 += 2;
  }
  v25 = *(_QWORD *)(a1[12] - 8LL);
  if ( v25 )
    sub_18001050C(v25);
  a1[12] -= 16LL;
  sub_180010F44((__int64)v36);
  v28 = 0LL;
  sub_180011010(&v31, (__int64 *)&v28);
  if ( *((_QWORD *)&v28 + 1) )
    sub_18001050C(*((__int64 *)&v28 + 1));
  sub_18001C99C(&stru_1801B8288, 3);
  sub_18001C99C(&stru_1801B8288, 3);
  sub_180033AB8(a1);
  sub_180033E24(a1);
  sub_180033120(a1);
  sub_180010F44((__int64)v34);
  result = sub_180010F44((__int64)v35);
  v27 = v32;
  if ( v32 )
    return sub_18001050C(v27);
  return result;
}
