/*
 * XREFs of MiCombineInitialInstance @ 0x14036C3E0
 * Callers:
 *     MiConvertPrivateToProto @ 0x1402F9768 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x140313ACC (MiConvertStandbyToProto.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiFinalizePageAttribute @ 0x14021F4F0 (MiFinalizePageAttribute.c)
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiCopyPfnEntryEx @ 0x1402247E0 (MiCopyPfnEntryEx.c)
 *     MiTranslateCacheAttribute @ 0x140225F5C (MiTranslateCacheAttribute.c)
 *     MiPfnReferenceCountIsZero @ 0x14022C950 (MiPfnReferenceCountIsZero.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSetWsleProtection @ 0x140232ACC (MiSetWsleProtection.c)
 *     MiMakePrototypePteDirect @ 0x1402331F0 (MiMakePrototypePteDirect.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1402C49A0 (MiUpdateWorkingSetPrivateSize.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1402C63C8 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiTransferPageFileOwnership @ 0x1402C63E0 (MiTransferPageFileOwnership.c)
 *     MiMakeTransitionPte @ 0x1402E67B0 (MiMakeTransitionPte.c)
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402F6568 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiDecrementCloneBlock @ 0x1402F9160 (MiDecrementCloneBlock.c)
 *     MiIdentifyPfn @ 0x140307510 (MiIdentifyPfn.c)
 *     MiStandbyPageStillCombineCandidate @ 0x140314020 (MiStandbyPageStillCombineCandidate.c)
 *     MiRecheckCombineVm @ 0x1403140D4 (MiRecheckCombineVm.c)
 *     MiMapSinglePage @ 0x140314164 (MiMapSinglePage.c)
 *     MiAbandonPrivatePfn @ 0x14036D268 (MiAbandonPrivatePfn.c)
 *     MiActivateCombineBlock @ 0x14036D3DC (MiActivateCombineBlock.c)
 *     MiComputeHash64 @ 0x14036D4E0 (MiComputeHash64.c)
 *     MiWriteRepurposedTransitionPte @ 0x14036D574 (MiWriteRepurposedTransitionPte.c)
 *     MiGetCloneCharges @ 0x14036E068 (MiGetCloneCharges.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 *     MiDiscardTransitionPteEx @ 0x1403A1C98 (MiDiscardTransitionPteEx.c)
 *     MiWriteValidPteNewPage @ 0x1403A28B8 (MiWriteValidPteNewPage.c)
 *     MiHashIsCommon @ 0x1404582A4 (MiHashIsCommon.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     KeCopyPage @ 0x1406B3410 (KeCopyPage.c)
 */

