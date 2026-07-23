/*
 * XREFs of MiSwapNumaStandbyPage @ 0x1403F7A6C
 * Callers:
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x1403F7714 (MiPruneStandbyPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiClearPfnReuseFields @ 0x140218960 (MiClearPfnReuseFields.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiReplaceStandbyLookaside @ 0x140222270 (MiReplaceStandbyLookaside.c)
 *     MiUnlinkSecondaryListStandbyPage @ 0x1402238C0 (MiUnlinkSecondaryListStandbyPage.c)
 *     MiGetPfnChannel @ 0x1402242D0 (MiGetPfnChannel.c)
 *     MiInsertSecondaryListStandbyPage @ 0x140224720 (MiInsertSecondaryListStandbyPage.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402277A0 (MiUpdateLargePageCandidateValue.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFinalizePageAttribute @ 0x14024C240 (MiFinalizePageAttribute.c)
 *     MiReleaseFreshPageAtDpc @ 0x14024ED80 (MiReleaseFreshPageAtDpc.c)
 *     MiCopyPfnEntryEx @ 0x140251B90 (MiCopyPfnEntryEx.c)
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiSetPfnTbFlushStamp @ 0x140253C90 (MiSetPfnTbFlushStamp.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiIsDecayPfn @ 0x1403028E0 (MiIsDecayPfn.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiCanPageMove @ 0x14033FB90 (MiCanPageMove.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiUpdateTransitionPteFrame @ 0x14038F5E4 (MiUpdateTransitionPteFrame.c)
 *     MiLockLowestPrioritySecondaryStandbyPage @ 0x1403F8350 (MiLockLowestPrioritySecondaryStandbyPage.c)
 *     MiSetPfnBlink @ 0x1403F8930 (MiSetPfnBlink.c)
 *     MiReuseStandbyPage @ 0x14043BE20 (MiReuseStandbyPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
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
  unsigned __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // rsi
  unsigned __int8 v36; // dl
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  ULONG_PTR v43; // r9
  unsigned __int64 v44; // rdx
  volatile signed __int32 *v45; // r8
  unsigned int v46; // eax
  ULONG_PTR *v47; // r9
  ULONG_PTR v48; // r10
  unsigned __int64 v49; // rbx
  ULONG_PTR v50; // rax
  __int64 v51; // rbx
  bool v52; // sf
  unsigned __int64 v53; // rcx
  unsigned __int64 updated; // rax
  __int64 v55; // r9
  BOOL IsDecayPfn; // eax
  __int64 v57; // r9
  signed __int32 v58[8]; // [rsp+0h] [rbp-70h] BYREF
  char v59; // [rsp+30h] [rbp-40h]
  int v60; // [rsp+34h] [rbp-3Ch]
  __int64 v61; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v62; // [rsp+40h] [rbp-30h] BYREF
  __int64 v63; // [rsp+48h] [rbp-28h]
  __int64 v64; // [rsp+50h] [rbp-20h]
  unsigned __int8 *v65; // [rsp+58h] [rbp-18h]
  unsigned __int8 v66; // [rsp+B0h] [rbp+40h] BYREF
  int v67; // [rsp+B8h] [rbp+48h]

  v61 = 0LL;
  v6 = a2;
  v8 = 48 * a1 - 0x220000000000LL;
  v9 = MiPageToNode(a1);
  v10 = 0LL;
  v11 = (*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL;
  LOBYTE(v67) = 0;
  v66 = 0;
  v63 = *((_QWORD *)qword_140E300C8 + v11);
  v12 = *(_QWORD *)(v63 + 16) + 57216 * v6;
  v13 = MmNumberOfChannels;
  v64 = v12;
  v59 = MmNumberOfChannels;
  v14 = *(_DWORD *)(v12 + 15184) & 1;
  v60 = v14;
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
      v52 = (a4 & 0x80u) != 0;
      v15 = v66;
      if ( v52 )
        v10 = (unsigned __int8 *)(v12 + 15235);
      goto LABEL_3;
    }
    v13 = 1;
    LOBYTE(v67) = a3;
    v59 = 1;
    v10 = 0LL;
  }
  v15 = 0;
LABEL_3:
  v65 = &v10[v13];
  while ( 1 )
  {
    if ( !v10 )
      goto LABEL_5;
    if ( !v14 )
    {
      LOBYTE(v67) = v15;
      v15 = (unsigned __int8)(v15 + 1) < v13 ? v15 + 1 : 0;
LABEL_5:
      v16 = v67;
      goto LABEL_6;
    }
    v16 = *v10;
    LOBYTE(v67) = *v10;
    if ( v9 == (_DWORD)v6 && v16 == MiGetPfnChannel(v8) )
      return a1;
LABEL_6:
    v66 = 17;
    v17 = MiLockLowestPrioritySecondaryStandbyPage(v63, 704LL * v16 + v64 + 5192, &v61, &v66);
    v18 = v17;
    if ( v17 != -1 )
      break;
    if ( ++v10 >= v65 )
      return a1;
    v13 = v59;
    v14 = v60;
  }
  v19 = 48 * v17 - 0x220000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v61 + 32));
    MiUnlockPage(v19, v66);
    return a1;
  }
  if ( MiCanPageMove(v19) )
  {
    if ( dword_140E3018C != 1 )
      goto LABEL_10;
    v43 = v18 & 0x1F;
    LOBYTE(v44) = 1;
    v45 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E301E0 + 1) + 4 * (v18 >> 5));
    if ( v43 + 1 <= 0x20 )
    {
      v46 = 1 << v43;
      goto LABEL_65;
    }
    if ( (v18 & 0x1F) == 0 )
      goto LABEL_64;
    _InterlockedOr(v45++, ((1 << (32 - (v18 & 0x1F))) - 1) << v43);
    v44 = 1LL - (32 - (unsigned int)(v18 & 0x1F));
    if ( v44 >= 0x20 )
    {
      v53 = v44 >> 5;
      v44 += -32LL * (v44 >> 5);
      do
      {
        *v45++ = -1;
        --v53;
      }
      while ( v53 );
    }
    if ( v44 )
    {
LABEL_64:
      v46 = (1 << v44) - 1;
LABEL_65:
      _InterlockedOr(v45, v46);
    }
LABEL_10:
    v21 = *(_QWORD *)(v19 + 24) & 0xFFFFFFFFFFLL;
    v22 = *(_QWORD *)v19 & 0xFFFFFFFFFFLL;
    if ( (*(_DWORD *)(v19 + 32) & 0x8000000) != 0 )
    {
      if ( MiIsDecayPfn(v21) )
      {
        updated = MiUpdateTransitionPteFrame(v47[2], a1);
        *(_QWORD *)(v55 + 16) = updated;
      }
      else
      {
        *v47 = a1 ^ (*v47 ^ a1) & 0xFFFFFF0000000000uLL;
      }
      IsDecayPfn = MiIsDecayPfn(v48);
      v25 = a1;
      v24 = v57;
      if ( IsDecayPfn )
        MiSetPfnContainingFrame(v57, a1);
      else
LABEL_15:
        MiSetPfnBlink(v24, v25, 0LL);
    }
    else
    {
      v23 = v61;
      if ( v21 == 0x3FFFFFFFFFLL )
        *(_QWORD *)(v61 + 16) = a1;
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
    _InterlockedOr(v58, 0);
    if ( (((unsigned __int8)KiTbFlushTimeStamp ^ (*(_QWORD *)(v8 + 24) >> 59)) & 7) != 0 )
      *(_QWORD *)(v8 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ *(_QWORD *)(v8 + 24)) & 0xC7FFFFFFFFFFFFFFuLL;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v61 + 32));
    v26 = *(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFLL;
    if ( v26 == v18 )
    {
      v49 = *(_QWORD *)(v19 + 8) | 0x8000000000000000uLL;
      MiSetPfnContainingFrame(v8, a1);
      v50 = a1 << 12;
      if ( KiFlushPcid )
        v50 |= 2uLL;
      *(_QWORD *)(v49 - 768) = v50;
      v27 = *(_QWORD *)(v19 + 8) | 0x8000000000000000uLL;
    }
    else
    {
      v27 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000)
          + 8 * ((*(_QWORD *)(v19 + 8) >> 3) & 0x1FFLL);
    }
    v28 = MI_READ_PTE_LOCK_FREE(v27);
    v29 = MiUpdateTransitionPteFrame(v28, a1);
    v67 = 0;
    v30 = v29;
    v62 = v29;
    if ( MiPteInShadowRange(v27) )
    {
      v34 = MiSanitizeShadowPxe(v31, (__int64)&v62, v32);
      v30 = v62;
    }
    else
    {
      v34 = v67;
    }
    *(_QWORD *)v27 = v30;
    if ( v34 )
      MiWritePteShadow(v27, v30, v32, v33);
    if ( v26 != v18 )
    {
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      *(_QWORD *)(((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    }
    MiCopyPage(a1, v18, 6);
    _InterlockedOr(v58, 0);
    v35 = (unsigned int)KiTbFlushTimeStamp;
    if ( (((unsigned __int8)KiTbFlushTimeStamp ^ (*(_QWORD *)(v8 + 24) >> 59)) & 7) != 0 )
    {
      v51 = v61;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v61 + 32));
      MiSetPfnTbFlushStamp(v8, v35, 1);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v51 + 32));
    }
    MiUpdateLargePageCandidateValue(v63, v18, 3, 2, 0LL);
    MiUpdateLargePageCandidateValue(v63, a1, 3, 3, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiClearPfnReuseFields(v19);
    _InterlockedOr(v58, 0);
    *(_QWORD *)(v19 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*(_QWORD *)(v19 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
    *(_QWORD *)v19 = 0LL;
    *(_QWORD *)(v19 + 24) &= 0xFFFFFF0000000000uLL;
    v67 = *(_DWORD *)(v19 + 32);
    BYTE2(v67) = BYTE2(v67) & 0xF8 | 5;
    *(_DWORD *)(v19 + 32) = v67;
    *(_QWORD *)(v19 + 16) = CLFS_LSN_NULL_EXT;
    MiSetOriginalPtePfnFromFreeList((__int64 *)(v19 + 16));
    v67 = *(_DWORD *)(v19 + 32);
    HIBYTE(v67) &= ~8u;
    *(_DWORD *)(v19 + 32) = v67;
    MiSetPfnIdentity(v19, 0);
    v36 = v66;
    v67 = *(_DWORD *)(v19 + 32);
    HIBYTE(v67) &= 0xF8u;
    *(_DWORD *)(v19 + 32) = v67;
    MiUnlockPage(v19, v36);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v61 + 32));
    MiReuseStandbyPage(v19, v38);
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiReleaseFreshPageAtDpc(v8, v39, v40, v41);
    if ( KiIrqlFlags )
    {
      LOBYTE(v42) = v66;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v42);
    }
    __writecr8(v66);
  }
  return v18;
}
