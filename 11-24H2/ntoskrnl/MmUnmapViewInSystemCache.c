/*
 * XREFs of MmUnmapViewInSystemCache @ 0x1402F1760
 * Callers:
 *     CcUnmapVacb @ 0x1408E5FE0 (CcUnmapVacb.c)
 * Callees:
 *     MiCheckControlArea @ 0x14020EFD0 (MiCheckControlArea.c)
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemoveWsleList @ 0x140231F70 (MiRemoveWsleList.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiUnlockWorkingSetOptimal @ 0x14024231C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402424F0 (MiLockWorkingSetOptimal.c)
 *     MiInsertPagesInList @ 0x140271500 (MiInsertPagesInList.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiManageSubsectionView @ 0x1402BAAB0 (MiManageSubsectionView.c)
 *     MiUnlockWsle @ 0x1402C7B94 (MiUnlockWsle.c)
 *     MiReleaseSystemCacheView @ 0x1402D4388 (MiReleaseSystemCacheView.c)
 *     MiGetSystemCacheReverseMap @ 0x1402D4740 (MiGetSystemCacheReverseMap.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402EFF38 (MI_WSLE_LOG_ACCESS.c)
 *     MiAddPageToInsertList @ 0x1402F2180 (MiAddPageToInsertList.c)
 *     MiRemoveViewsFromSection @ 0x1403717B0 (MiRemoveViewsFromSection.c)
 *     MiDecreaseUsedPtesInPfn @ 0x14039EEFC (MiDecreaseUsedPtesInPfn.c)
 *     MiLockSetPfnPriority @ 0x1404300D0 (MiLockSetPfnPriority.c)
 *     MiInitializeTbFlushStamps @ 0x14044464C (MiInitializeTbFlushStamps.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall MmUnmapViewInSystemCache(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  unsigned __int64 v5; // rdi
  volatile __int64 *v6; // r14
  int v7; // esi
  int v8; // ebx
  unsigned __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  ULONG_PTR SystemCacheReverseMap; // r10
  __int64 *v13; // rdx
  int v14; // eax
  __int64 *v15; // rax
  unsigned int v16; // r12d
  __int64 *ProcessorFlushList; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // r15
  __int64 v21; // r13
  _QWORD *v22; // r14
  __int64 v23; // rdi
  ULONG_PTR v24; // rsi
  __int64 v25; // rbx
  unsigned __int64 v26; // r8
  unsigned __int8 v27; // bl
  _QWORD *v28; // rdx
  __int64 *v29; // r14
  __int64 v30; // rbp
  __int64 v31; // rdi
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r13
  ULONG *v36; // rax
  unsigned __int64 v37; // rax
  char v38; // bl
  volatile __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  ULONG_PTR v42; // rsi
  ULONG_PTR v43; // rdi
  unsigned int v44; // ebx
  volatile unsigned __int64 *v45; // rbx
  unsigned __int64 v46; // rax
  char v47; // r8
  bool v48[4]; // [rsp+30h] [rbp-138h] BYREF
  int v49; // [rsp+34h] [rbp-134h]
  unsigned __int64 v50; // [rsp+38h] [rbp-130h]
  __int64 v51; // [rsp+40h] [rbp-128h]
  volatile unsigned __int64 v52; // [rsp+48h] [rbp-120h] BYREF
  unsigned __int64 v53; // [rsp+50h] [rbp-118h]
  int v54; // [rsp+58h] [rbp-110h]
  int v55; // [rsp+5Ch] [rbp-10Ch]
  __int64 v56; // [rsp+60h] [rbp-108h]
  volatile __int64 *v57; // [rsp+68h] [rbp-100h]
  ULONG_PTR v58; // [rsp+70h] [rbp-F8h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-F0h]
  unsigned __int64 v60; // [rsp+80h] [rbp-E8h]
  __int64 *v61; // [rsp+88h] [rbp-E0h]
  unsigned __int64 v62; // [rsp+90h] [rbp-D8h]
  __int64 v63; // [rsp+98h] [rbp-D0h]
  volatile __int64 *v64; // [rsp+A0h] [rbp-C8h]
  unsigned __int64 v65[4]; // [rsp+B0h] [rbp-B8h] BYREF
  int v66; // [rsp+D0h] [rbp-98h]
  __int64 v67; // [rsp+108h] [rbp-60h]
  int v68; // [rsp+110h] [rbp-58h]
  char v72; // [rsp+188h] [rbp+20h] BYREF

  v72 = 0;
  v5 = BugCheckParameter3;
  memset_0(v65, 0, 0x68uLL);
  v48[0] = 0;
  v54 = a3 & 1;
  v6 = (volatile __int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v64 = v6;
  v57 = v6 + 64;
  v62 = MiSectionControlArea(BugCheckParameter4);
  v7 = 0;
  v49 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = *(_WORD *)(v62 + 60) & 0x3FF;
  v53 = *(_QWORD *)(v62 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v63 = *((_QWORD *)qword_140E2FF88 + v10);
  v56 = 0LL;
  v51 = v63 + 18816;
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(v5);
  v58 = SystemCacheReverseMap;
  v13 = *(__int64 **)(SystemCacheReverseMap + 24);
  v14 = 4;
  if ( ((unsigned __int8)v13 & 1) == 0 )
    v14 = 2;
  v55 = v14;
  v15 = (__int64 *)((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( ((unsigned __int8)v13 & 1) == 0 )
    v15 = v13;
  v61 = v15;
  if ( *v15 != v11 )
    KeBugCheckEx(0x1Au, 0x782uLL, SystemCacheReverseMap, v5, BugCheckParameter4);
  v16 = 0;
  v60 = MiLockWorkingSetOptimal(v63 + 18816, (unsigned __int64)v6, (unsigned __int8 *)&v72);
  BugCheckParameter2 = 48 * MiGetContainingPageTable((unsigned __int64)v6) - 0x220000000000LL;
  ProcessorFlushList = MiGetProcessorFlushList();
  v18 = v53;
  v19 = (__int64)ProcessorFlushList;
  v50 = v5;
  ProcessorFlushList[2060] = v5;
  do
  {
    v52 = *v6;
    *(_QWORD *)(v19 + 8LL * (unsigned int)(*(_DWORD *)(v19 + 12376))++ + 12384) = v52;
    if ( (v52 & 1) != 0 )
    {
      v34 = v51;
      v35 = 48 * ((v52 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( (*(_DWORD *)(v51 + 184) & 0xF) == 1 )
      {
        v36 = &MiSystemPartition;
      }
      else
      {
        v36 = (ULONG *)*((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(v51 + 174));
        v34 = v51;
      }
      if ( v36[4363] )
        MI_WSLE_LOG_ACCESS(v34, (unsigned __int64)v6);
      if ( v54
        && (*(_QWORD *)(v35 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
        && (unsigned int)MiGetPfnPriority(v35) > 2
        && (unsigned int)MiGetPfnPriority(v35) <= 5 )
      {
        MiLockSetPfnPriority(v35, 2LL);
      }
      v37 = MI_READ_PTE_LOCK_FREE(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v38 = HIBYTE(v37) & 0xF | (16 * ((v37 >> 60) & 7));
      if ( (HIBYTE(v37) & 0xF) == 8 )
      {
        MiUnlockWsle(v51, v5, v35, 1u);
      }
      else
      {
        v39 = *v6;
        v40 = ((unsigned __int64)MiFlags >> 26) & 3;
        if ( v40 <= 1 )
        {
          if ( v40 )
          {
            if ( (unsigned __int64)v6 >= 0xFFFFF6FB40000000uLL
              && (unsigned __int64)v6 <= 0xFFFFF6FB7FFFFFFFuLL
              && (v39 & 0x80u) == 0LL )
            {
              LOBYTE(v39) = v39 | 0x20;
            }
          }
          else
          {
            LOBYTE(v39) = v39 | 0x20;
          }
        }
        else if ( (MiFlags & 0x2000000) != 0 )
        {
          _mm_lfence();
        }
        if ( (v39 & 0x20) != 0 )
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
            MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v6, CLFS_LSN_NULL_EXT, 128);
          }
          v42 = _InterlockedExchange64(v6, CLFS_LSN_NULL_EXT);
          if ( MiPteInShadowRange((unsigned __int64)v6) )
            MiWritePteShadow();
          if ( (v42 & 0x20) != 0 || !_bittest64(&MiFlags, 0x24u) || (unsigned __int64)v6 < 0xFFFFF6C000000000uLL )
          {
            v7 = v49;
          }
          else
          {
            MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v6, v42, 2);
            v7 = v49;
          }
        }
        v5 = v50;
      }
      v41 = v19 + 8LL * *(unsigned int *)(v19 + 16488);
      *(_DWORD *)(v41 + 16496) = 0;
      *(_BYTE *)(v41 + 16497) |= 1u;
      *(_BYTE *)(v41 + 16496) = v38;
      *(_WORD *)(v41 + 16498) = ((unsigned int)v6 >> 3) & 0x1FF;
      ++*(_DWORD *)(v19 + 16488);
      if ( v53 )
        v9 = *(_QWORD *)(v35 + 8) | 0x8000000000000000uLL;
      ++v56;
      v18 = v53;
      v8 = ++v7;
    }
    else
    {
      if ( (v52 & 0x400) == 0 )
        break;
      if ( v18 )
      {
        v20 = v52;
        if ( qword_140E2DB80 && (v52 & 0x10) == 0 )
          v20 = v52 & ~qword_140E2DB80;
        v9 = v20 >> 16;
      }
      ++v7;
      *v6 = CLFS_LSN_NULL_EXT;
    }
    v5 += 4096LL;
    v49 = v7;
    v50 = v5;
    ++v16;
    ++v6;
  }
  while ( v6 < v57 );
  v21 = v51;
  if ( v8 )
    MiRemoveWsleList(v51, v19);
  v22 = (_QWORD *)v58;
  *(_QWORD *)(v58 + 32) = *(_QWORD *)(v58 + 32) & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000uLL;
  if ( v16 )
  {
    v43 = BugCheckParameter2;
    v44 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v44 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v44);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
    }
    MiDecreaseUsedPtesInPfn(BugCheckParameter2, v16);
    if ( v56 )
      *(_QWORD *)(BugCheckParameter2 + 24) = (*(_QWORD *)(BugCheckParameter2 + 24) - v56) ^ ((*(_QWORD *)(BugCheckParameter2 + 24)
                                                                                            - v56) ^ *(_QWORD *)(BugCheckParameter2 + 24)) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v23 = v49;
  v24 = v19 + 12384;
  v65[2] = 0x3FFFFFFFFFLL;
  v65[3] = 0x3FFFFFFFFFLL;
  v66 = 0;
  v68 = 0;
  v67 = 0LL;
  if ( v49 > 0 )
  {
    v25 = 0LL;
    do
    {
      v26 = *(_QWORD *)(v24 + 8 * v25);
      if ( (v26 & 1) != 0 )
      {
        v48[0] = (v26 & 0x42) != 0;
        MiAddPageToInsertList(v65, v48, (v26 >> 12) & 0xFFFFFFFFFFLL);
      }
      ++v25;
    }
    while ( v25 < v23 );
  }
  *(_DWORD *)(v19 + 12376) = 0;
  *(_DWORD *)(v19 + 16488) = 0;
  MiReleaseProcessorFlushList();
  MiInsertPagesInList(v65, 0);
  v27 = v72;
  MiUnlockWorkingSetOptimal(v21, v60, v72);
  v28 = v22;
  v29 = v61;
  MiManageSubsectionView(v61, v28, v55);
  v30 = v62;
  v31 = 0LL;
  if ( !v53 )
    v29 = 0LL;
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v62 + 72));
  if ( v29 )
  {
    while ( 1 )
    {
      v32 = MiRemoveViewsFromSection((ULONG_PTR)v29);
      v33 = v29[1];
      v31 += v32;
      if ( v9 >= v33 && v9 < v33 + 8LL * *((unsigned int *)v29 + 11) )
        break;
      v29 = (__int64 *)v29[2];
      if ( !v29 )
        KeBugCheckEx(0x1Au, 0x783uLL, v24, BugCheckParameter3, BugCheckParameter4);
    }
  }
  --*(_QWORD *)(v30 + 40);
  --*(_DWORD *)(v30 + 88);
  MiCheckControlArea(v30, v27);
  if ( v31 )
    MiReturnCrossPartitionSectionCharges(v63, 1LL, v31);
  if ( (a3 & 2) != 0 )
  {
    v52 = 0LL;
    MiInitializeTbFlushStamps(&v52);
    v45 = (volatile unsigned __int64 *)v64;
    v46 = MiLockWorkingSetOptimal(v21, (unsigned __int64)v64, (unsigned __int8 *)&v72);
    v47 = v72;
    *v45 = v52;
    MiUnlockWorkingSetOptimal(v21, v46, v47);
  }
  else
  {
    MiReleaseSystemCacheView(0LL, BugCheckParameter3);
  }
}
