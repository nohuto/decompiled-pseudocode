/*
 * XREFs of MiCombineInitialInstance @ 0x1402CE290
 * Callers:
 *     MiConvertStandbyToProto @ 0x140224810 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14023ACDC (MiConvertPrivateToProto.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiPfnReferenceCountIsZero @ 0x14021ADE0 (MiPfnReferenceCountIsZero.c)
 *     MiIdentifyPfn @ 0x140221170 (MiIdentifyPfn.c)
 *     MiStandbyPageStillCombineCandidate @ 0x140224D58 (MiStandbyPageStillCombineCandidate.c)
 *     MiRecheckCombineVm @ 0x140224E0C (MiRecheckCombineVm.c)
 *     MiDecrementCloneBlock @ 0x140224FE8 (MiDecrementCloneBlock.c)
 *     MiMapSinglePage @ 0x140225164 (MiMapSinglePage.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiFinalizePageAttribute @ 0x14024DDE0 (MiFinalizePageAttribute.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     MiActivateCombineBlock @ 0x1402A6830 (MiActivateCombineBlock.c)
 *     MiMakePrototypePteDirect @ 0x1402A69A0 (MiMakePrototypePteDirect.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiDiscardTransitionPteEx @ 0x1402C5640 (MiDiscardTransitionPteEx.c)
 *     MiTranslateCacheAttribute @ 0x1402C7A1C (MiTranslateCacheAttribute.c)
 *     MiCopyPfnEntryEx @ 0x1402C7CF0 (MiCopyPfnEntryEx.c)
 *     MiAbandonPrivatePfn @ 0x1402CC258 (MiAbandonPrivatePfn.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1402CE0D4 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiTransferPageFileOwnership @ 0x1402CE0EC (MiTransferPageFileOwnership.c)
 *     MiComputeHash64 @ 0x1402CF1C0 (MiComputeHash64.c)
 *     MiGetCloneCharges @ 0x1402CF39C (MiGetCloneCharges.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1402FD330 (MiUpdateWorkingSetPrivateSize.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeTransitionPte @ 0x140339DF0 (MiMakeTransitionPte.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSetWsleProtection @ 0x14037D510 (MiSetWsleProtection.c)
 *     MiWriteValidPteNewPage @ 0x1403FF2B0 (MiWriteValidPteNewPage.c)
 *     MiHashIsCommon @ 0x1404578D4 (MiHashIsCommon.c)
 *     MiWriteRepurposedTransitionPte @ 0x1404A6730 (MiWriteRepurposedTransitionPte.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     KeCopyPage @ 0x1406A8140 (KeCopyPage.c)
 */

