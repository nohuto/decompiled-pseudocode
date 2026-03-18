/*
 * XREFs of MiSwapNumaStandbyPage @ 0x1403B905C
 * Callers:
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiGetPageChain @ 0x140241940 (MiGetPageChain.c)
 *     MiPruneStandbyPages @ 0x1402C622C (MiPruneStandbyPages.c)
 * Callees:
 *     MiReplaceStandbyLookaside @ 0x140214750 (MiReplaceStandbyLookaside.c)
 *     MiUnlinkSecondaryListStandbyPage @ 0x140215A30 (MiUnlinkSecondaryListStandbyPage.c)
 *     MiGetPfnChannel @ 0x140216430 (MiGetPfnChannel.c)
 *     MiInsertSecondaryListStandbyPage @ 0x140216890 (MiInsertSecondaryListStandbyPage.c)
 *     MiSetPfnIdentity @ 0x1402293B0 (MiSetPfnIdentity.c)
 *     MiCanPageMove @ 0x14022A690 (MiCanPageMove.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsDecayPfn @ 0x140241130 (MiIsDecayPfn.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFinalizePageAttribute @ 0x14024DDE0 (MiFinalizePageAttribute.c)
 *     MiUpdateLargePageCandidateValue @ 0x14024FD70 (MiUpdateLargePageCandidateValue.c)
 *     MiClearPfnReuseFields @ 0x1402C4CC0 (MiClearPfnReuseFields.c)
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     MiSetPfnTbFlushStamp @ 0x1402C7C70 (MiSetPfnTbFlushStamp.c)
 *     MiCopyPfnEntryEx @ 0x1402C7CF0 (MiCopyPfnEntryEx.c)
 *     MiUpdateTransitionPteFrame @ 0x1402D110C (MiUpdateTransitionPteFrame.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     MiReleaseFreshPageAtDpc @ 0x140343330 (MiReleaseFreshPageAtDpc.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiLockLowestPrioritySecondaryStandbyPage @ 0x1403B9940 (MiLockLowestPrioritySecondaryStandbyPage.c)
 *     MiSetPfnBlink @ 0x1403B9F10 (MiSetPfnBlink.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     MiReuseStandbyPage @ 0x1404C2648 (MiReuseStandbyPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
  unsigned __int64 v30; // rbx
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rsi
  unsigned __int8 v34; // dl
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  ULONG_PTR v40; // r9
  unsigned __int64 v41; // rdx
  volatile signed __int32 *v42; // r8
  unsigned int v43; // eax
  ULONG_PTR *v44; // r9
  ULONG_PTR v45; // r10
  unsigned __int64 v46; // rbx
  ULONG_PTR v47; // rax
  __int64 v48; // rbx
  bool v49; // sf
  unsigned __int64 v50; // rcx
  unsigned __int64 updated; // rax
  __int64 v52; // r9
  BOOL IsDecayPfn; // eax
  __int64 v54; // r9
  signed __int32 v55[8]; // [rsp+0h] [rbp-70h] BYREF
  char v56; // [rsp+30h] [rbp-40h]
  int v57; // [rsp+34h] [rbp-3Ch]
  __int64 v58; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v59; // [rsp+40h] [rbp-30h] BYREF
  __int64 v60; // [rsp+48h] [rbp-28h]
  __int64 v61; // [rsp+50h] [rbp-20h]
  unsigned __int8 *v62; // [rsp+58h] [rbp-18h]
  unsigned __int8 v63; // [rsp+B0h] [rbp+40h] BYREF
  int v64; // [rsp+B8h] [rbp+48h]

  v58 = 0LL;
  v6 = a2;
  v8 = 48 * a1 - 0x220000000000LL;
  v9 = MiPageToNode(a1);
  v10 = 0LL;
  v11 = (*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL;
  LOBYTE(v64) = 0;
  v63 = 0;
  v60 = *((_QWORD *)qword_140E2FD48 + v11);
  v12 = *(_QWORD *)(v60 + 16) + 57216 * v6;
  v13 = MmNumberOfChannels;
  v61 = v12;
  v56 = MmNumberOfChannels;
  v14 = *(_DWORD *)(v12 + 15184) & 1;
  v57 = v14;
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
      v49 = (a4 & 0x80u) != 0;
      v15 = v63;
      if ( v49 )
        v10 = (unsigned __int8 *)(v12 + 15235);
      goto LABEL_3;
    }
    v13 = 1;
    LOBYTE(v64) = a3;
    v56 = 1;
    v10 = 0LL;
  }
  v15 = 0;
LABEL_3:
  v62 = &v10[v13];
  while ( 1 )
  {
    if ( !v10 )
      goto LABEL_5;
    if ( !v14 )
    {
      LOBYTE(v64) = v15;
      v15 = (unsigned __int8)(v15 + 1) < v13 ? v15 + 1 : 0;
LABEL_5:
      v16 = v64;
      goto LABEL_6;
    }
    v16 = *v10;
    LOBYTE(v64) = *v10;
    if ( v9 == (_DWORD)v6 && v16 == MiGetPfnChannel(v8) )
      return a1;
LABEL_6:
    v63 = 17;
    v17 = MiLockLowestPrioritySecondaryStandbyPage(v60, 704LL * v16 + v61 + 5192, &v58, &v63);
    v18 = v17;
    if ( v17 != -1 )
      break;
    if ( ++v10 >= v62 )
      return a1;
    v13 = v56;
    v14 = v57;
  }
  v19 = 48 * v17 - 0x220000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v58 + 32));
    MiUnlockPage(v19, v63);
    return a1;
  }
  if ( MiCanPageMove(v19) )
  {
    if ( dword_140E2FE0C != 1 )
      goto LABEL_10;
    v40 = v18 & 0x1F;
    LOBYTE(v41) = 1;
    v42 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E2FE60 + 1) + 4 * (v18 >> 5));
    if ( v40 + 1 <= 0x20 )
    {
      v43 = 1 << v40;
      goto LABEL_65;
    }
    if ( (v18 & 0x1F) == 0 )
      goto LABEL_64;
    _InterlockedOr(v42++, ((1 << (32 - (v18 & 0x1F))) - 1) << v40);
    v41 = 1LL - (32 - (unsigned int)(v18 & 0x1F));
    if ( v41 >= 0x20 )
    {
      v50 = v41 >> 5;
      v41 += -32LL * (v41 >> 5);
      do
      {
        *v42++ = -1;
        --v50;
      }
      while ( v50 );
    }
    if ( v41 )
    {
LABEL_64:
      v43 = (1 << v41) - 1;
LABEL_65:
      _InterlockedOr(v42, v43);
    }
LABEL_10:
    v21 = *(_QWORD *)(v19 + 24) & 0xFFFFFFFFFFLL;
    v22 = *(_QWORD *)v19 & 0xFFFFFFFFFFLL;
    if ( (*(_DWORD *)(v19 + 32) & 0x8000000) != 0 )
    {
      if ( MiIsDecayPfn(v21) )
      {
        updated = MiUpdateTransitionPteFrame(v44[2], a1);
        *(_QWORD *)(v52 + 16) = updated;
      }
      else
      {
        *v44 = a1 ^ (*v44 ^ a1) & 0xFFFFFF0000000000uLL;
      }
      IsDecayPfn = MiIsDecayPfn(v45);
      v25 = a1;
      v24 = v54;
      if ( IsDecayPfn )
        MiSetPfnContainingFrame(v54, a1);
      else
LABEL_15:
        MiSetPfnBlink(v24, v25, 0LL);
    }
    else
    {
      v23 = v58;
      if ( v21 == 0x3FFFFFFFFFLL )
        *(_QWORD *)(v58 + 16) = a1;
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
    _InterlockedOr(v55, 0);
    if ( (((unsigned __int8)KiTbFlushTimeStamp ^ (*(_QWORD *)(v8 + 24) >> 59)) & 7) != 0 )
      *(_QWORD *)(v8 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ *(_QWORD *)(v8 + 24)) & 0xC7FFFFFFFFFFFFFFuLL;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v58 + 32));
    v26 = *(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFLL;
    if ( v26 == v18 )
    {
      v46 = *(_QWORD *)(v19 + 8) | 0x8000000000000000uLL;
      MiSetPfnContainingFrame(v8, a1);
      v47 = a1 << 12;
      if ( KiFlushPcid )
        v47 |= 2uLL;
      *(_QWORD *)(v46 - 768) = v47;
      v27 = *(_QWORD *)(v19 + 8) | 0x8000000000000000uLL;
    }
    else
    {
      v27 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000)
          + 8 * ((*(_QWORD *)(v19 + 8) >> 3) & 0x1FFLL);
    }
    v28 = MI_READ_PTE_LOCK_FREE(v27);
    v29 = MiUpdateTransitionPteFrame(v28, a1);
    v64 = 0;
    v30 = v29;
    v59 = v29;
    if ( MiPteInShadowRange(v27) )
    {
      v32 = MiSanitizeShadowPxe(v31, &v59);
      v30 = v59;
    }
    else
    {
      v32 = v64;
    }
    *(_QWORD *)v27 = v30;
    if ( v32 )
      MiWritePteShadow(v27, v30);
    if ( v26 != v18 )
    {
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      *(_QWORD *)(((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    }
    MiCopyPage(a1, v18, 6);
    _InterlockedOr(v55, 0);
    v33 = (unsigned int)KiTbFlushTimeStamp;
    if ( (((unsigned __int8)KiTbFlushTimeStamp ^ (*(_QWORD *)(v8 + 24) >> 59)) & 7) != 0 )
    {
      v48 = v58;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v58 + 32));
      MiSetPfnTbFlushStamp(v8, v33, 1);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v48 + 32));
    }
    MiUpdateLargePageCandidateValue(v60, v18, 3, 2, 0LL);
    MiUpdateLargePageCandidateValue(v60, a1, 3, 3, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiClearPfnReuseFields(v19);
    _InterlockedOr(v55, 0);
    *(_QWORD *)(v19 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*(_QWORD *)(v19 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
    *(_QWORD *)v19 = 0LL;
    *(_QWORD *)(v19 + 24) &= 0xFFFFFF0000000000uLL;
    v64 = *(_DWORD *)(v19 + 32);
    BYTE2(v64) = BYTE2(v64) & 0xF8 | 5;
    *(_DWORD *)(v19 + 32) = v64;
    *(_QWORD *)(v19 + 16) = CLFS_LSN_NULL_EXT;
    MiSetOriginalPtePfnFromFreeList((__int64 *)(v19 + 16));
    v64 = *(_DWORD *)(v19 + 32);
    HIBYTE(v64) &= ~8u;
    *(_DWORD *)(v19 + 32) = v64;
    MiSetPfnIdentity(v19, 0);
    v34 = v63;
    v64 = *(_DWORD *)(v19 + 32);
    HIBYTE(v64) &= 0xF8u;
    *(_DWORD *)(v19 + 32) = v64;
    MiUnlockPage(v19, v34);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v58 + 32));
    MiReuseStandbyPage(v19, v36, v37, v38);
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiReleaseFreshPageAtDpc(v8);
    if ( KiIrqlFlags )
    {
      LOBYTE(v39) = v63;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v39);
    }
    __writecr8(v63);
  }
  return v18;
}
