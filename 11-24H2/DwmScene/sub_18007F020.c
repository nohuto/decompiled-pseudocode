/*
 * XREFs of sub_18007F020 @ 0x18007F020
 * Callers:
 *     sub_180041B48 @ 0x180041B48 (sub_180041B48.c)
 *     sub_180055BB0 @ 0x180055BB0 (sub_180055BB0.c)
 *     sub_18007D9F4 @ 0x18007D9F4 (sub_18007D9F4.c)
 *     sub_18007E9D4 @ 0x18007E9D4 (sub_18007E9D4.c)
 *     sub_18008DF4C @ 0x18008DF4C (sub_18008DF4C.c)
 *     sub_18008F1A8 @ 0x18008F1A8 (sub_18008F1A8.c)
 *     sub_1800B9EF0 @ 0x1800B9EF0 (sub_1800B9EF0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800131E0 @ 0x1800131E0 (sub_1800131E0.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_180034808 @ 0x180034808 (sub_180034808.c)
 *     sub_18004102C @ 0x18004102C (sub_18004102C.c)
 *     sub_18007ED78 @ 0x18007ED78 (sub_18007ED78.c)
 *     sub_18007EEA0 @ 0x18007EEA0 (sub_18007EEA0.c)
 *     sub_18007F230 @ 0x18007F230 (sub_18007F230.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_18007F020(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rax
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int128 v15; // xmm4
  __int64 v16; // xmm0_8
  _QWORD *v17; // rax
  int v18; // r8d
  __int64 v19; // rcx
  unsigned int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v24; // [rsp+20h] [rbp-30h] BYREF
  __int64 v25; // [rsp+28h] [rbp-28h]
  __int64 v26; // [rsp+30h] [rbp-20h] BYREF
  __int64 v27; // [rsp+38h] [rbp-18h]

  v6 = (__int64 *)(a1 + 112);
  v7 = *(_QWORD *)(a1 + 112);
  if ( v7 )
  {
    LOBYTE(v8) = sub_18004102C(v7, a2);
    if ( (_BYTE)v8 )
      return v8;
    sub_180034808(*(_QWORD *)(a1 + 72), &v26);
    v9 = 0;
    v10 = v26;
    if ( (v27 - v26) >> 4 )
    {
      v11 = 0LL;
      do
      {
        unknown_libname_81(&v24, (_QWORD *)(v10 + 16 * v11));
        sub_18007F230(a1, *(unsigned int *)(v24 + 244));
        if ( v25 )
          sub_18001060C(v25);
        ++v9;
        v10 = v26;
        v11 = v9;
      }
      while ( v9 < (unsigned __int64)((v27 - v26) >> 4) );
    }
    sub_1800131E0((__int64)&v26);
  }
  else
  {
    v12 = sub_18007ED78(&v24);
    sub_180011110(v6, v12);
    if ( v25 )
      sub_18001060C(v25);
  }
  v13 = *(_OWORD *)(a2 + 16);
  v14 = *(_OWORD *)(a2 + 32);
  v15 = *(_OWORD *)(a2 + 48);
  v16 = *(_QWORD *)(a2 + 64);
  v8 = *v6;
  *(_OWORD *)v8 = *(_OWORD *)a2;
  *(_OWORD *)(v8 + 16) = v13;
  *(_OWORD *)(v8 + 32) = v14;
  *(_OWORD *)(v8 + 48) = v15;
  *(_QWORD *)(v8 + 64) = v16;
  if ( a3 )
    LOBYTE(v8) = sub_180027DD0(a1, 1, 1);
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
  {
    if ( a3 )
    {
      v17 = (_QWORD *)sub_180011D64(a3 + 8, &v24);
      sub_18007EEA0(a1, v17);
      if ( v25 )
        sub_18001060C(v25);
      sub_180027DD0(a1, 2, 0);
      LOBYTE(v8) = sub_180027DD0(v19, v18 + 4, v18);
    }
    else
    {
      sub_180034808(*(_QWORD *)(a1 + 72), &v26);
      v20 = 0;
      v21 = v26;
      if ( (v27 - v26) >> 4 )
      {
        v22 = 0LL;
        do
        {
          unknown_libname_81(&v24, (_QWORD *)(v21 + 16 * v22));
          sub_18007EEA0(a1, &v24);
          if ( v25 )
            sub_18001060C(v25);
          ++v20;
          v21 = v26;
          v22 = v20;
        }
        while ( v20 < (unsigned __int64)((v27 - v26) >> 4) );
      }
      LOBYTE(v8) = sub_1800131E0((__int64)&v26);
    }
  }
  return v8;
}
