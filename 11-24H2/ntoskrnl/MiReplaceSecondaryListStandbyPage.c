/*
 * XREFs of MiReplaceSecondaryListStandbyPage @ 0x1402F0DB0
 * Callers:
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiIsDecayPfn @ 0x14022EFD0 (MiIsDecayPfn.c)
 *     MiUnlinkSecondaryListStandbyPage @ 0x14026E330 (MiUnlinkSecondaryListStandbyPage.c)
 *     MiInsertSecondaryListStandbyPage @ 0x14026F190 (MiInsertSecondaryListStandbyPage.c)
 *     MiPageToChannel @ 0x1402F3214 (MiPageToChannel.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiReplaceSecondaryListStandbyPage(__int64 a1, __int64 a2, int a3, int a4, _BYTE *a5)
{
  __int64 v5; // r13
  unsigned __int64 v8; // r10
  int v9; // eax
  ULONG_PTR v10; // r14
  char *v11; // rdi
  int i; // ecx
  int v13; // edx
  int v14; // edi
  int v15; // eax
  ULONG_PTR v16; // rsi
  char *v17; // rbx
  int j; // ecx
  int v19; // edx
  int v20; // ebx
  char v21; // cl
  ULONG_PTR v22; // r14
  __int64 v23; // r9
  unsigned __int64 v24; // rdi
  int v25; // ecx
  char *v26; // rax
  int k; // edx
  int v28; // r8d
  unsigned __int64 v29; // r11
  unsigned int v30; // ebx
  unsigned __int8 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  _DWORD *v34; // r11
  _DWORD *v35; // rbx
  unsigned __int64 v36; // r9
  int v37; // eax
  signed __int64 v38; // rdx
  signed __int64 v39; // rax
  signed __int64 v40; // rdx
  unsigned __int64 v41; // r9
  signed __int64 v42; // rdx
  signed __int64 v43; // r8
  signed __int64 v44; // rdx
  unsigned __int64 v45; // r9
  signed __int64 v46; // r8
  __int64 v47; // r8
  int v48; // eax
  unsigned __int64 v49; // rsi
  signed __int64 v50; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v52; // rdx
  signed __int64 v53; // rcx
  signed __int64 v54; // rcx
  char v55; // r8d^2
  unsigned __int8 v56; // cl
  _QWORD *v57; // rax
  __int64 v58; // [rsp+30h] [rbp-B8h]
  __int64 v59; // [rsp+40h] [rbp-A8h]
  unsigned int v60; // [rsp+48h] [rbp-A0h]
  char v61; // [rsp+F0h] [rbp+8h]
  int v62; // [rsp+F0h] [rbp+8h]

  v5 = a4;
  v8 = 0xFFFFDE0000000000uLL;
  v9 = dword_140E2DAC4;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  if ( dword_140E2DAC0 > (unsigned int)dword_140E2DAC4
    || (v11 = (char *)qword_140E2DB20 + 16 * dword_140E2DAC0, v10 < *(_QWORD *)v11)
    || dword_140E2DAC0 != dword_140E2DAC4 && v10 >= *((_QWORD *)v11 + 2) )
  {
    for ( i = 0; ; i = v13 + 1 )
    {
      while ( 1 )
      {
        if ( v9 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, v10, 0LL, 0LL);
        v13 = (i + v9) >> 1;
        v11 = (char *)qword_140E2DB20 + 16 * v13;
        if ( v10 >= *(_QWORD *)v11 )
          break;
        if ( !v13 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v10, (ULONG_PTR)qword_140E2DB20, 0LL);
        v9 = v13 - 1;
      }
      if ( v13 == dword_140E2DAC4 || v10 < *((_QWORD *)v11 + 2) )
        break;
    }
    dword_140E2DAC0 = (i + v9) >> 1;
  }
  v14 = *((_DWORD *)v11 + 2);
  if ( qword_140E2DB28 )
  {
    v61 = MiPageToChannel(v10);
    v8 = 0xFFFFDE0000000000uLL;
  }
  else
  {
    v61 = 0;
  }
  v15 = dword_140E2DAC4;
  v16 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  if ( dword_140E2DAC0 > (unsigned int)dword_140E2DAC4
    || (v17 = (char *)qword_140E2DB20 + 16 * dword_140E2DAC0, v16 < *(_QWORD *)v17)
    || dword_140E2DAC0 != dword_140E2DAC4 && v16 >= *((_QWORD *)v17 + 2) )
  {
    for ( j = 0; ; j = v19 + 1 )
    {
      while ( 1 )
      {
        if ( v15 < j )
          KeBugCheckEx(0x1Au, 0x5180uLL, v16, 0LL, 0LL);
        v19 = (j + v15) >> 1;
        v17 = (char *)qword_140E2DB20 + 16 * v19;
        if ( v16 >= *(_QWORD *)v17 )
          break;
        if ( !v19 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v16, (ULONG_PTR)qword_140E2DB20, 0LL);
        v15 = v19 - 1;
      }
      if ( v19 == dword_140E2DAC4 || v16 < *((_QWORD *)v17 + 2) )
        break;
    }
    dword_140E2DAC0 = (j + v15) >> 1;
  }
  v20 = *((_DWORD *)v17 + 2);
  if ( qword_140E2DB28 )
  {
    v21 = MiPageToChannel(v16);
    v8 = 0xFFFFDE0000000000uLL;
  }
  else
  {
    v21 = 0;
  }
  if ( v14 != v20
    || v61 != v21
    || a3 != (_DWORD)v5
    || byte_140E3CAE6
    && (v22 = v10 >> 9, *(_BYTE *)(qword_140E3D140 + 2 * v22))
    && *(_BYTE *)(qword_140E3D140 + 2 * v22) == 9
    && (*(_BYTE *)(qword_140E3D140 + 2 * v22 + 1) & 0x7F) != (*(_BYTE *)(qword_140E3D140 + 2 * (v16 >> 9) + 1) & 0x7F) )
  {
    MiUnlinkSecondaryListStandbyPage(a1, a3);
    v57 = a5;
    if ( !*a5 )
      v57 = 0LL;
    return MiInsertSecondaryListStandbyPage(a2, v5, v57);
  }
  v23 = 16 * ((a2 + 0x220000000000LL) >> 4);
  v24 = v23 - 0x220000000000LL;
  v58 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v23 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
  v25 = dword_140E2DAC4;
  if ( dword_140E2DAC0 > (unsigned int)dword_140E2DAC4
    || (v26 = (char *)qword_140E2DB20 + 16 * dword_140E2DAC0, v16 < *(_QWORD *)v26)
    || dword_140E2DAC0 != dword_140E2DAC4 && v16 >= *((_QWORD *)v26 + 2) )
  {
    for ( k = 0; ; k = v28 + 1 )
    {
      while ( 1 )
      {
        if ( v25 < k )
          KeBugCheckEx(0x1Au, 0x5180uLL, v16, 0LL, 0LL);
        v28 = (k + v25) >> 1;
        v26 = (char *)qword_140E2DB20 + 16 * v28;
        if ( v16 >= *(_QWORD *)v26 )
          break;
        if ( !v28 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v16, (ULONG_PTR)qword_140E2DB20, 0LL);
        v25 = v28 - 1;
      }
      if ( v28 == dword_140E2DAC4 || v16 < *((_QWORD *)v26 + 2) )
        break;
    }
    dword_140E2DAC0 = (k + v25) >> 1;
  }
  v60 = *((_DWORD *)v26 + 2);
  v62 = *(_DWORD *)(v24 + 32);
  if ( (v62 & 0x8000000) != 0 )
  {
    if ( v24 >= 0xFFFFDE0000000000uLL )
    {
      v29 = 0xAAAAAAAAAAAAAAABuLL;
      if ( v24 < 48 * qword_140E2DBE0 - 0x21FFFFFFFFD0LL && !MiIsDecayPfn(0xAAAAAAAAAAAAAAABuLL * (v23 >> 4)) )
      {
        if ( (v55 & 7) != 6 && (unsigned int)MiGetPfnSlabType(v24) == 9 )
        {
          v30 = 5;
          goto LABEL_40;
        }
        goto LABEL_39;
      }
    }
    else
    {
      v29 = 0xAAAAAAAAAAAAAAABuLL;
    }
    v30 = 5;
    goto LABEL_40;
  }
  v29 = 0xAAAAAAAAAAAAAAABuLL;
LABEL_39:
  v30 = HIBYTE(v62) & 7;
LABEL_40:
  if ( qword_140E2DB28 )
  {
    v31 = MiPageToChannel(v29 * (v23 >> 4));
    v8 = 0xFFFFDE0000000000uLL;
  }
  else
  {
    v31 = 0;
  }
  v32 = *(_QWORD *)(v58 + 16) + 57216LL * v60;
  if ( (int)v5 < 9 )
  {
    if ( (_DWORD)v5 == 8 )
      v56 = *(_BYTE *)(qword_140E3D140 + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((__int64)(v24 - v8) >> 4)) >> 9) + 1) & 0x7F;
    else
      v56 = 0;
    v59 = *(_QWORD *)(232 * v5 + v32 + 15768) + 88 * (v30 + 8LL * v56);
  }
  else
  {
    v59 = v32 + 88 * (v30 + 8LL * v31 + 59);
  }
  v33 = *(_QWORD *)(a1 + 40);
  v34 = (_DWORD *)(a2 + 36);
  v35 = (_DWORD *)(a1 + 36);
  v36 = (8LL * (*(_DWORD *)(a1 + 36) & 0xFFE00000)) | ((v33 & 0xF80000000000000uLL | (*(_QWORD *)a1 >> 20)) >> 20);
  v37 = *(_DWORD *)(a2 + 36);
  *(_QWORD *)a2 = (v36 << 40) | *(_QWORD *)a2 & 0xFFFFFFFFFFLL;
  *(_DWORD *)(a2 + 36) = v37 & 0x1FFFFF | ((unsigned int)(v36 >> 24) << 21);
  v38 = *(_QWORD *)(a2 + 40);
  v39 = _InterlockedCompareExchange64(
          (volatile signed __int64 *)(a2 + 40),
          v33 ^ (v33 ^ v38) & 0xF07FFFFFFFFFFFFFuLL,
          v38);
  if ( v38 != v39 )
  {
    do
    {
      v40 = v39;
      v39 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(a2 + 40),
              (v36 << 20) ^ (v39 ^ (v36 << 20)) & 0xF07FFFFFFFFFFFFFuLL,
              v39);
    }
    while ( v40 != v39 );
    v35 = (_DWORD *)(a1 + 36);
    v34 = (_DWORD *)(a2 + 36);
  }
  if ( v36 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)(v59 + 24) = v16;
  }
  else
  {
    v41 = v8 + 48 * v36;
    v42 = *(_QWORD *)(v41 + 24);
    v43 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v41 + 24),
            (0xAAAAAB0000000000uLL * ((a2 + 0x220000000000LL) >> 4)) ^ (v42 ^ (0xAAAAAB0000000000uLL
                                                                             * ((a2 + 0x220000000000LL) >> 4))) & 0xF80000FFFFFFFFFFuLL,
            v42);
    if ( v42 != v43 )
    {
      do
      {
        v54 = v43;
        v43 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v41 + 24),
                (0xAAAAAB0000000000uLL * ((a2 + 0x220000000000LL) >> 4)) ^ ((0xAAAAAB0000000000uLL
                                                                           * ((a2 + 0x220000000000LL) >> 4)) ^ v43) & 0xF80000FFFFFFFFFFuLL,
                v43);
      }
      while ( v54 != v43 );
      v35 = (_DWORD *)(a1 + 36);
      v34 = (_DWORD *)(a2 + 36);
    }
    *(_DWORD *)(v41 + 36) ^= (*(_DWORD *)(v41 + 36) ^ (v16 >> 19)) & 0x1FFFFF;
  }
  v44 = *(_QWORD *)(a2 + 24);
  v45 = (*(_QWORD *)(a1 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*v35 & 0x1FFFFF) << 19);
  v46 = _InterlockedCompareExchange64(
          (volatile signed __int64 *)(a2 + 24),
          (*(_QWORD *)(a1 + 24) >> 40 << 40) ^ ((*(_QWORD *)(a1 + 24) >> 40 << 40) ^ v44) & 0xF80000FFFFFFFFFFuLL,
          v44);
  if ( v44 != v46 )
  {
    do
    {
      v53 = v46;
      v46 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(a2 + 24),
              (v45 << 40) ^ ((v45 << 40) ^ v46) & 0xF80000FFFFFFFFFFuLL,
              v46);
    }
    while ( v53 != v46 );
    v34 = (_DWORD *)(a2 + 36);
  }
  *v34 = *(_DWORD *)(a2 + 36) & 0xFFE00000 | (v45 >> 19);
  if ( v45 == 0x3FFFFFFFFFLL )
  {
    result = v59;
    *(_QWORD *)(v59 + 16) = v16;
  }
  else
  {
    v47 = 48 * v45 - 0x220000000000LL;
    v48 = *(_DWORD *)(v47 + 36);
    *(_QWORD *)v47 = (0xAAAAAB0000000000uLL * ((a2 + 0x220000000000LL) >> 4)) | *(_QWORD *)v47 & 0xFFFFFFFFFFLL;
    v49 = 0xAAAAAAAAAAB00000uLL * ((a2 + 0x220000000000LL) >> 4);
    *(_DWORD *)(v47 + 36) = v48 & 0x1FFFFF | ((unsigned int)((0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4)) >> 24) << 21);
    v50 = *(_QWORD *)(v47 + 40);
    result = _InterlockedCompareExchange64(
               (volatile signed __int64 *)(v47 + 40),
               v49 ^ (v49 ^ v50) & 0xF07FFFFFFFFFFFFFuLL,
               v50);
    if ( v50 != result )
    {
      do
      {
        v52 = result;
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(v47 + 40),
                   v49 ^ (v49 ^ result) & 0xF07FFFFFFFFFFFFFuLL,
                   result);
      }
      while ( v52 != result );
    }
  }
  return result;
}
