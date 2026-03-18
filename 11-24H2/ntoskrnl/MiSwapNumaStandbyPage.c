/*
 * XREFs of MiSwapNumaStandbyPage @ 0x14039474C
 * Callers:
 *     MiPruneStandbyPages @ 0x140225F84 (MiPruneStandbyPages.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiGetPageChain @ 0x1402FCDC0 (MiGetPageChain.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFinalizePageAttribute @ 0x14021F4F0 (MiFinalizePageAttribute.c)
 *     MiReleaseFreshPageAtDpc @ 0x140222030 (MiReleaseFreshPageAtDpc.c)
 *     MiCopyPfnEntryEx @ 0x1402247E0 (MiCopyPfnEntryEx.c)
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     MiIsDecayPfn @ 0x14022EFD0 (MiIsDecayPfn.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiReplaceStandbyLookaside @ 0x14026CCE0 (MiReplaceStandbyLookaside.c)
 *     MiUnlinkSecondaryListStandbyPage @ 0x14026E330 (MiUnlinkSecondaryListStandbyPage.c)
 *     MiGetPfnChannel @ 0x14026ED40 (MiGetPfnChannel.c)
 *     MiInsertSecondaryListStandbyPage @ 0x14026F190 (MiInsertSecondaryListStandbyPage.c)
 *     MiUpdateLargePageCandidateValue @ 0x140272210 (MiUpdateLargePageCandidateValue.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402F6568 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiCanPageMove @ 0x1402F7730 (MiCanPageMove.c)
 *     MiSetPfnTbFlushStamp @ 0x1402FBDB0 (MiSetPfnTbFlushStamp.c)
 *     MiSetPfnBlink @ 0x1403950D0 (MiSetPfnBlink.c)
 *     MiUpdateTransitionPteFrame @ 0x140395BFC (MiUpdateTransitionPteFrame.c)
 *     MiSetPfnIdentity @ 0x1403A00D0 (MiSetPfnIdentity.c)
 *     MiClearPfnReuseFields @ 0x1403A1D30 (MiClearPfnReuseFields.c)
 *     MiLockLowestPrioritySecondaryStandbyPage @ 0x1403A3ABC (MiLockLowestPrioritySecondaryStandbyPage.c)
 *     MiReuseStandbyPage @ 0x140442E50 (MiReuseStandbyPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

ULONG_PTR __fastcall MiSwapNumaStandbyPage(ULONG_PTR a1, unsigned int a2, unsigned __int8 a3, __int16 a4)
{
  __int64 v6; // rbx
  __int64 v8; // r15
  int v9; // esi
  unsigned __int8 *v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int8 v13; // cl
  int v14; // edx
  unsigned __int8 v15; // di
  unsigned __int8 v16; // r13
  __int64 v17; // rax
  ULONG_PTR v18; // r13
  __int64 v19; // rdi
  __int64 v20; // r11
  ULONG_PTR v21; // rcx
  __int64 v22; // r10
  __int64 v23; // rax
  __int64 v24; // rcx
  ULONG_PTR v25; // rdx
  __int64 v26; // r12
  unsigned __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int8 v36; // dl
  __int64 v38; // rdx
  ULONG_PTR v39; // r9
  unsigned __int64 v40; // rdx
  volatile signed __int32 *v41; // r8
  unsigned int v42; // eax
  ULONG_PTR *v43; // r9
  ULONG_PTR v44; // r10
  unsigned __int64 v45; // rbx
  ULONG_PTR v46; // rax
  __int64 v47; // rbx
  bool v48; // sf
  unsigned __int64 v49; // rcx
  __int64 updated; // rax
  __int64 v51; // r9
  BOOL IsDecayPfn; // eax
  __int64 v53; // r9
  signed __int32 v54[8]; // [rsp+0h] [rbp-70h] BYREF
  char v55; // [rsp+30h] [rbp-40h]
  int v56; // [rsp+34h] [rbp-3Ch]
  __int64 v57; // [rsp+38h] [rbp-38h] BYREF
  __int64 v58; // [rsp+40h] [rbp-30h]
  __int64 v59; // [rsp+48h] [rbp-28h]
  __int64 v60; // [rsp+50h] [rbp-20h]
  unsigned __int8 *v61; // [rsp+58h] [rbp-18h]
  unsigned __int8 v62; // [rsp+B0h] [rbp+40h] BYREF
  int v63; // [rsp+B8h] [rbp+48h]

  v57 = 0LL;
  v6 = a2;
  v8 = 48 * a1 - 0x220000000000LL;
  v9 = MiPageToNode(a1);
  v10 = 0LL;
  v11 = (*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL;
  LOBYTE(v63) = 0;
  v62 = 0;
  v59 = *((_QWORD *)qword_140E2FF88 + v11);
  v12 = *(_QWORD *)(v59 + 16) + 57216 * v6;
  v13 = MmNumberOfChannels;
  v60 = v12;
  v55 = MmNumberOfChannels;
  v14 = *(_DWORD *)(v12 + 15184) & 1;
  v56 = v14;
  if ( (unsigned __int8)MmNumberOfChannels > 1u )
  {
    v10 = (unsigned __int8 *)(v12 + 15233);
    if ( !v14 )
    {
      if ( v9 == (_DWORD)v6 )
        return a1;
      v15 = a3;
      goto LABEL_3;
    }
    if ( (a4 & 0x2000) == 0 )
    {
      v48 = (a4 & 0x80u) != 0;
      v15 = v62;
      if ( v48 )
        v10 = (unsigned __int8 *)(v12 + 15235);
      goto LABEL_3;
    }
    v13 = 1;
    LOBYTE(v63) = a3;
    v55 = 1;
    v10 = 0LL;
  }
  v15 = 0;
LABEL_3:
  v61 = &v10[v13];
  while ( 1 )
  {
    if ( !v10 )
      goto LABEL_5;
    if ( !v14 )
    {
      LOBYTE(v63) = v15;
      v15 = (unsigned __int8)(v15 + 1) < v13 ? v15 + 1 : 0;
LABEL_5:
      v16 = v63;
      goto LABEL_6;
    }
    v16 = *v10;
    LOBYTE(v63) = *v10;
    if ( v9 == (_DWORD)v6 && v16 == MiGetPfnChannel(v8) )
      return a1;
LABEL_6:
    v62 = 17;
    v17 = MiLockLowestPrioritySecondaryStandbyPage(v59, 704LL * v16 + v60 + 5192, &v57, &v62);
    v18 = v17;
    if ( v17 != -1 )
      break;
    if ( ++v10 >= v61 )
      return a1;
    v13 = v55;
    v14 = v56;
  }
  v19 = 48 * v17 - 0x220000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v57 + 32));
    MiUnlockPage(v19, v62);
    return a1;
  }
  if ( MiCanPageMove(v19) )
  {
    if ( dword_140E3004C != 1 )
      goto LABEL_10;
    v39 = v18 & 0x1F;
    LOBYTE(v40) = 1;
    v41 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E300A0 + 1) + 4 * (v18 >> 5));
    if ( v39 + 1 <= 0x20 )
    {
      v42 = 1 << v39;
      goto LABEL_65;
    }
    if ( (v18 & 0x1F) == 0 )
      goto LABEL_64;
    _InterlockedOr(v41++, ((1 << (32 - (v18 & 0x1F))) - 1) << v39);
    v40 = 1LL - (32 - (unsigned int)(v18 & 0x1F));
    if ( v40 >= 0x20 )
    {
      v49 = v40 >> 5;
      v40 += -32LL * (v40 >> 5);
      do
      {
        *v41++ = -1;
        --v49;
      }
      while ( v49 );
    }
    if ( v40 )
    {
LABEL_64:
      v42 = (1 << v40) - 1;
LABEL_65:
      _InterlockedOr(v41, v42);
    }
LABEL_10:
    v21 = *(_QWORD *)(v19 + 24) & 0xFFFFFFFFFFLL;
    v22 = *(_QWORD *)v19 & 0xFFFFFFFFFFLL;
    if ( (*(_DWORD *)(v19 + 32) & 0x8000000) != 0 )
    {
      if ( MiIsDecayPfn(v21) )
      {
        updated = MiUpdateTransitionPteFrame(v43[2], a1);
        *(_QWORD *)(v51 + 16) = updated;
      }
      else
      {
        *v43 = a1 ^ (*v43 ^ a1) & 0xFFFFFF0000000000uLL;
      }
      IsDecayPfn = MiIsDecayPfn(v44);
      v25 = a1;
      v24 = v53;
      if ( IsDecayPfn )
        MiSetPfnContainingFrame(v53, a1);
      else
LABEL_15:
        MiSetPfnBlink(v24, v25, 0LL);
    }
    else
    {
      v23 = v57;
      if ( v21 == 0x3FFFFFFFFFLL )
        *(_QWORD *)(v57 + 16) = a1;
      else
        *(_QWORD *)(v20 + 48 * v21) = a1 ^ (*(_QWORD *)(v20 + 48 * v21) ^ a1) & 0xFFFFFF0000000000uLL;
      if ( v22 != 0x3FFFFFFFFFLL )
      {
        v24 = v20 + 48 * v22;
        v25 = a1;
        goto LABEL_15;
      }
      *(_QWORD *)(v23 + 24) = a1;
    }
    MiUnlinkSecondaryListStandbyPage(v19, 9);
    MiFinalizePageAttribute(v8, (unsigned __int8)BYTE2(*(_DWORD *)(v19 + 32)) >> 6, 1LL);
    MiReplaceStandbyLookaside(v18, 0xFFFFFFFFFFFFFFFFuLL, 9, 0);
    MiCopyPfnEntryEx(v8, v19);
    MiInsertSecondaryListStandbyPage(v8, 9, 0LL);
    _InterlockedOr(v54, 0);
    if ( (((unsigned __int8)KiTbFlushTimeStamp ^ (*(_QWORD *)(v8 + 24) >> 59)) & 7) != 0 )
      *(_QWORD *)(v8 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ *(_QWORD *)(v8 + 24)) & 0xC7FFFFFFFFFFFFFFuLL;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v57 + 32));
    v26 = *(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFLL;
    if ( v26 == v18 )
    {
      v45 = *(_QWORD *)(v19 + 8) | 0x8000000000000000uLL;
      MiSetPfnContainingFrame(v8, a1);
      v46 = a1 << 12;
      if ( KiFlushPcid )
        v46 |= 2uLL;
      *(_QWORD *)(v45 - 768) = v46;
      v27 = *(_QWORD *)(v19 + 8) | 0x8000000000000000uLL;
    }
    else
    {
      v27 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000LL)
          + 8 * ((*(_QWORD *)(v19 + 8) >> 3) & 0x1FFLL);
    }
    v28 = MI_READ_PTE_LOCK_FREE(v27);
    v29 = MiUpdateTransitionPteFrame(v28, a1);
    v63 = 0;
    v30 = v29;
    v58 = v29;
    if ( MiPteInShadowRange(v27) )
    {
      v31 = MiSanitizeShadowPxe();
      v30 = v58;
    }
    else
    {
      v31 = v63;
    }
    *(_QWORD *)v27 = v30;
    if ( v31 )
      MiWritePteShadow();
    if ( v26 != v18 )
    {
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      *(_QWORD *)(((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    }
    MiCopyPage(a1, v18, 6);
    _InterlockedOr(v54, 0);
    v32 = (unsigned int)KiTbFlushTimeStamp;
    if ( (((unsigned __int8)KiTbFlushTimeStamp ^ (*(_QWORD *)(v8 + 24) >> 59)) & 7) != 0 )
    {
      v47 = v57;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v57 + 32));
      MiSetPfnTbFlushStamp(v8, v32, 1);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v47 + 32));
    }
    MiUpdateLargePageCandidateValue(v59, v18, 3, 2, 0LL);
    MiUpdateLargePageCandidateValue(v59, a1, 3, 3, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiClearPfnReuseFields(v19, v33, v34, v35);
    _InterlockedOr(v54, 0);
    *(_QWORD *)(v19 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*(_QWORD *)(v19 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
    *(_QWORD *)v19 = 0LL;
    *(_QWORD *)(v19 + 24) &= 0xFFFFFF0000000000uLL;
    v63 = *(_DWORD *)(v19 + 32);
    BYTE2(v63) = BYTE2(v63) & 0xF8 | 5;
    *(_DWORD *)(v19 + 32) = v63;
    *(_QWORD *)(v19 + 16) = CLFS_LSN_NULL_EXT;
    MiSetOriginalPtePfnFromFreeList((__int64 *)(v19 + 16));
    v63 = *(_DWORD *)(v19 + 32);
    HIBYTE(v63) &= ~8u;
    *(_DWORD *)(v19 + 32) = v63;
    MiSetPfnIdentity(v19, 0LL);
    v36 = v62;
    v63 = *(_DWORD *)(v19 + 32);
    HIBYTE(v63) &= 0xF8u;
    *(_DWORD *)(v19 + 32) = v63;
    MiUnlockPage(v19, v36);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v57 + 32));
    MiReuseStandbyPage(v19);
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiReleaseFreshPageAtDpc(v8);
    if ( KiIrqlFlags )
    {
      LOBYTE(v38) = v62;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v38);
    }
    __writecr8(v62);
  }
  return v18;
}
