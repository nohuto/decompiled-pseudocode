/*
 * XREFs of sub_1800C3820 @ 0x1800C3820
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180052358 @ 0x180052358 (sub_180052358.c)
 *     sub_1800C22A4 @ 0x1800C22A4 (sub_1800C22A4.c)
 *     sub_1800C2730 @ 0x1800C2730 (sub_1800C2730.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800C3820(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v5; // rax
  char v6; // di
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 *v9; // rax
  __int64 v10; // rcx
  char v11; // bl
  char v12; // bl
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 *v15; // rax
  __int64 *v16; // rax
  int v17; // r14d
  __int64 v18; // rsi
  void (__fastcall *v19)(__int64, __int64, _QWORD, __int64, _DWORD, int); // rdi
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rsi
  void (__fastcall *v24)(__int64, __int64, __int64); // rdi
  __int64 v25; // rbx
  __int64 *v26; // rax
  __int64 result; // rax
  __int64 v28; // [rsp+40h] [rbp-99h] BYREF
  __int64 v29; // [rsp+48h] [rbp-91h] BYREF
  __int64 v30; // [rsp+50h] [rbp-89h]
  __int64 v31; // [rsp+58h] [rbp-81h] BYREF
  __int64 v32; // [rsp+60h] [rbp-79h] BYREF
  __int64 v33; // [rsp+68h] [rbp-71h]
  _QWORD v34[2]; // [rsp+70h] [rbp-69h] BYREF
  _QWORD v35[2]; // [rsp+80h] [rbp-59h] BYREF
  __int128 v36; // [rsp+90h] [rbp-49h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-39h]
  __int64 v38; // [rsp+B0h] [rbp-29h]
  int v39; // [rsp+B8h] [rbp-21h]
  __int128 v40; // [rsp+C0h] [rbp-19h] BYREF
  __int128 v41; // [rsp+D0h] [rbp-9h]
  __int64 v42; // [rsp+E0h] [rbp+7h]
  int v43; // [rsp+E8h] [rbp+Fh]

  LODWORD(v28) = 0;
  if ( *a2 )
  {
    v5 = sub_180052358(*a2, &v32, *(_DWORD *)(a1 + 88));
    v6 = 1;
    v7 = *v5;
  }
  else
  {
    v30 = 0LL;
    v5 = &v29;
    v6 = 2;
    v7 = 0LL;
  }
  v34[0] = v7;
  v8 = v5[1];
  v34[1] = v8;
  *v5 = 0LL;
  v5[1] = 0LL;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( v30 )
      sub_18001060C(v30);
  }
  if ( (v6 & 1) != 0 )
  {
    v6 &= ~1u;
    if ( v33 )
      sub_18001060C(v33);
  }
  if ( *a3 )
  {
    v9 = sub_180052358(*a3, &v32, *(_DWORD *)(a1 + 88));
    v10 = *v9;
    v11 = 4;
  }
  else
  {
    v30 = 0LL;
    v9 = &v29;
    v10 = 0LL;
    v11 = 8;
  }
  v12 = v6 | v11;
  v35[0] = v10;
  v13 = v9[1];
  v35[1] = v13;
  *v9 = 0LL;
  v9[1] = 0LL;
  if ( (v12 & 8) != 0 )
  {
    v12 &= ~8u;
    if ( v30 )
      sub_18001060C(v30);
  }
  if ( (v12 & 4) != 0 && v33 )
    sub_18001060C(v33);
  sub_1800C2730(&v29, v34);
  sub_1800C2730(&v32, v35);
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0;
  v14 = v32;
  v15 = sub_1800C22A4(v32, &v28);
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)*v15 + 80LL))(*v15, &v36);
  sub_18000E954(&v28);
  v16 = sub_1800C22A4(v29, &v28);
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)*v16 + 80LL))(*v16, &v40);
  sub_18000E954(&v28);
  if ( DWORD1(v41) == 1 && DWORD1(v37) > 1 )
  {
    v17 = v37;
    if ( (_DWORD)v37 == 39 )
      v17 = v41;
    v18 = *(_QWORD *)(a1 + 144);
    v19 = *(void (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, int))(*(_QWORD *)v18 + 456LL);
    v20 = *sub_1800C22A4(v14, &v31);
    v21 = sub_1800C22A4(v29, &v28);
    v19(v18, *v21, 0LL, v20, 0, v17);
    sub_18000E954(&v28);
    v22 = &v31;
  }
  else
  {
    v23 = *(_QWORD *)(a1 + 144);
    v24 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v23 + 376LL);
    v25 = *sub_1800C22A4(v14, &v28);
    v26 = sub_1800C22A4(v29, &v31);
    v24(v23, *v26, v25);
    sub_18000E954(&v31);
    v22 = &v28;
  }
  result = sub_18000E954(v22);
  if ( v33 )
    result = sub_18001060C(v33);
  if ( v30 )
    result = sub_18001060C(v30);
  if ( v13 )
    result = sub_18001060C(v13);
  if ( v8 )
    return sub_18001060C(v8);
  return result;
}
