/*
 * XREFs of MiCoalesceFreeSmallPages @ 0x140345720
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x14034F7E0 (MiProcessLargeCoalesceBitmapCandidates.c)
 * Callees:
 *     MiSearchChannelTable @ 0x1402167C8 (MiSearchChannelTable.c)
 *     MiPfnZeroingNeeded @ 0x140224750 (MiPfnZeroingNeeded.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiIsFreeZeroPfnCold @ 0x1402C80AC (MiIsFreeZeroPfnCold.c)
 *     MiReturnFreeZeroPage @ 0x1403433B0 (MiReturnFreeZeroPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140344B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiDetermineCoalescedLargePageHeatState @ 0x140438804 (MiDetermineCoalescedLargePageHeatState.c)
 *     MiChangePageHeatImmediate @ 0x14044039C (MiChangePageHeatImmediate.c)
 *     MiCreateInitialLargeLeafPfns @ 0x140443314 (MiCreateInitialLargeLeafPfns.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x14045DDAC (MiInitializeAllResidentPageBasePfns.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall MiCoalesceFreeSmallPages(ULONG_PTR a1, char a2)
{
  unsigned int v2; // r14d
  ULONG_PTR v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r12
  unsigned int v6; // eax
  __int64 v7; // r15
  int v8; // edx
  __int64 v9; // rbx
  char *v10; // rax
  int i; // ecx
  int v12; // r8d
  unsigned __int64 v13; // rcx
  __int64 v14; // rbp
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r10
  int v17; // ebp
  ULONG_PTR v19; // r15
  int v20; // ecx
  __int64 v21; // r8
  unsigned __int64 v22; // rbx
  __int64 v23; // r8
  _QWORD *v24; // r13
  __int64 v25; // r11
  int v26; // eax
  unsigned __int64 v27; // r14
  int v28; // eax
  signed __int64 v29; // rax
  signed __int64 v30; // rtt
  unsigned __int64 DemandZeroPte; // rax
  int v32; // r13d
  unsigned __int64 v33; // rbx
  unsigned int v34; // r15d
  int IsFreeZeroPfnCold; // eax
  int v36; // ecx
  unsigned int v37; // ecx
  int v38; // ebx
  _WORD *v39; // rbx
  unsigned __int64 v40; // rbx
  unsigned int v41; // ecx
  unsigned __int64 v42; // rax
  signed __int64 v43; // rax
  unsigned __int64 v44; // rcx
  signed __int64 v45; // rtt
  unsigned __int64 v46; // rax
  __int64 v47; // r9
  signed __int64 v48; // rax
  unsigned __int64 v49; // rcx
  signed __int64 v50; // rtt
  int v51; // eax
  unsigned int v52; // r11d
  unsigned int v53; // r10d
  unsigned int v54; // r8d
  int v55; // ecx
  bool v56; // cf
  int v57; // eax
  ULONG_PTR v58; // rcx
  ULONG_PTR v59; // rax
  int BugCheckParameter4; // [rsp+20h] [rbp-C8h]
  int v61; // [rsp+28h] [rbp-C0h]
  int v62; // [rsp+40h] [rbp-A8h]
  __int16 v63; // [rsp+44h] [rbp-A4h]
  int v64; // [rsp+48h] [rbp-A0h]
  __int64 v65; // [rsp+50h] [rbp-98h]
  int v66; // [rsp+58h] [rbp-90h] BYREF
  unsigned __int64 v67; // [rsp+60h] [rbp-88h]
  int v68; // [rsp+68h] [rbp-80h]
  unsigned __int64 v69; // [rsp+70h] [rbp-78h]
  __int64 v70; // [rsp+78h] [rbp-70h]
  ULONG_PTR v71; // [rsp+80h] [rbp-68h]
  __int16 *v72; // [rsp+88h] [rbp-60h]
  __int128 v73; // [rsp+90h] [rbp-58h]

  v2 = 0;
  v3 = a1;
  v70 = 0LL;
  v66 = 0;
  if ( !MmPhysicalMemoryBlock )
    return 0LL;
  v4 = 48 * a1 - 0x220000000000LL;
  if ( (a2 & 1) == 0 )
  {
    v5 = 0LL;
    goto LABEL_6;
  }
  if ( (unsigned __int8)byte_140E3C8A6 < 2u || (*(_BYTE *)(qword_140E3C9B8 + 2 * (a1 >> 4)) & 0x1Fu) < 0xF )
    return 0LL;
  v5 = 48 * a1 - 0x220000000000LL;
  v3 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_6:
  v64 = HIWORD(*(_DWORD *)(v4 + 32)) & 7;
  v72 = (__int16 *)*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL));
  v63 = *v72;
  v67 = 48 * v3 - 0x220000000000LL;
  v69 = v67 + 768;
  v6 = MiPageToNode(v3);
  v7 = 16LL;
  v8 = dword_140E2D884;
  v9 = v6;
  if ( dword_140E2D880 > (unsigned int)dword_140E2D884
    || (v10 = (char *)qword_140E2D8E0 + 16 * dword_140E2D880, v3 < *(_QWORD *)v10)
    || dword_140E2D880 != dword_140E2D884 && v3 >= *((_QWORD *)v10 + 2) )
  {
    for ( i = 0; ; i = v12 + 1 )
    {
      while ( 1 )
      {
        if ( v8 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, v3, 0LL, 0LL);
        v12 = (i + v8) >> 1;
        v10 = (char *)qword_140E2D8E0 + 16 * v12;
        if ( v3 >= *(_QWORD *)v10 )
          break;
        if ( !v12 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v3, (ULONG_PTR)qword_140E2D8E0, 0LL);
        v8 = v12 - 1;
      }
      if ( v12 == dword_140E2D884 || v3 < *((_QWORD *)v10 + 2) )
        break;
    }
    dword_140E2D880 = (i + v8) >> 1;
  }
  v13 = *((_QWORD *)v10 + 2);
  if ( v3 + 16 > v13 )
    v7 = v13 - v3;
  v14 = v7;
  if ( qword_140E2D8E8 )
  {
    v58 = MiSearchChannelTable(v3)[2];
    v59 = v7 + v3;
    v7 = v58 - v3;
    if ( v59 <= v58 )
      v7 = v14;
  }
  if ( v7 != 16 )
    return 0LL;
  v15 = v67 + 32;
  v16 = v67 + 768;
  v17 = (unsigned __int8)BYTE2(*(_DWORD *)(v67 + 32)) >> 6;
  while ( v15 - 32 != v16 )
  {
    if ( ((*(_QWORD *)(v15 + 8) >> 43) & 0x3FF) != v63 || v5 && (unsigned __int8)BYTE2(*(_DWORD *)v15) >> 6 != v17 )
      return 0LL;
    v15 += 48LL;
  }
  v19 = v3;
  v71 = CLFS_LSN_NULL_EXT;
  if ( !v5 )
    v73 = 0LL;
  v20 = 0;
  v21 = 57216 * v9;
  v62 = 0;
  v22 = v67;
  v23 = *((_QWORD *)v72 + 2) + v21;
  v65 = v23;
  v24 = (_QWORD *)(48 * v3 - 0x21FFFFFFFFD8LL);
  v25 = 0x10000000000LL;
  while ( v22 != v16 )
  {
    v26 = *(_DWORD *)(v22 + 32);
    v68 = v26;
    if ( v22 == v5 )
    {
      if ( (v26 & 0x70000) != 0 )
      {
        MiSetOriginalPtePfnFromFreeList((__int64 *)(v22 + 16));
        goto LABEL_65;
      }
      ++v19;
      *(_QWORD *)(v22 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
      v22 += 48LL;
      v24 += 6;
    }
    else
    {
      if ( v19 > qword_140E2D9A0
        || (*v24 & 0x40000000000000LL) == 0
        || ((*(_QWORD *)(v22 + 40) >> 43) & 0x3FF) != v63
        || (BYTE2(v68) & 7u) > 1 )
      {
        goto LABEL_39;
      }
      if ( v22 != v4 && _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
      {
        v2 = 2;
        v70 = 2LL;
        goto LABEL_39;
      }
      if ( (HIWORD(*(_DWORD *)(v22 + 32)) & 7u) > 1
        || ((*(_QWORD *)(v22 + 40) >> 43) & 0x3FF) != v63
        || (*(_DWORD *)(v22 + 32) & 0x40000000) != 0
        || v5 && (unsigned __int8)BYTE2(*(_DWORD *)(v22 + 32)) >> 6 != v17
        || (*(_QWORD *)(v22 + 40) & v25) != 0 )
      {
        goto LABEL_104;
      }
      if ( !v20 )
      {
        v29 = *(_QWORD *)(v23 + 15192);
        do
        {
          v30 = v29;
          v29 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v23 + 15192),
                  (v29 + 1) ^ ((v29 + 1) ^ v29) & 0xFFFFFFFFFFFF0000uLL,
                  v29);
        }
        while ( v30 != v29 );
        v62 = 1;
      }
      v28 = MiUnlinkFreeOrZeroedPage(v19, 0LL, 256);
      v23 = v65;
      if ( !v28 )
      {
        v20 = v62;
LABEL_104:
        if ( v22 != v4 )
          _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_39:
        if ( v67 < v22 )
        {
          v27 = v67;
          do
          {
            if ( v27 != v5 )
              MiReturnFreeZeroPage(v27);
            if ( v27 != v4 )
              _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v27 += 48LL;
          }
          while ( v27 < v22 );
          v2 = v70;
          v20 = v62;
          v23 = v65;
        }
        if ( v20 )
        {
          v48 = *(_QWORD *)(v23 + 15192);
          do
          {
            v49 = (v48 - 1) ^ ((v48 - 1) ^ v48) & 0xFFFFFFFFFFFF0000uLL;
            if ( (_WORD)v48 == 1 )
              v49 ^= (v49 ^ (v49 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
            v50 = v48;
            v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 15192), v49, v48);
          }
          while ( v50 != v48 );
        }
        return v2;
      }
      v16 = v69;
      v25 = 0x10000000000LL;
      if ( !v5 )
      {
        v46 = (unsigned __int64)(unsigned __int8)BYTE2(*(_DWORD *)(v22 + 32)) >> 6;
        ++*((_DWORD *)&v73 + v46);
      }
LABEL_65:
      v20 = v62;
      v22 += 48LL;
      ++v19;
      v24 += 6;
    }
  }
  if ( !v5 )
  {
    v51 = 0;
    v52 = v73;
    if ( !(_DWORD)v73 )
      v52 = 0;
    v53 = DWORD1(v73);
    v54 = DWORD2(v73);
    v17 = 3;
    if ( v52 >= DWORD1(v73) )
      v53 = v52;
    if ( v53 >= DWORD2(v73) )
      v54 = v53;
    v55 = 1;
    if ( v52 >= DWORD1(v73) )
    {
      LOBYTE(v51) = (_DWORD)v73 == 0;
      v55 = v51;
    }
    v56 = v53 < DWORD2(v73);
    v16 = v69;
    v57 = 2;
    if ( !v56 )
      v57 = v55;
    if ( v54 >= HIDWORD(v73) )
      v17 = v57;
  }
  if ( v64 != 1 )
  {
    while ( 1 )
    {
      v22 -= 48LL;
      if ( MiPfnZeroingNeeded(v22, v17) )
        break;
      if ( v22 == v47 )
        goto LABEL_74;
    }
    v64 = 1;
  }
  if ( v71 )
    DemandZeroPte = v71 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
  else
    DemandZeroPte = MiMakeDemandZeroPte(4LL);
  v71 = DemandZeroPte;
LABEL_74:
  v32 = 0;
  v33 = v16 - 48;
  v34 = 0;
  do
  {
    if ( !v5 && (unsigned __int8)BYTE2(*(_DWORD *)(v33 + 32)) >> 6 != v17 )
      MiChangePageAttribute(v33, v17);
    IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(v33);
    *(_QWORD *)(v33 + 16) = 0LL;
    ++v34;
    v33 -= 48LL;
    v36 = v32 | (2 - (IsFreeZeroPfnCold != 0));
    v32 = v36;
  }
  while ( v34 < 0x10 );
  v38 = MiDetermineCoalescedLargePageHeatState(2, v36, v64, v65, (__int64)&v66);
  if ( v66 )
    MiChangePageHeatImmediate(v3, v37, 0LL);
  v61 = v38;
  v39 = v72;
  MiInitializeAllResidentPageBasePfns((_DWORD)v72, v3, 16, 2, v17, v61, 1);
  LOWORD(BugCheckParameter4) = *v39;
  MiCreateInitialLargeLeafPfns(v3, 16, 2, v17, BugCheckParameter4, 1);
  v40 = v67;
  v41 = 1;
  v42 = v67 + 48;
  do
  {
    if ( v42 != v4 )
      _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v41;
    v42 += 48LL;
  }
  while ( v41 < 0x10 );
  LOBYTE(v2) = v64 != 0;
  MiInsertPageInFreeOrZeroedList(v3, v2 + 1);
  if ( v40 != v4 )
    _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v43 = *(_QWORD *)(v65 + 15192);
  do
  {
    v44 = (v43 - 1) ^ ((v43 - 1) ^ v43) & 0xFFFFFFFFFFFF0000uLL;
    if ( (_WORD)v43 == 1 )
      v44 ^= (v44 ^ (v44 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
    v45 = v43;
    v43 = _InterlockedCompareExchange64((volatile signed __int64 *)(v65 + 15192), v44, v43);
  }
  while ( v45 != v43 );
  return 1LL;
}
