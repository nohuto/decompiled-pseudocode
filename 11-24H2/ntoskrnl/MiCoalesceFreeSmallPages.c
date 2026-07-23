/*
 * XREFs of MiCoalesceFreeSmallPages @ 0x140250600
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x140313370 (MiProcessLargeCoalesceBitmapCandidates.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140224664 (MiSearchChannelTable.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MiReturnFreeZeroPage @ 0x14024EE00 (MiReturnFreeZeroPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIsFreeZeroPfnCold @ 0x140250EDC (MiIsFreeZeroPfnCold.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiPfnZeroingNeeded @ 0x1403934B0 (MiPfnZeroingNeeded.c)
 *     MiCreateInitialLargeLeafPfns @ 0x140431268 (MiCreateInitialLargeLeafPfns.c)
 *     MiChangePageHeatImmediate @ 0x140435AC8 (MiChangePageHeatImmediate.c)
 *     MiColdPageSizeSupported @ 0x1404444AC (MiColdPageSizeSupported.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x14044F1DC (MiInitializeAllResidentPageBasePfns.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
  unsigned int v39; // ecx
  BOOL v40; // eax
  unsigned int v41; // ecx
  unsigned __int64 v42; // rax
  signed __int64 v43; // rax
  unsigned __int64 v44; // rcx
  signed __int64 v45; // rtt
  unsigned __int64 v46; // r15
  unsigned __int64 v47; // rax
  signed __int64 v48; // rax
  unsigned __int64 v49; // rcx
  signed __int64 v50; // rtt
  int v51; // eax
  unsigned int v52; // r11d
  unsigned int v53; // r10d
  int v54; // ecx
  bool v55; // cf
  int v56; // eax
  _QWORD *v57; // rax
  ULONG_PTR v58; // rcx
  ULONG_PTR v59; // rax
  int BugCheckParameter4; // [rsp+20h] [rbp-B8h]
  __int16 v61; // [rsp+40h] [rbp-98h]
  int v62; // [rsp+44h] [rbp-94h]
  int v63; // [rsp+48h] [rbp-90h]
  unsigned __int64 v64; // [rsp+50h] [rbp-88h]
  __int64 v65; // [rsp+58h] [rbp-80h]
  __int64 v66; // [rsp+60h] [rbp-78h]
  int v67; // [rsp+68h] [rbp-70h]
  __int16 *v68; // [rsp+78h] [rbp-60h]
  __int128 v69; // [rsp+80h] [rbp-58h]

  v2 = 0;
  v3 = a1;
  v67 = 0;
  if ( !MmPhysicalMemoryBlock )
    return 0LL;
  v4 = 48 * a1 - 0x220000000000LL;
  if ( (a2 & 1) != 0 )
  {
    if ( (unsigned __int8)byte_140E3CC26 < 2u || (*(_BYTE *)(qword_140E3CD38 + 2 * (a1 >> 4)) & 0x1Fu) < 0xF )
      return 0LL;
    v5 = 48 * a1 - 0x220000000000LL;
    v3 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  }
  else
  {
    v5 = 0LL;
  }
  v62 = HIWORD(*(_DWORD *)(v4 + 32)) & 7;
  v68 = (__int16 *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL));
  v6 = *v68;
  v61 = *v68;
  v7 = 48 * v3 - 0x220000000000LL;
  v8 = dword_140E2DC04;
  v9 = v7 + 768;
  v65 = v7 + 768;
  v64 = v7;
  if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
    || (v10 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, v3 < *(_QWORD *)v10)
    || dword_140E2DC00 != dword_140E2DC04 && v3 >= *((_QWORD *)v10 + 2) )
  {
    for ( i = 0; ; i = v12 + 1 )
    {
      while ( 1 )
      {
        if ( v8 < i )
LABEL_34:
          KeBugCheckEx(0x1Au, 0x5180uLL, v3, 0LL, 0LL);
        v12 = (i + v8) >> 1;
        v10 = (char *)qword_140E2DC60 + 16 * v12;
        if ( v3 >= *(_QWORD *)v10 )
          break;
        if ( !v12 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v3, (ULONG_PTR)qword_140E2DC60, 0LL);
        v8 = v12 - 1;
      }
      if ( v12 == dword_140E2DC04 || v3 < *((_QWORD *)v10 + 2) )
        break;
    }
    dword_140E2DC00 = (i + v8) >> 1;
  }
  v13 = 16LL;
  v14 = dword_140E2DC04;
  v15 = *((unsigned int *)v10 + 2);
  if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
    || (v16 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, v3 < *(_QWORD *)v16)
    || dword_140E2DC00 != dword_140E2DC04 && v3 >= *((_QWORD *)v16 + 2) )
  {
    for ( j = 0; ; j = v18 + 1 )
    {
      while ( 1 )
      {
        if ( v14 < j )
          goto LABEL_34;
        v18 = (j + v14) >> 1;
        v16 = (char *)qword_140E2DC60 + 16 * v18;
        if ( v3 >= *(_QWORD *)v16 )
          break;
        if ( !v18 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v3, (ULONG_PTR)qword_140E2DC60, 0LL);
        v14 = v18 - 1;
      }
      if ( v18 == dword_140E2DC04 || v3 < *((_QWORD *)v16 + 2) )
        break;
    }
    dword_140E2DC00 = (j + v14) >> 1;
  }
  v19 = *((_QWORD *)v16 + 2);
  if ( v3 + 16 > v19 )
    v13 = v19 - v3;
  v20 = v13;
  if ( qword_140E2DC68 )
  {
    v57 = MiSearchChannelTable(v3);
    v7 = 48 * v3 - 0x220000000000LL;
    v9 = v65;
    v6 = v61;
    v58 = v57[2];
    v59 = v13 + v3;
    v13 = v58 - v3;
    if ( v59 <= v58 )
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
    v69 = 0LL;
  v25 = 0;
  v26 = 57216 * v15;
  v63 = 0;
  v27 = v7;
  v28 = *((_QWORD *)v68 + 2) + v26;
  v66 = v28;
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
      if ( v24 > qword_140E2DD20
        || (*v29 & 0x40000000000000LL) == 0
        || ((*(_QWORD *)(v27 + 40) >> 43) & 0x3FF) != v6
        || (BYTE2(v32) & 7u) > 1 )
      {
        goto LABEL_52;
      }
      if ( v27 != v4 && _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
      {
        v2 = 2;
        v67 = 2;
LABEL_52:
        if ( v64 < v27 )
        {
          v46 = 48 * v3 - 0x220000000000LL;
          do
          {
            if ( v46 != v5 )
              MiReturnFreeZeroPage(v46);
            if ( v46 != v4 )
              _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v46 += 48LL;
          }
          while ( v46 < v27 );
          v2 = v67;
        }
        if ( v63 )
        {
          v48 = *(_QWORD *)(v66 + 15192);
          do
          {
            v49 = (v48 - 1) ^ (v48 ^ (v48 - 1)) & 0xFFFFFFFFFFFF0000uLL;
            if ( (_WORD)v48 == 1 )
              v49 ^= (v49 ^ (v49 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
            v50 = v48;
            v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v66 + 15192), v49, v48);
          }
          while ( v50 != v48 );
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
        v63 = 1;
      }
      if ( !(unsigned int)MiUnlinkFreeOrZeroedPage(v24, 0LL, 256) )
      {
LABEL_106:
        if ( v27 != v4 )
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_52;
      }
      v28 = v66;
      v31 = 0x10000000000LL;
      v9 = v65;
      v6 = v61;
      if ( !v5 )
      {
        v47 = (unsigned __int64)(unsigned __int8)BYTE2(*(_DWORD *)(v27 + 32)) >> 6;
        ++*((_DWORD *)&v69 + v47);
      }
LABEL_62:
      v25 = v63;
      v27 += 48LL;
      ++v24;
      v30 = 0x40000000000000LL;
      v29 += 6;
    }
  }
  if ( !v5 )
  {
    v51 = 0;
    v31 = DWORD1(v69);
    v30 = DWORD2(v69);
    v52 = v69;
    if ( !(_DWORD)v69 )
      v52 = 0;
    v53 = DWORD1(v69);
    v28 = DWORD2(v69);
    v22 = 3;
    if ( v52 >= DWORD1(v69) )
      v53 = v52;
    if ( v53 >= DWORD2(v69) )
      v28 = v53;
    v54 = 1;
    if ( v52 >= DWORD1(v69) )
    {
      LOBYTE(v51) = (_DWORD)v69 == 0;
      v54 = v51;
    }
    v55 = v53 < DWORD2(v69);
    v9 = v65;
    v56 = 2;
    if ( !v55 )
      v56 = v54;
    if ( (unsigned int)v28 >= HIDWORD(v69) )
      v22 = v56;
  }
  if ( v62 != 1 )
  {
    while ( 1 )
    {
      v27 -= 48LL;
      if ( (unsigned int)MiPfnZeroingNeeded(v27, v22) )
        break;
      if ( v27 == v31 )
        goto LABEL_67;
    }
    v62 = 1;
  }
  if ( !CLFS_LSN_NULL_EXT )
    MiMakeDemandZeroPte(4LL, v30, v28, v31);
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
  if ( (unsigned int)MiColdPageSizeSupported(2LL, v66) )
  {
    if ( v62 == 1 )
    {
      v40 = (v35 & 1) == 0;
    }
    else
    {
      v40 = 0;
      if ( (v35 & (unsigned __int8)v39) != 0 )
      {
        MiChangePageHeatImmediate(v3, v39, 0LL);
        v40 = 0;
      }
    }
  }
  else
  {
    v40 = (HvlEnlightenments & 0x200000) == 0
       || v66 && ((unsigned __int8)*(_DWORD *)(v66 + 15184) & (unsigned __int8)v39) != 0
       || (v35 & 1) == 0;
  }
  MiInitializeAllResidentPageBasePfns((_DWORD)v68, v3, 16, 2, v22, v40, 1);
  LOWORD(BugCheckParameter4) = *v68;
  MiCreateInitialLargeLeafPfns(v3, 16, 2, v22, BugCheckParameter4, 1);
  v41 = 1;
  v42 = v64 + 48;
  do
  {
    if ( v42 != v4 )
      _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v41;
    v42 += 48LL;
  }
  while ( v41 < 0x10 );
  LOBYTE(v2) = v62 != 0;
  MiInsertPageInFreeOrZeroedList(v3, v2 + 1);
  if ( v64 != v4 )
    _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v43 = *(_QWORD *)(v66 + 15192);
  do
  {
    v44 = (v43 - 1) ^ (v43 ^ (v43 - 1)) & 0xFFFFFFFFFFFF0000uLL;
    if ( (_WORD)v43 == 1 )
      v44 ^= (v44 ^ (v44 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
    v45 = v43;
    v43 = _InterlockedCompareExchange64((volatile signed __int64 *)(v66 + 15192), v44, v43);
  }
  while ( v45 != v43 );
  return 1LL;
}
