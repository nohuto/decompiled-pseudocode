/*
 * XREFs of sub_180014E20 @ 0x180014E20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180012654 @ 0x180012654 (sub_180012654.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_180032584 @ 0x180032584 (sub_180032584.c)
 *     sub_1800396E0 @ 0x1800396E0 (sub_1800396E0.c)
 *     sub_18003EBDC @ 0x18003EBDC (sub_18003EBDC.c)
 *     sub_18003F3C8 @ 0x18003F3C8 (sub_18003F3C8.c)
 *     sub_18003F764 @ 0x18003F764 (sub_18003F764.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180014E20(__int64 a1, __int64 a2)
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

  v3 = qword_1801C4448;
  v4 = (__int64 *)(a1 + 32);
  sub_18001268C(*(_QWORD *)(a1 + 32), &v27);
  v5 = v27;
  sub_18002867C(v27 + 16, v30);
  sub_180012654(*v4, &v25);
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
      sub_18001060C(*((__int64 *)&v17 + 1));
  }
  if ( (v7 & 1) != 0 && v19 )
    sub_18001060C(v19);
  if ( v25 != v20 )
  {
    v17 = 0LL;
    if ( v20 )
    {
      v11 = (__int64 *)sub_18001268C(v20, &v22);
      sub_180011110(&v17, v11);
      if ( v23 )
        sub_18001060C(v23);
      v8 = v17;
    }
    else
    {
      sub_180032584(*(_QWORD *)(v3 + 56), &v18);
      sub_180011110(&v17, &v18);
      if ( v19 )
        sub_18001060C(v19);
      v8 = v17;
      sub_18002867C(v17 + 16, &v22);
      v9 = sub_180012444((__int64)v29, (__int64)&unk_1801C4FB8);
      v10 = (__int64 *)sub_18003EBDC(v8, &v18, v9);
      sub_180011110(&v20, v10);
      if ( v19 )
        sub_18001060C(v19);
      sub_180011044((__int64)&v22);
    }
    if ( v5 == v8 )
    {
      unknown_libname_81(v29, &v20);
      v15 = unknown_libname_81(v24, v4);
      sub_18003F764(v5, v15);
    }
    else
    {
      sub_18002867C(v8 + 16, v29);
      v12 = unknown_libname_81(&v22, &v20);
      sub_1800396E0(v13, &v18, 131075LL, v12);
      v14 = unknown_libname_81(v24, v4);
      sub_18003F3C8(v5, v14);
      sub_18001254C(v4, &v18);
      if ( v19 )
        sub_18001060C(v19);
      sub_180011044((__int64)v29);
    }
    if ( *((_QWORD *)&v17 + 1) )
      sub_18001060C(*((__int64 *)&v17 + 1));
  }
  if ( v21 )
    sub_18001060C(v21);
  if ( v26 )
    sub_18001060C(v26);
  sub_180011044((__int64)v30);
  if ( v28 )
    sub_18001060C(v28);
  return 0LL;
}
