/*
 * XREFs of MiInsertSecondaryListStandbyPage @ 0x140224720
 * Callers:
 *     MiReplaceSecondaryListStandbyPage @ 0x1402568F0 (MiReplaceSecondaryListStandbyPage.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140224664 (MiSearchChannelTable.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSetNextStandbyPageSecondaryNoLockAsserts @ 0x1403E2780 (MiSetNextStandbyPageSecondaryNoLockAsserts.c)
 *     MiSetPfnNodeFlinkHigh @ 0x140403370 (MiSetPfnNodeFlinkHigh.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiInsertSecondaryListStandbyPage(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // r12
  unsigned __int64 v4; // r10
  unsigned __int64 v7; // r11
  ULONG_PTR v8; // rbx
  __int64 v9; // r9
  unsigned __int64 v10; // r15
  int v11; // ecx
  char *v12; // rax
  int i; // edx
  int v14; // r8d
  int v15; // eax
  unsigned int v16; // esi
  unsigned __int8 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  signed __int64 v20; // rdx
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r13
  __int64 v23; // r10
  __int64 v24; // r9
  __int64 v25; // r11
  signed __int64 v26; // r8
  signed __int64 v27; // rdx
  signed __int64 v28; // rax
  signed __int64 v29; // rdx
  int v30; // eax
  signed __int64 v31; // rdx
  signed __int64 v32; // rax
  signed __int64 v33; // rdx
  signed __int64 v34; // rdx
  signed __int64 v35; // rax
  unsigned __int64 result; // rax
  signed __int64 v37; // rcx
  signed __int64 v38; // rdx
  _QWORD *v39; // rax
  ULONG_PTR v40; // rdx
  unsigned __int64 v41; // r14
  signed __int64 v42; // rdx
  signed __int64 v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rax
  unsigned int v46; // ecx
  __int64 v47; // r8
  volatile signed __int32 *v48; // r9
  unsigned __int8 v49; // cl
  int v50; // r12d
  signed __int64 v51; // rdx
  signed __int64 v52; // rcx
  bool v53; // zf
  __int64 v54; // rcx
  int v55; // esi
  __int64 v56; // [rsp+30h] [rbp-118h]
  unsigned __int64 v57; // [rsp+40h] [rbp-108h]
  unsigned int v58; // [rsp+48h] [rbp-100h]
  __int128 v59; // [rsp+50h] [rbp-F8h]
  char v60; // [rsp+153h] [rbp+Bh]

  v3 = a2;
  v4 = 0xFFFFDE0000000000uLL;
  v59 = 0LL;
  v7 = 0xAAAAAAAAAAAAAAABuLL;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v9 = 16 * ((a1 + 0x220000000000LL) >> 4);
  v10 = v9 - 0x220000000000LL;
  v56 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
  v11 = dword_140E2DC04;
  if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
    || (v12 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, v8 < *(_QWORD *)v12)
    || dword_140E2DC00 != dword_140E2DC04 && v8 >= *((_QWORD *)v12 + 2) )
  {
    for ( i = 0; ; i = v14 + 1 )
    {
      while ( 1 )
      {
        if ( v11 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, v8, 0LL, 0LL);
        v14 = (i + v11) >> 1;
        v12 = (char *)qword_140E2DC60 + 16 * v14;
        if ( v8 >= *(_QWORD *)v12 )
          break;
        if ( !v14 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v8, (ULONG_PTR)qword_140E2DC60, 0LL);
        v11 = v14 - 1;
      }
      if ( v14 == dword_140E2DC04 || v8 < *((_QWORD *)v12 + 2) )
        break;
    }
    dword_140E2DC00 = (i + v11) >> 1;
  }
  v58 = *((_DWORD *)v12 + 2);
  v15 = *(_DWORD *)(v10 + 32);
  v60 = HIBYTE(v15);
  if ( (v15 & 0x8000000) != 0
    && (v10 < 0xFFFFDE0000000000uLL
     || v10 >= 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL
     || (v40 = 0xAAAAAAAAAAAAAAABuLL * (v9 >> 4), v40 >= qword_140E35C40) && v40 < qword_140E35C40 + 2048
     || (BYTE2(v15) & 7) != 6 && (unsigned int)MiGetPfnSlabType(v9 - 0x220000000000LL) == 9) )
  {
    v16 = 5;
  }
  else
  {
    v16 = v60 & 7;
  }
  if ( qword_140E2DC68 )
  {
    v39 = MiSearchChannelTable(v7 * (v9 >> 4));
    v4 = 0xFFFFDE0000000000uLL;
    v7 = 0xAAAAAAAAAAAAAAABuLL;
    v17 = *((_BYTE *)v39 + 12);
  }
  else
  {
    v17 = 0;
  }
  v18 = *(_QWORD *)(v56 + 16) + 57216LL * v58;
  if ( (int)v3 < 9 )
  {
    if ( (_DWORD)v3 == 8 )
    {
      v49 = *(_BYTE *)(qword_140E3D280 + 2 * ((v7 * ((__int64)(v10 - v4) >> 4)) >> 9) + 1) & 0x7F;
      BYTE8(v59) = v49;
    }
    else
    {
      BYTE8(v59) = 0;
      v49 = 0;
    }
    v19 = *(_QWORD *)(232 * v3 + v18 + 15768) + 88 * (v16 + 8LL * v49);
  }
  else
  {
    v19 = v18 + 88 * (v16 + 8LL * v17 + 59);
  }
  v57 = v19;
  _InterlockedIncrement64((volatile signed __int64 *)v19);
  if ( !a3 )
  {
    v41 = *(_QWORD *)(v19 + 24);
    if ( v41 == 0x3FFFFFFFFFLL )
      *(_QWORD *)(v19 + 16) = v8;
    else
      MiSetNextStandbyPageSecondaryNoLockAsserts(v4 + 48 * v41, v8);
    *(_DWORD *)(a1 + 36) |= 0xFFE00000;
    *(_QWORD *)a1 |= 0xFFFFFF0000000000uLL;
    MiSetPfnNodeFlinkHigh(a1, 7LL);
    v42 = *(_QWORD *)(a1 + 24);
    v43 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(a1 + 24),
            (v41 << 40) ^ ((v41 << 40) ^ v42) & 0xF80000FFFFFFFFFFuLL,
            v42);
    if ( v42 != v43 )
    {
      do
      {
        v51 = v43;
        v43 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(a1 + 24),
                (v41 << 40) ^ (v43 ^ (v41 << 40)) & 0xF80000FFFFFFFFFFuLL,
                v43);
      }
      while ( v51 != v43 );
    }
    *(_DWORD *)(a1 + 36) ^= (*(_DWORD *)(a1 + 36) ^ (v41 >> 19)) & 0x1FFFFF;
    goto LABEL_50;
  }
  v20 = *(_QWORD *)(a1 + 24);
  v21 = a3[7];
  v22 = a3[10];
  v23 = a3[11];
  v24 = a3[8];
  v25 = v21 << 40;
  v26 = _InterlockedCompareExchange64(
          (volatile signed __int64 *)(a1 + 24),
          v25 ^ (v25 ^ v20) & 0xF80000FFFFFFFFFFuLL,
          v20);
  if ( v20 != v26 )
  {
    do
    {
      v37 = v26;
      v26 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(a1 + 24),
              v25 ^ (v25 ^ v26) & 0xF80000FFFFFFFFFFuLL,
              v26);
    }
    while ( v37 != v26 );
  }
  *(_QWORD *)a1 = (v22 << 40) | *(_QWORD *)a1 & 0xFFFFFFFFFFLL;
  *(_DWORD *)(a1 + 36) = (v21 >> 19) & 0x1FFFFF | ((unsigned int)(v22 >> 24) << 21);
  v27 = *(_QWORD *)(a1 + 40);
  v28 = _InterlockedCompareExchange64(
          (volatile signed __int64 *)(a1 + 40),
          (v22 << 20) ^ ((v22 << 20) ^ v27) & 0xF07FFFFFFFFFFFFFuLL,
          v27);
  if ( v27 != v28 )
  {
    do
    {
      v29 = v28;
      v28 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(a1 + 40),
              (v22 << 20) ^ ((v22 << 20) ^ v28) & 0xF07FFFFFFFFFFFFFuLL,
              v28);
    }
    while ( v29 != v28 );
  }
  if ( v21 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)(v57 + 16) = v8;
  }
  else
  {
    v30 = *(_DWORD *)(v24 + 36);
    *(_QWORD *)v24 = (v8 << 40) | *(_QWORD *)v24 & 0xFFFFFFFFFFLL;
    *(_DWORD *)(v24 + 36) = v30 & 0x1FFFFF | ((unsigned int)(v8 >> 24) << 21);
    v31 = *(_QWORD *)(v24 + 40);
    v32 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v24 + 40),
            (v8 << 20) ^ ((v8 << 20) ^ v31) & 0xF07FFFFFFFFFFFFFuLL,
            v31);
    if ( v31 != v32 )
    {
      do
      {
        v33 = v32;
        v32 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v24 + 40),
                (v8 << 20) ^ ((v8 << 20) ^ v32) & 0xF07FFFFFFFFFFFFFuLL,
                v32);
      }
      while ( v33 != v32 );
    }
  }
  if ( v22 == 0x3FFFFFFFFFLL )
  {
LABEL_50:
    result = v57;
    *(_QWORD *)(v57 + 24) = v8;
    goto LABEL_26;
  }
  v34 = *(_QWORD *)(v23 + 24);
  v35 = _InterlockedCompareExchange64(
          (volatile signed __int64 *)(v23 + 24),
          (v8 << 40) ^ ((v8 << 40) ^ v34) & 0xF80000FFFFFFFFFFuLL,
          v34);
  if ( v34 != v35 )
  {
    do
    {
      v38 = v35;
      v35 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v23 + 24),
              (v8 << 40) ^ (v35 ^ (v8 << 40)) & 0xF80000FFFFFFFFFFuLL,
              v35);
    }
    while ( v38 != v35 );
  }
  result = *(unsigned int *)(v23 + 36);
  *(_DWORD *)(v23 + 36) = result ^ (result ^ (v8 >> 19)) & 0x1FFFFF;
LABEL_26:
  if ( (int)v3 >= 9 )
    return result;
  if ( (_DWORD)v3 != 8 )
    goto LABEL_52;
  v52 = _InterlockedIncrement64((volatile signed __int64 *)(v56 + 18304));
  v53 = v52 == 1;
  v54 = v52 - 1;
  v55 = v53;
  if ( v54 < 1056 && v54 + 1 >= 1056 )
    v55 = v53 | 2;
  if ( v55 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v56 + 16192));
    if ( (v55 & 1) != 0 )
    {
      KeSetEvent((PRKEVENT)(v56 + 18312), 0, 0);
      ++*(_DWORD *)(v56 + 18336);
    }
    if ( (v55 & 2) != 0 )
    {
      KeSetEvent((PRKEVENT)(v56 + 18344), 0, 0);
      ++*(_DWORD *)(v56 + 18368);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v56 + 16192));
    v44 = *(_QWORD *)(v56 + 16) + 57216LL * v58;
  }
  else
  {
LABEL_52:
    v44 = *(_QWORD *)(v56 + 16) + 57216LL * v58;
    if ( (_DWORD)v3 != 8 )
    {
      v45 = (_QWORD *)(v44 + 56992);
      goto LABEL_54;
    }
  }
  LODWORD(v3) = BYTE8(v59);
  v45 = (_QWORD *)(*(_QWORD *)(v44 + 57008) + 314104LL);
LABEL_54:
  LOBYTE(v46) = 1;
  v47 = v3 & 0x1F;
  v48 = (volatile signed __int32 *)(*v45 + 4 * ((unsigned __int64)(unsigned int)v3 >> 5));
  result = v47 + 1;
  if ( (unsigned __int64)(v47 + 1) > 0x20 )
  {
    v50 = v3 & 0x1F;
    if ( !v50 )
      goto LABEL_60;
    result = (unsigned int)(((1 << (32 - v50)) - 1) << v47);
    _InterlockedOr(v48++, result);
    v46 = 1 - (32 - v50);
    if ( v46 >= 0x20 )
    {
      result = (unsigned __int64)v46 >> 5;
      do
      {
        *v48 = -1;
        v46 -= 32;
        ++v48;
        --result;
      }
      while ( result );
    }
    if ( v46 )
LABEL_60:
      _InterlockedOr(v48, (1 << v46) - 1);
  }
  else
  {
    _InterlockedOr(v48, 1 << v47);
  }
  return result;
}
