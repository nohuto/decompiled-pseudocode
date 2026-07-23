/*
 * XREFs of MiReplaceSecondaryListStandbyPage @ 0x1402568F0
 * Callers:
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 * Callees:
 *     MiUnlinkSecondaryListStandbyPage @ 0x1402238C0 (MiUnlinkSecondaryListStandbyPage.c)
 *     MiInsertSecondaryListStandbyPage @ 0x140224720 (MiInsertSecondaryListStandbyPage.c)
 *     MiPageToChannel @ 0x140258D54 (MiPageToChannel.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiIsDecayPfn @ 0x1403028E0 (MiIsDecayPfn.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiReplaceSecondaryListStandbyPage(__int64 a1, __int64 a2, int a3, int a4, _BYTE *a5)
{
  __int64 v5; // r13
  __int64 v6; // r15
  unsigned __int64 v8; // r10
  int v9; // eax
  ULONG_PTR v10; // r14
  char *v11; // rdi
  int i; // ecx
  int v13; // edi
  int v14; // eax
  ULONG_PTR v15; // rsi
  char *v16; // rbx
  int j; // ecx
  int v18; // ebx
  char v19; // cl
  ULONG_PTR v20; // r14
  __int64 v21; // r9
  unsigned __int64 v22; // rdi
  __int64 k; // rdx
  int v24; // ecx
  char *v25; // rax
  int v26; // r8d
  unsigned __int64 v27; // r11
  unsigned int v28; // ebx
  unsigned __int8 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r8
  _DWORD *v32; // r11
  _DWORD *v33; // rbx
  unsigned __int64 v34; // r9
  int v35; // eax
  signed __int64 v36; // rdx
  signed __int64 v37; // rax
  signed __int64 v38; // rdx
  unsigned __int64 v39; // r9
  signed __int64 v40; // rdx
  signed __int64 v41; // r8
  signed __int64 v42; // rdx
  unsigned __int64 v43; // r9
  signed __int64 v44; // r8
  __int64 v45; // r8
  int v46; // eax
  unsigned __int64 v47; // rsi
  signed __int64 v48; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v50; // rdx
  signed __int64 v51; // rcx
  signed __int64 v52; // rcx
  char v53; // r8d^2
  unsigned __int8 v54; // cl
  _QWORD *v55; // rax
  __int64 v56; // [rsp+30h] [rbp-B8h]
  __int64 v57; // [rsp+40h] [rbp-A8h]
  unsigned int v58; // [rsp+48h] [rbp-A0h]
  char v59; // [rsp+F0h] [rbp+8h]
  int v60; // [rsp+F0h] [rbp+8h]

  v5 = a4;
  v6 = a2;
  v8 = 0xFFFFDE0000000000uLL;
  v9 = dword_140E2DC04;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
    || (v11 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, v10 < *(_QWORD *)v11)
    || dword_140E2DC00 != dword_140E2DC04 && v10 >= *((_QWORD *)v11 + 2) )
  {
    for ( i = 0; ; i = a2 + 1 )
    {
      while ( 1 )
      {
        if ( v9 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, v10, 0LL, 0LL);
        a2 = (unsigned int)((i + v9) >> 1);
        v11 = (char *)qword_140E2DC60 + 16 * (int)a2;
        if ( v10 >= *(_QWORD *)v11 )
          break;
        if ( !(_DWORD)a2 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v10, (ULONG_PTR)qword_140E2DC60, 0LL);
        v9 = a2 - 1;
      }
      if ( (_DWORD)a2 == dword_140E2DC04 || v10 < *((_QWORD *)v11 + 2) )
        break;
    }
    dword_140E2DC00 = (i + v9) >> 1;
  }
  v13 = *((_DWORD *)v11 + 2);
  if ( qword_140E2DC68 )
  {
    v59 = MiPageToChannel(v10, a2);
    v8 = 0xFFFFDE0000000000uLL;
  }
  else
  {
    v59 = 0;
  }
  v14 = dword_140E2DC04;
  v15 = 0xAAAAAAAAAAAAAAABuLL * ((v6 + 0x220000000000LL) >> 4);
  if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
    || (v16 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, v15 < *(_QWORD *)v16)
    || dword_140E2DC00 != dword_140E2DC04 && v15 >= *((_QWORD *)v16 + 2) )
  {
    for ( j = 0; ; j = a2 + 1 )
    {
      while ( 1 )
      {
        if ( v14 < j )
          KeBugCheckEx(0x1Au, 0x5180uLL, v15, 0LL, 0LL);
        a2 = (unsigned int)((j + v14) >> 1);
        v16 = (char *)qword_140E2DC60 + 16 * (int)a2;
        if ( v15 >= *(_QWORD *)v16 )
          break;
        if ( !(_DWORD)a2 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v15, (ULONG_PTR)qword_140E2DC60, 0LL);
        v14 = a2 - 1;
      }
      if ( (_DWORD)a2 == dword_140E2DC04 || v15 < *((_QWORD *)v16 + 2) )
        break;
    }
    dword_140E2DC00 = (j + v14) >> 1;
  }
  v18 = *((_DWORD *)v16 + 2);
  if ( qword_140E2DC68 )
  {
    v19 = MiPageToChannel(v15, a2);
    v8 = 0xFFFFDE0000000000uLL;
  }
  else
  {
    v19 = 0;
  }
  if ( v13 != v18
    || v59 != v19
    || a3 != (_DWORD)v5
    || byte_140E3CC26
    && (v20 = v10 >> 9, *(_BYTE *)(qword_140E3D280 + 2 * v20))
    && *(_BYTE *)(qword_140E3D280 + 2 * v20) == 9
    && (*(_BYTE *)(qword_140E3D280 + 2 * v20 + 1) & 0x7F) != (*(_BYTE *)(qword_140E3D280 + 2 * (v15 >> 9) + 1) & 0x7F) )
  {
    MiUnlinkSecondaryListStandbyPage(a1, a3);
    v55 = a5;
    if ( !*a5 )
      v55 = 0LL;
    return MiInsertSecondaryListStandbyPage(v6, v5, v55);
  }
  v21 = 16 * ((v6 + 0x220000000000LL) >> 4);
  v22 = v21 - 0x220000000000LL;
  v56 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v21 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
  k = dword_140E2DC00;
  v24 = dword_140E2DC04;
  if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
    || (v25 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, v15 < *(_QWORD *)v25)
    || dword_140E2DC00 != dword_140E2DC04 && v15 >= *((_QWORD *)v25 + 2) )
  {
    for ( k = 0LL; ; k = (unsigned int)(v26 + 1) )
    {
      while ( 1 )
      {
        if ( v24 < (int)k )
          KeBugCheckEx(0x1Au, 0x5180uLL, v15, 0LL, 0LL);
        v26 = ((int)k + v24) >> 1;
        v25 = (char *)qword_140E2DC60 + 16 * v26;
        if ( v15 >= *(_QWORD *)v25 )
          break;
        if ( !v26 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v15, (ULONG_PTR)qword_140E2DC60, 0LL);
        v24 = v26 - 1;
      }
      if ( v26 == dword_140E2DC04 || v15 < *((_QWORD *)v25 + 2) )
        break;
    }
    dword_140E2DC00 = ((int)k + v24) >> 1;
  }
  v58 = *((_DWORD *)v25 + 2);
  v60 = *(_DWORD *)(v22 + 32);
  if ( (v60 & 0x8000000) != 0 )
  {
    if ( v22 >= 0xFFFFDE0000000000uLL )
    {
      v27 = 0xAAAAAAAAAAAAAAABuLL;
      if ( v22 < 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL
        && !(unsigned int)MiIsDecayPfn(0xAAAAAAAAAAAAAAABuLL * (v21 >> 4), k, *(unsigned int *)(v22 + 32), v21) )
      {
        if ( (v53 & 7) != 6 && (unsigned int)MiGetPfnSlabType(v22) == 9 )
        {
          v28 = 5;
          goto LABEL_40;
        }
        goto LABEL_39;
      }
    }
    else
    {
      v27 = 0xAAAAAAAAAAAAAAABuLL;
    }
    v28 = 5;
    goto LABEL_40;
  }
  v27 = 0xAAAAAAAAAAAAAAABuLL;
LABEL_39:
  v28 = HIBYTE(v60) & 7;
LABEL_40:
  if ( qword_140E2DC68 )
  {
    v29 = MiPageToChannel(v27 * (v21 >> 4), k);
    v8 = 0xFFFFDE0000000000uLL;
  }
  else
  {
    v29 = 0;
  }
  v30 = *(_QWORD *)(v56 + 16) + 57216LL * v58;
  if ( (int)v5 < 9 )
  {
    if ( (_DWORD)v5 == 8 )
      v54 = *(_BYTE *)(qword_140E3D280 + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((__int64)(v22 - v8) >> 4)) >> 9) + 1) & 0x7F;
    else
      v54 = 0;
    v57 = *(_QWORD *)(232 * v5 + v30 + 15768) + 88 * (v28 + 8LL * v54);
  }
  else
  {
    v57 = v30 + 88 * (v28 + 8LL * v29 + 59);
  }
  v31 = *(_QWORD *)(a1 + 40);
  v32 = (_DWORD *)(v6 + 36);
  v33 = (_DWORD *)(a1 + 36);
  v34 = (8LL * (*(_DWORD *)(a1 + 36) & 0xFFE00000)) | ((v31 & 0xF80000000000000uLL | (*(_QWORD *)a1 >> 20)) >> 20);
  v35 = *(_DWORD *)(v6 + 36);
  *(_QWORD *)v6 = (v34 << 40) | *(_QWORD *)v6 & 0xFFFFFFFFFFLL;
  *(_DWORD *)(v6 + 36) = v35 & 0x1FFFFF | ((unsigned int)(v34 >> 24) << 21);
  v36 = *(_QWORD *)(v6 + 40);
  v37 = _InterlockedCompareExchange64(
          (volatile signed __int64 *)(v6 + 40),
          v31 ^ (v31 ^ v36) & 0xF07FFFFFFFFFFFFFuLL,
          v36);
  if ( v36 != v37 )
  {
    do
    {
      v38 = v37;
      v37 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v6 + 40),
              (v34 << 20) ^ (v37 ^ (v34 << 20)) & 0xF07FFFFFFFFFFFFFuLL,
              v37);
    }
    while ( v38 != v37 );
    v33 = (_DWORD *)(a1 + 36);
    v32 = (_DWORD *)(v6 + 36);
  }
  if ( v34 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)(v57 + 24) = v15;
  }
  else
  {
    v39 = v8 + 48 * v34;
    v40 = *(_QWORD *)(v39 + 24);
    v41 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v39 + 24),
            (0xAAAAAB0000000000uLL * ((v6 + 0x220000000000LL) >> 4)) ^ (v40 ^ (0xAAAAAB0000000000uLL
                                                                             * ((v6 + 0x220000000000LL) >> 4))) & 0xF80000FFFFFFFFFFuLL,
            v40);
    if ( v40 != v41 )
    {
      do
      {
        v52 = v41;
        v41 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v39 + 24),
                (0xAAAAAB0000000000uLL * ((v6 + 0x220000000000LL) >> 4)) ^ ((0xAAAAAB0000000000uLL
                                                                           * ((v6 + 0x220000000000LL) >> 4)) ^ v41) & 0xF80000FFFFFFFFFFuLL,
                v41);
      }
      while ( v52 != v41 );
      v33 = (_DWORD *)(a1 + 36);
      v32 = (_DWORD *)(v6 + 36);
    }
    *(_DWORD *)(v39 + 36) ^= (*(_DWORD *)(v39 + 36) ^ (v15 >> 19)) & 0x1FFFFF;
  }
  v42 = *(_QWORD *)(v6 + 24);
  v43 = (*(_QWORD *)(a1 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*v33 & 0x1FFFFF) << 19);
  v44 = _InterlockedCompareExchange64(
          (volatile signed __int64 *)(v6 + 24),
          (*(_QWORD *)(a1 + 24) >> 40 << 40) ^ ((*(_QWORD *)(a1 + 24) >> 40 << 40) ^ v42) & 0xF80000FFFFFFFFFFuLL,
          v42);
  if ( v42 != v44 )
  {
    do
    {
      v51 = v44;
      v44 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v6 + 24),
              (v43 << 40) ^ ((v43 << 40) ^ v44) & 0xF80000FFFFFFFFFFuLL,
              v44);
    }
    while ( v51 != v44 );
    v32 = (_DWORD *)(v6 + 36);
  }
  *v32 = *(_DWORD *)(v6 + 36) & 0xFFE00000 | (v43 >> 19);
  if ( v43 == 0x3FFFFFFFFFLL )
  {
    result = v57;
    *(_QWORD *)(v57 + 16) = v15;
  }
  else
  {
    v45 = 48 * v43 - 0x220000000000LL;
    v46 = *(_DWORD *)(v45 + 36);
    *(_QWORD *)v45 = (0xAAAAAB0000000000uLL * ((v6 + 0x220000000000LL) >> 4)) | *(_QWORD *)v45 & 0xFFFFFFFFFFLL;
    v47 = 0xAAAAAAAAAAB00000uLL * ((v6 + 0x220000000000LL) >> 4);
    *(_DWORD *)(v45 + 36) = v46 & 0x1FFFFF | ((unsigned int)((0xAAAAAAAAAAAAAAABuLL * ((v6 + 0x220000000000LL) >> 4)) >> 24) << 21);
    v48 = *(_QWORD *)(v45 + 40);
    result = _InterlockedCompareExchange64(
               (volatile signed __int64 *)(v45 + 40),
               v47 ^ (v47 ^ v48) & 0xF07FFFFFFFFFFFFFuLL,
               v48);
    if ( v48 != result )
    {
      do
      {
        v50 = result;
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(v45 + 40),
                   v47 ^ (v47 ^ result) & 0xF07FFFFFFFFFFFFFuLL,
                   result);
      }
      while ( v50 != result );
    }
  }
  return result;
}
