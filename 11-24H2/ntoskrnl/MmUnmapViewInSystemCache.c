/*
 * XREFs of MmUnmapViewInSystemCache @ 0x1402572A0
 * Callers:
 *     CcUnmapVacb @ 0x1409DC780 (CcUnmapVacb.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiUnlockWorkingSetOptimal @ 0x14020A46C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x14020A640 (MiLockWorkingSetOptimal.c)
 *     MiDecreaseUsedPtesInPfn @ 0x14021D39C (MiDecreaseUsedPtesInPfn.c)
 *     MiInsertPagesInList @ 0x140226A90 (MiInsertPagesInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAddPageToInsertList @ 0x140257CC0 (MiAddPageToInsertList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402590F0 (MI_WSLE_LOG_ACCESS.c)
 *     MiRemoveViewsFromSection @ 0x140259B70 (MiRemoveViewsFromSection.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiRemoveWsleList @ 0x140303100 (MiRemoveWsleList.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiReleaseSystemCacheView @ 0x140355608 (MiReleaseSystemCacheView.c)
 *     MiGetSystemCacheReverseMap @ 0x1403559C0 (MiGetSystemCacheReverseMap.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MiManageSubsectionView @ 0x1403621F0 (MiManageSubsectionView.c)
 *     MiUnlockWsle @ 0x1403DB664 (MiUnlockWsle.c)
 *     MiLockSetPfnPriority @ 0x140421B80 (MiLockSetPfnPriority.c)
 *     MiInitializeTbFlushStamps @ 0x14043A0EC (MiInitializeTbFlushStamps.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MmUnmapViewInSystemCache(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  ULONG_PTR v5; // rdi
  volatile __int64 *v6; // r14
  int v7; // esi
  int v8; // ebx
  unsigned __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  ULONG_PTR SystemCacheReverseMap; // r10
  unsigned __int64 v13; // rdx
  int v14; // eax
  _QWORD *v15; // rax
  unsigned int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 ProcessorFlushList; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r15
  __int64 v25; // r13
  ULONG_PTR v26; // r14
  unsigned __int64 v27; // rcx
  __int64 v28; // rdi
  ULONG_PTR v29; // rsi
  __int64 v30; // rbx
  unsigned __int64 v31; // r8
  unsigned __int8 v32; // bl
  ULONG_PTR v33; // rdx
  ULONG_PTR v34; // r14
  __int64 v35; // rbp
  __int64 v36; // rdi
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v40; // rcx
  __int64 v41; // r13
  ULONG *v42; // rax
  unsigned __int64 v43; // rax
  char v44; // bl
  volatile __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  __int64 v47; // rcx
  ULONG_PTR v48; // rsi
  __int64 v49; // r8
  __int64 v50; // r9
  ULONG_PTR v51; // rdi
  unsigned int v52; // ebx
  volatile unsigned __int64 *v53; // rbx
  __int64 v54; // r9
  ULONG_PTR v55; // rax
  char v56; // r8
  bool v57[4]; // [rsp+30h] [rbp-138h] BYREF
  int v58; // [rsp+34h] [rbp-134h]
  ULONG_PTR v59; // [rsp+38h] [rbp-130h]
  __int64 v60; // [rsp+40h] [rbp-128h]
  volatile unsigned __int64 v61; // [rsp+48h] [rbp-120h] BYREF
  unsigned __int64 v62; // [rsp+50h] [rbp-118h]
  int v63; // [rsp+58h] [rbp-110h]
  unsigned int v64; // [rsp+5Ch] [rbp-10Ch]
  __int64 v65; // [rsp+60h] [rbp-108h]
  volatile __int64 *v66; // [rsp+68h] [rbp-100h]
  ULONG_PTR v67; // [rsp+70h] [rbp-F8h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-F0h]
  ULONG_PTR v69; // [rsp+80h] [rbp-E8h]
  _QWORD *v70; // [rsp+88h] [rbp-E0h]
  __int64 v71; // [rsp+90h] [rbp-D8h]
  __int64 v72; // [rsp+98h] [rbp-D0h]
  volatile __int64 *v73; // [rsp+A0h] [rbp-C8h]
  unsigned __int64 v74[4]; // [rsp+B0h] [rbp-B8h] BYREF
  int v75; // [rsp+D0h] [rbp-98h]
  __int64 v76; // [rsp+108h] [rbp-60h]
  int v77; // [rsp+110h] [rbp-58h]
  char v81; // [rsp+188h] [rbp+20h] BYREF

  v81 = 0;
  v5 = BugCheckParameter3;
  memset_0(v74, 0, 0x68uLL);
  v57[0] = 0;
  v63 = a3 & 1;
  v6 = (volatile __int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v73 = v6;
  v66 = v6 + 64;
  v71 = MiSectionControlArea(BugCheckParameter4);
  v7 = 0;
  v58 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = *(_WORD *)(v71 + 60) & 0x3FF;
  v62 = *(_QWORD *)(v71 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v72 = *((_QWORD *)qword_140E300C8 + v10);
  v65 = 0LL;
  v60 = v72 + 18816;
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(v5, 0LL);
  v67 = SystemCacheReverseMap;
  v13 = *(_QWORD *)(SystemCacheReverseMap + 24);
  v14 = 4;
  if ( (v13 & 1) == 0 )
    v14 = 2;
  v64 = v14;
  v15 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v13 & 1) == 0 )
    v15 = (_QWORD *)v13;
  v70 = v15;
  if ( *v15 != v11 )
    KeBugCheckEx(0x1Au, 0x782uLL, SystemCacheReverseMap, v5, BugCheckParameter4);
  v16 = 0;
  v69 = MiLockWorkingSetOptimal(v72 + 18816, (unsigned __int64)v6, (unsigned __int8 *)&v81, 2LL);
  BugCheckParameter2 = 48 * MiGetContainingPageTable(v6) - 0x220000000000LL;
  ProcessorFlushList = MiGetProcessorFlushList(0xFFFFDE0000000000uLL, v17, v18);
  v20 = v62;
  v21 = ProcessorFlushList;
  v59 = v5;
  v22 = 0xFFFFFFFFFFLL;
  v23 = 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(ProcessorFlushList + 16480) = v5;
  do
  {
    v61 = *v6;
    *(_QWORD *)(v21 + 8LL * (unsigned int)(*(_DWORD *)(v21 + 12376))++ + 12384) = v61;
    if ( (v61 & 1) != 0 )
    {
      v40 = v60;
      v41 = 48 * ((v61 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( (*(_DWORD *)(v60 + 184) & 0xF) == 1 )
      {
        v42 = &MiSystemPartition;
      }
      else
      {
        v42 = (ULONG *)*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(v60 + 174));
        v40 = v60;
      }
      if ( v42[4363] )
        MI_WSLE_LOG_ACCESS(v40, v6);
      if ( v63
        && (*(_QWORD *)(v41 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
        && (unsigned int)MiGetPfnPriority(v41) > 2
        && (unsigned int)MiGetPfnPriority(v41) <= 5 )
      {
        MiLockSetPfnPriority(v41, 2LL);
      }
      v43 = MI_READ_PTE_LOCK_FREE(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v44 = HIBYTE(v43) & 0xF | (16 * ((v43 >> 60) & 7));
      if ( (HIBYTE(v43) & 0xF) == 8 )
      {
        MiUnlockWsle(v60, v5, v41);
      }
      else
      {
        v45 = *v6;
        v46 = ((unsigned __int64)MiFlags >> 26) & 3;
        if ( v46 <= 1 )
        {
          if ( v46 )
          {
            if ( (unsigned __int64)v6 >= 0xFFFFF6FB40000000uLL
              && (unsigned __int64)v6 <= 0xFFFFF6FB7FFFFFFFuLL
              && (v45 & 0x80u) == 0LL )
            {
              LOBYTE(v45) = v45 | 0x20;
            }
          }
          else
          {
            LOBYTE(v45) = v45 | 0x20;
          }
        }
        else if ( (MiFlags & 0x2000000) != 0 )
        {
          _mm_lfence();
        }
        if ( (v45 & 0x20) != 0 )
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
            MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v6, CLFS_LSN_NULL_EXT, 128LL);
          }
          v48 = _InterlockedExchange64(v6, CLFS_LSN_NULL_EXT);
          if ( MiPteInShadowRange((unsigned __int64)v6) )
            MiWritePteShadow((__int64)v6, CLFS_LSN_NULL_EXT, v49, v50);
          if ( (v48 & 0x20) != 0 || !_bittest64(&MiFlags, 0x24u) || (unsigned __int64)v6 < 0xFFFFF6C000000000uLL )
          {
            v7 = v58;
          }
          else
          {
            MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v6, v48, 2LL);
            v7 = v58;
          }
        }
        v5 = v59;
      }
      v47 = v21 + 8LL * *(unsigned int *)(v21 + 16488);
      *(_DWORD *)(v47 + 16496) = 0;
      *(_BYTE *)(v47 + 16497) |= 1u;
      *(_BYTE *)(v47 + 16496) = v44;
      *(_WORD *)(v47 + 16498) = ((unsigned int)v6 >> 3) & 0x1FF;
      ++*(_DWORD *)(v21 + 16488);
      if ( v62 )
        v9 = *(_QWORD *)(v41 + 8) | 0x8000000000000000uLL;
      ++v65;
      v22 = 0xFFFFFFFFFFLL;
      v20 = v62;
      v8 = ++v7;
      v23 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else
    {
      if ( (v61 & 0x400) == 0 )
        break;
      if ( v20 )
      {
        v24 = v61;
        if ( qword_140E2DCC0 && (v61 & 0x10) == 0 )
          v24 = v61 & ~qword_140E2DCC0;
        v9 = v24 >> 16;
      }
      ++v7;
      *v6 = CLFS_LSN_NULL_EXT;
    }
    v5 += 4096LL;
    v58 = v7;
    v59 = v5;
    ++v16;
    ++v6;
  }
  while ( v6 < v66 );
  v25 = v60;
  if ( v8 )
  {
    MiRemoveWsleList(v60, v21);
    v23 = 0x3FFFFFFFFFFFFFFFLL;
  }
  v26 = v67;
  v27 = 0x8000000000000000uLL;
  *(_QWORD *)(v67 + 32) = *(_QWORD *)(v67 + 32) & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000uLL;
  if ( v16 )
  {
    v51 = BugCheckParameter2;
    v52 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v52 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v27, v20, v22, v23) )
        {
          HvlNotifyLongSpinWait(v52);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
    }
    MiDecreaseUsedPtesInPfn(BugCheckParameter2, v16);
    if ( v65 )
      *(_QWORD *)(BugCheckParameter2 + 24) = (*(_QWORD *)(BugCheckParameter2 + 24) - v65) ^ ((*(_QWORD *)(BugCheckParameter2 + 24)
                                                                                            - v65) ^ *(_QWORD *)(BugCheckParameter2 + 24)) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v28 = v58;
  v29 = v21 + 12384;
  v74[2] = 0x3FFFFFFFFFLL;
  v74[3] = 0x3FFFFFFFFFLL;
  v75 = 0;
  v77 = 0;
  v76 = 0LL;
  if ( v58 > 0 )
  {
    v30 = 0LL;
    do
    {
      v31 = *(_QWORD *)(v29 + 8 * v30);
      if ( (v31 & 1) != 0 )
      {
        v57[0] = (v31 & 0x42) != 0;
        MiAddPageToInsertList(v74, v57, (v31 >> 12) & 0xFFFFFFFFFFLL);
      }
      ++v30;
    }
    while ( v30 < v28 );
  }
  *(_DWORD *)(v21 + 12376) = 0;
  *(_DWORD *)(v21 + 16488) = 0;
  MiReleaseProcessorFlushList();
  MiInsertPagesInList(v74, 0);
  v32 = v81;
  MiUnlockWorkingSetOptimal(v25, v69, v81);
  v33 = v26;
  v34 = (ULONG_PTR)v70;
  MiManageSubsectionView(v70, v33, v64);
  v35 = v71;
  v36 = 0LL;
  if ( !v62 )
    v34 = 0LL;
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v71 + 72));
  if ( v34 )
  {
    while ( 1 )
    {
      v37 = MiRemoveViewsFromSection(v34);
      v38 = *(_QWORD *)(v34 + 8);
      v36 += v37;
      if ( v9 >= v38 && v9 < v38 + 8LL * *(unsigned int *)(v34 + 44) )
        break;
      v34 = *(_QWORD *)(v34 + 16);
      if ( !v34 )
        KeBugCheckEx(0x1Au, 0x783uLL, v29, BugCheckParameter3, BugCheckParameter4);
    }
  }
  --*(_QWORD *)(v35 + 40);
  --*(_DWORD *)(v35 + 88);
  MiCheckControlArea(v35, v32);
  if ( v36 )
    MiReturnCrossPartitionSectionCharges(v72, 1LL, v36);
  if ( (a3 & 2) == 0 )
    return MiReleaseSystemCacheView(0LL, BugCheckParameter3);
  v61 = 0LL;
  MiInitializeTbFlushStamps(&v61);
  v53 = (volatile unsigned __int64 *)v73;
  v55 = MiLockWorkingSetOptimal(v25, (unsigned __int64)v73, (unsigned __int8 *)&v81, v54);
  v56 = v81;
  *v53 = v61;
  return MiUnlockWorkingSetOptimal(v25, v55, v56);
}
