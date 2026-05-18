/*
 * XREFs of sub_180026B60 @ 0x180026B60
 * Callers:
 *     sub_1800266D0 @ 0x1800266D0 (sub_1800266D0.c)
 *     sub_180026858 @ 0x180026858 (sub_180026858.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010690 @ 0x180010690 (sub_180010690.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_1800261DC @ 0x1800261DC (sub_1800261DC.c)
 *     sub_180026E30 @ 0x180026E30 (sub_180026E30.c)
 *     sub_180026E80 @ 0x180026E80 (sub_180026E80.c)
 *     sub_180026ED0 @ 0x180026ED0 (sub_180026ED0.c)
 *     sub_18002755C @ 0x18002755C (sub_18002755C.c)
 *     sub_1800279D0 @ 0x1800279D0 (sub_1800279D0.c)
 *     sub_180027A8C @ 0x180027A8C (sub_180027A8C.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_180051658 @ 0x180051658 (sub_180051658.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_180026B60(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // eax
  void (__fastcall *v14)(__int64, _QWORD); // r10
  __int64 v15; // r11
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h]
  __int64 v23; // [rsp+40h] [rbp-40h] BYREF
  __int64 v24; // [rsp+48h] [rbp-38h]
  _BYTE v25[32]; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v26; // [rsp+98h] [rbp+18h] BYREF

  v4 = *(_DWORD *)(a2 + 244);
  if ( v4 )
  {
    v5 = sub_180011C64(a2 + 8, &v23);
    sub_1800279D0(a1, v5);
    if ( v24 )
      sub_18001050C(v24);
    sub_180010690(a2, &v21);
    v6 = v21;
    v7 = sub_180027A8C(a1, &v23);
    sub_180027C24(v6, v7);
    v8 = sub_180026E30(a1, *(unsigned int *)(a1 + 112));
    v11 = sub_180026E80(a1, v9, v10, v8);
    v13 = sub_180026ED0(a1, v12, v11);
    v14(v15, v13);
    v26 = v4;
    v16 = sub_1800261DC((_QWORD *)(a1 + 120), (__int64)&v23, &v26);
    sub_18001244C((__int64 *)(*(_QWORD *)v16 + 40LL), &v21);
    if ( *(_QWORD *)(a1 + 136) )
    {
      unknown_libname_81(&v23, (_QWORD *)(v21 + 96));
      sub_180051658(v17, &v23);
      unknown_libname_81(&v23, (_QWORD *)(v21 + 96));
      v18 = sub_180027A8C(*(_QWORD *)(a1 + 136), v25);
      sub_180027C24(v23, v18);
      if ( v24 )
        sub_18001050C(v24);
    }
    if ( *(_QWORD *)(a1 + 152) )
    {
      unknown_libname_81(&v23, (_QWORD *)(v21 + 112));
      sub_180051658(v19, &v23);
      unknown_libname_81(&v23, (_QWORD *)(v21 + 112));
      v20 = sub_180027A8C(*(_QWORD *)(a1 + 152), v25);
      sub_180027C24(v23, v20);
      if ( v24 )
        sub_18001050C(v24);
    }
    v26 = v4;
    *(_BYTE *)(*(_QWORD *)sub_18002755C(a1 + 80, &v23, &v26) + 32LL) = 1;
    if ( v22 )
      sub_18001050C(v22);
  }
}
