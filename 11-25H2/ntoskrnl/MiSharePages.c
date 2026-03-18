/*
 * XREFs of MiSharePages @ 0x140238650
 * Callers:
 *     MiProcessCrcList @ 0x1409F43E8 (MiProcessCrcList.c)
 * Callees:
 *     MiCombineCandidate @ 0x140210C20 (MiCombineCandidate.c)
 *     MiGetUltraMapping @ 0x140211990 (MiGetUltraMapping.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MiConvertStandbyToProto @ 0x140224810 (MiConvertStandbyToProto.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1402343E0 (MiInvalidPteConforms.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiReplenishCombineResources @ 0x1402395F4 (MiReplenishCombineResources.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MiCrcStillIntact @ 0x140239824 (MiCrcStillIntact.c)
 *     MiAllocateCombineBlock @ 0x140239A90 (MiAllocateCombineBlock.c)
 *     MiFreeDeferredCrcPages @ 0x140239B68 (MiFreeDeferredCrcPages.c)
 *     MiVadSupportsPrivateCommit @ 0x140239D80 (MiVadSupportsPrivateCommit.c)
 *     MiProcessSuitableForCombining @ 0x140239DD8 (MiProcessSuitableForCombining.c)
 *     MiMakeCombineCandidateClean @ 0x140239E58 (MiMakeCombineCandidateClean.c)
 *     MiFreeCombineBlock @ 0x14023A47C (MiFreeCombineBlock.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     KeForceDetachProcess @ 0x14023A720 (KeForceDetachProcess.c)
 *     MiPageMightBeZero @ 0x14023ABF8 (MiPageMightBeZero.c)
 *     MiConvertPrivateToProto @ 0x14023ACDC (MiConvertPrivateToProto.c)
 *     MiConfirmPageIsZero @ 0x14024D480 (MiConfirmPageIsZero.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiLockLowestValidPageTableEx @ 0x1402B7890 (MiLockLowestValidPageTableEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiAttachThreadDone @ 0x1402BC1A0 (MiAttachThreadDone.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiPrepareAttachThread @ 0x1402C9EE0 (MiPrepareAttachThread.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiPageTableLockIsContended @ 0x140338780 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x140338960 (MiWorkingSetIsContended.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14033F5DC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiReplenishSlabAllocator @ 0x1403769E8 (MiReplenishSlabAllocator.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x1403815C4 (MiFreeWsleList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiGetCombineDomain @ 0x14045C26C (MiGetCombineDomain.c)
 *     MiCheckProcessCombineSequence @ 0x14045C284 (MiCheckProcessCombineSequence.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall MiSharePages(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // r13
  _QWORD *v4; // rbp
  __int64 v5; // r15
  _QWORD *v6; // rdi
  __int64 v9; // r12
  _QWORD *v10; // r14
  _KPROCESS *v11; // rbx
  KIRQL v12; // al
  __int64 v13; // r8
  unsigned __int8 v14; // r9
  unsigned __int64 v15; // rcx
  char v16; // di
  bool v17; // bp
  unsigned __int8 v18; // al
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  char v21; // bl
  int v22; // ecx
  _QWORD *v23; // rbp
  unsigned __int64 v24; // r15
  __int64 v25; // rbx
  int v26; // eax
  unsigned __int64 v27; // rdi
  ULONG_PTR v28; // r14
  __int64 v29; // rcx
  _QWORD *v30; // rbx
  _QWORD *v31; // rdi
  _QWORD *v32; // rbx
  _QWORD *v33; // rdi
  __int64 valid; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 result; // rax
  __int64 v38; // rax
  ULONG_PTR v39; // rbx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  __int64 v42; // r14
  unsigned int v43; // ebp
  __int64 v44; // rbx
  int v45; // eax
  int v46; // r13d
  __int64 v47; // rax
  char v48; // r12
  __int64 Address; // rbp
  __int64 v50; // r14
  char v51; // r14
  __int64 v52; // rax
  __int64 *v53; // rcx
  __int64 v54; // rcx
  unsigned int v55; // edi
  int IsZero; // eax
  __int64 v57; // r14
  int v58; // edi
  int v59; // eax
  unsigned int v60; // ebp
  __int64 v61; // r15
  __int64 v62; // rdi
  unsigned int ActiveProcessors_high; // eax
  signed __int32 v64; // ecx
  __int64 v65; // rax
  int v66; // eax
  __int64 ProcessorFlushList; // r8
  int v68; // eax
  __int64 v69; // rax
  __int64 v70; // rcx
  char v71; // [rsp+30h] [rbp-1F8h]
  _QWORD *v72; // [rsp+38h] [rbp-1F0h]
  unsigned __int8 v73; // [rsp+40h] [rbp-1E8h]
  unsigned int v74; // [rsp+44h] [rbp-1E4h]
  int v75; // [rsp+48h] [rbp-1E0h]
  __int64 v76; // [rsp+50h] [rbp-1D8h]
  __int64 v77; // [rsp+58h] [rbp-1D0h]
  __int64 v78; // [rsp+60h] [rbp-1C8h]
  int v79; // [rsp+68h] [rbp-1C0h]
  unsigned __int64 v80; // [rsp+70h] [rbp-1B8h]
  __int64 v81; // [rsp+78h] [rbp-1B0h]
  __int64 v83; // [rsp+88h] [rbp-1A0h]
  _KPROCESS *v84; // [rsp+90h] [rbp-198h]
  __int64 v85; // [rsp+98h] [rbp-190h]
  _QWORD *v86; // [rsp+A0h] [rbp-188h]
  int v87; // [rsp+A8h] [rbp-180h]
  __int64 v88; // [rsp+B0h] [rbp-178h]
  __int64 v89; // [rsp+B8h] [rbp-170h]
  unsigned __int64 v90; // [rsp+C0h] [rbp-168h]
  _QWORD *v91; // [rsp+C8h] [rbp-160h]
  struct _KTHREAD *CurrentThread; // [rsp+D0h] [rbp-158h]
  char v93[8]; // [rsp+D8h] [rbp-150h] BYREF
  _OWORD v94[6]; // [rsp+E0h] [rbp-148h] BYREF
  _QWORD v95[10]; // [rsp+140h] [rbp-E8h] BYREF
  _QWORD *v96; // [rsp+190h] [rbp-98h]
  _QWORD *v97; // [rsp+1B8h] [rbp-70h]

  v3 = a2[4];
  v4 = *(_QWORD **)a1;
  v5 = 0LL;
  v6 = *(_QWORD **)(a1 + 104);
  v9 = a1;
  v91 = *(_QWORD **)a1;
  v87 = *(_DWORD *)(a1 + 140);
  v86 = v6;
  v74 = 0;
  memset(v94, 0, 48);
  v88 = 0LL;
  v78 = v3;
  MiInitializePageColorBase(v3, 3LL, (unsigned int)(a3 + 1), a1 + 320);
  v10 = (_QWORD *)a2[6];
  v11 = (_KPROCESS *)a2[5];
  v75 = 0;
  v79 = 0;
  v76 = 0LL;
  v77 = 0LL;
  v84 = v11;
  if ( v11 && v11 != KeGetCurrentThread()->ApcState.Process )
  {
    v12 = ExAcquireSpinLockExclusive(&dword_140E37180);
    v79 = MiPrepareAttachThread(v11, &v11[2].ReadyListHead.Blink, v13, v12);
    MiReleaseSpinLockExclusive(&dword_140E37180, v14);
    if ( !v79 )
      goto LABEL_53;
    memset(&v94[3], 0, 48);
    KiStackAttachProcess((ULONG_PTR)v11);
    v5 = 0LL;
  }
  *(_QWORD *)(v9 + 312) = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
LABEL_6:
  v15 = *(_QWORD *)(v9 + 312);
  v95[0] = 0LL;
  v95[5] = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  if ( v15 > 1 )
    *(_QWORD *)(v9 + 312) = (unsigned int)MiReplenishSlabAllocator(v15, 16LL, 0LL) == 0;
  if ( !*(_QWORD *)(v9 + 296) )
    *(_QWORD *)(v9 + 296) = MiAllocateCombineBlock(v4);
  v16 = 0;
  v83 = 0LL;
  v71 = 0;
  v17 = 0;
  v18 = MiLockWorkingSetShared(v3);
  v20 = v18;
  v73 = v18;
  if ( *(_QWORD *)(v9 + 296) && (!v11 || (unsigned int)MiProcessSuitableForCombining(v11, v19, v18)) )
  {
    while ( 1 )
    {
      v21 = 0;
      v81 = (__int64)v10;
      v22 = 0;
      if ( !v17 )
        v22 = v75 + 1;
      v75 = v22;
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
        ++v74;
LABEL_32:
        v30 = v96;
        v5 = v76;
        if ( v96 )
        {
          do
          {
            v31 = (_QWORD *)*v30;
            if ( (unsigned int)MiCrcStillIntact(v9, v76, v30, 2LL) )
            {
              *v30 = v10;
              v10 = v30;
            }
            v30 = v31;
          }
          while ( v31 );
        }
        v32 = v97;
        v96 = 0LL;
        if ( v97 )
        {
          do
          {
            v33 = (_QWORD *)*v32;
            if ( (unsigned int)MiCrcStillIntact(v9, v76, v32, 3LL) )
            {
              *v32 = v10;
              v10 = v32;
            }
            v32 = v33;
          }
          while ( v33 );
        }
        v97 = 0LL;
        if ( v76 )
        {
          *(_DWORD *)(v76 + 20) &= ~0x80u;
          MiFlushTbList(v76, v19, v20);
          MiReleaseProcessorFlushList();
          v5 = 0LL;
          v76 = 0LL;
          v77 = 0LL;
        }
        if ( v83 )
          MiUnlockPageTable(v3, v83);
        MiUnlockWorkingSetShared(v3, v73);
        MiFreeDeferredCrcPages(v95);
        if ( !v10 )
        {
          KiLeaveCriticalRegionUnsafe(CurrentThread);
          v11 = v84;
          goto LABEL_50;
        }
        v11 = v84;
        v4 = v91;
        goto LABEL_6;
      }
      if ( v21 )
        goto LABEL_32;
      v20 = 0x7FFFFFFFF8LL;
      v23 = (_QWORD *)*v10;
      v72 = (_QWORD *)*v10;
      v80 = v10[2];
      v90 = v10[1];
      v19 = 0xFFFFF68000000000uLL;
      v24 = ((v80 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v25 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v83 != v25 )
      {
        if ( v83 )
        {
          v71 = 1;
          v17 = 0;
          goto LABEL_30;
        }
        valid = MiLockLowestValidPageTableEx(v3, v24, v93, 0LL);
        v83 = valid;
        if ( valid != v25 )
        {
          MiUnlockPageTable(v3, valid);
          v83 = 0LL;
          goto LABEL_28;
        }
      }
      v26 = MiReplenishCombineResources(v9);
      if ( v26 < 0 )
      {
        if ( v26 == -1073741267 )
          v23 = v10;
        v72 = v23;
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
            v38 = MI_READ_PTE_LOCK_FREE(v24);
            v39 = v38;
            if ( (v38 & 0x800) == 0 )
              goto LABEL_28;
            if ( MiInvalidPteConforms(v38) )
            {
              if ( qword_140E2D940 )
              {
                if ( (v39 & 0x10) != 0 )
                  v40 &= ~0x10uLL;
                else
                  v40 = v39 & ~qword_140E2D940;
              }
              v41 = (v40 >> 12) & 0xFFFFFFFFFFLL;
              v42 = 48 * v41 - 0x220000000000LL;
              if ( v41 <= qword_140E2D9A0 && (*(_QWORD *)(48 * v41 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
              {
                v43 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v42 + 24), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v43 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v41) )
                    {
                      HvlNotifyLongSpinWait(v43);
                    }
                    else
                    {
                      _mm_pause();
                    }
                  }
                  while ( *(__int64 *)(v42 + 24) < 0 );
                }
                if ( MI_READ_PTE_LOCK_FREE(v24) == v39 )
                {
                  if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v42 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
                  {
                    v42 = MiLockSpecialPurposeMemoryCachedPage(v42, 0LL);
                    if ( !v42 )
                      goto LABEL_28;
                  }
                  if ( (*(_QWORD *)(v42 + 8) | 0x8000000000000000uLL) != v24
                    && (*(_QWORD *)(v42 + 40) & 0x10000000000LL) == 0 )
                  {
                    KeBugCheckEx(0x1Au, 0x411uLL, v24, v39, *(_QWORD *)(v42 + 8));
                  }
                  v17 = 0;
                  v44 = v42;
                  if ( v42 )
                  {
                    v28 = 0xAAAAAAAAAAAAAAABuLL * ((v42 + 0x220000000000LL) >> 4);
                    goto LABEL_83;
                  }
                  break;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
            }
          }
        }
LABEL_29:
        v10 = v72;
        goto LABEL_30;
      }
      v28 = (v27 >> 12) & 0xFFFFFFFFFFLL;
      if ( v28 > qword_140E2D9A0 )
        goto LABEL_28;
      v29 = 6 * v28;
      if ( (*(_QWORD *)(48 * v28 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
        goto LABEL_28;
      v44 = 48 * v28 - 0x220000000000LL;
      v60 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v60 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v29) )
          {
            HvlNotifyLongSpinWait(v60);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v44 + 24) < 0 );
      }
LABEL_83:
      v45 = MiCombineCandidate(v91, v87, (_QWORD *)v44);
      v46 = v45;
      if ( !v45
        || (*(_QWORD *)(v9 + 144) = v28,
            *(_DWORD *)(v9 + 152) = v45,
            v85 = *(_QWORD *)(v44 + 16) >> 5,
            v47 = *(_QWORD *)(v81 + 24),
            *(_DWORD *)(v81 + 32) ^= ((unsigned __int8)v85 ^ (unsigned __int8)*(_DWORD *)(v81 + 32)) & 0x1F,
            v89 = v47,
            (unsigned int)MiPageToNode(v28) != a3) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_28;
      }
      v17 = 0;
      v48 = *(_BYTE *)(v44 + 34) & 7;
      if ( v48 == 6 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v24 != (*(_QWORD *)(v44 + 8) | 0x8000000000000000uLL)
          || *(__int64 *)(v44 + 40) < 0
          || (*(_QWORD *)(v44 + 40) & 0x10000000000LL) != 0
          || (*(_DWORD *)(v44 + 32) & 0x8000000) != 0
          || (*(_QWORD *)(v44 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL
          || (MiGetWsleContents(0x3FFFFFFFFELL, (__int64)(v24 << 25) >> 16) & 0xF) == 8
          || (unsigned __int16)*(_DWORD *)(v44 + 32) != 1 )
        {
          goto LABEL_29;
        }
        Address = 0LL;
        if ( v46 == 1 )
        {
          MiLockVadTree(1LL);
          Address = MiLocateAddress(v80);
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
          if ( !Address
            || MiVadPageSizes[(*(_DWORD *)(Address + 48) >> 19) & 3] == 16
            || !(unsigned int)MiVadSupportsPrivateCommit(Address) )
          {
            goto LABEL_28;
          }
        }
        v50 = 4LL;
        if ( (v27 & 0x42) != 0 )
        {
          if ( v74 >= 8 )
          {
            MiMakeCombineCandidateClean(v24, Address);
            MiFlushSingleTbEntry(v80, v46 != 1, 10);
          }
          else
          {
            v50 = 2LL;
          }
          if ( v50 != 4 )
            goto LABEL_105;
          v51 = v85;
          v19 = v90;
        }
        else
        {
          v19 = v90;
          v51 = v85;
          if ( v90 == qword_140E37128 && (v85 & 0x18) == 0 && (v27 & 0x20) != 0 && v74 < 3 )
          {
            v50 = 3LL;
LABEL_105:
            v52 = v76;
            if ( v76 )
              goto LABEL_106;
            ProcessorFlushList = v77;
            if ( !v77 )
            {
              ProcessorFlushList = MiGetProcessorFlushList();
              v77 = ProcessorFlushList;
            }
            *(_DWORD *)(ProcessorFlushList + 16) = 0;
            *(_DWORD *)(ProcessorFlushList + 20) = 128;
            *(_QWORD *)ProcessorFlushList = v78;
            v76 = ProcessorFlushList;
            *(_BYTE *)(ProcessorFlushList + 24) = (*(_DWORD *)(v78 + 184) & 0x800) != 0;
            if ( (*(_DWORD *)(v78 + 184) & 0xF) != 0
              || (struct _LIST_ENTRY **)v78 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
            {
              if ( (*(_DWORD *)(v78 + 184) & 0xF) == 0 )
              {
                v68 = 1;
LABEL_146:
                *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
                *(_DWORD *)(ProcessorFlushList + 8) = v68;
                v52 = ProcessorFlushList;
                *(_WORD *)(ProcessorFlushList + 25) = 0;
                *(_DWORD *)(ProcessorFlushList + 28) = 0;
                *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
                *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
LABEL_106:
                MiInsertTbFlushEntry(v52, v80, 1LL, 0LL);
                v53 = &v95[5 * v50];
                *(_QWORD *)v81 = *v53;
                *v53 = v81;
                goto LABEL_28;
              }
            }
            else
            {
              *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
            }
            v68 = 0;
            goto LABEL_146;
          }
        }
        if ( v19 == qword_140E37128 && (unsigned int)MiPageMightBeZero(v78, v44, v24) )
        {
          v55 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v55 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v54) )
              {
                HvlNotifyLongSpinWait(v55);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v44 + 24) < 0 );
          }
          IsZero = MiConfirmPageIsZero(v44);
          _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( IsZero )
          {
            v57 = v77;
            if ( v77 )
            {
              v58 = 0;
            }
            else
            {
              v77 = MiGetProcessorFlushList();
              v58 = 1;
              v57 = v77;
            }
            *(_DWORD *)(v57 + 4152) = 2;
            *(_DWORD *)(v57 + 4156) = 1;
            *(_QWORD *)(v57 + 4136) = v78;
            *(_BYTE *)(v57 + 4160) = (*(_DWORD *)(v78 + 184) & 0x800) != 0;
            if ( (*(_DWORD *)(v78 + 184) & 0xF) != 0
              || (struct _LIST_ENTRY **)v78 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
            {
              if ( (*(_DWORD *)(v78 + 184) & 0xF) == 0 )
              {
                v59 = 1;
                goto LABEL_119;
              }
            }
            else
            {
              *(_DWORD *)(v57 + 4152) |= 9u;
            }
            v59 = 0;
LABEL_119:
            *(_DWORD *)(v57 + 4152) &= 0xFFFFFFDB;
            *(_DWORD *)(v57 + 4144) = v59;
            *(_WORD *)(v57 + 4161) = 0;
            *(_DWORD *)(v57 + 4164) = 0;
            *(_QWORD *)(v57 + 4168) = 0LL;
            *(_QWORD *)(v57 + 4176) = 0LL;
            MiInsertTbFlushEntry(v57 + 4136, v80, 1LL, 0LL);
            MiFreeWsleList(v78, v57 + 4136, 0LL);
            if ( v58 )
            {
              MiReleaseProcessorFlushList();
              v77 = 0LL;
            }
            ++v88;
            ++v86[1];
LABEL_28:
            v17 = 0;
            goto LABEL_29;
          }
        }
        v61 = v89;
        if ( v89 == qword_140E2FBD0 || v46 != 1 )
        {
          v62 = a1;
        }
        else
        {
          if ( v89 != *(_QWORD *)(v78 + 864) )
            goto LABEL_28;
          v19 = (unsigned __int64)v84;
          if ( (HIDWORD(v84[4].ThreadListHead.Flink) & 0x1000) != 0 )
            goto LABEL_28;
          v62 = a1;
          ActiveProcessors_high = HIDWORD(v84[4].ActiveProcessors);
          v64 = *(_DWORD *)(a1 + 288);
          if ( ActiveProcessors_high != 1
            && ActiveProcessors_high != v64
            && (ActiveProcessors_high >= 2
             || _InterlockedCompareExchange((volatile signed __int32 *)&v84[4].ActiveProcessors + 1, v64, 0)) )
          {
            goto LABEL_28;
          }
        }
        v17 = 0;
        if ( (v51 & 0x18) != 0 )
        {
          v17 = 1;
          *(_QWORD *)(v62 + 96) = MiGetUltraMapping(v62 + 256, 3uLL, 2LL, 4);
          goto LABEL_135;
        }
      }
      else
      {
        v62 = a1;
        v51 = v85;
        v61 = v89;
      }
      *(_QWORD *)(v62 + 96) = MiGetUltraMapping(v62 + 256, 3uLL, 2LL, 4);
      if ( v48 != 6 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v61 != qword_140E2FBD0
          && v46 == 1
          && (v61 != MiGetCombineDomain(1LL, v78)
           || (HIDWORD(v84[4].ThreadListHead.Flink) & 0x1000) != 0
           || !(unsigned int)MiCheckProcessCombineSequence(v84, *(unsigned int *)(v62 + 288))) )
        {
          *(_QWORD *)(v62 + 96) = 0LL;
          goto LABEL_29;
        }
        v17 = (v51 & 0x18) != 0;
        v66 = MiConvertStandbyToProto((__int64 *)v62, v81);
LABEL_157:
        *(_QWORD *)(v62 + 96) = 0LL;
        if ( v66 < 0 )
          goto LABEL_29;
        goto LABEL_138;
      }
LABEL_135:
      v65 = v76;
      if ( !v76 )
      {
        v69 = v77;
        if ( !v77 )
        {
          v69 = MiGetProcessorFlushList();
          v77 = v69;
        }
        v76 = v69;
        MiInitializeTbFlushList(v69, v78, *(_DWORD *)(v69 + 12), 0, 128);
        v65 = v70;
      }
      v66 = MiConvertPrivateToProto(v62, v81, v65);
      if ( v66 < 0 )
        goto LABEL_157;
      *(_QWORD *)v81 = v95[0];
      *(_QWORD *)(v62 + 96) = 0LL;
      v95[0] = v81;
LABEL_138:
      v10 = v72;
      ++v86[1];
      if ( v84 )
        _InterlockedDecrement64((volatile signed __int64 *)v84[1].Padding);
LABEL_30:
      v9 = a1;
      v16 = v71;
      v3 = v78;
      v5 = v83;
    }
    v71 = 0;
LABEL_20:
    v21 = 1;
    goto LABEL_21;
  }
  MiUnlockWorkingSetShared(v3, (unsigned __int8)v20);
  KiLeaveCriticalRegionUnsafe(CurrentThread);
LABEL_50:
  if ( v79 )
  {
    KeForceDetachProcess(v94, 0LL);
    MiAttachThreadDone(&v11[2].ReadyListHead.Blink);
  }
  v6 = v86;
LABEL_53:
  v35 = *(_QWORD *)(v9 + 304);
  if ( v35 )
  {
    MiReleaseFreshPage(v35);
    *(_QWORD *)(v9 + 304) = 0LL;
  }
  v36 = *(_QWORD *)(v9 + 296);
  if ( v36 )
  {
    *(_QWORD *)(v36 + 24) = 0LL;
    MiFreeCombineBlock(*(_QWORD *)(v9 + 296), 0LL);
    *(_QWORD *)(v9 + 296) = 0LL;
  }
  result = v88;
  *v6 += v88;
  return result;
}
