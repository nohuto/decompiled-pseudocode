/*
 * XREFs of sub_1800D22B0 @ 0x1800D22B0
 * Callers:
 *     sub_18003582C @ 0x18003582C (sub_18003582C.c)
 * Callees:
 *     _o_floor @ 0x18000C440 (_o_floor.c)
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     j_unknown_libname_81 @ 0x180012100 (j_unknown_libname_81.c)
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 *     sub_180024A88 @ 0x180024A88 (sub_180024A88.c)
 *     sub_1800403F0 @ 0x1800403F0 (sub_1800403F0.c)
 *     sub_18006A618 @ 0x18006A618 (sub_18006A618.c)
 *     sub_1800D1FE0 @ 0x1800D1FE0 (sub_1800D1FE0.c)
 *     sub_1800D21C4 @ 0x1800D21C4 (sub_1800D21C4.c)
 *     sub_1800D2220 @ 0x1800D2220 (sub_1800D2220.c)
 *     sub_1800D25A4 @ 0x1800D25A4 (sub_1800D25A4.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800D22B0(__int64 a1)
{
  char *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // r14
  _QWORD *v6; // rax
  char *i; // rdi
  char v8; // r12
  __int64 v9; // rbx
  double v10; // xmm7_8
  double v11; // xmm1_8
  double v12; // xmm6_8
  int v13; // r13d
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rcx
  void *v17; // r14
  char *j; // r12
  __int64 *v19; // rbx
  __int64 **v20; // rax
  double v22; // [rsp+38h] [rbp-49h] BYREF
  _QWORD *v23; // [rsp+40h] [rbp-41h]
  __int64 v24; // [rsp+48h] [rbp-39h] BYREF
  __int64 v25; // [rsp+50h] [rbp-31h]
  __int128 v26; // [rsp+58h] [rbp-29h] BYREF
  char *v27; // [rsp+68h] [rbp-19h]
  __int64 *v28; // [rsp+E8h] [rbp+67h] BYREF
  __int64 v29; // [rsp+F0h] [rbp+6Fh] BYREF
  double v30; // [rsp+F8h] [rbp+77h] BYREF
  double v31; // [rsp+100h] [rbp+7Fh] BYREF

  v26 = 0LL;
  v2 = 0LL;
  v27 = 0LL;
  (***(void (__fastcall ****)(_QWORD, __int64 *))(a1 + 88))(*(_QWORD *)(a1 + 88), &v29);
  v28 = (__int64 *)(a1 + 56);
  sub_180011C30(a1 + 56);
  sub_1800D21C4((__int64 *)a1, &v30, *(__int64 **)(a1 + 8), *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 32);
  if ( v3 != v4 )
  {
    sub_180012140(v3, v4);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a1 + 24);
  }
  Mtx_unlock((_Mtx_t)(a1 + 56));
  v5 = *(_QWORD **)a1;
  v6 = *(_QWORD **)(a1 + 8);
  v23 = v6;
  for ( i = (char *)*((_QWORD *)&v26 + 1); v5 != v23; v5 += 2 )
  {
    unknown_libname_81(&v24, v5);
    v8 = 1;
    v9 = v24;
    if ( !sub_1800403F0(v24 + 168) )
    {
      v28 = (__int64 *)(v29 - *(_QWORD *)(v9 + 8));
      sub_1800D1FE0((__int64)&v30, (__int64)&v28);
      sub_1800D1FE0((__int64)&v31, v9 + 16);
      v10 = v30 / v31;
      v11 = 0.0;
      v12 = 0.0;
      v13 = (int)(v30 / v31);
      v14 = *(unsigned int *)(v9 + 24);
      LODWORD(v28) = *(_DWORD *)(v9 + 24);
      v15 = *(_DWORD *)(v9 + 28);
      if ( v15 )
      {
        if ( v15 == 1 )
        {
          if ( v13 < (int)v14 )
          {
            o_floor();
            v11 = v10 - v10;
          }
          v12 = v11;
        }
      }
      else if ( v13 < (int)v14 )
      {
        o_floor();
        v12 = v10 - v10;
      }
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v9 + 32) + 8LL))(
             *(_QWORD *)(v9 + 32),
             v14,
             *(_QWORD *)v9);
      if ( v8 && *(_QWORD *)(v9 + 96) )
      {
        v22 = ((double)v13 + v12) / (double)*(int *)(v9 + 24);
        v16 = *(_QWORD *)(v9 + 96);
        if ( !v16 )
        {
          std::_Xbad_function_call();
          JUMPOUT(0x1800D259ELL);
        }
        (*(void (__fastcall **)(__int64, double *))(*(_QWORD *)v16 + 16LL))(v16, &v22);
      }
      if ( v13 >= (int)v28 )
        goto LABEL_20;
    }
    LOBYTE(v6) = sub_1800403F0(v9 + 168);
    if ( (_BYTE)v6 || !v8 )
    {
LABEL_20:
      if ( *(_QWORD *)(v9 + 160) && v8 )
        sub_180024A88(v9 + 104);
      if ( i == v2 )
      {
        LOBYTE(v6) = (unsigned __int8)sub_18006A618((__int64 *)&v26, (__int64)i, &v24);
        v2 = v27;
        i = (char *)*((_QWORD *)&v26 + 1);
      }
      else
      {
        LOBYTE(v6) = (unsigned __int8)j_unknown_libname_81(i, &v24);
        i += 16;
        *((_QWORD *)&v26 + 1) = i;
      }
    }
    if ( v25 )
      LOBYTE(v6) = sub_18001060C(v25);
  }
  v17 = (void *)v26;
  for ( j = (char *)v26; j != i; j += 16 )
  {
    v19 = *(__int64 **)(a1 + 8);
    v20 = sub_1800D2220(&v28, *(__int64 **)a1, v19, j);
    LOBYTE(v6) = sub_1800D25A4(a1, &v30, *v20, v19);
  }
  if ( v17 )
  {
    sub_180012140((__int64)v17, (__int64)i);
    LOBYTE(v6) = sub_180010234(v17, (v2 - (_BYTE *)v17) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return (char)v6;
}
