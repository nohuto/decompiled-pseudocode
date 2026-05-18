/*
 * XREFs of sub_1800C50C0 @ 0x1800C50C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180017024 @ 0x180017024 (sub_180017024.c)
 *     sub_180052358 @ 0x180052358 (sub_180052358.c)
 *     sub_1800C13C0 @ 0x1800C13C0 (sub_1800C13C0.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800C50C0(__int64 a1, int a2, __int64 *a3, unsigned int a4)
{
  __int64 *v5; // rax
  char v6; // bl
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // r15
  char v12; // di
  char v13; // di
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 *v16; // rax
  char v17; // si
  char v18; // si
  int v19; // r14d
  int v20; // r14d
  __int64 result; // rax
  __int64 v22; // [rsp+30h] [rbp-79h] BYREF
  __int64 v23; // [rsp+38h] [rbp-71h] BYREF
  __int64 v24; // [rsp+40h] [rbp-69h] BYREF
  __int64 v25; // [rsp+48h] [rbp-61h] BYREF
  __int64 v26; // [rsp+50h] [rbp-59h]
  char v27; // [rsp+58h] [rbp-51h] BYREF
  __int64 v28; // [rsp+60h] [rbp-49h]
  char v29; // [rsp+68h] [rbp-41h] BYREF
  __int64 v30; // [rsp+70h] [rbp-39h]
  __int64 v31; // [rsp+78h] [rbp-31h]
  __int64 v32; // [rsp+80h] [rbp-29h]
  __int64 v33; // [rsp+88h] [rbp-21h] BYREF
  __int64 v34; // [rsp+90h] [rbp-19h]
  __int64 v35; // [rsp+98h] [rbp-11h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v37; // [rsp+B0h] [rbp+7h]

  if ( *a3 )
  {
    v5 = sub_180052358(*a3, &v33, *(_DWORD *)(a1 + 88));
    v6 = 1;
    v7 = *v5;
  }
  else
  {
    v28 = 0LL;
    v5 = (__int64 *)&v27;
    v6 = 2;
    v7 = 0LL;
  }
  v25 = v7;
  v8 = v5[1];
  v26 = v8;
  *v5 = 0LL;
  v5[1] = 0LL;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( v28 )
      sub_18001060C(v28);
  }
  if ( (v6 & 1) != 0 )
  {
    v6 &= ~1u;
    if ( v34 )
      sub_18001060C(v34);
  }
  if ( v7 )
  {
    v9 = unknown_libname_81(&v35, &v25);
    v10 = sub_180017024(&v36, v9);
    v11 = *v10;
    v12 = 4;
  }
  else
  {
    v30 = 0LL;
    v10 = (__int64 *)&v29;
    v11 = 0LL;
    v12 = 8;
  }
  v13 = v6 | v12;
  v31 = v11;
  v14 = v10[1];
  v32 = v14;
  *v10 = 0LL;
  v10[1] = 0LL;
  if ( (v13 & 8) != 0 )
  {
    v13 &= ~8u;
    if ( v30 )
      sub_18001060C(v30);
  }
  if ( (v13 & 4) != 0 )
  {
    v13 &= ~4u;
    if ( v37 )
      sub_18001060C(v37);
  }
  if ( v11 )
  {
    sub_1800C13C0((_QWORD *)v11);
    v15 = *(_QWORD *)(v11 + 160);
    v23 = v15;
    sub_1800115D0(&v23);
    v16 = &v23;
    v17 = 80;
  }
  else
  {
    v24 = 0LL;
    v16 = &v24;
    v15 = 0LL;
    v17 = 32;
  }
  v18 = v13 | v17;
  v22 = 0LL;
  if ( &v22 != v16 )
  {
    v22 = v15;
    *v16 = 0LL;
  }
  if ( (v18 & 0x20) != 0 )
  {
    v18 &= ~0x20u;
    sub_18000E954(&v24);
  }
  if ( (v18 & 0x10) != 0 )
    sub_18000E954(&v23);
  if ( v11 && *(_BYTE *)(v11 + 208) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 432LL))(*(_QWORD *)(a1 + 144), v22);
    *(_BYTE *)(v11 + 208) = 0;
  }
  v19 = a2 - 1;
  if ( v19 )
  {
    v20 = v19 - 3;
    if ( v20 )
    {
      if ( v20 == 1 )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 64LL))(
          *(_QWORD *)(a1 + 144),
          a4,
          1LL,
          &v22);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 248LL))(
        *(_QWORD *)(a1 + 144),
        a4,
        1LL,
        &v22);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 200LL))(
      *(_QWORD *)(a1 + 144),
      a4,
      1LL,
      &v22);
  }
  if ( v22 )
  {
    _InterlockedIncrement64(qword_1801C4BE0);
    v8 = v26;
    v14 = v32;
  }
  result = sub_18000E954(&v22);
  if ( v14 )
    result = sub_18001060C(v14);
  if ( v8 )
    return sub_18001060C(v8);
  return result;
}
