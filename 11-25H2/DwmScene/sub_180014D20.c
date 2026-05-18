/*
 * XREFs of sub_180014D20 @ 0x180014D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180012554 @ 0x180012554 (sub_180012554.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_180032424 @ 0x180032424 (sub_180032424.c)
 *     sub_180039580 @ 0x180039580 (sub_180039580.c)
 *     sub_18003EA7C @ 0x18003EA7C (sub_18003EA7C.c)
 *     sub_18003F268 @ 0x18003F268 (sub_18003F268.c)
 *     sub_18003F604 @ 0x18003F604 (sub_18003F604.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180014D20(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 *v4; // rsi
  __int64 v5; // rdi
  __int128 *v6; // rax
  char v7; // bl
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // r10
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int128 v17; // [rsp+20h] [rbp-59h] BYREF
  __int64 v18; // [rsp+30h] [rbp-49h] BYREF
  __int64 v19; // [rsp+38h] [rbp-41h]
  __int64 v20; // [rsp+40h] [rbp-39h] BYREF
  __int64 v21; // [rsp+48h] [rbp-31h]
  __int64 v22; // [rsp+50h] [rbp-29h] BYREF
  __int64 v23; // [rsp+58h] [rbp-21h]
  _QWORD v24[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v25; // [rsp+70h] [rbp-9h] BYREF
  __int64 v26; // [rsp+78h] [rbp-1h]
  __int64 v27; // [rsp+80h] [rbp+7h] BYREF
  __int64 v28; // [rsp+88h] [rbp+Fh]
  _QWORD v29[4]; // [rsp+90h] [rbp+17h] BYREF
  _BYTE v30[16]; // [rsp+B0h] [rbp+37h] BYREF

  v3 = qword_1801C3438;
  v4 = (__int64 *)(a1 + 32);
  sub_18001258C(*(_QWORD *)(a1 + 32), &v27);
  v5 = v27;
  sub_18002851C(v27 + 16, v30);
  sub_180012554(*v4, &v25);
  if ( a2 )
  {
    v6 = (__int128 *)unknown_libname_81(&v18, (_QWORD *)(a2 + 32));
    v7 = 1;
  }
  else
  {
    v17 = 0LL;
    v6 = &v17;
    v7 = 2;
  }
  unknown_libname_81(&v20, v6);
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( *((_QWORD *)&v17 + 1) )
      sub_18001050C(*((__int64 *)&v17 + 1));
  }
  if ( (v7 & 1) != 0 && v19 )
    sub_18001050C(v19);
  if ( v25 != v20 )
  {
    v17 = 0LL;
    if ( v20 )
    {
      v11 = (__int64 *)sub_18001258C(v20, &v22);
      sub_180011010(&v17, v11);
      if ( v23 )
        sub_18001050C(v23);
      v8 = v17;
    }
    else
    {
      sub_180032424(*(_QWORD *)(v3 + 56), &v18);
      sub_180011010(&v17, &v18);
      if ( v19 )
        sub_18001050C(v19);
      v8 = v17;
      sub_18002851C(v17 + 16, &v22);
      v9 = sub_180012344((__int64)v29, (__int64)&unk_1801C3FA8);
      v10 = (__int64 *)sub_18003EA7C(v8, &v18, v9);
      sub_180011010(&v20, v10);
      if ( v19 )
        sub_18001050C(v19);
      sub_180010F44((__int64)&v22);
    }
    if ( v5 == v8 )
    {
      unknown_libname_81(v29, &v20);
      v15 = unknown_libname_81(v24, v4);
      sub_18003F604(v5, v15);
    }
    else
    {
      sub_18002851C(v8 + 16, v29);
      v12 = unknown_libname_81(&v22, &v20);
      sub_180039580(v13, &v18, 131075LL, v12);
      v14 = unknown_libname_81(v24, v4);
      sub_18003F268(v5, v14);
      sub_18001244C(v4, &v18);
      if ( v19 )
        sub_18001050C(v19);
      sub_180010F44((__int64)v29);
    }
    if ( *((_QWORD *)&v17 + 1) )
      sub_18001050C(*((__int64 *)&v17 + 1));
  }
  if ( v21 )
    sub_18001050C(v21);
  if ( v26 )
    sub_18001050C(v26);
  sub_180010F44((__int64)v30);
  if ( v28 )
    sub_18001050C(v28);
  return 0LL;
}
