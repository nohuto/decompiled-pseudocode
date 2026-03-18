/*
 * XREFs of MmUnmapViewInSystemCache @ 0x14023D300
 * Callers:
 *     CcUnmapVacb @ 0x1408B5FF0 (CcUnmapVacb.c)
 * Callees:
 *     MiDecreaseUsedPtesInPfn @ 0x1402274AC (MiDecreaseUsedPtesInPfn.c)
 *     MiCheckControlArea @ 0x14022F1E0 (MiCheckControlArea.c)
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiAddPageToInsertList @ 0x14023DD30 (MiAddPageToInsertList.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiRemoveWsleList @ 0x14024AF10 (MiRemoveWsleList.c)
 *     MiInsertPagesInList @ 0x14024F050 (MiInsertPagesInList.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetOptimal @ 0x1402C04C8 (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402C0690 (MiLockWorkingSetOptimal.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiUnlockWsle @ 0x1402CC3B4 (MiUnlockWsle.c)
 *     MiManageSubsectionView @ 0x1403200E0 (MiManageSubsectionView.c)
 *     MiRemoveViewsFromSection @ 0x140322A00 (MiRemoveViewsFromSection.c)
 *     MiInitializeTbFlushStamps @ 0x140327C9C (MiInitializeTbFlushStamps.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockSetPfnPriority @ 0x140379880 (MiLockSetPfnPriority.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140389E74 (MI_WSLE_LOG_ACCESS.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     MiReleaseSystemCacheView @ 0x1403B5010 (MiReleaseSystemCacheView.c)
 *     MiGetSystemCacheReverseMap @ 0x1403B53D0 (MiGetSystemCacheReverseMap.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B9590 (MiReturnCrossPartitionSectionCharges.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MmUnmapViewInSystemCache(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  ULONG_PTR v5; // rdi
  volatile __int64 *v6; // r14
  int v7; // esi
  __int64 v8; // r13
  int v9; // ebx
  __int64 v10; // rdx
  unsigned __int64 v11; // r15
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG_PTR SystemCacheReverseMap; // r10
  unsigned __int64 v15; // rdx
  int v16; // eax
  _QWORD *v17; // rax
  unsigned int v18; // r12d
  __int64 ProcessorFlushList; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // r15
  __int64 v23; // r14
  ULONG_PTR v24; // rcx
  __int64 v25; // rdi
  ULONG_PTR v26; // rsi
  __int64 v27; // rbx
  unsigned __int64 v28; // r8
  unsigned __int8 v29; // bl
  ULONG_PTR v30; // r13
  __int64 v31; // rbp
  __int64 v32; // rdi
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  __int64 v36; // rcx
  unsigned __int64 v37; // r13
  ULONG *v38; // rax
  unsigned __int64 v39; // rax
  char v40; // bl
  volatile __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  ULONG_PTR v44; // rsi
  ULONG_PTR v45; // rdi
  unsigned int v46; // ebx
  volatile unsigned __int64 *v47; // rbx
  __int64 v48; // rax
  __int64 v49; // r8
  bool v50[4]; // [rsp+30h] [rbp-138h] BYREF
  int v51; // [rsp+34h] [rbp-134h]
  ULONG_PTR v52; // [rsp+38h] [rbp-130h]
  __int64 v53; // [rsp+40h] [rbp-128h]
  volatile unsigned __int64 v54; // [rsp+48h] [rbp-120h] BYREF
  unsigned __int64 v55; // [rsp+50h] [rbp-118h]
  int v56; // [rsp+58h] [rbp-110h]
  unsigned int v57; // [rsp+5Ch] [rbp-10Ch]
  __int64 v58; // [rsp+60h] [rbp-108h]
  ULONG_PTR v59; // [rsp+68h] [rbp-100h]
  volatile __int64 *v60; // [rsp+70h] [rbp-F8h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-F0h]
  __int64 v62; // [rsp+80h] [rbp-E8h]
  _QWORD *v63; // [rsp+88h] [rbp-E0h]
  __int64 v64; // [rsp+90h] [rbp-D8h]
  __int64 v65; // [rsp+98h] [rbp-D0h]
  volatile __int64 *v66; // [rsp+A0h] [rbp-C8h]
  _BYTE v67[16]; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v68; // [rsp+C0h] [rbp-A8h]
  __int64 v69; // [rsp+C8h] [rbp-A0h]
  int v70; // [rsp+D0h] [rbp-98h]
  __int64 v71; // [rsp+108h] [rbp-60h]
  int v72; // [rsp+110h] [rbp-58h]
  unsigned __int8 v76; // [rsp+188h] [rbp+20h] BYREF

  v76 = 0;
  v5 = BugCheckParameter3;
  memset_0(v67, 0, 0x68uLL);
  v50[0] = 0;
  v56 = a3 & 1;
  v6 = (volatile __int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v66 = v6;
  v60 = v6 + 64;
  v64 = MiSectionControlArea(BugCheckParameter4);
  v7 = 0;
  v8 = 0LL;
  v51 = 0;
  v9 = 0;
  v10 = *(_WORD *)(v64 + 60) & 0x3FF;
  v55 = *(_QWORD *)(v64 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v58 = 0LL;
  v11 = 0LL;
  v65 = *((_QWORD *)qword_140E2FD48 + v10);
  v53 = v65 + 18816;
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(v5);
  v59 = SystemCacheReverseMap;
  v15 = *(_QWORD *)(SystemCacheReverseMap + 24);
  v16 = 4;
  if ( (v15 & 1) == 0 )
    v16 = 2;
  v57 = v16;
  v17 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v15 & 1) == 0 )
    v17 = (_QWORD *)v15;
  v63 = v17;
  if ( *v17 != v12 )
    KeBugCheckEx(0x1Au, 0x782uLL, SystemCacheReverseMap, v5, BugCheckParameter4);
  v18 = 0;
  v62 = MiLockWorkingSetOptimal(v13, v6, &v76);
  BugCheckParameter2 = 48 * MiGetContainingPageTable(v6) - 0x220000000000LL;
  ProcessorFlushList = MiGetProcessorFlushList();
  v20 = v55;
  v21 = ProcessorFlushList;
  v52 = v5;
  *(_QWORD *)(ProcessorFlushList + 16480) = v5;
  do
  {
    v54 = *v6;
    *(_QWORD *)(v21 + 8LL * (unsigned int)(*(_DWORD *)(v21 + 12376))++ + 12384) = v54;
    if ( (v54 & 1) != 0 )
    {
      v36 = v53;
      v37 = 48 * ((v54 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( (*(_DWORD *)(v53 + 184) & 0xF) == 1 )
      {
        v38 = &MiSystemPartition;
      }
      else
      {
        v38 = (ULONG *)*((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(v53 + 174));
        v36 = v53;
      }
      if ( v38[4363] )
        MI_WSLE_LOG_ACCESS(v36, v6, 0xFFFFFFFFFFLL, 0x3FFFFFFFFFFFFFFFLL);
      if ( v56
        && (*(_QWORD *)(v37 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
        && (unsigned int)MiGetPfnPriority(v37) > 2
        && (unsigned int)MiGetPfnPriority(v37) <= 5 )
      {
        MiLockSetPfnPriority(v37, 2LL);
      }
      v39 = MI_READ_PTE_LOCK_FREE(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v40 = HIBYTE(v39) & 0xF | (16 * ((v39 >> 60) & 7));
      if ( (HIBYTE(v39) & 0xF) == 8 )
      {
        MiUnlockWsle(v53, v5, v37);
      }
      else
      {
        v41 = *v6;
        v42 = ((unsigned __int64)MiFlags >> 26) & 3;
        if ( v42 <= 1 )
        {
          if ( v42 )
          {
            if ( (unsigned __int64)v6 >= 0xFFFFF6FB40000000uLL
              && (unsigned __int64)v6 <= 0xFFFFF6FB7FFFFFFFuLL
              && (v41 & 0x80u) == 0LL )
            {
              LOBYTE(v41) = v41 | 0x20;
            }
          }
          else
          {
            LOBYTE(v41) = v41 | 0x20;
          }
        }
        else if ( (MiFlags & 0x2000000) != 0 )
        {
          _mm_lfence();
        }
        if ( (v41 & 0x20) != 0 )
        {
          *v6 = CLFS_LSN_NULL_EXT;
        }
        else
        {
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          if ( _bittest64(&MiFlags, 0x24u)
            && (CLFS_LSN_NULL_EXT & 0x21) == 1
            && (unsigned __int64)v6 >= 0xFFFFF6C000000000uLL )
          {
            MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v6, CLFS_LSN_NULL_EXT);
          }
          v44 = _InterlockedExchange64(v6, CLFS_LSN_NULL_EXT);
          if ( (unsigned int)MiPteInShadowRange(v6) )
            MiWritePteShadow(v6, CLFS_LSN_NULL_EXT);
          if ( (v44 & 0x20) != 0 || !_bittest64(&MiFlags, 0x24u) || (unsigned __int64)v6 < 0xFFFFF6C000000000uLL )
          {
            v7 = v51;
          }
          else
          {
            MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v6, v44);
            v7 = v51;
          }
        }
        v5 = v52;
      }
      v43 = v21 + 8LL * *(unsigned int *)(v21 + 16488);
      *(_DWORD *)(v43 + 16496) = 0;
      *(_BYTE *)(v43 + 16497) |= 1u;
      *(_BYTE *)(v43 + 16496) = v40;
      *(_WORD *)(v43 + 16498) = ((unsigned int)v6 >> 3) & 0x1FF;
      ++*(_DWORD *)(v21 + 16488);
      if ( v55 )
        v11 = *(_QWORD *)(v37 + 8) | 0x8000000000000000uLL;
      v20 = v55;
      v8 = v58 + 1;
      ++v7;
      ++v58;
      v9 = v7;
    }
    else
    {
      if ( (v54 & 0x400) == 0 )
        break;
      if ( v20 )
      {
        v22 = v54;
        if ( qword_140E2D940 && (v54 & 0x10) == 0 )
          v22 = v54 & ~qword_140E2D940;
        v11 = v22 >> 16;
      }
      ++v7;
      *v6 = CLFS_LSN_NULL_EXT;
    }
    v5 += 4096LL;
    v51 = v7;
    v52 = v5;
    ++v18;
    ++v6;
  }
  while ( v6 < v60 );
  v23 = v53;
  if ( v9 )
    MiRemoveWsleList(v53, v21, 0xFFFFFFFFFFLL, 0x3FFFFFFFFFFFFFFFLL);
  v24 = v59;
  *(_QWORD *)(v59 + 32) = *(_QWORD *)(v59 + 32) & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000uLL;
  if ( v18 )
  {
    v45 = BugCheckParameter2;
    v46 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v46 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v24) )
        {
          HvlNotifyLongSpinWait(v46);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
    }
    MiDecreaseUsedPtesInPfn(BugCheckParameter2, v18);
    if ( v8 )
      *(_QWORD *)(BugCheckParameter2 + 24) = (*(_QWORD *)(BugCheckParameter2 + 24) - v8) ^ ((*(_QWORD *)(BugCheckParameter2 + 24)
                                                                                           - v8) ^ *(_QWORD *)(BugCheckParameter2 + 24)) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v25 = v51;
  v26 = v21 + 12384;
  v68 = 0x3FFFFFFFFFLL;
  v69 = 0x3FFFFFFFFFLL;
  v70 = 0;
  v72 = 0;
  v71 = 0LL;
  if ( v51 > 0 )
  {
    v27 = 0LL;
    do
    {
      v28 = *(_QWORD *)(v26 + 8 * v27);
      if ( (v28 & 1) != 0 )
      {
        v50[0] = (v28 & 0x42) != 0;
        MiAddPageToInsertList(v67, v50, (v28 >> 12) & 0xFFFFFFFFFFLL);
      }
      ++v27;
    }
    while ( v27 < v25 );
  }
  *(_DWORD *)(v21 + 12376) = 0;
  *(_DWORD *)(v21 + 16488) = 0;
  MiReleaseProcessorFlushList();
  MiInsertPagesInList(v67, 0LL);
  v29 = v76;
  MiUnlockWorkingSetOptimal(v23, v62, v76);
  v30 = (ULONG_PTR)v63;
  MiManageSubsectionView(v63, v59, v57);
  v31 = v64;
  v32 = 0LL;
  if ( !v55 )
    v30 = 0LL;
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v64 + 72));
  if ( v30 )
  {
    while ( 1 )
    {
      v33 = MiRemoveViewsFromSection(v30);
      v34 = *(_QWORD *)(v30 + 8);
      v32 += v33;
      if ( v11 >= v34 && v11 < v34 + 8LL * *(unsigned int *)(v30 + 44) )
        break;
      v30 = *(_QWORD *)(v30 + 16);
      if ( !v30 )
        KeBugCheckEx(0x1Au, 0x783uLL, v26, BugCheckParameter3, BugCheckParameter4);
    }
  }
  --*(_QWORD *)(v31 + 40);
  --*(_DWORD *)(v31 + 88);
  MiCheckControlArea(v31, v29);
  if ( v32 )
    MiReturnCrossPartitionSectionCharges(v65, 1LL, v32);
  if ( (a3 & 2) == 0 )
    return MiReleaseSystemCacheView(0LL, BugCheckParameter3);
  v54 = 0LL;
  MiInitializeTbFlushStamps(&v54);
  v47 = (volatile unsigned __int64 *)v66;
  v48 = MiLockWorkingSetOptimal(v23, v66, &v76);
  v49 = v76;
  *v47 = v54;
  return MiUnlockWorkingSetOptimal(v23, v48, v49);
}