__int64 __fastcall MiCombineInitialInstance(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // r10
  __int64 v5; // r14
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbx
  __int64 *v8; // rcx
  int v9; // edx
  __int64 v10; // r15
  __int64 TransitionPte; // rdi
  __int64 v12; // r8
  int v13; // r15d
  unsigned int v14; // r15d
  __int64 v15; // rdx
  int v16; // r13d
  __int64 v17; // r10
  ULONG_PTR v18; // r8
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r11
  __int64 v23; // r12
  ULONG_PTR v24; // rdx
  int v25; // ebx
  __int64 v26; // r10
  __int64 v27; // rdx
  __int64 v28; // rax
  BOOL v29; // r12d
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r14
  ULONG_PTR v33; // r14
  __int64 v34; // rbx
  ULONG_PTR v35; // rdx
  ULONG_PTR v36; // rbx
  int v37; // eax
  _QWORD *v38; // rdi
  unsigned __int64 v39; // rbx
  __int64 v40; // rcx
  struct _LIST_ENTRY **v41; // r14
  unsigned int v43; // ebx
  unsigned int v44; // ebx
  unsigned int v45; // r15d
  __int64 v46; // rbx
  __int64 v47; // r9
  __int64 v48; // rdx
  _QWORD *v49; // rax
  __int64 PrototypePteDirect; // rax
  unsigned int v51; // r15d
  unsigned int v52; // [rsp+30h] [rbp-1D8h]
  int v53; // [rsp+30h] [rbp-1D8h]
  int v54; // [rsp+30h] [rbp-1D8h]
  __int64 v56; // [rsp+40h] [rbp-1C8h]
  __int64 v57; // [rsp+48h] [rbp-1C0h]
  int v58; // [rsp+50h] [rbp-1B8h]
  BOOL v59; // [rsp+50h] [rbp-1B8h]
  unsigned __int64 v60; // [rsp+58h] [rbp-1B0h]
  __int64 v61; // [rsp+60h] [rbp-1A8h]
  unsigned int v62; // [rsp+60h] [rbp-1A8h]
  unsigned int v64; // [rsp+68h] [rbp-1A0h]
  __int64 v65; // [rsp+70h] [rbp-198h] BYREF
  ULONG_PTR v66; // [rsp+78h] [rbp-190h]
  unsigned int v67; // [rsp+80h] [rbp-188h]
  __int64 v68; // [rsp+88h] [rbp-180h]
  ULONG_PTR v69; // [rsp+90h] [rbp-178h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-170h]
  unsigned __int64 v71; // [rsp+A0h] [rbp-168h]
  __int64 v72; // [rsp+A8h] [rbp-160h]
  struct _LIST_ENTRY **v73; // [rsp+B0h] [rbp-158h]
  ULONG_PTR v74; // [rsp+B8h] [rbp-150h]
  unsigned __int64 v75; // [rsp+C0h] [rbp-148h]
  int *v76; // [rsp+C8h] [rbp-140h]
  unsigned __int64 v77; // [rsp+D0h] [rbp-138h]
  _QWORD *v78; // [rsp+D8h] [rbp-130h]
  __int64 ContainingPageTable; // [rsp+E0h] [rbp-128h]
  __int64 v80; // [rsp+E8h] [rbp-120h]
  __int64 v81; // [rsp+F0h] [rbp-118h]
  __int64 v82; // [rsp+F8h] [rbp-110h]
  __int64 v83; // [rsp+100h] [rbp-108h]
  __int64 v84; // [rsp+108h] [rbp-100h]
  ULONG_PTR v85; // [rsp+110h] [rbp-F8h]
  ULONG_PTR v86; // [rsp+118h] [rbp-F0h]
  __int64 v87; // [rsp+120h] [rbp-E8h]
  _DWORD *v88; // [rsp+128h] [rbp-E0h]
  ULONG_PTR v89; // [rsp+130h] [rbp-D8h]
  __int64 v90; // [rsp+138h] [rbp-D0h]
  __int64 v91; // [rsp+140h] [rbp-C8h]
  __int64 v92; // [rsp+148h] [rbp-C0h]
  __int64 v93; // [rsp+150h] [rbp-B8h]
  __int64 v94; // [rsp+158h] [rbp-B0h]
  unsigned __int64 v95; // [rsp+160h] [rbp-A8h]
  unsigned __int64 v96; // [rsp+168h] [rbp-A0h]
  struct _LIST_ENTRY **v97; // [rsp+170h] [rbp-98h]
  __int64 v98; // [rsp+178h] [rbp-90h]
  int *v99; // [rsp+180h] [rbp-88h]
  __int64 *v100; // [rsp+188h] [rbp-80h]
  _QWORD *v101; // [rsp+190h] [rbp-78h]
  _QWORD *v102; // [rsp+198h] [rbp-70h]
  _QWORD *v103; // [rsp+1A0h] [rbp-68h]
  __int128 v104; // [rsp+1A8h] [rbp-60h] BYREF
  __int128 v105; // [rsp+1B8h] [rbp-50h]
  ULONG_PTR *v106; // [rsp+1C8h] [rbp-40h] BYREF
  int v107; // [rsp+1D0h] [rbp-38h]
  int v108; // [rsp+1D4h] [rbp-34h]

  v69 = a2;
  v93 = a1;
  v85 = a2;
  ContainingPageTable = a3;
  v104 = 0LL;
  v105 = 0LL;
  v102 = (_QWORD *)(a1 + 296);
  v57 = *(_QWORD *)(a1 + 296);
  v90 = v57;
  v65 = v57;
  v103 = (_QWORD *)(a1 + 304);
  v3 = *(_QWORD *)(a1 + 304);
  v75 = v3;
  v71 = v3;
  v78 = *(_QWORD **)a1;
  v101 = v78;
  v52 = *(_DWORD *)(a1 + 140);
  v73 = *(struct _LIST_ENTRY ***)(a1 + 112);
  v97 = v73;
  v84 = *((_QWORD *)qword_140E2FF88 + *((unsigned __int16 *)v73 + 87));
  v91 = v84;
  v56 = v84;
  v4 = *(_QWORD *)(a1 + 144);
  v77 = v4;
  v94 = v4;
  v5 = 48 * v4 - 0x220000000000LL;
  v81 = v5;
  v74 = v5;
  v6 = *(_QWORD *)(a1 + 96);
  v95 = v6;
  v83 = *v78;
  v92 = v83;
  v61 = v83;
  v7 = v6 + 4096;
  v96 = v6 + 4096;
  v106 = (ULONG_PTR *)(a2 + 16);
  v8 = (__int64 *)(((*(_QWORD *)(a2 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v66 = (ULONG_PTR)v8;
  v88 = (_DWORD *)(a2 + 32);
  v9 = *(_DWORD *)(a2 + 32) & 0x1F;
  v58 = v9;
  v10 = v3 + 0x220000000000LL;
  if ( a3 )
  {
    TransitionPte = *v8;
    v80 = *v8;
    MiMapSinglePage(v6, v4, -1073741808, 0);
    v87 = 56LL;
  }
  else
  {
    TransitionPte = MiMakeTransitionPte(0xAAAAAAAAAAAAAAABuLL * (v10 >> 4), v9);
    v80 = TransitionPte;
    v87 = v47 + 72;
  }
  v98 = v57 + 32;
  BugCheckParameter2 = v57 + 32;
  v82 = (v57 + 32) & 0x7FFFFFFFFFFFFFFFLL;
  *(_OWORD *)(v57 + 32) = 0LL;
  *(_OWORD *)(v57 + 48) = 0LL;
  v100 = (__int64 *)(v3 + 16);
  MiSetOriginalPtePfnFromFreeList((__int64 *)(v3 + 16));
  v72 = v12 * (v10 >> 4);
  v76 = (int *)(v5 + 32);
  v13 = (unsigned __int8)BYTE2(*(_DWORD *)(v5 + 32)) >> 6;
  v99 = (int *)(v3 + 32);
  if ( (unsigned __int8)BYTE2(*(_DWORD *)(v3 + 32)) >> 6 != v13 )
    MiChangePageAttribute(v3, v13);
  v14 = MiTranslateCacheAttribute(v13);
  LODWORD(v68) = v14;
  MiMapSinglePage(v6 + 4096, v72, 1073741840, 0);
  v16 = 1;
  if ( a3 )
  {
    KeCopyPage(v6 + 4096, v6, v14);
LABEL_7:
    v17 = a3;
    v18 = v69;
    v19 = a1;
    goto LABEL_8;
  }
  v67 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
    {
      v51 = v67 + 1;
      v67 = v51;
      if ( (v51 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v51);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  if ( (**(_QWORD **)v87 & 1) == 0
    || !MiStandbyPageStillCombineCandidate(v5, v56, v66, v58)
    || !(unsigned int)MiRecheckCombineVm(v78, v52, (_QWORD *)v5, v73) )
  {
    v16 = 0;
    goto LABEL_7;
  }
  KeCopyPage(v6 + 4096, v6, (unsigned int)v68);
  v19 = a1;
  v18 = v69;
  v17 = 0LL;
LABEL_8:
  if ( v17 )
  {
    v86 = CLFS_LSN_NULL_EXT;
    *(_QWORD *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  }
  if ( v16 )
  {
    v20 = MiComputeHash64(v7, v15, v18, 0xFFFFF68000000000uLL);
    if ( v20 == v22 )
    {
      if ( *(_QWORD *)(v21 + 24) == qword_140E2FE10 )
        v16 = (unsigned int)MiHashIsCommon(v19, v22, v7) != 0 ? v16 : 0;
    }
    else
    {
      v16 = 0;
    }
    v17 = a3;
  }
  v85 = CLFS_LSN_NULL_EXT;
  *(_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  if ( v16 )
  {
    ContainingPageTable = MiGetContainingPageTable(BugCheckParameter2);
    v68 = 48 * ContainingPageTable - 0x220000000000LL;
    v23 = v57;
    *(_QWORD *)(v57 + 48) = *v88 & 0x1F;
    v24 = v69;
    *(_QWORD *)(v57 + 24) = *(_QWORD *)(v69 + 8);
    *(_QWORD *)(v57 + 64) = *(_QWORD *)(v24 + 24);
    v25 = 0;
    if ( v26 )
    {
      LODWORD(v71) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        do
        {
          v45 = v71 + 1;
          LODWORD(v71) = v45;
          if ( (v45 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v45);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
      if ( (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned __int16)*v76 != 1 )
      {
        v25 = -1073741800;
        v28 = v56;
LABEL_27:
        if ( v25 >= 0 )
        {
          *(_QWORD *)(v23 + 56) = 1LL;
          v29 = v61 != v28;
          v30 = a3;
          if ( a3 )
          {
            v59 = (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
            {
              MiIdentifyPfn(v77, (__int64 *)&v104);
              v30 = a3;
            }
            TransitionPte = *(_QWORD *)v66;
            if ( (*(_QWORD *)v66 & 0x42) != 0 )
            {
              TransitionPte &= 0xFFFFFFFFFFFFFFBDuLL;
              *(_DWORD *)(v30 + 20) |= 0xAu;
            }
          }
          else
          {
            v59 = 0;
          }
          v62 = 0;
          v31 = v68;
LABEL_31:
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
          {
            *(_QWORD *)(v31 + 24) = (*(_QWORD *)(v31 + 24) + 1LL) ^ (*(_QWORD *)(v31 + 24) ^ (*(_QWORD *)(v31 + 24) + 1LL)) & 0xC000000000000000uLL;
            _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v60 = MiAbandonPrivatePfn(v5, v29);
            v64 = 0;
            v32 = v75;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
            {
              do
              {
                v44 = v64 + 1;
                v64 = v44;
                if ( (v44 & HvlLongSpinCountMask) == 0
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
              while ( *(__int64 *)(v32 + 24) < 0 );
            }
            MiFinalizePageAttribute(v32, (unsigned __int8)BYTE2(*v76) >> 6, 1LL);
            v33 = v81;
            v34 = v75;
            MiCopyPfnEntryEx(v75, v81);
            if ( (unsigned int)MiGetPfnPriority(v34) < 5 )
            {
              v53 = *v99;
              HIBYTE(v53) = HIBYTE(*v99) & 0xF8 | 5;
              *(_DWORD *)(v34 + 32) = v53;
            }
            *(_QWORD *)(v34 + 8) = v82;
            *(_QWORD *)(v34 + 40) |= 0x8000000000000000uLL;
            MiSetPfnContainingFrame(v34, ContainingPageTable);
            MI_MAKE_PROTECT_WRITE_COPY(v100);
            if ( a3 )
            {
              MiTransferPageFileOwnership(v34, v66);
              v35 = v74;
            }
            else
            {
              *(_QWORD *)(v34 + 24) &= 0xC000000000000000uLL;
              v49 = (_QWORD *)BugCheckParameter2;
              *(_QWORD *)BugCheckParameter2 = 0LL;
              v88 = (_DWORD *)TransitionPte;
              *v49 = TransitionPte;
              PrototypePteDirect = MiMakePrototypePteDirect((__int64)v49);
              MiWriteRepurposedTransitionPte(v33, PrototypePteDirect | 0x800);
              *(_QWORD *)(v33 + 24) |= 0x4000000000000000uLL;
              MiTransferPageFileOwnership(v34, v66);
              MiPfnReferenceCountIsZero(v34, v72);
              v35 = v33;
              v74 = v33;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v83 == v84 && (*(_DWORD *)(v33 + 16) & 4) != 0 )
            {
              *(_QWORD *)(v33 + 16) &= ~4uLL;
              if ( v60 )
                v60 &= ~4uLL;
            }
            if ( a3 )
            {
              v36 = (v72 << 12) ^ (TransitionPte ^ (v72 << 12)) & 0xFFF0000000000FFFuLL;
              v37 = *(_DWORD *)(a3 + 20) | 0x40;
              *(_DWORD *)(a3 + 20) = v37;
              if ( (v36 & 0x800) != 0 )
              {
                v36 = v36 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
                *(_DWORD *)(a3 + 20) = v37 | 0x20;
              }
              MiWriteValidPteNewPage(v66);
              v89 = v36;
              if ( !_bittest64(&MiFlags, 0x24u) || (v36 & 0x20) != 0 )
              {
                v38 = (_QWORD *)BugCheckParameter2;
              }
              else
              {
                v38 = (_QWORD *)BugCheckParameter2;
                if ( BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
                  MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, v36, 128);
              }
              *v38 = v36;
              *(_QWORD *)(v33 + 24) |= 0x4000000000000000uLL;
              v54 = *v76;
              BYTE2(v54) = HIWORD(*v76) | 7;
              *(_DWORD *)(v33 + 32) = v54;
              _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v39 = *v106 & 0xFFFFFFFFFFFFF000uLL;
              *v106 = v33;
              MiInsertTbFlushEntry(a3, v39, 1LL, 0);
              v41 = v73;
              if ( ((_DWORD)v73[23] & 0xF) == 0 )
                MiSetWsleProtection(v40, v39, 0);
              MiUpdateWorkingSetPrivateSize((__int64)v41, v39, 0xFFFFFFFFFFFFFFFFuLL, 0);
              if ( v59 )
              {
                *((_QWORD *)&v105 + 1) = v38;
                v106 = (ULONG_PTR *)&v104;
                v107 = 32;
                v108 = 0;
                EtwTraceKernelEvent((int)&v106, 1, 0x28000001u, 634, 290462468);
              }
            }
            else
            {
              v46 = *(_QWORD *)(v33 + 40);
              *(_QWORD *)(v33 + 24) = *(_QWORD *)(v35 + 24) & 0xC000000000000000uLL;
              MiPfnReferenceCountIsZero(v33, v77);
              _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiLockAndDecrementShareCount(48 * (v46 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
            }
            if ( v60 )
              MiReleasePageFileInfo(v56, v60, 1LL);
            *v102 = 0LL;
            *v103 = 0LL;
            MiActivateCombineBlock(v78, v57);
            return 0LL;
          }
          while ( 1 )
          {
            v43 = v62 + 1;
            v62 = v43;
            if ( (v43 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
            {
              if ( KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v43);
                v31 = v68;
                goto LABEL_58;
              }
              v31 = v68;
            }
            _mm_pause();
LABEL_58:
            if ( *(__int64 *)(v31 + 24) >= 0 )
              goto LABEL_31;
          }
        }
LABEL_87:
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return (unsigned int)v25;
      }
      v27 = 0LL;
      if ( v56 != v61 && !*(_QWORD *)(v65 + 40) )
        v27 = 5LL;
      if ( !(_DWORD)v27 || (unsigned int)MiGetCloneCharges(v61, v27) )
      {
        v28 = v56;
        if ( v56 == v61 )
        {
LABEL_26:
          v23 = v57;
          goto LABEL_27;
        }
        ++*(_QWORD *)(v65 + 40);
LABEL_25:
        v28 = v56;
        goto LABEL_26;
      }
    }
    else
    {
      v48 = 0LL;
      if ( v56 != v61 && !*(_QWORD *)(v65 + 40) )
        v48 = 5LL;
      if ( (_DWORD)v48 && !(unsigned int)MiGetCloneCharges(v61, v48) )
      {
        v25 = -1073741800;
        goto LABEL_87;
      }
      if ( v56 != v61 )
        ++*(_QWORD *)(v65 + 40);
      if ( (MiUnlinkPageFromListEx(v5, 0) & 3) == 0 )
        goto LABEL_25;
      LODWORD(v65) = 0;
      MiDiscardTransitionPteEx(v5, 0LL);
      *(_QWORD *)(v57 + 56) = 1LL;
      MiDecrementCloneBlock(v61, (__int64)v73, v98, 4, &v65);
    }
    v25 = -1073741800;
    goto LABEL_25;
  }
  if ( !v17 )
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 3221225496LL;
}
