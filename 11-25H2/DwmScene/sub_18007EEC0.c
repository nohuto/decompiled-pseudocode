/*
 * XREFs of sub_18007EEC0 @ 0x18007EEC0
 * Callers:
 *     sub_1800419E8 @ 0x1800419E8 (sub_1800419E8.c)
 *     sub_180055A50 @ 0x180055A50 (sub_180055A50.c)
 *     sub_18007D894 @ 0x18007D894 (sub_18007D894.c)
 *     sub_18007E874 @ 0x18007E874 (sub_18007E874.c)
 *     sub_18008DDEC @ 0x18008DDEC (sub_18008DDEC.c)
 *     sub_18008F048 @ 0x18008F048 (sub_18008F048.c)
 *     sub_1800B9D90 @ 0x1800B9D90 (sub_1800B9D90.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800130E0 @ 0x1800130E0 (sub_1800130E0.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 *     sub_1800346A8 @ 0x1800346A8 (sub_1800346A8.c)
 *     sub_180040ECC @ 0x180040ECC (sub_180040ECC.c)
 *     sub_18007EC18 @ 0x18007EC18 (sub_18007EC18.c)
 *     sub_18007ED40 @ 0x18007ED40 (sub_18007ED40.c)
 *     sub_18007F0D0 @ 0x18007F0D0 (sub_18007F0D0.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_18007EEC0(__int64 a1, __int64 a2, __int64 a3)
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
    LOBYTE(v8) = sub_180040ECC(v7, a2);
    if ( (_BYTE)v8 )
      return v8;
    sub_1800346A8(*(_QWORD *)(a1 + 72), &v26);
    v9 = 0;
    v10 = v26;
    if ( (v27 - v26) >> 4 )
    {
      v11 = 0LL;
      do
      {
        unknown_libname_81(&v24, (_QWORD *)(v10 + 16 * v11));
        sub_18007F0D0(a1, *(unsigned int *)(v24 + 244));
        if ( v25 )
          sub_18001050C(v25);
        ++v9;
        v10 = v26;
        v11 = v9;
      }
      while ( v9 < (unsigned __int64)((v27 - v26) >> 4) );
    }
    sub_1800130E0((__int64)&v26);
  }
  else
  {
    v12 = sub_18007EC18(&v24);
    sub_180011010(v6, v12);
    if ( v25 )
      sub_18001050C(v25);
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
    LOBYTE(v8) = sub_180027C70(a1, 1, 1);
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
  {
    if ( a3 )
    {
      v17 = (_QWORD *)sub_180011C64(a3 + 8, &v24);
      sub_18007ED40(a1, v17);
      if ( v25 )
        sub_18001050C(v25);
      sub_180027C70(a1, 2, 0);
      LOBYTE(v8) = sub_180027C70(v19, v18 + 4, v18);
    }
    else
    {
      sub_1800346A8(*(_QWORD *)(a1 + 72), &v26);
      v20 = 0;
      v21 = v26;
      if ( (v27 - v26) >> 4 )
      {
        v22 = 0LL;
        do
        {
          unknown_libname_81(&v24, (_QWORD *)(v21 + 16 * v22));
          sub_18007ED40(a1, &v24);
          if ( v25 )
            sub_18001050C(v25);
          ++v20;
          v21 = v26;
          v22 = v20;
        }
        while ( v20 < (unsigned __int64)((v27 - v26) >> 4) );
      }
      LOBYTE(v8) = sub_1800130E0((__int64)&v26);
    }
  }
  return v8;
}
