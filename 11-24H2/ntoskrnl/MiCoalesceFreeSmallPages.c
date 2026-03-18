/*
 * XREFs of MiCoalesceFreeSmallPages @ 0x1402238B0
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x140309490 (MiProcessLargeCoalesceBitmapCandidates.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402213E0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiReturnFreeZeroPage @ 0x1402220B0 (MiReturnFreeZeroPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIsFreeZeroPfnCold @ 0x14022418C (MiIsFreeZeroPfnCold.c)
 *     MiPfnZeroingNeeded @ 0x140268E10 (MiPfnZeroingNeeded.c)
 *     MiSearchChannelTable @ 0x14026F0D4 (MiSearchChannelTable.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402F6568 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiCreateInitialLargeLeafPfns @ 0x14043CFC8 (MiCreateInitialLargeLeafPfns.c)
 *     MiChangePageHeatImmediate @ 0x14043F808 (MiChangePageHeatImmediate.c)
 *     MiColdPageSizeSupported @ 0x14044D5AC (MiColdPageSizeSupported.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x140459D90 (MiInitializeAllResidentPageBasePfns.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MiCoalesceFreeSmallPages(ULONG_PTR a1, char a2)
{
  unsigned int v2; // r15d
  ULONG_PTR v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r13
  __int16 v6; // r11
  __int64 v7; // r9
  int v8; // ecx
  __int64 v9; // r10
  char *v10; // rbx
  int i; // eax
  int v12; // edx
  __int64 v13; // r14
  int v14; // edx
  __int64 v15; // rbx
  char *v16; // rax
  int j; // ecx
  int v18; // r8d
  unsigned __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rcx
  unsigned int v22; // ebp
  ULONG_PTR v24; // r14
  int v25; // ecx
  __int64 v26; // r8
  unsigned __int64 v27; // rbx
  __int64 v28; // r8
  _QWORD *v29; // r12
  __int64 v30; // rdx
  __int64 v31; // r9
  int v32; // eax
  signed __int64 v33; // rax
  signed __int64 v34; // rtt
  unsigned __int8 v35; // r12
  unsigned __int64 v36; // rbx
  unsigned int k; // r14d
  int IsFreeZeroPfnCold; // eax
  __int64 v39; // r9
  unsigned int v40; // ecx
  BOOL v41; // eax
  unsigned int v42; // ecx
  unsigned __int64 v43; // rax
  signed __int64 v44; // rax
  unsigned __int64 v45; // rcx
  signed __int64 v46; // rtt
  unsigned __int64 v47; // r15
  unsigned __int64 v48; // rax
  signed __int64 v49; // rax
  unsigned __int64 v50; // rcx
  signed __int64 v51; // rtt
  __int64 v52; // r9
  int v53; // eax
  unsigned int v54; // r11d
  unsigned int v55; // r10d
  int v56; // ecx
  bool v57; // cf
  int v58; // eax
  __int64 v59; // rax
  ULONG_PTR v60; // rcx
  ULONG_PTR v61; // rax
  int BugCheckParameter4; // [rsp+20h] [rbp-B8h]
  __int16 v63; // [rsp+40h] [rbp-98h]
  int v64; // [rsp+44h] [rbp-94h]
  int v65; // [rsp+48h] [rbp-90h]
  unsigned __int64 v66; // [rsp+50h] [rbp-88h]
  __int64 v67; // [rsp+58h] [rbp-80h]
  __int64 v68; // [rsp+60h] [rbp-78h]
  int v69; // [rsp+68h] [rbp-70h]
  __int16 *v70; // [rsp+78h] [rbp-60h]
  __int128 v71; // [rsp+80h] [rbp-58h]

  v2 = 0;
  v3 = a1;
  v69 = 0;
  if ( !MmPhysicalMemoryBlock )
    return 0LL;
  v4 = 48 * a1 - 0x220000000000LL;
  if ( (a2 & 1) != 0 )
  {
    if ( (unsigned __int8)byte_140E3CAE6 < 2u || (*(_BYTE *)(qword_140E3CBF8 + 2 * (a1 >> 4)) & 0x1Fu) < 0xF )
      return 0LL;
    v5 = 48 * a1 - 0x220000000000LL;
    v3 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  }
  else
  {
    v5 = 0LL;
  }
  v64 = HIWORD(*(_DWORD *)(v4 + 32)) & 7;
  v70 = (__int16 *)*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL));
  v6 = *v70;
  v63 = *v70;
  v7 = 48 * v3 - 0x220000000000LL;
  v8 = dword_140E2DAC4;
  v9 = v7 + 768;
  v67 = v7 + 768;
  v66 = v7;
  if ( dword_140E2DAC0 > (unsigned int)dword_140E2DAC4
    || (v10 = (char *)qword_140E2DB20 + 16 * dword_140E2DAC0, v3 < *(_QWORD *)v10)
    || dword_140E2DAC0 != dword_140E2DAC4 && v3 >= *((_QWORD *)v10 + 2) )
  {
    for ( i = 0; ; i = v12 + 1 )
    {
      while ( 1 )
      {
        if ( v8 < i )
LABEL_34:
          KeBugCheckEx(0x1Au, 0x5180uLL, v3, 0LL, 0LL);
        v12 = (i + v8) >> 1;
        v10 = (char *)qword_140E2DB20 + 16 * v12;
        if ( v3 >= *(_QWORD *)v10 )
          break;
        if ( !v12 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v3, (ULONG_PTR)qword_140E2DB20, 0LL);
        v8 = v12 - 1;
      }
      if ( v12 == dword_140E2DAC4 || v3 < *((_QWORD *)v10 + 2) )
        break;
    }
    dword_140E2DAC0 = (i + v8) >> 1;
  }
  v13 = 16LL;
  v14 = dword_140E2DAC4;
  v15 = *((unsigned int *)v10 + 2);
  if ( dword_140E2DAC0 > (unsigned int)dword_140E2DAC4
    || (v16 = (char *)qword_140E2DB20 + 16 * dword_140E2DAC0, v3 < *(_QWORD *)v16)
    || dword_140E2DAC0 != dword_140E2DAC4 && v3 >= *((_QWORD *)v16 + 2) )
  {
    for ( j = 0; ; j = v18 + 1 )
    {
      while ( 1 )
      {
        if ( v14 < j )
          goto LABEL_34;
        v18 = (j + v14) >> 1;
        v16 = (char *)qword_140E2DB20 + 16 * v18;
        if ( v3 >= *(_QWORD *)v16 )
          break;
        if ( !v18 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v3, (ULONG_PTR)qword_140E2DB20, 0LL);
        v14 = v18 - 1;
      }
      if ( v18 == dword_140E2DAC4 || v3 < *((_QWORD *)v16 + 2) )
        break;
    }
    dword_140E2DAC0 = (j + v14) >> 1;
  }
  v19 = *((_QWORD *)v16 + 2);
  if ( v3 + 16 > v19 )
    v13 = v19 - v3;
  v20 = v13;
  if ( qword_140E2DB28 )
  {
    v59 = MiSearchChannelTable(v3);
    v7 = 48 * v3 - 0x220000000000LL;
    v9 = v67;
    v6 = v63;
    v60 = *(_QWORD *)(v59 + 16);
    v61 = v13 + v3;
    v13 = v60 - v3;
    if ( v61 <= v60 )
      v13 = v20;
  }
  if ( v13 != 16 )
    return 0LL;
  v21 = v7 + 32;
  v22 = (unsigned __int8)BYTE2(*(_DWORD *)(v7 + 32)) >> 6;
  while ( v21 - 32 != v9 )
  {
    if ( ((*(_QWORD *)(v21 + 8) >> 43) & 0x3FF) != v6 || v5 && (unsigned __int8)BYTE2(*(_DWORD *)v21) >> 6 != v22 )
      return 0LL;
    v21 += 48LL;
  }
  v24 = v3;
  if ( !v5 )
    v71 = 0LL;
  v25 = 0;
  v26 = 57216 * v15;
  v65 = 0;
  v27 = v7;
  v28 = *((_QWORD *)v70 + 2) + v26;
  v68 = v28;
  v29 = (_QWORD *)(48 * v3 - 0x21FFFFFFFFD8LL);
  v30 = 0x40000000000000LL;
  v31 = 0x10000000000LL;
  while ( v27 != v9 )
  {
    v32 = *(_DWORD *)(v27 + 32);
    if ( v27 == v5 )
    {
      if ( (v32 & 0x70000) != 0 )
      {
        MiSetOriginalPtePfnFromFreeList(v27 + 16, 0x40000000000000LL, v28, v31);
        goto LABEL_62;
      }
      ++v24;
      *(_QWORD *)(v27 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
      v27 += 48LL;
      v29 += 6;
    }
    else
    {
      if ( v24 > qword_140E2DBE0
        || (*v29 & 0x40000000000000LL) == 0
        || ((*(_QWORD *)(v27 + 40) >> 43) & 0x3FF) != v6
        || (BYTE2(v32) & 7u) > 1 )
      {
        goto LABEL_52;
      }
      if ( v27 != v4 && _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
      {
        v2 = 2;
        v69 = 2;
LABEL_52:
        if ( v66 < v27 )
        {
          v47 = 48 * v3 - 0x220000000000LL;
          do
          {
            if ( v47 != v5 )
              MiReturnFreeZeroPage(v47);
            if ( v47 != v4 )
              _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v47 += 48LL;
          }
          while ( v47 < v27 );
          v2 = v69;
        }
        if ( v65 )
        {
          v49 = *(_QWORD *)(v68 + 15192);
          do
          {
            v50 = (v49 - 1) ^ (v49 ^ (v49 - 1)) & 0xFFFFFFFFFFFF0000uLL;
            if ( (_WORD)v49 == 1 )
              v50 ^= (v50 ^ (v50 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
            v51 = v49;
            v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(v68 + 15192), v50, v49);
          }
          while ( v51 != v49 );
        }
        return v2;
      }
      if ( (HIWORD(*(_DWORD *)(v27 + 32)) & 7u) > 1
        || ((*(_QWORD *)(v27 + 40) >> 43) & 0x3FF) != v6
        || (*(_DWORD *)(v27 + 32) & 0x40000000) != 0
        || v5 && (unsigned __int8)BYTE2(*(_DWORD *)(v27 + 32)) >> 6 != v22
        || (*(_QWORD *)(v27 + 40) & v31) != 0 )
      {
        goto LABEL_106;
      }
      if ( !v25 )
      {
        v33 = *(_QWORD *)(v28 + 15192);
        do
        {
          v34 = v33;
          v33 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v28 + 15192),
                  (v33 + 1) ^ ((v33 + 1) ^ v33) & 0xFFFFFFFFFFFF0000uLL,
                  v33);
        }
        while ( v34 != v33 );
        v65 = 1;
      }
      if ( !(unsigned int)MiUnlinkFreeOrZeroedPage(v24, 0LL, 256LL) )
      {
LABEL_106:
        if ( v27 != v4 )
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_52;
      }
      v28 = v68;
      v31 = 0x10000000000LL;
      v9 = v67;
      v6 = v63;
      if ( !v5 )
      {
        v48 = (unsigned __int64)(unsigned __int8)BYTE2(*(_DWORD *)(v27 + 32)) >> 6;
        ++*((_DWORD *)&v71 + v48);
      }
LABEL_62:
      v25 = v65;
      v27 += 48LL;
      ++v24;
      v30 = 0x40000000000000LL;
      v29 += 6;
    }
  }
  if ( !v5 )
  {
    v53 = 0;
    v30 = DWORD2(v71);
    v54 = v71;
    if ( !(_DWORD)v71 )
      v54 = 0;
    v55 = DWORD1(v71);
    v28 = DWORD2(v71);
    v22 = 3;
    if ( v54 >= DWORD1(v71) )
      v55 = v54;
    if ( v55 >= DWORD2(v71) )
      v28 = v55;
    v56 = 1;
    if ( v54 >= DWORD1(v71) )
    {
      LOBYTE(v53) = (_DWORD)v71 == 0;
      v56 = v53;
    }
    v57 = v55 < DWORD2(v71);
    v9 = v67;
    v58 = 2;
    if ( !v57 )
      v58 = v56;
    if ( (unsigned int)v28 >= HIDWORD(v71) )
      v22 = v58;
  }
  if ( v64 != 1 )
  {
    while ( 1 )
    {
      v27 -= 48LL;
      if ( (unsigned int)MiPfnZeroingNeeded(v27, v22, v28) )
        break;
      if ( v27 == v52 )
        goto LABEL_67;
    }
    v64 = 1;
  }
  if ( !CLFS_LSN_NULL_EXT )
    MiMakeDemandZeroPte(4LL);
LABEL_67:
  v35 = 0;
  v36 = v9 - 48;
  for ( k = 0; k < 0x10; ++k )
  {
    if ( !v5 && (unsigned __int8)BYTE2(*(_DWORD *)(v36 + 32)) >> 6 != v22 )
      MiChangePageAttribute(v36, v22);
    IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(v36, v30, v28);
    *(_QWORD *)(v36 + 16) = 0LL;
    v36 -= 48LL;
    v35 |= 2 - (IsFreeZeroPfnCold != 0);
  }
  if ( (unsigned int)MiColdPageSizeSupported(2LL, v68, v28, v39) )
  {
    if ( v64 == 1 )
    {
      v41 = (v35 & 1) == 0;
    }
    else
    {
      v41 = 0;
      if ( (v35 & (unsigned __int8)v40) != 0 )
      {
        MiChangePageHeatImmediate(v3, v40, 0LL);
        v41 = 0;
      }
    }
  }
  else
  {
    v41 = (HvlEnlightenments & 0x200000) == 0
       || v68 && ((unsigned __int8)*(_DWORD *)(v68 + 15184) & (unsigned __int8)v40) != 0
       || (v35 & 1) == 0;
  }
  MiInitializeAllResidentPageBasePfns((_DWORD)v70, v3, 16, 2, v22, v41, 1);
  LOWORD(BugCheckParameter4) = *v70;
  MiCreateInitialLargeLeafPfns(v3, 16, 2, v22, BugCheckParameter4, 1);
  v42 = 1;
  v43 = v66 + 48;
  do
  {
    if ( v43 != v4 )
      _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v42;
    v43 += 48LL;
  }
  while ( v42 < 0x10 );
  LOBYTE(v2) = v64 != 0;
  MiInsertPageInFreeOrZeroedList(v3, v2 + 1);
  if ( v66 != v4 )
    _InterlockedAnd64((volatile signed __int64 *)(v66 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v44 = *(_QWORD *)(v68 + 15192);
  do
  {
    v45 = (v44 - 1) ^ (v44 ^ (v44 - 1)) & 0xFFFFFFFFFFFF0000uLL;
    if ( (_WORD)v44 == 1 )
      v45 ^= (v45 ^ (v45 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
    v46 = v44;
    v44 = _InterlockedCompareExchange64((volatile signed __int64 *)(v68 + 15192), v45, v44);
  }
  while ( v46 != v44 );
  return 1LL;
}
