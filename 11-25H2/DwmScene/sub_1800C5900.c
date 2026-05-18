/*
 * XREFs of sub_1800C5900 @ 0x1800C5900
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18000FFE4 @ 0x18000FFE4 (sub_18000FFE4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_1800521D8 @ 0x1800521D8 (sub_1800521D8.c)
 *     sub_1800521F8 @ 0x1800521F8 (sub_1800521F8.c)
 *     sub_18005224C @ 0x18005224C (sub_18005224C.c)
 *     sub_180052350 @ 0x180052350 (sub_180052350.c)
 *     sub_180052400 @ 0x180052400 (sub_180052400.c)
 *     sub_1800BB198 @ 0x1800BB198 (sub_1800BB198.c)
 *     sub_1800C210C @ 0x1800C210C (sub_1800C210C.c)
 *     sub_1800C2144 @ 0x1800C2144 (sub_1800C2144.c)
 *     sub_1800C2568 @ 0x1800C2568 (sub_1800C2568.c)
 *     sub_1800C25D0 @ 0x1800C25D0 (sub_1800C25D0.c)
 *     sub_1800C304C @ 0x1800C304C (sub_1800C304C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
char __fastcall sub_1800C5900(__int64 a1, __int64 *a2, const void *a3, int a4)
{
  __int64 *v6; // rax
  char v7; // bl
  __int64 v8; // rdi
  __int64 v9; // r15
  int v10; // r12d
  __int64 v11; // rcx
  __int64 *v12; // rdi
  __int64 **v13; // r13
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int128 *); // rbx
  __int64 v16; // rsi
  __int64 *v17; // rax
  int v18; // ebx
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, __int128 *); // rbx
  _QWORD *v21; // rax
  char v22; // r12
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // r8d
  unsigned int v26; // eax
  __int64 v27; // rbx
  __int64 *v28; // r14
  __int64 v29; // rdi
  __int64 *v30; // rax
  __int128 v32; // [rsp+40h] [rbp-39h] BYREF
  __int64 v33; // [rsp+50h] [rbp-29h] BYREF
  __int64 v34; // [rsp+58h] [rbp-21h]
  _QWORD v35[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v36; // [rsp+70h] [rbp-9h] BYREF
  __int64 v37; // [rsp+78h] [rbp-1h]
  __int64 v38; // [rsp+80h] [rbp+7h] BYREF
  __int64 v39; // [rsp+88h] [rbp+Fh]
  __int64 v40; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v41; // [rsp+E8h] [rbp+6Fh] BYREF
  const void *v42; // [rsp+F0h] [rbp+77h]
  int v43; // [rsp+F8h] [rbp+7Fh]

  v43 = a4;
  v42 = a3;
  LODWORD(v40) = 0;
  if ( *a2 )
  {
    v6 = sub_1800521F8(*a2, &v38, *(_DWORD *)(a1 + 88));
    v7 = 1;
    v8 = *v6;
  }
  else
  {
    v34 = 0LL;
    v6 = &v33;
    v7 = 2;
    v8 = 0LL;
  }
  v35[0] = v8;
  v9 = v6[1];
  v35[1] = v9;
  *v6 = 0LL;
  v6[1] = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v34 )
      sub_18001050C(v34);
  }
  if ( (v7 & 1) != 0 && v39 )
    sub_18001050C(v39);
  v10 = -((unsigned int)sub_180052400(v8) != 2);
  sub_1800C25D0(&v33, v35);
  v32 = 0LL;
  LODWORD(v40) = 1;
  v11 = *(_QWORD *)(*a2 + 128);
  v12 = (__int64 *)(a1 + 144);
  v13 = (__int64 **)(a1 + 144);
  if ( v11 && *(_DWORD *)(v11 + 12) == 1 )
  {
    v14 = *v12;
    v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int128 *))(*(_QWORD *)v14 + 112LL);
    v16 = v33;
    v17 = sub_1800C2144(v33, &v41);
    v18 = v15(v14, *v17, 0LL, (unsigned int)(v10 + 4), 0, &v32);
    sub_18000E854(&v41);
  }
  else
  {
    v16 = v33;
    LODWORD(v40) = sub_1800521D8(v33);
    v19 = *v12;
    v20 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, __int128 *))(*(_QWORD *)v19 + 112LL);
    v21 = sub_1800C210C(v16, &v41);
    v18 = v20(v19, *v21, 0LL, (unsigned int)(v10 + 4), 0, &v32);
    sub_18000E854(&v41);
  }
  sub_180011B04(a1 + 72, &v36);
  sub_1800C2568(&v38, &v36);
  if ( v37 )
    sub_18001050C(v37);
  sub_1800BB198(v38, v18);
  v22 = 0;
  if ( v18 < 0 )
  {
    sub_18001C99C(&stru_1801B8548, 3);
  }
  else
  {
    v23 = sub_18005224C(v16);
    sub_1800C304C(v23);
    v24 = sub_180052350(v16);
    v26 = (int)v40 * DWORD2(v32) * v24 / v25;
    if ( v26 == v43 )
    {
      sub_18000FFE4((void *)v32, v26, v42, v26);
      v22 = 1;
    }
    v27 = *sub_1800C2144(v16, &v40);
    sub_18000E854(&v40);
    v28 = *v13;
    v29 = **v13;
    if ( v27 )
      v30 = sub_1800C2144(v16, &v40);
    else
      v30 = sub_1800C210C(v16, &v40);
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(v29 + 120))(v28, *v30, 0LL);
    sub_18000E854(&v40);
  }
  if ( v39 )
    sub_18001050C(v39);
  if ( v34 )
    sub_18001050C(v34);
  if ( v9 )
    sub_18001050C(v9);
  return v22;
}