__int64 __fastcall MiCombineInitialInstance(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // r10
  __int64 v5; // r14
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbx
  __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 TransitionPte; // rdi
  __int64 v12; // r8
  int v13; // r15d
  unsigned int v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r13d
  __int64 v18; // r10
  ULONG_PTR v19; // r8
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r11
  __int64 v24; // r12
  ULONG_PTR v25; // rdx
  __int64 v26; // rcx
  int v27; // ebx
  __int64 v28; // r10
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  BOOL v32; // r12d
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r14
  __int64 v37; // r14
  __int64 v38; // rbx
  __int64 v39; // rdx
  ULONG_PTR v40; // rbx
  int v41; // eax
  _QWORD *v42; // rdi
  unsigned __int64 v43; // rbx
  __int64 v44; // rcx
  unsigned __int16 *v45; // r14
  unsigned int v47; // ebx
  unsigned int v48; // ebx
  __int64 v49; // rbx
  unsigned int v50; // r15d
  __int64 v51; // r9
  __int64 v52; // rdx
  _QWORD *v53; // rax
  __int64 PrototypePteDirect; // rax
  unsigned int v55; // r15d
  int v56; // [rsp+30h] [rbp-1D8h]
  int v57; // [rsp+30h] [rbp-1D8h]
  int v58; // [rsp+30h] [rbp-1D8h]
  __int64 v60; // [rsp+40h] [rbp-1C8h]
  __int64 v61; // [rsp+48h] [rbp-1C0h]
  int v62; // [rsp+50h] [rbp-1B8h]
  BOOL v63; // [rsp+50h] [rbp-1B8h]
  unsigned __int64 v64; // [rsp+58h] [rbp-1B0h]
  __int64 v65; // [rsp+60h] [rbp-1A8h]
  unsigned int v66; // [rsp+60h] [rbp-1A8h]
  unsigned int v68; // [rsp+68h] [rbp-1A0h]
  __int64 v69; // [rsp+70h] [rbp-198h] BYREF
  ULONG_PTR v70; // [rsp+78h] [rbp-190h]
  unsigned int v71; // [rsp+80h] [rbp-188h]
  __int64 v72; // [rsp+88h] [rbp-180h]
  ULONG_PTR v73; // [rsp+90h] [rbp-178h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-170h]
  unsigned __int64 v75; // [rsp+A0h] [rbp-168h]
  __int64 v76; // [rsp+A8h] [rbp-160h]
  unsigned __int16 *v77; // [rsp+B0h] [rbp-158h]
  __int64 v78; // [rsp+B8h] [rbp-150h]
  unsigned __int64 v79; // [rsp+C0h] [rbp-148h]
  int *v80; // [rsp+C8h] [rbp-140h]
  unsigned __int64 v81; // [rsp+D0h] [rbp-138h]
  _QWORD *v82; // [rsp+D8h] [rbp-130h]
  __int64 ContainingPageTable; // [rsp+E0h] [rbp-128h]
  __int64 v84; // [rsp+E8h] [rbp-120h]
  __int64 v85; // [rsp+F0h] [rbp-118h]
  __int64 v86; // [rsp+F8h] [rbp-110h]
  __int64 v87; // [rsp+100h] [rbp-108h]
  __int64 v88; // [rsp+108h] [rbp-100h]
  ULONG_PTR v89; // [rsp+110h] [rbp-F8h]
  ULONG_PTR v90; // [rsp+118h] [rbp-F0h]
  __int64 v91; // [rsp+120h] [rbp-E8h]
  _DWORD *v92; // [rsp+128h] [rbp-E0h]
  ULONG_PTR v93; // [rsp+130h] [rbp-D8h]
  __int64 v94; // [rsp+138h] [rbp-D0h]
  __int64 v95; // [rsp+140h] [rbp-C8h]
  __int64 v96; // [rsp+148h] [rbp-C0h]
  __int64 v97; // [rsp+150h] [rbp-B8h]
  __int64 v98; // [rsp+158h] [rbp-B0h]
  unsigned __int64 v99; // [rsp+160h] [rbp-A8h]
  unsigned __int64 v100; // [rsp+168h] [rbp-A0h]
  unsigned __int16 *v101; // [rsp+170h] [rbp-98h]
  __int64 v102; // [rsp+178h] [rbp-90h]
  int *v103; // [rsp+180h] [rbp-88h]
  __int64 *v104; // [rsp+188h] [rbp-80h]
  _QWORD *v105; // [rsp+190h] [rbp-78h]
  _QWORD *v106; // [rsp+198h] [rbp-70h]
  _QWORD *v107; // [rsp+1A0h] [rbp-68h]
  __int128 v108; // [rsp+1A8h] [rbp-60h] BYREF
  __int128 v109; // [rsp+1B8h] [rbp-50h]
  __int64 *v110; // [rsp+1C8h] [rbp-40h] BYREF
  int v111; // [rsp+1D0h] [rbp-38h]
  int v112; // [rsp+1D4h] [rbp-34h]

  v73 = a2;
  v97 = a1;
  v89 = a2;
  ContainingPageTable = a3;
  v108 = 0LL;
  v109 = 0LL;
  v106 = (_QWORD *)(a1 + 296);
  v61 = *(_QWORD *)(a1 + 296);
  v94 = v61;
  v69 = v61;
  v107 = (_QWORD *)(a1 + 304);
  v3 = *(_QWORD *)(a1 + 304);
  v79 = v3;
  v75 = v3;
  v82 = *(_QWORD **)a1;
  v105 = v82;
  v56 = *(_DWORD *)(a1 + 140);
  v77 = *(unsigned __int16 **)(a1 + 112);
  v101 = v77;
  v88 = *((_QWORD *)qword_140E2FD48 + v77[87]);
  v95 = v88;
  v60 = v88;
  v4 = *(_QWORD *)(a1 + 144);
  v81 = v4;
  v98 = v4;
  v5 = 48 * v4 - 0x220000000000LL;
  v85 = v5;
  v78 = v5;
  v6 = *(_QWORD *)(a1 + 96);
  v99 = v6;
  v87 = *v82;
  v96 = v87;
  v65 = v87;
  v7 = v6 + 4096;
  v100 = v6 + 4096;
  v110 = (__int64 *)(a2 + 16);
  v8 = (__int64 *)(((*(_QWORD *)(a2 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v70 = (ULONG_PTR)v8;
  v92 = (_DWORD *)(a2 + 32);
  v9 = *(_DWORD *)(a2 + 32) & 0x1F;
  v62 = v9;
  v10 = v3 + 0x220000000000LL;
  if ( a3 )
  {
    TransitionPte = *v8;
    v84 = *v8;
    MiMapSinglePage(v6, v4, -1073741808, 0);
    v91 = 56LL;
  }
  else
  {
    TransitionPte = MiMakeTransitionPte(0xAAAAAAAAAAAAAAABuLL * (v10 >> 4), v9);
    v84 = TransitionPte;
    v91 = v51 + 72;
  }
  v102 = v61 + 32;
  BugCheckParameter2 = v61 + 32;
  v86 = (v61 + 32) & 0x7FFFFFFFFFFFFFFFLL;
  *(_OWORD *)(v61 + 32) = 0LL;
  *(_OWORD *)(v61 + 48) = 0LL;
  v104 = (__int64 *)(v3 + 16);
  MiSetOriginalPtePfnFromFreeList((__int64 *)(v3 + 16));
  v76 = v12 * (v10 >> 4);
  v80 = (int *)(v5 + 32);
  v13 = (unsigned __int8)BYTE2(*(_DWORD *)(v5 + 32)) >> 6;
  v103 = (int *)(v3 + 32);
  if ( (unsigned __int8)BYTE2(*(_DWORD *)(v3 + 32)) >> 6 != v13 )
    MiChangePageAttribute(v3, v13);
  v14 = MiTranslateCacheAttribute(v13);
  LODWORD(v72) = v14;
  MiMapSinglePage(v6 + 4096, v76, 1073741840, 0);
  v17 = 1;
  if ( a3 )
  {
    KeCopyPage(v6 + 4096, v6, v14);
LABEL_7:
    v18 = a3;
    v19 = v73;
    v20 = a1;
    goto LABEL_8;
  }
  v71 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
    {
      v55 = v71 + 1;
      v71 = v55;
      if ( (v55 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v16) )
      {
        HvlNotifyLongSpinWait(v55);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  if ( (**(_QWORD **)v91 & 1) == 0
    || !MiStandbyPageStillCombineCandidate(v5, v60, v70, v62)
    || !(unsigned int)MiRecheckCombineVm(v82, v56, (_QWORD *)v5, v77) )
  {
    v17 = 0;
    goto LABEL_7;
  }
  KeCopyPage(v6 + 4096, v6, (unsigned int)v72);
  v20 = a1;
  v19 = v73;
  v18 = 0LL;
LABEL_8:
  if ( v18 )
  {
    v90 = CLFS_LSN_NULL_EXT;
    *(_QWORD *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  }
  if ( v17 )
  {
    v21 = MiComputeHash64(v7, v15, v19, 0xFFFFF68000000000uLL);
    if ( v21 == v23 )
    {
      if ( *(_QWORD *)(v22 + 24) == qword_140E2FBD0 )
        v17 = (unsigned int)MiHashIsCommon(v20, v23, v7) != 0 ? v17 : 0;
    }
    else
    {
      v17 = 0;
    }
    v18 = a3;
  }
  v89 = CLFS_LSN_NULL_EXT;
  *(_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  if ( v17 )
  {
    ContainingPageTable = MiGetContainingPageTable(BugCheckParameter2);
    v72 = 48 * ContainingPageTable - 0x220000000000LL;
    v24 = v61;
    *(_QWORD *)(v61 + 48) = *v92 & 0x1F;
    v25 = v73;
    *(_QWORD *)(v61 + 24) = *(_QWORD *)(v73 + 8);
    v26 = *(_QWORD *)(v25 + 24);
    *(_QWORD *)(v61 + 64) = v26;
    v27 = 0;
    if ( v28 )
    {
      LODWORD(v75) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        do
        {
          v50 = v75 + 1;
          LODWORD(v75) = v50;
          if ( (v50 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v26) )
          {
            HvlNotifyLongSpinWait(v50);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
      v29 = 0x3FFFFFFFFFFFFFFFLL;
      if ( (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned __int16)*v80 != 1 )
      {
        v27 = -1073741800;
        v31 = v60;
LABEL_27:
        if ( v27 >= 0 )
        {
          *(_QWORD *)(v24 + 56) = 1LL;
          v32 = v65 != v31;
          v33 = a3;
          if ( a3 )
          {
            v29 = (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0;
            v63 = (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
            {
              MiIdentifyPfn(v81, (__int64 *)&v108);
              v33 = a3;
            }
            TransitionPte = *(_QWORD *)v70;
            if ( (*(_QWORD *)v70 & 0x42) != 0 )
            {
              TransitionPte &= 0xFFFFFFFFFFFFFFBDuLL;
              *(_DWORD *)(v33 + 20) |= 0xAu;
            }
          }
          else
          {
            v63 = 0;
          }
          v66 = 0;
          v34 = v72;
LABEL_31:
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
          {
            *(_QWORD *)(v34 + 24) = (*(_QWORD *)(v34 + 24) + 1LL) ^ (*(_QWORD *)(v34 + 24) ^ (*(_QWORD *)(v34 + 24) + 1LL)) & 0xC000000000000000uLL;
            _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v64 = MiAbandonPrivatePfn(v5, v32);
            v68 = 0;
            v36 = v79;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
            {
              do
              {
                v48 = v68 + 1;
                v68 = v48;
                if ( (v48 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v35) )
                {
                  HvlNotifyLongSpinWait(v48);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v36 + 24) < 0 );
            }
            MiFinalizePageAttribute(v36, (unsigned __int8)BYTE2(*v80) >> 6, 1LL);
            v37 = v85;
            v38 = v79;
            MiCopyPfnEntryEx(v79, v85);
            if ( (unsigned int)MiGetPfnPriority(v38) < 5 )
            {
              v58 = *v103;
              HIBYTE(v58) = HIBYTE(*v103) & 0xF8 | 5;
              *(_DWORD *)(v38 + 32) = v58;
            }
            *(_QWORD *)(v38 + 8) = v86;
            *(_QWORD *)(v38 + 40) |= 0x8000000000000000uLL;
            MiSetPfnContainingFrame(v38, ContainingPageTable);
            MI_MAKE_PROTECT_WRITE_COPY(v104);
            if ( a3 )
            {
              MiTransferPageFileOwnership(v38, v70);
              v39 = v78;
            }
            else
            {
              *(_QWORD *)(v38 + 24) &= 0xC000000000000000uLL;
              v53 = (_QWORD *)BugCheckParameter2;
              *(_QWORD *)BugCheckParameter2 = 0LL;
              v92 = (_DWORD *)TransitionPte;
              *v53 = TransitionPte;
              PrototypePteDirect = MiMakePrototypePteDirect((__int64)v53);
              MiWriteRepurposedTransitionPte(v37, PrototypePteDirect | 0x800);
              *(_QWORD *)(v37 + 24) |= 0x4000000000000000uLL;
              MiTransferPageFileOwnership(v38, v70);
              MiPfnReferenceCountIsZero(v38, v76);
              v39 = v37;
              v78 = v37;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v87 == v88 && (*(_DWORD *)(v37 + 16) & 4) != 0 )
            {
              *(_QWORD *)(v37 + 16) &= ~4uLL;
              if ( v64 )
                v64 &= ~4uLL;
            }
            if ( a3 )
            {
              v40 = (v76 << 12) ^ (TransitionPte ^ (v76 << 12)) & 0xFFF0000000000FFFuLL;
              v41 = *(_DWORD *)(a3 + 20) | 0x40;
              *(_DWORD *)(a3 + 20) = v41;
              if ( (v40 & 0x800) != 0 )
              {
                v40 = v40 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
                *(_DWORD *)(a3 + 20) = v41 | 0x20;
              }
              MiWriteValidPteNewPage(v70);
              v93 = v40;
              if ( !_bittest64(&MiFlags, 0x24u) || (v40 & 0x20) != 0 )
              {
                v42 = (_QWORD *)BugCheckParameter2;
              }
              else
              {
                v42 = (_QWORD *)BugCheckParameter2;
                if ( BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
                  MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, v40);
              }
              *v42 = v40;
              *(_QWORD *)(v37 + 24) |= 0x4000000000000000uLL;
              v57 = *v80;
              BYTE2(v57) = HIWORD(*v80) | 7;
              *(_DWORD *)(v37 + 32) = v57;
              _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v43 = *v110 & 0xFFFFFFFFFFFFF000uLL;
              *v110 = v37;
              MiInsertTbFlushEntry(a3, v43, 1LL, 0LL);
              v45 = v77;
              if ( (*((_DWORD *)v77 + 46) & 0xF) == 0 )
                MiSetWsleProtection(v44, v43, 0LL);
              MiUpdateWorkingSetPrivateSize(v45, v43, -1LL, 0LL);
              if ( v63 )
              {
                *((_QWORD *)&v109 + 1) = v42;
                v110 = (__int64 *)&v108;
                v111 = 32;
                v112 = 0;
                EtwTraceKernelEvent((int)&v110, 1, 0x28000001u, 634, 290462468);
              }
            }
            else
            {
              v49 = *(_QWORD *)(v37 + 40);
              *(_QWORD *)(v37 + 24) = *(_QWORD *)(v39 + 24) & 0xC000000000000000uLL;
              MiPfnReferenceCountIsZero(v37, v81);
              _InterlockedAnd64((volatile signed __int64 *)(v78 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiLockAndDecrementShareCount(48 * (v49 & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2);
            }
            if ( v64 )
              MiReleasePageFileInfo(v60, v64, 1);
            *v106 = 0LL;
            *v107 = 0LL;
            MiActivateCombineBlock((__int64)v82, (unsigned __int64 *)v61);
            return 0LL;
          }
          while ( 1 )
          {
            v47 = v66 + 1;
            v66 = v47;
            if ( (v47 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
            {
              if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v29) )
              {
                HvlNotifyLongSpinWait(v47);
                v34 = v72;
                goto LABEL_59;
              }
              v34 = v72;
            }
            _mm_pause();
LABEL_59:
            if ( *(__int64 *)(v34 + 24) >= 0 )
              goto LABEL_31;
          }
        }
LABEL_87:
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return (unsigned int)v27;
      }
      v30 = 0LL;
      if ( v60 != v65 && !*(_QWORD *)(v69 + 40) )
        v30 = 5LL;
      if ( !(_DWORD)v30 || (unsigned int)MiGetCloneCharges(v65, v30) )
      {
        v31 = v60;
        if ( v60 == v65 )
        {
LABEL_26:
          v24 = v61;
          goto LABEL_27;
        }
        ++*(_QWORD *)(v69 + 40);
LABEL_25:
        v31 = v60;
        goto LABEL_26;
      }
    }
    else
    {
      v52 = 0LL;
      if ( v60 != v65 && !*(_QWORD *)(v69 + 40) )
        v52 = 5LL;
      if ( (_DWORD)v52 && !(unsigned int)MiGetCloneCharges(v65, v52) )
      {
        v27 = -1073741800;
        goto LABEL_87;
      }
      if ( v60 != v65 )
        ++*(_QWORD *)(v69 + 40);
      if ( (MiUnlinkPageFromListEx(v5, 0) & 3) == 0 )
        goto LABEL_25;
      LODWORD(v69) = 0;
      MiDiscardTransitionPteEx(v5);
      *(_QWORD *)(v61 + 56) = 1LL;
      MiDecrementCloneBlock(v65, (__int64)v77, v102, 4, &v69);
    }
    v27 = -1073741800;
    goto LABEL_25;
  }
  if ( !v18 )
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 3221225496LL;
}
