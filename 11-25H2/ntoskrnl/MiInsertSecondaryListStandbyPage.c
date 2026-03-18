/*
 * XREFs of MiInsertSecondaryListStandbyPage @ 0x140216890
 * Callers:
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiReplaceSecondaryListStandbyPage @ 0x14023C950 (MiReplaceSecondaryListStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1403B905C (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiSearchChannelTable @ 0x1402167C8 (MiSearchChannelTable.c)
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiSetNextStandbyPageSecondaryNoLockAsserts @ 0x1403E6940 (MiSetNextStandbyPageSecondaryNoLockAsserts.c)
 *     MiSetPfnNodeFlinkHigh @ 0x1404023C0 (MiSetPfnNodeFlinkHigh.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiInsertSecondaryListStandbyPage(__int64 a1, int a2, unsigned __int64 i)
{
  __int64 v3; // r12
  unsigned __int64 v4; // r10
  _QWORD *v5; // r14
  unsigned __int64 v7; // r11
  ULONG_PTR v8; // rbx
  __int64 v9; // r9
  unsigned __int64 v10; // r15
  int v11; // edx
  char *v12; // rax
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // esi
  unsigned __int8 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  signed __int64 v19; // rdx
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r13
  __int64 v22; // r10
  __int64 v23; // r9
  __int64 v24; // r11
  signed __int64 v25; // r8
  signed __int64 v26; // rdx
  signed __int64 v27; // rax
  signed __int64 v28; // rdx
  int v29; // eax
  signed __int64 v30; // rdx
  signed __int64 v31; // rax
  signed __int64 v32; // rdx
  signed __int64 v33; // rdx
  signed __int64 v34; // rax
  unsigned __int64 result; // rax
  signed __int64 v36; // rcx
  signed __int64 v37; // rdx
  _QWORD *v38; // rax
  ULONG_PTR v39; // rdx
  unsigned __int64 v40; // r14
  signed __int64 v41; // rdx
  signed __int64 v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  unsigned int v45; // ecx
  __int64 v46; // r8
  volatile signed __int32 *v47; // r9
  unsigned __int8 v48; // cl
  int v49; // r12d
  signed __int64 v50; // rdx
  signed __int64 v51; // rcx
  bool v52; // zf
  __int64 v53; // rcx
  int v54; // esi
  __int64 v55; // [rsp+30h] [rbp-118h]
  unsigned __int64 v56; // [rsp+40h] [rbp-108h]
  unsigned int v57; // [rsp+48h] [rbp-100h]
  __int128 v58; // [rsp+50h] [rbp-F8h]
  char v59; // [rsp+153h] [rbp+Bh]

  v3 = a2;
  v4 = 0xFFFFDE0000000000uLL;
  v5 = (_QWORD *)i;
  v58 = 0LL;
  v7 = 0xAAAAAAAAAAAAAAABuLL;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v9 = 16 * ((a1 + 0x220000000000LL) >> 4);
  v10 = v9 - 0x220000000000LL;
  v55 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v9 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
  v11 = dword_140E2D884;
  if ( dword_140E2D880 > (unsigned int)dword_140E2D884
    || (v12 = (char *)qword_140E2D8E0 + 16 * dword_140E2D880, v8 < *(_QWORD *)v12)
    || dword_140E2D880 != dword_140E2D884 && v8 >= *((_QWORD *)v12 + 2) )
  {
    for ( i = 0LL; ; i = (unsigned int)(v13 + 1) )
    {
      while ( 1 )
      {
        if ( v11 < (int)i )
          KeBugCheckEx(0x1Au, 0x5180uLL, v8, 0LL, 0LL);
        v13 = ((int)i + v11) >> 1;
        v12 = (char *)qword_140E2D8E0 + 16 * v13;
        if ( v8 >= *(_QWORD *)v12 )
          break;
        if ( !v13 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v8, (ULONG_PTR)qword_140E2D8E0, 0LL);
        v11 = v13 - 1;
      }
      if ( v13 == dword_140E2D884 || v8 < *((_QWORD *)v12 + 2) )
        break;
    }
    dword_140E2D880 = ((int)i + v11) >> 1;
  }
  v57 = *((_DWORD *)v12 + 2);
  v14 = *(_DWORD *)(v10 + 32);
  v59 = HIBYTE(v14);
  if ( (v14 & 0x8000000) != 0
    && (v10 < 0xFFFFDE0000000000uLL
     || v10 >= 48 * qword_140E2D9A0 - 0x21FFFFFFFFD0LL
     || (v39 = 0xAAAAAAAAAAAAAAABuLL * (v9 >> 4), v39 >= qword_140E358C0) && v39 < qword_140E358C0 + 2048
     || (BYTE2(v14) & 7) != 6 && (unsigned int)MiGetPfnSlabType(v9 - 0x220000000000LL, v39, i) == 9) )
  {
    v15 = 5;
  }
  else
  {
    v15 = v59 & 7;
  }
  if ( qword_140E2D8E8 )
  {
    v38 = MiSearchChannelTable(v7 * (v9 >> 4));
    v4 = 0xFFFFDE0000000000uLL;
    v7 = 0xAAAAAAAAAAAAAAABuLL;
    v16 = *((_BYTE *)v38 + 12);
  }
  else
  {
    v16 = 0;
  }
  v17 = *(_QWORD *)(v55 + 16) + 57216LL * v57;
  if ( (int)v3 < 9 )
  {
    if ( (_DWORD)v3 == 8 )
    {
      v48 = *(_BYTE *)(qword_140E3CF00 + 2 * ((v7 * ((__int64)(v10 - v4) >> 4)) >> 9) + 1) & 0x7F;
      BYTE8(v58) = v48;
    }
    else
    {
      BYTE8(v58) = 0;
      v48 = 0;
    }
    v18 = *(_QWORD *)(232 * v3 + v17 + 15768) + 88 * (v15 + 8LL * v48);
  }
  else
  {
    v18 = v17 + 88 * (v15 + 8LL * v16 + 59);
  }
  v56 = v18;
  _InterlockedIncrement64((volatile signed __int64 *)v18);
  if ( !v5 )
  {
    v40 = *(_QWORD *)(v18 + 24);
    if ( v40 == 0x3FFFFFFFFFLL )
      *(_QWORD *)(v18 + 16) = v8;
    else
      MiSetNextStandbyPageSecondaryNoLockAsserts(v4 + 48 * v40, v8);
    *(_DWORD *)(a1 + 36) |= 0xFFE00000;
    *(_QWORD *)a1 |= 0xFFFFFF0000000000uLL;
    MiSetPfnNodeFlinkHigh(a1, 7LL);
    v41 = *(_QWORD *)(a1 + 24);
    v42 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(a1 + 24),
            (v40 << 40) ^ ((v40 << 40) ^ v41) & 0xF80000FFFFFFFFFFuLL,
            v41);
    if ( v41 != v42 )
    {
      do
      {
        v50 = v42;
        v42 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(a1 + 24),
                (v40 << 40) ^ (v42 ^ (v40 << 40)) & 0xF80000FFFFFFFFFFuLL,
                v42);
      }
      while ( v50 != v42 );
    }
    *(_DWORD *)(a1 + 36) ^= (*(_DWORD *)(a1 + 36) ^ (v40 >> 19)) & 0x1FFFFF;
    goto LABEL_50;
  }
  v19 = *(_QWORD *)(a1 + 24);
  v20 = v5[7];
  v21 = v5[10];
  v22 = v5[11];
  v23 = v5[8];
  v24 = v20 << 40;
  v25 = _InterlockedCompareExchange64(
          (volatile signed __int64 *)(a1 + 24),
          v24 ^ (v24 ^ v19) & 0xF80000FFFFFFFFFFuLL,
          v19);
  if ( v19 != v25 )
  {
    do
    {
      v36 = v25;
      v25 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(a1 + 24),
              v24 ^ (v24 ^ v25) & 0xF80000FFFFFFFFFFuLL,
              v25);
    }
    while ( v36 != v25 );
  }
  *(_QWORD *)a1 = (v21 << 40) | *(_QWORD *)a1 & 0xFFFFFFFFFFLL;
  *(_DWORD *)(a1 + 36) = (v20 >> 19) & 0x1FFFFF | ((unsigned int)(v21 >> 24) << 21);
  v26 = *(_QWORD *)(a1 + 40);
  v27 = _InterlockedCompareExchange64(
          (volatile signed __int64 *)(a1 + 40),
          (v21 << 20) ^ ((v21 << 20) ^ v26) & 0xF07FFFFFFFFFFFFFuLL,
          v26);
  if ( v26 != v27 )
  {
    do
    {
      v28 = v27;
      v27 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(a1 + 40),
              (v21 << 20) ^ ((v21 << 20) ^ v27) & 0xF07FFFFFFFFFFFFFuLL,
              v27);
    }
    while ( v28 != v27 );
  }
  if ( v20 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)(v56 + 16) = v8;
  }
  else
  {
    v29 = *(_DWORD *)(v23 + 36);
    *(_QWORD *)v23 = (v8 << 40) | *(_QWORD *)v23 & 0xFFFFFFFFFFLL;
    *(_DWORD *)(v23 + 36) = v29 & 0x1FFFFF | ((unsigned int)(v8 >> 24) << 21);
    v30 = *(_QWORD *)(v23 + 40);
    v31 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v23 + 40),
            (v8 << 20) ^ ((v8 << 20) ^ v30) & 0xF07FFFFFFFFFFFFFuLL,
            v30);
    if ( v30 != v31 )
    {
      do
      {
        v32 = v31;
        v31 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v23 + 40),
                (v8 << 20) ^ ((v8 << 20) ^ v31) & 0xF07FFFFFFFFFFFFFuLL,
                v31);
      }
      while ( v32 != v31 );
    }
  }
  if ( v21 == 0x3FFFFFFFFFLL )
  {
LABEL_50:
    result = v56;
    *(_QWORD *)(v56 + 24) = v8;
    goto LABEL_26;
  }
  v33 = *(_QWORD *)(v22 + 24);
  v34 = _InterlockedCompareExchange64(
          (volatile signed __int64 *)(v22 + 24),
          (v8 << 40) ^ ((v8 << 40) ^ v33) & 0xF80000FFFFFFFFFFuLL,
          v33);
  if ( v33 != v34 )
  {
    do
    {
      v37 = v34;
      v34 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v22 + 24),
              (v8 << 40) ^ (v34 ^ (v8 << 40)) & 0xF80000FFFFFFFFFFuLL,
              v34);
    }
    while ( v37 != v34 );
  }
  result = *(unsigned int *)(v22 + 36);
  *(_DWORD *)(v22 + 36) = result ^ (result ^ (v8 >> 19)) & 0x1FFFFF;
LABEL_26:
  if ( (int)v3 >= 9 )
    return result;
  if ( (_DWORD)v3 != 8 )
    goto LABEL_52;
  v51 = _InterlockedIncrement64((volatile signed __int64 *)(v55 + 18304));
  v52 = v51 == 1;
  v53 = v51 - 1;
  v54 = v52;
  if ( v53 < 1056 && v53 + 1 >= 1056 )
    v54 = v52 | 2;
  if ( v54 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v55 + 16192));
    if ( (v54 & 1) != 0 )
    {
      KeSetEvent((PRKEVENT)(v55 + 18312), 0, 0);
      ++*(_DWORD *)(v55 + 18336);
    }
    if ( (v54 & 2) != 0 )
    {
      KeSetEvent((PRKEVENT)(v55 + 18344), 0, 0);
      ++*(_DWORD *)(v55 + 18368);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v55 + 16192));
    v43 = *(_QWORD *)(v55 + 16) + 57216LL * v57;
  }
  else
  {
LABEL_52:
    v43 = *(_QWORD *)(v55 + 16) + 57216LL * v57;
    if ( (_DWORD)v3 != 8 )
    {
      v44 = (_QWORD *)(v43 + 56992);
      goto LABEL_54;
    }
  }
  LODWORD(v3) = BYTE8(v58);
  v44 = (_QWORD *)(*(_QWORD *)(v43 + 57008) + 314104LL);
LABEL_54:
  LOBYTE(v45) = 1;
  v46 = v3 & 0x1F;
  v47 = (volatile signed __int32 *)(*v44 + 4 * ((unsigned __int64)(unsigned int)v3 >> 5));
  result = v46 + 1;
  if ( (unsigned __int64)(v46 + 1) > 0x20 )
  {
    v49 = v3 & 0x1F;
    if ( !v49 )
      goto LABEL_60;
    result = (unsigned int)(((1 << (32 - v49)) - 1) << v46);
    _InterlockedOr(v47++, result);
    v45 = 1 - (32 - v49);
    if ( v45 >= 0x20 )
    {
      result = (unsigned __int64)v45 >> 5;
      do
      {
        *v47 = -1;
        v45 -= 32;
        ++v47;
        --result;
      }
      while ( result );
    }
    if ( v45 )
LABEL_60:
      _InterlockedOr(v47, (1 << v45) - 1);
  }
  else
  {
    _InterlockedOr(v47, 1 << v46);
  }
  return result;
}
