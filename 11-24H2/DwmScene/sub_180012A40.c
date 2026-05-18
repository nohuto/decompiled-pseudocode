/*
 * XREFs of sub_180012A40 @ 0x180012A40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180011FC8 @ 0x180011FC8 (sub_180011FC8.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180012654 @ 0x180012654 (sub_180012654.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 *     sub_1800131E0 @ 0x1800131E0 (sub_1800131E0.c)
 *     sub_180018300 @ 0x180018300 (sub_180018300.c)
 *     sub_18001AC9C @ 0x18001AC9C (sub_18001AC9C.c)
 *     sub_18001ADD0 @ 0x18001ADD0 (sub_18001ADD0.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_180032584 @ 0x180032584 (sub_180032584.c)
 *     sub_1800396E0 @ 0x1800396E0 (sub_1800396E0.c)
 *     sub_18003EBDC @ 0x18003EBDC (sub_18003EBDC.c)
 *     sub_18003F3C8 @ 0x18003F3C8 (sub_18003F3C8.c)
 *     sub_18003F764 @ 0x18003F764 (sub_18003F764.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180012A40(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // r13
  char v6; // r14
  __int128 *v7; // rax
  char v8; // di
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 *v16; // rax
  _QWORD *j; // rdx
  _QWORD *v18; // rax
  __int64 v19; // r10
  _QWORD *v20; // rax
  _QWORD *i; // rdx
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v27; // [rsp+20h] [rbp-89h] BYREF
  __int64 v28; // [rsp+28h] [rbp-81h]
  __int128 v29; // [rsp+30h] [rbp-79h] BYREF
  __int64 v30; // [rsp+40h] [rbp-69h] BYREF
  __int64 v31; // [rsp+48h] [rbp-61h]
  __int64 v32; // [rsp+50h] [rbp-59h] BYREF
  __int64 v33; // [rsp+58h] [rbp-51h]
  _QWORD v34[3]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v35[4]; // [rsp+78h] [rbp-31h] BYREF
  __int64 v36; // [rsp+98h] [rbp-11h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-9h]
  __int64 v38; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v39; // [rsp+B0h] [rbp+7h]
  _BYTE v40[72]; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v41; // [rsp+110h] [rbp+67h]

  v4 = qword_1801C4448;
  v41 = qword_1801C4448;
  sub_18001268C(*(_QWORD *)(a1 + 16), &v38);
  v5 = v38;
  sub_18002867C(v38 + 16, v40);
  sub_180012654(*(_QWORD *)(a1 + 16), &v36);
  v6 = 1;
  if ( a2 )
  {
    v7 = (__int128 *)unknown_libname_81(&v27, (_QWORD *)(a2 + 32));
    v8 = 1;
  }
  else
  {
    v29 = 0LL;
    v7 = &v29;
    v8 = 2;
  }
  unknown_libname_81(&v30, v7);
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( *((_QWORD *)&v29 + 1) )
      sub_18001060C(*((__int64 *)&v29 + 1));
  }
  if ( (v8 & 1) != 0 && v28 )
    sub_18001060C(v28);
  v9 = v36;
  v10 = v30;
  if ( v36 != v30 )
  {
    v29 = 0LL;
    if ( v30 )
    {
      v16 = (__int64 *)sub_18001268C(v30, &v32);
      sub_180011110(&v29, v16);
      if ( v33 )
        sub_18001060C(v33);
      v6 = 0;
      v13 = v29;
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 184);
      if ( v11 )
      {
        *(_DWORD *)(v11 + 104) = *(_DWORD *)(a1 + 200);
        *(_QWORD *)(a1 + 184) = 0LL;
        v12 = *(_QWORD *)(a1 + 192);
        *(_QWORD *)(a1 + 192) = 0LL;
        if ( v12 )
          sub_18001060C(v12);
      }
      sub_180032584(*(_QWORD *)(v4 + 56), &v27);
      sub_180011110(&v29, &v27);
      if ( v28 )
        sub_18001060C(v28);
      v13 = v29;
      sub_18002867C(v29 + 16, &v32);
      v14 = sub_180012444((__int64)v35, (__int64)&unk_1801C5038);
      v15 = (__int64 *)sub_18003EBDC(v13, &v27, v14);
      sub_180011110(&v30, v15);
      if ( v28 )
        sub_18001060C(v28);
      sub_180011044((__int64)&v32);
      v10 = v30;
    }
    if ( v5 == v13 )
    {
      if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 && !v6 )
      {
        sub_180011FC8(v5, (__int64)v35);
        for ( i = (_QWORD *)v35[0]; i != (_QWORD *)v35[1]; i += 2 )
        {
          if ( *(float *)(*i + 104LL) > 0.000001 )
          {
            sub_18001254C((__int64 *)(a1 + 184), i);
            break;
          }
        }
        sub_1800131E0(v35);
      }
      unknown_libname_81(v35, &v30);
      v22 = unknown_libname_81(v34, (_QWORD *)(a1 + 16));
      sub_18003F764(v5, v22);
    }
    else
    {
      sub_18002867C(v13 + 16, v35);
      if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 && !v6 )
      {
        sub_180011FC8(v13, (__int64)v34);
        for ( j = (_QWORD *)v34[0]; j != (_QWORD *)v34[1]; j += 2 )
        {
          if ( *(float *)(*j + 104LL) > 0.000001 )
          {
            sub_18001254C((__int64 *)(a1 + 184), j);
            break;
          }
        }
        sub_1800131E0(v34);
      }
      v18 = unknown_libname_81(&v32, &v30);
      sub_1800396E0(v19, &v27, 131075LL, v18);
      v20 = unknown_libname_81(v34, (_QWORD *)(a1 + 16));
      sub_18003F3C8(v5, v20);
      sub_18001254C((__int64 *)(a1 + 16), &v27);
      if ( v28 )
        sub_18001060C(v28);
      sub_180011044((__int64)v35);
    }
    v23 = *(_QWORD *)(a1 + 184);
    if ( v23 )
      *(_DWORD *)(v23 + 104) = 0;
    if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) == 0 )
    {
      if ( v9 )
      {
        v24 = sub_180018300(v41, v9);
        if ( v24 )
        {
          if ( *(_DWORD *)(a1 + 48) )
            sub_18001ADD0(v24, a1 + 72);
          else
            sub_18001AC9C(v24, a1 + 52);
        }
      }
      if ( v10 )
      {
        v25 = sub_180018300(v41, v10);
        if ( v25 )
        {
          if ( *(_DWORD *)(a1 + 48) )
            sub_18001ADD0(v25, a1 + 72);
          else
            sub_18001AC9C(v25, a1 + 52);
        }
      }
    }
    if ( *((_QWORD *)&v29 + 1) )
      sub_18001060C(*((__int64 *)&v29 + 1));
  }
  if ( v31 )
    sub_18001060C(v31);
  if ( v37 )
    sub_18001060C(v37);
  sub_180011044((__int64)v40);
  if ( v39 )
    sub_18001060C(v39);
  return 0LL;
}
