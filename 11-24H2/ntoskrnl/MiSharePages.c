/*
 * XREFs of MiSharePages @ 0x140343830
 * Callers:
 *     MiProcessCrcList @ 0x1409E6C70 (MiProcessCrcList.c)
 * Callees:
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140204044 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiReplenishSlabAllocator @ 0x14021E544 (MiReplenishSlabAllocator.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiConfirmPageIsZero @ 0x140249FB0 (MiConfirmPageIsZero.c)
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     MiConvertPrivateToProto @ 0x140294520 (MiConvertPrivateToProto.c)
 *     MiFreeWsleList @ 0x140297494 (MiFreeWsleList.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiAttachThreadDone @ 0x1402FE6F0 (MiAttachThreadDone.c)
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiPrepareAttachThread @ 0x140342180 (MiPrepareAttachThread.c)
 *     MiPageMightBeZero @ 0x1403421F4 (MiPageMightBeZero.c)
 *     KeForceDetachProcess @ 0x1403422E0 (KeForceDetachProcess.c)
 *     MiFreeCombineBlock @ 0x1403427B8 (MiFreeCombineBlock.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiProcessSuitableForCombining @ 0x1403435EC (MiProcessSuitableForCombining.c)
 *     MiReplenishCombineResources @ 0x1403447DC (MiReplenishCombineResources.c)
 *     MiCombineCandidate @ 0x140344930 (MiCombineCandidate.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiVadSupportsPrivateCommit @ 0x1403455B0 (MiVadSupportsPrivateCommit.c)
 *     MiCrcStillIntact @ 0x140345608 (MiCrcStillIntact.c)
 *     MiAllocateCombineBlock @ 0x140345874 (MiAllocateCombineBlock.c)
 *     MiFreeDeferredCrcPages @ 0x140345FC8 (MiFreeDeferredCrcPages.c)
 *     MiInvalidPteConforms @ 0x1403461F0 (MiInvalidPteConforms.c)
 *     MiMakeCombineCandidateClean @ 0x140346988 (MiMakeCombineCandidateClean.c)
 *     MiPageTableLockIsContended @ 0x140391410 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 *     MiConvertStandbyToProto @ 0x1403F0D74 (MiConvertStandbyToProto.c)
 *     MiGetCombineDomain @ 0x1404509E4 (MiGetCombineDomain.c)
 *     MiCheckProcessCombineSequence @ 0x1404509FC (MiCheckProcessCombineSequence.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiSharePages(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // r13
  __int64 v4; // rbp
  unsigned __int64 v5; // r15
  _QWORD *v6; // rdi
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // r14
  _KPROCESS *v14; // rbx
  unsigned __int8 v15; // r9
  unsigned __int64 v16; // rcx
  char v17; // di
  bool v18; // bp
  unsigned __int8 v19; // al
  __int64 v20; // rdx
  __int64 v21; // r9
  unsigned __int8 v22; // r8
  char v23; // bl
  int v24; // ecx
  _QWORD *v25; // rbp
  unsigned __int64 v26; // r15
  __int64 v27; // rbx
  int v28; // eax
  unsigned __int64 v29; // rdi
  ULONG_PTR v30; // r14
  _QWORD *v31; // rbx
  _QWORD *v32; // rdi
  _QWORD *v33; // rbx
  _QWORD *v34; // rdi
  unsigned __int64 valid; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 result; // rax
  __int64 v41; // rax
  ULONG_PTR v42; // rbx
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  __int64 v45; // r14
  unsigned int v46; // ebp
  __int64 v47; // rbx
  int v48; // eax
  int v49; // r13d
  __int64 v50; // rax
  char v51; // r12
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 Address; // rbp
  __int64 v56; // r14
  __int64 v57; // rdx
  char v58; // r14
  unsigned int v59; // ebp
  __int64 v60; // rax
  unsigned __int64 *v61; // rcx
  unsigned int v62; // edi
  BOOL IsZero; // eax
  __int64 *v64; // r14
  int v65; // edi
  int v66; // eax
  __int64 v67; // r15
  __int64 v68; // rdi
  unsigned int ActiveProcessors_high; // eax
  signed __int32 v70; // ecx
  __int64 v71; // rax
  int v72; // eax
  __int64 *ProcessorFlushList; // r8
  int v74; // eax
  __int64 *v75; // rax
  __int64 v76; // rcx
  char v77; // [rsp+30h] [rbp-1F8h]
  _QWORD *v78; // [rsp+38h] [rbp-1F0h]
  unsigned __int8 v79; // [rsp+40h] [rbp-1E8h]
  unsigned int v80; // [rsp+44h] [rbp-1E4h]
  int v81; // [rsp+48h] [rbp-1E0h]
  __int64 v82; // [rsp+50h] [rbp-1D8h]
  __int64 *v83; // [rsp+58h] [rbp-1D0h]
  __int64 v84; // [rsp+60h] [rbp-1C8h]
  int v85; // [rsp+68h] [rbp-1C0h]
  unsigned __int64 v86; // [rsp+70h] [rbp-1B8h]
  __int64 v87; // [rsp+78h] [rbp-1B0h]
  unsigned __int64 v89; // [rsp+88h] [rbp-1A0h]
  _KPROCESS *v90; // [rsp+90h] [rbp-198h]
  __int64 v91; // [rsp+98h] [rbp-190h]
  _QWORD *v92; // [rsp+A0h] [rbp-188h]
  unsigned int v93; // [rsp+A8h] [rbp-180h]
  __int64 v94; // [rsp+B0h] [rbp-178h]
  __int64 v95; // [rsp+B8h] [rbp-170h]
  __int64 v96; // [rsp+C0h] [rbp-168h]
  __int64 v97; // [rsp+C8h] [rbp-160h]
  struct _KTHREAD *CurrentThread; // [rsp+D0h] [rbp-158h]
  ULONG_PTR v99; // [rsp+D8h] [rbp-150h] BYREF
  _KAFFINITY_EX v100; // [rsp+E0h] [rbp-148h] BYREF

  v3 = a2[4];
  v4 = *(_QWORD *)a1;
  v5 = 0LL;
  v6 = *(_QWORD **)(a1 + 104);
  v9 = a1;
  v97 = *(_QWORD *)a1;
  v93 = *(_DWORD *)(a1 + 140);
  v92 = v6;
  v80 = 0;
  memset(&v100, 0, 48);
  v94 = 0LL;
  v84 = v3;
  MiInitializePageColorBase(v3, 3, a3 + 1, a1 + 320);
  v13 = (_QWORD *)a2[6];
  v14 = (_KPROCESS *)a2[5];
  v81 = 0;
  v85 = 0;
  v82 = 0LL;
  v83 = 0LL;
  v90 = v14;
  if ( v14 && v14 != KeGetCurrentThread()->ApcState.Process )
  {
    ExAcquireSpinLockExclusive(&SpinLock);
    v85 = MiPrepareAttachThread((__int64)v14, (__int64)&v14[2].ReadyListHead.Blink);
    MiReleaseSpinLockExclusive(&SpinLock, v15);
    if ( !v85 )
      goto LABEL_53;
    memset(&v100.StaticBitmap[5], 0, 48);
    KiStackAttachProcess(v14, 1, (__int64)&v100);
    v5 = 0LL;
  }
  *(_QWORD *)(v9 + 312) = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
LABEL_6:
  v16 = *(_QWORD *)(v9 + 312);
  v100.StaticBitmap[11] = 0LL;
  v100.StaticBitmap[16] = 0LL;
  v100.StaticBitmap[21] = 0LL;
  v100.StaticBitmap[26] = 0LL;
  if ( v16 > 1 )
    *(_QWORD *)(v9 + 312) = (unsigned int)MiReplenishSlabAllocator(v16, 0x10uLL, 0) == 0;
  if ( !*(_QWORD *)(v9 + 296) )
    *(_QWORD *)(v9 + 296) = MiAllocateCombineBlock(v4);
  v17 = 0;
  v89 = 0LL;
  v77 = 0;
  v18 = 0;
  v19 = MiLockWorkingSetShared(v3, v10, v11, v12);
  v22 = v19;
  v79 = v19;
  if ( *(_QWORD *)(v9 + 296) && (!v14 || MiProcessSuitableForCombining((__int64)v14, v20, v19, v21)) )
  {
    while ( 1 )
    {
      v23 = 0;
      v87 = (__int64)v13;
      v24 = 0;
      if ( !v18 )
        v24 = v81 + 1;
      v81 = v24;
      if ( !*(_QWORD *)(v9 + 296) || *(_QWORD *)(v9 + 312) > 1uLL )
        goto LABEL_20;
      if ( v17 )
        break;
      if ( (v24 & 7) == 0
        && ((unsigned int)MiWorkingSetIsContended(v3, 0LL) || v5 && (unsigned int)MiPageTableLockIsContended(v3, v5))
        || KeShouldYieldProcessor() )
      {
        goto LABEL_20;
      }
LABEL_21:
      if ( !v13 )
      {
        ++v80;
LABEL_32:
        v31 = (_QWORD *)v100.StaticBitmap[21];
        v5 = v82;
        if ( v100.StaticBitmap[21] )
        {
          do
          {
            v32 = (_QWORD *)*v31;
            if ( (unsigned int)MiCrcStillIntact(v9, v82, v31, 2LL) )
            {
              *v31 = v13;
              v13 = v31;
            }
            v31 = v32;
          }
          while ( v32 );
        }
        v33 = (_QWORD *)v100.StaticBitmap[26];
        v100.StaticBitmap[21] = 0LL;
        if ( v100.StaticBitmap[26] )
        {
          do
          {
            v34 = (_QWORD *)*v33;
            if ( (unsigned int)MiCrcStillIntact(v9, v82, v33, 3LL) )
            {
              *v33 = v13;
              v13 = v33;
            }
            v33 = v34;
          }
          while ( v34 );
        }
        v100.StaticBitmap[26] = 0LL;
        if ( v82 )
        {
          *(_DWORD *)(v82 + 20) &= ~0x80u;
          MiFlushTbList(v82);
          MiReleaseProcessorFlushList();
          v5 = 0LL;
          v82 = 0LL;
          v83 = 0LL;
        }
        if ( v89 )
          MiUnlockPageTableInternal(v3, v89);
        MiUnlockWorkingSetShared(v3, v79);
        MiFreeDeferredCrcPages(&v100.StaticBitmap[11]);
        if ( !v13 )
        {
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
          v14 = v90;
          goto LABEL_50;
        }
        v14 = v90;
        v4 = v97;
        goto LABEL_6;
      }
      if ( v23 )
        goto LABEL_32;
      v25 = (_QWORD *)*v13;
      v78 = (_QWORD *)*v13;
      v86 = v13[2];
      v96 = v13[1];
      v26 = ((v86 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v27 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v89 != v27 )
      {
        if ( v89 )
        {
          v77 = 1;
          v18 = 0;
          goto LABEL_30;
        }
        valid = MiLockLowestValidPageTableEx(v3, v26, &v99, 0);
        v89 = valid;
        if ( valid != v27 )
        {
          MiUnlockPageTableInternal(v3, valid);
          v89 = 0LL;
          goto LABEL_28;
        }
      }
      v28 = MiReplenishCombineResources(v9);
      if ( v28 < 0 )
      {
        if ( v28 == -1073741267 )
          v25 = v13;
        v78 = v25;
        goto LABEL_28;
      }
      v29 = *(_QWORD *)v26;
      if ( (*(_QWORD *)v26 & 1) == 0 )
      {
        v18 = 0;
        if ( (*(_QWORD *)v26 & 0xC00LL) == 0x800 )
        {
          while ( 1 )
          {
            v41 = MI_READ_PTE_LOCK_FREE(v26);
            v42 = v41;
            if ( (v41 & 0x800) == 0 )
              goto LABEL_28;
            if ( (unsigned int)MiInvalidPteConforms(v41) )
            {
              if ( qword_140E2DCC0 )
              {
                if ( (v42 & 0x10) != 0 )
                  v43 &= ~0x10uLL;
                else
                  v43 = v42 & ~qword_140E2DCC0;
              }
              v44 = (v43 >> 12) & 0xFFFFFFFFFFLL;
              v45 = 48 * v44 - 0x220000000000LL;
              if ( v44 <= qword_140E2DD20 && (*(_QWORD *)(48 * v44 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
              {
                v46 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v45 + 24), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v46 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && KiCheckVpBackingLongSpinWaitHypercall() )
                    {
                      HvlNotifyLongSpinWait(v46);
                    }
                    else
                    {
                      _mm_pause();
                    }
                  }
                  while ( *(__int64 *)(v45 + 24) < 0 );
                }
                if ( MI_READ_PTE_LOCK_FREE(v26) == v42 )
                {
                  if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v45 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
                  {
                    v45 = MiLockSpecialPurposeMemoryCachedPage(v45, 0);
                    if ( !v45 )
                      goto LABEL_28;
                  }
                  if ( (*(_QWORD *)(v45 + 8) | 0x8000000000000000uLL) != v26
                    && (*(_QWORD *)(v45 + 40) & 0x10000000000LL) == 0 )
                  {
                    KeBugCheckEx(0x1Au, 0x411uLL, v26, v42, *(_QWORD *)(v45 + 8));
                  }
                  v18 = 0;
                  v47 = v45;
                  if ( v45 )
                  {
                    v30 = 0xAAAAAAAAAAAAAAABuLL * ((v45 + 0x220000000000LL) >> 4);
                    goto LABEL_83;
                  }
                  break;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
            }
          }
        }
LABEL_29:
        v13 = v78;
        goto LABEL_30;
      }
      v30 = (v29 >> 12) & 0xFFFFFFFFFFLL;
      if ( v30 > qword_140E2DD20 || (*(_QWORD *)(48 * v30 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
        goto LABEL_28;
      v47 = 48 * v30 - 0x220000000000LL;
      v59 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v47 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v59 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v59);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v47 + 24) < 0 );
      }
LABEL_83:
      v48 = MiCombineCandidate(v97, v93, v47);
      v49 = v48;
      if ( !v48
        || (*(_QWORD *)(v9 + 144) = v30,
            *(_DWORD *)(v9 + 152) = v48,
            v91 = *(_QWORD *)(v47 + 16) >> 5,
            v50 = *(_QWORD *)(v87 + 24),
            *(_DWORD *)(v87 + 32) ^= ((unsigned __int8)v91 ^ (unsigned __int8)*(_DWORD *)(v87 + 32)) & 0x1F,
            v95 = v50,
            (unsigned int)MiPageToNode(v30) != a3) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_28;
      }
      v18 = 0;
      v51 = *(_BYTE *)(v47 + 34) & 7;
      if ( v51 == 6 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v26 != (*(_QWORD *)(v47 + 8) | 0x8000000000000000uLL)
          || *(__int64 *)(v47 + 40) < 0
          || (*(_QWORD *)(v47 + 40) & 0x10000000000LL) != 0
          || (*(_DWORD *)(v47 + 32) & 0x8000000) != 0
          || (*(_QWORD *)(v47 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL
          || (MiGetWsleContents(0x3FFFFFFFFELL, (__int64)(v26 << 25) >> 16) & 0xF) == 8
          || (unsigned __int16)*(_DWORD *)(v47 + 32) != 1 )
        {
          goto LABEL_29;
        }
        Address = 0LL;
        if ( v49 == 1 )
        {
          MiLockVadTree(1, v52, v53, v54);
          Address = MiLocateAddress(v86);
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
          if ( !Address
            || MiVadPageSizes[(*(_DWORD *)(Address + 48) >> 19) & 3] == 16
            || !(unsigned int)MiVadSupportsPrivateCommit(Address) )
          {
            goto LABEL_28;
          }
        }
        v56 = 4LL;
        if ( (v29 & 0x42) != 0 )
        {
          if ( v80 >= 8 )
          {
            MiMakeCombineCandidateClean(v26, Address);
            MiFlushSingleTbEntry(v86, v49 != 1, 10);
          }
          else
          {
            v56 = 2LL;
          }
          if ( v56 != 4 )
            goto LABEL_109;
          v58 = v91;
          v57 = v96;
        }
        else
        {
          v57 = v96;
          v58 = v91;
          if ( v96 == qword_140E374A8 && (v91 & 0x18) == 0 && (v29 & 0x20) != 0 && v80 < 3 )
          {
            v56 = 3LL;
LABEL_109:
            v60 = v82;
            if ( v82 )
              goto LABEL_110;
            ProcessorFlushList = v83;
            if ( !v83 )
            {
              ProcessorFlushList = MiGetProcessorFlushList();
              v83 = ProcessorFlushList;
            }
            *((_DWORD *)ProcessorFlushList + 4) = 0;
            *((_DWORD *)ProcessorFlushList + 5) = 128;
            *ProcessorFlushList = v84;
            v82 = (__int64)ProcessorFlushList;
            *((_BYTE *)ProcessorFlushList + 24) = (*(_DWORD *)(v84 + 184) & 0x800) != 0;
            if ( (*(_DWORD *)(v84 + 184) & 0xF) != 0
              || (struct _LIST_ENTRY **)v84 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
            {
              if ( (*(_DWORD *)(v84 + 184) & 0xF) == 0 )
              {
                v74 = 1;
LABEL_146:
                *((_DWORD *)ProcessorFlushList + 4) &= 0xFFFFFFDB;
                *((_DWORD *)ProcessorFlushList + 2) = v74;
                v60 = (__int64)ProcessorFlushList;
                *(_WORD *)((char *)ProcessorFlushList + 25) = 0;
                *((_DWORD *)ProcessorFlushList + 7) = 0;
                ProcessorFlushList[4] = 0LL;
                ProcessorFlushList[5] = 0LL;
LABEL_110:
                MiInsertTbFlushEntry(v60, v86, 1LL, 0);
                v61 = &v100.StaticBitmap[5 * v56 + 11];
                *(_QWORD *)v87 = *v61;
                *v61 = v87;
                goto LABEL_28;
              }
            }
            else
            {
              *((_DWORD *)ProcessorFlushList + 4) |= 9u;
            }
            v74 = 0;
            goto LABEL_146;
          }
        }
        if ( v57 == qword_140E374A8 && (unsigned int)MiPageMightBeZero(v84, v47, v26) )
        {
          v62 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v47 + 24), 0x3FuLL) )
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
            while ( *(__int64 *)(v47 + 24) < 0 );
          }
          IsZero = MiConfirmPageIsZero(v47);
          _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( IsZero )
          {
            v64 = v83;
            if ( v83 )
            {
              v65 = 0;
            }
            else
            {
              v83 = MiGetProcessorFlushList();
              v65 = 1;
              v64 = v83;
            }
            *((_DWORD *)v64 + 1038) = 2;
            *((_DWORD *)v64 + 1039) = 1;
            v64[517] = v84;
            *((_BYTE *)v64 + 4160) = (*(_DWORD *)(v84 + 184) & 0x800) != 0;
            if ( (*(_DWORD *)(v84 + 184) & 0xF) != 0
              || (struct _LIST_ENTRY **)v84 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
            {
              if ( (*(_DWORD *)(v84 + 184) & 0xF) == 0 )
              {
                v66 = 1;
                goto LABEL_123;
              }
            }
            else
            {
              *((_DWORD *)v64 + 1038) |= 9u;
            }
            v66 = 0;
LABEL_123:
            *((_DWORD *)v64 + 1038) &= 0xFFFFFFDB;
            *((_DWORD *)v64 + 1036) = v66;
            *(_WORD *)((char *)v64 + 4161) = 0;
            *((_DWORD *)v64 + 1041) = 0;
            v64[521] = 0LL;
            v64[522] = 0LL;
            MiInsertTbFlushEntry((__int64)(v64 + 517), v86, 1LL, 0);
            MiFreeWsleList(v84, (ULONG_PTR)(v64 + 517), 0);
            if ( v65 )
            {
              MiReleaseProcessorFlushList();
              v83 = 0LL;
            }
            ++v94;
            ++v92[1];
LABEL_28:
            v18 = 0;
            goto LABEL_29;
          }
        }
        v67 = v95;
        if ( v95 == qword_140E2FF50 || v49 != 1 )
        {
          v68 = a1;
        }
        else
        {
          if ( v95 != *(_QWORD *)(v84 + 864) )
            goto LABEL_28;
          if ( (HIDWORD(v90[4].ThreadListHead.Flink) & 0x1000) != 0 )
            goto LABEL_28;
          v68 = a1;
          ActiveProcessors_high = HIDWORD(v90[4].ActiveProcessors);
          v70 = *(_DWORD *)(a1 + 288);
          if ( ActiveProcessors_high != 1
            && ActiveProcessors_high != v70
            && (ActiveProcessors_high >= 2
             || _InterlockedCompareExchange((volatile signed __int32 *)&v90[4].ActiveProcessors + 1, v70, 0)) )
          {
            goto LABEL_28;
          }
        }
        v18 = 0;
        if ( (v58 & 0x18) != 0 )
        {
          v18 = 1;
          *(_QWORD *)(v68 + 96) = MiGetUltraMapping(v68 + 256, 3uLL, 2LL, 4);
          goto LABEL_135;
        }
      }
      else
      {
        v68 = a1;
        v58 = v91;
        v67 = v95;
      }
      *(_QWORD *)(v68 + 96) = MiGetUltraMapping(v68 + 256, 3uLL, 2LL, 4);
      if ( v51 != 6 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v67 != qword_140E2FF50
          && v49 == 1
          && (v67 != MiGetCombineDomain(1LL, v84)
           || (HIDWORD(v90[4].ThreadListHead.Flink) & 0x1000) != 0
           || !(unsigned int)MiCheckProcessCombineSequence(v90, *(unsigned int *)(v68 + 288))) )
        {
          *(_QWORD *)(v68 + 96) = 0LL;
          goto LABEL_29;
        }
        v18 = (v58 & 0x18) != 0;
        v72 = MiConvertStandbyToProto(v68, v87);
LABEL_157:
        *(_QWORD *)(v68 + 96) = 0LL;
        if ( v72 < 0 )
          goto LABEL_29;
        goto LABEL_138;
      }
LABEL_135:
      v71 = v82;
      if ( !v82 )
      {
        v75 = v83;
        if ( !v83 )
        {
          v75 = MiGetProcessorFlushList();
          v83 = v75;
        }
        v82 = (__int64)v75;
        MiInitializeTbFlushList((__int64)v75, v84, *((_DWORD *)v75 + 3), 0, 128);
        v71 = v76;
      }
      v72 = MiConvertPrivateToProto(v68, v87, v71);
      if ( v72 < 0 )
        goto LABEL_157;
      *(_QWORD *)v87 = v100.StaticBitmap[11];
      *(_QWORD *)(v68 + 96) = 0LL;
      v100.StaticBitmap[11] = v87;
LABEL_138:
      v13 = v78;
      ++v92[1];
      if ( v90 )
        _InterlockedDecrement64((volatile signed __int64 *)v90[1].Padding);
LABEL_30:
      v9 = a1;
      v17 = v77;
      v3 = v84;
      v5 = v89;
    }
    v77 = 0;
LABEL_20:
    v23 = 1;
    goto LABEL_21;
  }
  MiUnlockWorkingSetShared(v3, v22);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
LABEL_50:
  if ( v85 )
  {
    KeForceDetachProcess(&v100, 0, v36, v37);
    MiAttachThreadDone((__int64)&v14[2].ReadyListHead.Blink);
  }
  v6 = v92;
LABEL_53:
  v38 = *(_QWORD *)(v9 + 304);
  if ( v38 )
  {
    MiReleaseFreshPage(v38);
    *(_QWORD *)(v9 + 304) = 0LL;
  }
  v39 = *(_QWORD *)(v9 + 296);
  if ( v39 )
  {
    *(_QWORD *)(v39 + 24) = 0LL;
    MiFreeCombineBlock(*(_QWORD *)(v9 + 296), 0);
    *(_QWORD *)(v9 + 296) = 0LL;
  }
  result = v94;
  *v6 += v94;
  return result;
}
