/*
 * XREFs of MiSharePages @ 0x1402FA880
 * Callers:
 *     MiProcessCrcList @ 0x1409F2910 (MiProcessCrcList.c)
 * Callees:
 *     MiCombineCandidate @ 0x14020C0F0 (MiCombineCandidate.c)
 *     MiGetUltraMapping @ 0x14020CE50 (MiGetUltraMapping.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiConfirmPageIsZero @ 0x14021D260 (MiConfirmPageIsZero.c)
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiPrepareAttachThread @ 0x140228180 (MiPrepareAttachThread.c)
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14023C31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiFreeWsleList @ 0x140287894 (MiFreeWsleList.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiAttachThreadDone @ 0x1402E2710 (MiAttachThreadDone.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiConvertPrivateToProto @ 0x1402F9768 (MiConvertPrivateToProto.c)
 *     MiPageMightBeZero @ 0x1402F9A88 (MiPageMightBeZero.c)
 *     KeForceDetachProcess @ 0x1402F9B70 (KeForceDetachProcess.c)
 *     MiFreeCombineBlock @ 0x1402FA048 (MiFreeCombineBlock.c)
 *     MiMakeCombineCandidateClean @ 0x1402FA1D0 (MiMakeCombineCandidateClean.c)
 *     MiFreeDeferredCrcPages @ 0x1402FA444 (MiFreeDeferredCrcPages.c)
 *     MiAllocateCombineBlock @ 0x1402FA538 (MiAllocateCombineBlock.c)
 *     MiCrcStillIntact @ 0x1402FA610 (MiCrcStillIntact.c)
 *     MiReplenishCombineResources @ 0x1402FB82C (MiReplenishCombineResources.c)
 *     MiProcessSuitableForCombining @ 0x1402FB97C (MiProcessSuitableForCombining.c)
 *     MiVadSupportsPrivateCommit @ 0x1402FBA00 (MiVadSupportsPrivateCommit.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiInvalidPteConforms @ 0x140302590 (MiInvalidPteConforms.c)
 *     MiConvertStandbyToProto @ 0x140313ACC (MiConvertStandbyToProto.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiPageTableLockIsContended @ 0x1403CFFE0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403D01B0 (MiWorkingSetIsContended.c)
 *     MiReplenishSlabAllocator @ 0x140413B18 (MiReplenishSlabAllocator.c)
 *     MiGetCombineDomain @ 0x14045B5E4 (MiGetCombineDomain.c)
 *     MiCheckProcessCombineSequence @ 0x14045B5FC (MiCheckProcessCombineSequence.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MiSharePages(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r15
  _QWORD *v6; // rdi
  __int64 v9; // r12
  _QWORD *v10; // r14
  _KPROCESS *v11; // rbx
  unsigned __int8 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  char v16; // di
  bool v17; // bp
  unsigned __int8 v18; // al
  __int64 v19; // rdx
  unsigned __int8 v20; // r8
  char v21; // bl
  int v22; // ecx
  _QWORD *v23; // rbp
  unsigned __int64 v24; // r15
  __int64 v25; // rbx
  int v26; // eax
  unsigned __int64 v27; // rdi
  ULONG_PTR v28; // r14
  _QWORD *v29; // rbx
  _QWORD *v30; // rdi
  _QWORD *v31; // rbx
  _QWORD *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 valid; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 result; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  ULONG_PTR v46; // rbx
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  __int64 v49; // r14
  unsigned int v50; // ebp
  __int64 v51; // rbx
  int v52; // eax
  int v53; // r13d
  __int64 v54; // rax
  char v55; // r12
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 Address; // rbp
  __int64 v59; // r14
  __int64 v60; // rdx
  char v61; // r14
  unsigned int v62; // ebp
  __int64 v63; // rax
  unsigned __int64 *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned int v68; // edi
  BOOL IsZero; // eax
  __int64 *v70; // r14
  int v71; // edi
  int v72; // eax
  __int64 v73; // r15
  __int64 v74; // rdi
  unsigned int ActiveProcessors_high; // eax
  signed __int32 v76; // ecx
  __int64 v77; // rax
  int v78; // eax
  __int64 *ProcessorFlushList; // r8
  int v80; // eax
  __int64 *v81; // rax
  __int64 v82; // rcx
  char v83; // [rsp+30h] [rbp-1F8h]
  _QWORD *v84; // [rsp+38h] [rbp-1F0h]
  unsigned __int8 v85; // [rsp+40h] [rbp-1E8h]
  unsigned int v86; // [rsp+44h] [rbp-1E4h]
  int v87; // [rsp+48h] [rbp-1E0h]
  __int64 v88; // [rsp+50h] [rbp-1D8h]
  __int64 *v89; // [rsp+58h] [rbp-1D0h]
  __int64 v90; // [rsp+60h] [rbp-1C8h]
  int v91; // [rsp+68h] [rbp-1C0h]
  unsigned __int64 v92; // [rsp+70h] [rbp-1B8h]
  __int64 v93; // [rsp+78h] [rbp-1B0h]
  unsigned __int64 v95; // [rsp+88h] [rbp-1A0h]
  _KPROCESS *v96; // [rsp+90h] [rbp-198h]
  __int64 v97; // [rsp+98h] [rbp-190h]
  _QWORD *v98; // [rsp+A0h] [rbp-188h]
  unsigned int v99; // [rsp+A8h] [rbp-180h]
  __int64 v100; // [rsp+B0h] [rbp-178h]
  __int64 v101; // [rsp+B8h] [rbp-170h]
  __int64 v102; // [rsp+C0h] [rbp-168h]
  _QWORD *v103; // [rsp+C8h] [rbp-160h]
  struct _KTHREAD *CurrentThread; // [rsp+D0h] [rbp-158h]
  ULONG_PTR v105; // [rsp+D8h] [rbp-150h] BYREF
  _KAFFINITY_EX v106; // [rsp+E0h] [rbp-148h] BYREF

  v3 = a2[4];
  v4 = *(_QWORD *)a1;
  v5 = 0LL;
  v6 = *(_QWORD **)(a1 + 104);
  v9 = a1;
  v103 = *(_QWORD **)a1;
  v99 = *(_DWORD *)(a1 + 140);
  v98 = v6;
  v86 = 0;
  memset(&v106, 0, 48);
  v100 = 0LL;
  v90 = v3;
  MiInitializePageColorBase(v3, 3, a3 + 1, a1 + 320);
  v10 = (_QWORD *)a2[6];
  v11 = (_KPROCESS *)a2[5];
  v87 = 0;
  v91 = 0;
  v88 = 0LL;
  v89 = 0LL;
  v96 = v11;
  if ( v11 && v11 != KeGetCurrentThread()->ApcState.Process )
  {
    ExAcquireSpinLockExclusive(&dword_140E373C0);
    v91 = MiPrepareAttachThread((__int64)v11, (__int64)&v11[2].ReadyListHead.Blink);
    MiReleaseSpinLockExclusive(&dword_140E373C0, v12);
    if ( !v91 )
      goto LABEL_53;
    memset(&v106.StaticBitmap[5], 0, 48);
    KiStackAttachProcess((ULONG_PTR)v11);
    v5 = 0LL;
  }
  *(_QWORD *)(v9 + 312) = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
LABEL_6:
  v15 = *(_QWORD *)(v9 + 312);
  v106.StaticBitmap[11] = 0LL;
  v106.StaticBitmap[16] = 0LL;
  v106.StaticBitmap[21] = 0LL;
  v106.StaticBitmap[26] = 0LL;
  if ( v15 > 1 )
    *(_QWORD *)(v9 + 312) = (unsigned int)MiReplenishSlabAllocator(v15, 16LL, 0LL) == 0;
  if ( !*(_QWORD *)(v9 + 296) )
    *(_QWORD *)(v9 + 296) = MiAllocateCombineBlock(v4);
  v16 = 0;
  v95 = 0LL;
  v83 = 0;
  v17 = 0;
  v18 = MiLockWorkingSetShared(v3);
  v20 = v18;
  v85 = v18;
  if ( *(_QWORD *)(v9 + 296) && (!v11 || (unsigned int)MiProcessSuitableForCombining(v11, v19, v18)) )
  {
    while ( 1 )
    {
      v21 = 0;
      v93 = (__int64)v10;
      v22 = 0;
      if ( !v17 )
        v22 = v87 + 1;
      v87 = v22;
      if ( !*(_QWORD *)(v9 + 296) || *(_QWORD *)(v9 + 312) > 1uLL )
        goto LABEL_20;
      if ( v16 )
        break;
      if ( (v22 & 7) == 0
        && ((unsigned int)MiWorkingSetIsContended(v3, 0LL) || v5 && (unsigned int)MiPageTableLockIsContended(v3, v5))
        || KeShouldYieldProcessor() )
      {
        goto LABEL_20;
      }
LABEL_21:
      if ( !v10 )
      {
        ++v86;
LABEL_32:
        v29 = (_QWORD *)v106.StaticBitmap[21];
        v5 = v88;
        if ( v106.StaticBitmap[21] )
        {
          do
          {
            v30 = (_QWORD *)*v29;
            if ( (unsigned int)MiCrcStillIntact(v9, v88, (__int64)v29, 2) )
            {
              *v29 = v10;
              v10 = v29;
            }
            v29 = v30;
          }
          while ( v30 );
        }
        v31 = (_QWORD *)v106.StaticBitmap[26];
        v106.StaticBitmap[21] = 0LL;
        if ( v106.StaticBitmap[26] )
        {
          do
          {
            v32 = (_QWORD *)*v31;
            if ( (unsigned int)MiCrcStillIntact(v9, v88, (__int64)v31, 3) )
            {
              *v31 = v10;
              v10 = v31;
            }
            v31 = v32;
          }
          while ( v32 );
        }
        v106.StaticBitmap[26] = 0LL;
        if ( v88 )
        {
          *(_DWORD *)(v88 + 20) &= ~0x80u;
          MiFlushTbList(v88);
          MiReleaseProcessorFlushList();
          v5 = 0LL;
          v88 = 0LL;
          v89 = 0LL;
        }
        if ( v95 )
          MiUnlockPageTableInternal(v3, v95);
        MiUnlockWorkingSetShared(v3, v85);
        MiFreeDeferredCrcPages(&v106.StaticBitmap[11]);
        if ( !v10 )
        {
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v33, v34, v35);
          v11 = v96;
          goto LABEL_50;
        }
        v11 = v96;
        v4 = (__int64)v103;
        goto LABEL_6;
      }
      if ( v21 )
        goto LABEL_32;
      v23 = (_QWORD *)*v10;
      v84 = (_QWORD *)*v10;
      v92 = v10[2];
      v102 = v10[1];
      v24 = ((v92 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v25 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v95 != v25 )
      {
        if ( v95 )
        {
          v83 = 1;
          v17 = 0;
          goto LABEL_30;
        }
        valid = MiLockLowestValidPageTableEx(v3, v24, &v105, 0);
        v95 = valid;
        if ( valid != v25 )
        {
          MiUnlockPageTableInternal(v3, valid);
          v95 = 0LL;
          goto LABEL_28;
        }
      }
      v26 = MiReplenishCombineResources(v9);
      if ( v26 < 0 )
      {
        if ( v26 == -1073741267 )
          v23 = v10;
        v84 = v23;
        goto LABEL_28;
      }
      v27 = *(_QWORD *)v24;
      if ( (*(_QWORD *)v24 & 1) == 0 )
      {
        v17 = 0;
        if ( (*(_QWORD *)v24 & 0xC00LL) == 0x800 )
        {
          while ( 1 )
          {
            v45 = MI_READ_PTE_LOCK_FREE(v24);
            v46 = v45;
            if ( (v45 & 0x800) == 0 )
              goto LABEL_28;
            if ( (unsigned int)MiInvalidPteConforms(v45) )
            {
              if ( qword_140E2DB80 )
              {
                if ( (v46 & 0x10) != 0 )
                  v47 &= ~0x10uLL;
                else
                  v47 = v46 & ~qword_140E2DB80;
              }
              v48 = (v47 >> 12) & 0xFFFFFFFFFFLL;
              v49 = 48 * v48 - 0x220000000000LL;
              if ( v48 <= qword_140E2DBE0 && (*(_QWORD *)(48 * v48 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
              {
                v50 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v49 + 24), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v50 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && KiCheckVpBackingLongSpinWaitHypercall() )
                    {
                      HvlNotifyLongSpinWait(v50);
                    }
                    else
                    {
                      _mm_pause();
                    }
                  }
                  while ( *(__int64 *)(v49 + 24) < 0 );
                }
                if ( MI_READ_PTE_LOCK_FREE(v24) == v46 )
                {
                  if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v49 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
                  {
                    v49 = MiLockSpecialPurposeMemoryCachedPage(v49, 0);
                    if ( !v49 )
                      goto LABEL_28;
                  }
                  if ( (*(_QWORD *)(v49 + 8) | 0x8000000000000000uLL) != v24
                    && (*(_QWORD *)(v49 + 40) & 0x10000000000LL) == 0 )
                  {
                    KeBugCheckEx(0x1Au, 0x411uLL, v24, v46, *(_QWORD *)(v49 + 8));
                  }
                  v17 = 0;
                  v51 = v49;
                  if ( v49 )
                  {
                    v28 = 0xAAAAAAAAAAAAAAABuLL * ((v49 + 0x220000000000LL) >> 4);
                    goto LABEL_83;
                  }
                  break;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
            }
          }
        }
LABEL_29:
        v10 = v84;
        goto LABEL_30;
      }
      v28 = (v27 >> 12) & 0xFFFFFFFFFFLL;
      if ( v28 > qword_140E2DBE0 || (*(_QWORD *)(48 * v28 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
        goto LABEL_28;
      v51 = 48 * v28 - 0x220000000000LL;
      v62 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v62 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v62);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v51 + 24) < 0 );
      }
LABEL_83:
      v52 = MiCombineCandidate(v103, v99, (_QWORD *)v51);
      v53 = v52;
      if ( !v52
        || (*(_QWORD *)(v9 + 144) = v28,
            *(_DWORD *)(v9 + 152) = v52,
            v97 = *(_QWORD *)(v51 + 16) >> 5,
            v54 = *(_QWORD *)(v93 + 24),
            *(_DWORD *)(v93 + 32) ^= ((unsigned __int8)v97 ^ (unsigned __int8)*(_DWORD *)(v93 + 32)) & 0x1F,
            v101 = v54,
            (unsigned int)MiPageToNode(v28) != a3) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_28;
      }
      v17 = 0;
      v55 = *(_BYTE *)(v51 + 34) & 7;
      if ( v55 == 6 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v24 != (*(_QWORD *)(v51 + 8) | 0x8000000000000000uLL)
          || *(__int64 *)(v51 + 40) < 0
          || (*(_QWORD *)(v51 + 40) & 0x10000000000LL) != 0
          || (*(_DWORD *)(v51 + 32) & 0x8000000) != 0
          || (*(_QWORD *)(v51 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL
          || (MiGetWsleContents(0x3FFFFFFFFELL, (__int64)(v24 << 25) >> 16) & 0xF) == 8
          || (unsigned __int16)*(_DWORD *)(v51 + 32) != 1 )
        {
          goto LABEL_29;
        }
        Address = 0LL;
        if ( v53 == 1 )
        {
          MiLockVadTree(1, v56, v57);
          Address = MiLocateAddress(v92);
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
          if ( !Address
            || MiVadPageSizes[(*(_DWORD *)(Address + 48) >> 19) & 3] == 16
            || !(unsigned int)MiVadSupportsPrivateCommit(Address) )
          {
            goto LABEL_28;
          }
        }
        v59 = 4LL;
        if ( (v27 & 0x42) != 0 )
        {
          if ( v86 >= 8 )
          {
            MiMakeCombineCandidateClean(v24, Address);
            MiFlushSingleTbEntry(v92, v53 != 1, 10);
          }
          else
          {
            v59 = 2LL;
          }
          if ( v59 != 4 )
            goto LABEL_109;
          v61 = v97;
          v60 = v102;
        }
        else
        {
          v60 = v102;
          v61 = v97;
          if ( v102 == qword_140E37368 && (v97 & 0x18) == 0 && (v27 & 0x20) != 0 && v86 < 3 )
          {
            v59 = 3LL;
LABEL_109:
            v63 = v88;
            if ( v88 )
              goto LABEL_110;
            ProcessorFlushList = v89;
            if ( !v89 )
            {
              ProcessorFlushList = MiGetProcessorFlushList();
              v89 = ProcessorFlushList;
            }
            *((_DWORD *)ProcessorFlushList + 4) = 0;
            *((_DWORD *)ProcessorFlushList + 5) = 128;
            *ProcessorFlushList = v90;
            v88 = (__int64)ProcessorFlushList;
            *((_BYTE *)ProcessorFlushList + 24) = (*(_DWORD *)(v90 + 184) & 0x800) != 0;
            if ( (*(_DWORD *)(v90 + 184) & 0xF) != 0
              || (struct _LIST_ENTRY **)v90 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
            {
              if ( (*(_DWORD *)(v90 + 184) & 0xF) == 0 )
              {
                v80 = 1;
LABEL_146:
                *((_DWORD *)ProcessorFlushList + 4) &= 0xFFFFFFDB;
                *((_DWORD *)ProcessorFlushList + 2) = v80;
                v63 = (__int64)ProcessorFlushList;
                *(_WORD *)((char *)ProcessorFlushList + 25) = 0;
                *((_DWORD *)ProcessorFlushList + 7) = 0;
                ProcessorFlushList[4] = 0LL;
                ProcessorFlushList[5] = 0LL;
LABEL_110:
                MiInsertTbFlushEntry(v63, v92, 1LL, 0);
                v64 = &v106.StaticBitmap[5 * v59 + 11];
                *(_QWORD *)v93 = *v64;
                *v64 = v93;
                goto LABEL_28;
              }
            }
            else
            {
              *((_DWORD *)ProcessorFlushList + 4) |= 9u;
            }
            v80 = 0;
            goto LABEL_146;
          }
        }
        if ( v60 == qword_140E37368 && (unsigned int)MiPageMightBeZero(v90, v51, v24) )
        {
          v68 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v68 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v68);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v51 + 24) < 0 );
          }
          IsZero = MiConfirmPageIsZero(v51, v65, v66, v67);
          _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( IsZero )
          {
            v70 = v89;
            if ( v89 )
            {
              v71 = 0;
            }
            else
            {
              v89 = MiGetProcessorFlushList();
              v71 = 1;
              v70 = v89;
            }
            *((_DWORD *)v70 + 1038) = 2;
            *((_DWORD *)v70 + 1039) = 1;
            v70[517] = v90;
            *((_BYTE *)v70 + 4160) = (*(_DWORD *)(v90 + 184) & 0x800) != 0;
            if ( (*(_DWORD *)(v90 + 184) & 0xF) != 0
              || (struct _LIST_ENTRY **)v90 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
            {
              if ( (*(_DWORD *)(v90 + 184) & 0xF) == 0 )
              {
                v72 = 1;
                goto LABEL_123;
              }
            }
            else
            {
              *((_DWORD *)v70 + 1038) |= 9u;
            }
            v72 = 0;
LABEL_123:
            *((_DWORD *)v70 + 1038) &= 0xFFFFFFDB;
            *((_DWORD *)v70 + 1036) = v72;
            *(_WORD *)((char *)v70 + 4161) = 0;
            *((_DWORD *)v70 + 1041) = 0;
            v70[521] = 0LL;
            v70[522] = 0LL;
            MiInsertTbFlushEntry((__int64)(v70 + 517), v92, 1LL, 0);
            MiFreeWsleList(v90, (ULONG_PTR)(v70 + 517), 0);
            if ( v71 )
            {
              MiReleaseProcessorFlushList();
              v89 = 0LL;
            }
            ++v100;
            ++v98[1];
LABEL_28:
            v17 = 0;
            goto LABEL_29;
          }
        }
        v73 = v101;
        if ( v101 == qword_140E2FE10 || v53 != 1 )
        {
          v74 = a1;
        }
        else
        {
          if ( v101 != *(_QWORD *)(v90 + 864) )
            goto LABEL_28;
          if ( (HIDWORD(v96[4].ThreadListHead.Flink) & 0x1000) != 0 )
            goto LABEL_28;
          v74 = a1;
          ActiveProcessors_high = HIDWORD(v96[4].ActiveProcessors);
          v76 = *(_DWORD *)(a1 + 288);
          if ( ActiveProcessors_high != 1
            && ActiveProcessors_high != v76
            && (ActiveProcessors_high >= 2
             || _InterlockedCompareExchange((volatile signed __int32 *)&v96[4].ActiveProcessors + 1, v76, 0)) )
          {
            goto LABEL_28;
          }
        }
        v17 = 0;
        if ( (v61 & 0x18) != 0 )
        {
          v17 = 1;
          *(_QWORD *)(v74 + 96) = MiGetUltraMapping(v74 + 256, 3uLL, 2LL, 4);
          goto LABEL_135;
        }
      }
      else
      {
        v74 = a1;
        v61 = v97;
        v73 = v101;
      }
      *(_QWORD *)(v74 + 96) = MiGetUltraMapping(v74 + 256, 3uLL, 2LL, 4);
      if ( v55 != 6 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v73 != qword_140E2FE10
          && v53 == 1
          && (v73 != MiGetCombineDomain(1LL, v90)
           || (HIDWORD(v96[4].ThreadListHead.Flink) & 0x1000) != 0
           || !(unsigned int)MiCheckProcessCombineSequence(v96, *(unsigned int *)(v74 + 288))) )
        {
          *(_QWORD *)(v74 + 96) = 0LL;
          goto LABEL_29;
        }
        v17 = (v61 & 0x18) != 0;
        v78 = MiConvertStandbyToProto(v74, v93);
LABEL_157:
        *(_QWORD *)(v74 + 96) = 0LL;
        if ( v78 < 0 )
          goto LABEL_29;
        goto LABEL_138;
      }
LABEL_135:
      v77 = v88;
      if ( !v88 )
      {
        v81 = v89;
        if ( !v89 )
        {
          v81 = MiGetProcessorFlushList();
          v89 = v81;
        }
        v88 = (__int64)v81;
        MiInitializeTbFlushList((__int64)v81, v90, *((_DWORD *)v81 + 3), 0, 128);
        v77 = v82;
      }
      v78 = MiConvertPrivateToProto(v74, v93, v77);
      if ( v78 < 0 )
        goto LABEL_157;
      *(_QWORD *)v93 = v106.StaticBitmap[11];
      *(_QWORD *)(v74 + 96) = 0LL;
      v106.StaticBitmap[11] = v93;
LABEL_138:
      v10 = v84;
      ++v98[1];
      if ( v96 )
        _InterlockedDecrement64((volatile signed __int64 *)v96[1].Padding);
LABEL_30:
      v9 = a1;
      v16 = v83;
      v3 = v90;
      v5 = v95;
    }
    v83 = 0;
LABEL_20:
    v21 = 1;
    goto LABEL_21;
  }
  MiUnlockWorkingSetShared(v3, v20);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v42, v43, v44);
LABEL_50:
  if ( v91 )
  {
    KeForceDetachProcess(&v106, 0);
    MiAttachThreadDone((__int64)&v11[2].ReadyListHead.Blink, v37, v38);
  }
  v6 = v98;
LABEL_53:
  v39 = *(_QWORD *)(v9 + 304);
  if ( v39 )
  {
    MiReleaseFreshPage(v39, v13, v14);
    *(_QWORD *)(v9 + 304) = 0LL;
  }
  v40 = *(_QWORD *)(v9 + 296);
  if ( v40 )
  {
    *(_QWORD *)(v40 + 24) = 0LL;
    MiFreeCombineBlock(*(_QWORD *)(v9 + 296), 0);
    *(_QWORD *)(v9 + 296) = 0LL;
  }
  result = v100;
  *v6 += v100;
  return result;
}
