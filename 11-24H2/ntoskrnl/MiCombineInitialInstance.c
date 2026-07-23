/*
 * XREFs of MiCombineInitialInstance @ 0x140294F94
 * Callers:
 *     MiConvertPrivateToProto @ 0x140294520 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x1403F0D74 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiSetWsleProtection @ 0x140203240 (MiSetWsleProtection.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakePrototypePteDirect @ 0x140203600 (MiMakePrototypePteDirect.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewPage @ 0x140217188 (MiWriteValidPteNewPage.c)
 *     MiDiscardTransitionPteEx @ 0x1402188CC (MiDiscardTransitionPteEx.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x140219A20 (MiUpdateWorkingSetPrivateSize.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiFinalizePageAttribute @ 0x14024C240 (MiFinalizePageAttribute.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiCopyPfnEntryEx @ 0x140251B90 (MiCopyPfnEntryEx.c)
 *     MiTranslateCacheAttribute @ 0x14025330C (MiTranslateCacheAttribute.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1402697B0 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiTransferPageFileOwnership @ 0x1402697C8 (MiTransferPageFileOwnership.c)
 *     MiGetCloneCharges @ 0x140269B50 (MiGetCloneCharges.c)
 *     MiAbandonPrivatePfn @ 0x140269D68 (MiAbandonPrivatePfn.c)
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     MiDecrementCloneBlock @ 0x140294E14 (MiDecrementCloneBlock.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiPfnReferenceCountIsZero @ 0x140300260 (MiPfnReferenceCountIsZero.c)
 *     MiIdentifyPfn @ 0x1403113F0 (MiIdentifyPfn.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiMakeTransitionPte @ 0x140347DF0 (MiMakeTransitionPte.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiStandbyPageStillCombineCandidate @ 0x1403F136C (MiStandbyPageStillCombineCandidate.c)
 *     MiRecheckCombineVm @ 0x1403F1420 (MiRecheckCombineVm.c)
 *     MiMapSinglePage @ 0x1403F14B0 (MiMapSinglePage.c)
 *     MiComputeHash64 @ 0x14041CBD0 (MiComputeHash64.c)
 *     MiHashIsCommon @ 0x14044D5B4 (MiHashIsCommon.c)
 *     MiActivateCombineBlock @ 0x140462FC0 (MiActivateCombineBlock.c)
 *     MiWriteRepurposedTransitionPte @ 0x1404A19F0 (MiWriteRepurposedTransitionPte.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KeCopyPage @ 0x1406B43B0 (KeCopyPage.c)
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
  __int64 v12; // r9
  unsigned __int64 v13; // r8
  __int64 v14; // r8
  int v15; // r15d
  unsigned int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r13d
  __int64 v22; // r10
  ULONG_PTR v23; // r8
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r11
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r12
  ULONG_PTR v31; // rdx
  __int64 v32; // rcx
  int v33; // ebx
  __int64 v34; // r10
  __int64 v35; // rcx
  int v36; // edx
  __int64 v37; // rax
  BOOL v38; // r12d
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r14
  __int64 v46; // r14
  __int64 v47; // rbx
  __int64 v48; // r9
  __int64 v49; // rdx
  unsigned __int64 v50; // rbx
  int v51; // eax
  _QWORD *v52; // rdi
  unsigned __int64 v53; // rbx
  __int64 v54; // rcx
  __int64 v55; // r14
  __int64 v56; // r9
  unsigned int v58; // ebx
  unsigned int v59; // ebx
  unsigned int v60; // r15d
  __int64 v61; // rbx
  __int64 v62; // r8
  __int64 v63; // r9
  int v64; // edx
  _QWORD *v65; // rax
  __int64 PrototypePteDirect; // rax
  unsigned int v67; // r15d
  unsigned int v68; // [rsp+30h] [rbp-1D8h]
  int v69; // [rsp+30h] [rbp-1D8h]
  int v70; // [rsp+30h] [rbp-1D8h]
  __int64 v72; // [rsp+40h] [rbp-1C8h]
  __int64 v73; // [rsp+48h] [rbp-1C0h]
  unsigned int v74; // [rsp+50h] [rbp-1B8h]
  BOOL v75; // [rsp+50h] [rbp-1B8h]
  unsigned __int64 v76; // [rsp+58h] [rbp-1B0h]
  __int64 v77; // [rsp+60h] [rbp-1A8h]
  unsigned int v78; // [rsp+60h] [rbp-1A8h]
  unsigned int v80; // [rsp+68h] [rbp-1A0h]
  __int64 v81; // [rsp+70h] [rbp-198h] BYREF
  ULONG_PTR v82; // [rsp+78h] [rbp-190h]
  unsigned int v83; // [rsp+80h] [rbp-188h]
  __int64 v84; // [rsp+88h] [rbp-180h]
  ULONG_PTR v85; // [rsp+90h] [rbp-178h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-170h]
  unsigned __int64 v87; // [rsp+A0h] [rbp-168h]
  __int64 v88; // [rsp+A8h] [rbp-160h]
  __int64 v89; // [rsp+B0h] [rbp-158h]
  __int64 v90; // [rsp+B8h] [rbp-150h]
  unsigned __int64 v91; // [rsp+C0h] [rbp-148h]
  int *v92; // [rsp+C8h] [rbp-140h]
  __int64 v93; // [rsp+D0h] [rbp-138h]
  __int64 *v94; // [rsp+D8h] [rbp-130h]
  __int64 ContainingPageTable; // [rsp+E0h] [rbp-128h]
  __int64 v96; // [rsp+E8h] [rbp-120h]
  __int64 v97; // [rsp+F0h] [rbp-118h]
  __int64 v98; // [rsp+F8h] [rbp-110h]
  __int64 v99; // [rsp+100h] [rbp-108h]
  __int64 v100; // [rsp+108h] [rbp-100h]
  ULONG_PTR v101; // [rsp+110h] [rbp-F8h]
  ULONG_PTR v102; // [rsp+118h] [rbp-F0h]
  __int64 v103; // [rsp+120h] [rbp-E8h]
  _DWORD *v104; // [rsp+128h] [rbp-E0h]
  unsigned __int64 v105; // [rsp+130h] [rbp-D8h]
  __int64 v106; // [rsp+138h] [rbp-D0h]
  __int64 v107; // [rsp+140h] [rbp-C8h]
  __int64 v108; // [rsp+148h] [rbp-C0h]
  __int64 v109; // [rsp+150h] [rbp-B8h]
  __int64 v110; // [rsp+158h] [rbp-B0h]
  unsigned __int64 v111; // [rsp+160h] [rbp-A8h]
  unsigned __int64 v112; // [rsp+168h] [rbp-A0h]
  __int64 v113; // [rsp+170h] [rbp-98h]
  __int64 v114; // [rsp+178h] [rbp-90h]
  int *v115; // [rsp+180h] [rbp-88h]
  __int64 *v116; // [rsp+188h] [rbp-80h]
  __int64 *v117; // [rsp+190h] [rbp-78h]
  _QWORD *v118; // [rsp+198h] [rbp-70h]
  _QWORD *v119; // [rsp+1A0h] [rbp-68h]
  __int128 v120; // [rsp+1A8h] [rbp-60h] BYREF
  __int128 v121; // [rsp+1B8h] [rbp-50h]
  __int64 *v122; // [rsp+1C8h] [rbp-40h] BYREF
  int v123; // [rsp+1D0h] [rbp-38h]
  int v124; // [rsp+1D4h] [rbp-34h]

  v85 = a2;
  v109 = a1;
  v101 = a2;
  ContainingPageTable = a3;
  v120 = 0LL;
  v121 = 0LL;
  v118 = (_QWORD *)(a1 + 296);
  v73 = *(_QWORD *)(a1 + 296);
  v106 = v73;
  v81 = v73;
  v119 = (_QWORD *)(a1 + 304);
  v3 = *(_QWORD *)(a1 + 304);
  v91 = v3;
  v87 = v3;
  v94 = *(__int64 **)a1;
  v117 = v94;
  v68 = *(_DWORD *)(a1 + 140);
  v89 = *(_QWORD *)(a1 + 112);
  v113 = v89;
  v100 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(v89 + 174));
  v107 = v100;
  v72 = v100;
  v4 = *(_QWORD *)(a1 + 144);
  v93 = v4;
  v110 = v4;
  v5 = 48 * v4 - 0x220000000000LL;
  v97 = v5;
  v90 = v5;
  v6 = *(_QWORD *)(a1 + 96);
  v111 = v6;
  v99 = *v94;
  v108 = v99;
  v77 = v99;
  v7 = v6 + 4096;
  v112 = v6 + 4096;
  v122 = (__int64 *)(a2 + 16);
  v8 = (__int64 *)(((*(_QWORD *)(a2 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v82 = (ULONG_PTR)v8;
  v104 = (_DWORD *)(a2 + 32);
  v9 = *(_DWORD *)(a2 + 32) & 0x1F;
  v74 = v9;
  v10 = v3 + 0x220000000000LL;
  if ( a3 )
  {
    TransitionPte = *v8;
    v96 = *v8;
    MiMapSinglePage(v6, v4, 3221225488LL, 0LL);
    v103 = 56LL;
    v13 = 0xAAAAAAAAAAAAAAABuLL;
  }
  else
  {
    TransitionPte = MiMakeTransitionPte(0xAAAAAAAAAAAAAAABuLL * (v10 >> 4), v9);
    v96 = TransitionPte;
    v103 = v12 + 72;
  }
  v114 = v73 + 32;
  BugCheckParameter2 = v73 + 32;
  v98 = (v73 + 32) & 0x7FFFFFFFFFFFFFFFLL;
  *(_OWORD *)(v73 + 32) = 0LL;
  *(_OWORD *)(v73 + 48) = 0LL;
  v116 = (__int64 *)(v3 + 16);
  MiSetOriginalPtePfnFromFreeList(v3 + 16, (v73 + 32) & 0x7FFFFFFFFFFFFFFFLL, v13, v12);
  v88 = v14 * (v10 >> 4);
  v92 = (int *)(v5 + 32);
  v15 = (unsigned __int8)BYTE2(*(_DWORD *)(v5 + 32)) >> 6;
  v115 = (int *)(v3 + 32);
  if ( (unsigned __int8)BYTE2(*(_DWORD *)(v3 + 32)) >> 6 != v15 )
    MiChangePageAttribute(v3, v15);
  v16 = MiTranslateCacheAttribute(v15);
  LODWORD(v84) = v16;
  MiMapSinglePage(v6 + 4096, v88, 1073741840LL, 0LL);
  v21 = 1;
  if ( a3 )
  {
    KeCopyPage(v6 + 4096, v6, v16);
LABEL_7:
    v22 = a3;
    v23 = v85;
    v24 = a1;
    goto LABEL_8;
  }
  v83 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
    {
      v67 = v83 + 1;
      v83 = v67;
      if ( (v67 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v18, v17, v19, v20) )
      {
        HvlNotifyLongSpinWait(v67);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  if ( (**(_QWORD **)v103 & 1) == 0
    || !(unsigned int)MiStandbyPageStillCombineCandidate(v5, v72, v82, v74)
    || !(unsigned int)MiRecheckCombineVm(v94, v68, v5, v89) )
  {
    v21 = 0;
    goto LABEL_7;
  }
  KeCopyPage(v6 + 4096, v6, (unsigned int)v84);
  v24 = a1;
  v23 = v85;
  v22 = 0LL;
LABEL_8:
  if ( v22 )
  {
    v102 = CLFS_LSN_NULL_EXT;
    *(_QWORD *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  }
  if ( v21 )
  {
    v25 = MiComputeHash64(v7, v17, v23, 0xFFFFF68000000000uLL);
    if ( v25 == v27 )
    {
      if ( *(_QWORD *)(v26 + 24) == qword_140E2FF50 )
        v21 = (unsigned int)MiHashIsCommon(v24, v27, v7) != 0 ? v21 : 0;
    }
    else
    {
      v21 = 0;
    }
    v22 = a3;
  }
  v101 = CLFS_LSN_NULL_EXT;
  *(_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  if ( v21 )
  {
    ContainingPageTable = MiGetContainingPageTable(BugCheckParameter2);
    v84 = 48 * ContainingPageTable - 0x220000000000LL;
    v30 = v73;
    *(_QWORD *)(v73 + 48) = *v104 & 0x1F;
    v31 = v85;
    *(_QWORD *)(v73 + 24) = *(_QWORD *)(v85 + 8);
    v32 = *(_QWORD *)(v31 + 24);
    *(_QWORD *)(v73 + 64) = v32;
    v33 = 0;
    if ( v34 )
    {
      LODWORD(v87) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        do
        {
          v60 = v87 + 1;
          LODWORD(v87) = v60;
          if ( (v60 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v32, v31, v28, v29) )
          {
            HvlNotifyLongSpinWait(v60);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
      v35 = 0x3FFFFFFFFFFFFFFFLL;
      if ( (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned __int16)*v92 != 1 )
      {
        v33 = -1073741800;
        v37 = v72;
LABEL_27:
        if ( v33 >= 0 )
        {
          *(_QWORD *)(v30 + 56) = 1LL;
          v38 = v77 != v37;
          v39 = a3;
          if ( a3 )
          {
            v35 = (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0;
            v75 = (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
            {
              MiIdentifyPfn(v93, &v120);
              v39 = a3;
            }
            TransitionPte = *(_QWORD *)v82;
            if ( (*(_QWORD *)v82 & 0x42) != 0 )
            {
              TransitionPte &= 0xFFFFFFFFFFFFFFBDuLL;
              *(_DWORD *)(v39 + 20) |= 0xAu;
            }
          }
          else
          {
            v75 = 0;
          }
          v78 = 0;
          v40 = v84;
LABEL_31:
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) )
          {
            *(_QWORD *)(v40 + 24) = (*(_QWORD *)(v40 + 24) + 1LL) ^ (*(_QWORD *)(v40 + 24) ^ (*(_QWORD *)(v40 + 24) + 1LL)) & 0xC000000000000000uLL;
            _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v76 = MiAbandonPrivatePfn(v5, v38);
            v80 = 0;
            v45 = v91;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v45 + 24), 0x3FuLL) )
            {
              do
              {
                v59 = v80 + 1;
                v80 = v59;
                if ( (v59 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v42, v41, v43, v44) )
                {
                  HvlNotifyLongSpinWait(v59);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v45 + 24) < 0 );
            }
            MiFinalizePageAttribute(v45, (unsigned __int8)BYTE2(*v92) >> 6, 1LL);
            v46 = v97;
            v47 = v91;
            MiCopyPfnEntryEx(v91, v97);
            if ( (unsigned int)MiGetPfnPriority(v47) < 5 )
            {
              v69 = *v115;
              HIBYTE(v69) = HIBYTE(*v115) & 0xF8 | 5;
              *(_DWORD *)(v47 + 32) = v69;
            }
            *(_QWORD *)(v47 + 8) = v98;
            *(_QWORD *)(v47 + 40) |= 0x8000000000000000uLL;
            MiSetPfnContainingFrame(v47, ContainingPageTable);
            MI_MAKE_PROTECT_WRITE_COPY(v116);
            if ( a3 )
            {
              MiTransferPageFileOwnership(v47, v82);
              v49 = v90;
            }
            else
            {
              *(_QWORD *)(v47 + 24) &= 0xC000000000000000uLL;
              v65 = (_QWORD *)BugCheckParameter2;
              *(_QWORD *)BugCheckParameter2 = 0LL;
              v104 = (_DWORD *)TransitionPte;
              *v65 = TransitionPte;
              PrototypePteDirect = MiMakePrototypePteDirect((__int64)v65);
              MiWriteRepurposedTransitionPte(v46, PrototypePteDirect | 0x800);
              *(_QWORD *)(v46 + 24) |= 0x4000000000000000uLL;
              MiTransferPageFileOwnership(v47, v82);
              MiPfnReferenceCountIsZero(v47, v88);
              v49 = v46;
              v90 = v46;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v99 == v100 && (*(_DWORD *)(v46 + 16) & 4) != 0 )
            {
              *(_QWORD *)(v46 + 16) &= ~4uLL;
              if ( v76 )
                v76 &= ~4uLL;
            }
            if ( a3 )
            {
              v50 = (v88 << 12) ^ (TransitionPte ^ (v88 << 12)) & 0xFFF0000000000FFFuLL;
              v51 = *(_DWORD *)(a3 + 20) | 0x40;
              *(_DWORD *)(a3 + 20) = v51;
              if ( (v50 & 0x800) != 0 )
              {
                v50 = v50 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
                *(_DWORD *)(a3 + 20) = v51 | 0x20;
              }
              MiWriteValidPteNewPage((volatile signed __int64 *)v82, v50, 0LL, v48);
              v105 = v50;
              if ( !_bittest64(&MiFlags, 0x24u) || (v50 & 0x20) != 0 )
              {
                v52 = (_QWORD *)BugCheckParameter2;
              }
              else
              {
                v52 = (_QWORD *)BugCheckParameter2;
                if ( BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
                  MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, v50, 128LL);
              }
              *v52 = v50;
              *(_QWORD *)(v46 + 24) |= 0x4000000000000000uLL;
              v70 = *v92;
              BYTE2(v70) = HIWORD(*v92) | 7;
              *(_DWORD *)(v46 + 32) = v70;
              _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v53 = *v122 & 0xFFFFFFFFFFFFF000uLL;
              *v122 = v46;
              MiInsertTbFlushEntry(a3, v53, 1LL, 0);
              v55 = v89;
              if ( (*(_DWORD *)(v89 + 184) & 0xF) == 0 )
                MiSetWsleProtection(v54, v53, 0LL);
              MiUpdateWorkingSetPrivateSize(v55, v53, 0xFFFFFFFFFFFFFFFFuLL, 0);
              if ( v75 )
              {
                *((_QWORD *)&v121 + 1) = v52;
                v122 = (__int64 *)&v120;
                v123 = 32;
                v124 = 0;
                EtwTraceKernelEvent((int)&v122, 1, 0x28000001u, 634, 290462468);
              }
            }
            else
            {
              v61 = *(_QWORD *)(v46 + 40);
              *(_QWORD *)(v46 + 24) = *(_QWORD *)(v49 + 24) & 0xC000000000000000uLL;
              MiPfnReferenceCountIsZero(v46, v93);
              _InterlockedAnd64((volatile signed __int64 *)(v90 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiLockAndDecrementShareCount(48 * (v61 & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2LL, v62, v63);
            }
            if ( v76 )
              MiReleasePageFileInfo(v72, v76, 1LL, v56);
            *v118 = 0LL;
            *v119 = 0LL;
            MiActivateCombineBlock(v94, v73);
            return 0LL;
          }
          while ( 1 )
          {
            v58 = v78 + 1;
            v78 = v58;
            if ( (v58 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
            {
              if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v35, v40, v28, v29) )
              {
                HvlNotifyLongSpinWait(v58);
                v40 = v84;
                goto LABEL_58;
              }
              v40 = v84;
            }
            _mm_pause();
LABEL_58:
            if ( *(__int64 *)(v40 + 24) >= 0 )
              goto LABEL_31;
          }
        }
LABEL_87:
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return (unsigned int)v33;
      }
      v36 = 0;
      if ( v72 != v77 && !*(_QWORD *)(v81 + 40) )
        v36 = 5;
      if ( !v36 || (unsigned int)MiGetCloneCharges(v77, v36, v28, v29) )
      {
        v37 = v72;
        if ( v72 == v77 )
        {
LABEL_26:
          v30 = v73;
          goto LABEL_27;
        }
        ++*(_QWORD *)(v81 + 40);
LABEL_25:
        v37 = v72;
        goto LABEL_26;
      }
    }
    else
    {
      v64 = 0;
      if ( v72 != v77 && !*(_QWORD *)(v81 + 40) )
        v64 = 5;
      if ( v64 && !(unsigned int)MiGetCloneCharges(v77, v64, v28, v29) )
      {
        v33 = -1073741800;
        goto LABEL_87;
      }
      if ( v72 != v77 )
        ++*(_QWORD *)(v81 + 40);
      if ( (MiUnlinkPageFromListEx(v5) & 3) == 0 )
        goto LABEL_25;
      LODWORD(v81) = 0;
      MiDiscardTransitionPteEx(v5);
      *(_QWORD *)(v73 + 56) = 1LL;
      MiDecrementCloneBlock(v77, v89, v114, 4LL, &v81);
    }
    v33 = -1073741800;
    goto LABEL_25;
  }
  if ( !v22 )
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 3221225496LL;
}
