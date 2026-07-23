/*
 * XREFs of MiSwitchToTransition @ 0x1404EEE28
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140A5D478 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140202774 (MiCaptureWriteWatchDirtyBit.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiInsertPageChainHead @ 0x14021CD10 (MiInsertPageChainHead.c)
 *     MiFreePageChain @ 0x14021DC64 (MiFreePageChain.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x140238FA0 (ExAcquireRundownProtectionCacheAware.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiUpdateProtectionMask @ 0x140248CFC (MiUpdateProtectionMask.c)
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiObtainFaultCharges @ 0x14033EB80 (MiObtainFaultCharges.c)
 *     MiAddLockedPageCharge @ 0x14033F050 (MiAddLockedPageCharge.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiMakeTransitionPte @ 0x140347DF0 (MiMakeTransitionPte.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiUnlinkPageChainHead @ 0x140349AD0 (MiUnlinkPageChainHead.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14038DEE4 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140393500 (MiPageAttributeBatchChangeNeeded.c)
 *     MiChangePageAttributeBatch @ 0x1403A8860 (MiChangePageAttributeBatch.c)
 *     MiGetEffectivePagePriorityThread @ 0x1403DC8F0 (MiGetEffectivePagePriorityThread.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiMakeLinkedListPte @ 0x1403F8EF0 (MiMakeLinkedListPte.c)
 *     MiReturnFaultCharges @ 0x14047CD94 (MiReturnFaultCharges.c)
 *     MiAddMdlTracker @ 0x1404CBC78 (MiAddMdlTracker.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiGetReadyInPageBlock @ 0x140A9E628 (MiGetReadyInPageBlock.c)
 */

__int64 __fastcall MiSwitchToTransition(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  char v3; // r14
  __int64 v6; // rsi
  __int64 ReadyInPageBlock; // rax
  unsigned __int64 v8; // rbx
  ULONG_PTR v9; // rdi
  __int64 v10; // rcx
  struct _KPRCB *v11; // r9
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  unsigned __int64 v19; // r15
  __int64 v20; // rdx
  int v21; // r14d
  unsigned __int32 v22; // et2
  __int64 Page; // rax
  __int64 v24; // r12
  __int64 *v25; // rbx
  __int64 v26; // r14
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rsi
  unsigned __int8 v29; // al
  ULONG_PTR v30; // rbx
  unsigned __int64 v31; // rax
  ULONG_PTR v32; // rbx
  unsigned __int64 v33; // rcx
  ULONG_PTR BugCheckParameter4; // rdx
  unsigned __int16 v35; // cx
  __int64 *v36; // r14
  int v37; // r9d
  __int64 DemandZeroPte; // rax
  char v39; // r9
  __int64 v40; // rbx
  struct _KTHREAD *v41; // rax
  __int64 v42; // rax
  __int64 TransitionPte; // rax
  __int64 v44; // r8
  unsigned int v45; // ebx
  __int64 v46; // rdi
  unsigned __int64 v47; // r8
  unsigned __int8 v49; // [rsp+30h] [rbp-D0h]
  char v50; // [rsp+31h] [rbp-CFh]
  int v51; // [rsp+34h] [rbp-CCh]
  int v52; // [rsp+34h] [rbp-CCh]
  int v53; // [rsp+34h] [rbp-CCh]
  int v55; // [rsp+3Ch] [rbp-C4h]
  char updated; // [rsp+40h] [rbp-C0h]
  __int64 v57; // [rsp+48h] [rbp-B8h]
  __int64 v58; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v59; // [rsp+58h] [rbp-A8h]
  unsigned int v60; // [rsp+60h] [rbp-A0h] BYREF
  int EffectivePagePriorityThread; // [rsp+64h] [rbp-9Ch]
  struct _LIST_ENTRY **p_Blink; // [rsp+68h] [rbp-98h]
  __int128 v63; // [rsp+70h] [rbp-90h] BYREF
  __int64 v64; // [rsp+80h] [rbp-80h] BYREF
  __int64 v65; // [rsp+88h] [rbp-78h]
  __int64 ContainingPageTable; // [rsp+90h] [rbp-70h]
  _KPROCESS *Process; // [rsp+98h] [rbp-68h]
  unsigned __int64 v68; // [rsp+A0h] [rbp-60h]
  __int64 v69; // [rsp+A8h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-50h]
  __int64 v71; // [rsp+B8h] [rbp-48h]
  ULONG_PTR v72; // [rsp+C0h] [rbp-40h]
  __int128 v73; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v74; // [rsp+D8h] [rbp-28h]
  _BYTE v75[208]; // [rsp+F0h] [rbp-10h] BYREF

  v3 = a3;
  v69 = a2;
  v63 = 0LL;
  memset_0(v75, 0, 0xC8uLL);
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v6 = (__int64)Process;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  ReadyInPageBlock = MiGetReadyInPageBlock(a2);
  v8 = *(unsigned int *)(BugCheckParameter3 + 40);
  v65 = ReadyInPageBlock;
  v68 = *(_QWORD *)(BugCheckParameter3 + 32);
  v9 = ((v68 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v55 = 0;
  v50 = 0;
  p_Blink = &Process[2].ReadyListHead.Blink;
  MiInitializePageColorBase((__int64)&Process[2].ReadyListHead.Blink, 3, 0, (__int64)&v63);
  v10 = *(unsigned __int16 *)(v6 + 1198);
  v11 = (struct _KPRCB *)(DWORD2(v63) & 0xFFF3FFFF | ((v3 & 3) << 18));
  v74 = 0LL;
  v12 = (unsigned int)v11;
  DWORD2(v63) = (_DWORD)v11;
  v58 = 0x7FFFFFFFFFLL;
  v73 = 0LL;
  v57 = *((_QWORD *)qword_140E300C8 + v10);
  v13 = v8 >> 12;
  v14 = v57;
  v15 = MiObtainFaultCharges((ULONG *)v57, v13, 2, v11);
  ContainingPageTable = -1LL;
  v18 = 0LL;
  v19 = v15;
  v20 = 1LL;
  if ( !v15 )
    goto LABEL_14;
  v21 = (v12 >> 16) & 3;
  while ( 1 )
  {
    v22 = _InterlockedExchangeAdd((volatile signed __int32 *)v63, 1u) % (unsigned int)dword_140E2DD00[v21];
    Page = MiGetPage(v14, DWORD2(v63) ^ (unsigned int)(unsigned __int8)(BYTE8(v63) ^ v22), 8u);
    v24 = Page;
    if ( Page != -1 )
    {
      v25 = (__int64 *)(48 * Page - 0x220000000000LL);
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded((unsigned __int64)v25, a3) )
      {
        v25[2] = MiMakeLinkedListPte(v58);
        v58 = v24;
      }
      MiInsertPageChainHead((__int64 *)&v73, v25);
      v14 = v57;
      v20 = 1LL;
      ++v18;
      goto LABEL_9;
    }
    if ( v18 )
      break;
    MiWaitForFreePage(v14, 0);
    v20 = 1LL;
LABEL_9:
    if ( v18 == v19 )
      goto LABEL_12;
  }
  MiReturnFaultCharges(v14, v19 - v18);
  v19 = v18;
LABEL_12:
  if ( v58 != 0x7FFFFFFFFFLL )
  {
    v64 = 0LL;
    MiSetOriginalPtePfnFromFreeList(&v64);
    MiChangePageAttributeBatch((unsigned __int64 *)&v58, a3, v64, 0);
  }
LABEL_14:
  v26 = (__int64)p_Blink;
  v59 = v9 + 8 * v19;
  v27 = 0LL;
  v28 = 0LL;
  v29 = MiLockWorkingSetShared((__int64)p_Blink, v20, v16, v17);
  v49 = v29;
  if ( v9 >= v59 )
    goto LABEL_49;
  v72 = BugCheckParameter3 - ((v68 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000030LL;
  while ( 2 )
  {
    if ( v27 )
    {
      if ( (v9 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(v26, v27);
        break;
      }
LABEL_21:
      v32 = *(_QWORD *)v9;
      if ( (*(_QWORD *)v9 & 1) == 0 )
        KeBugCheckEx(0x1Au, 0x41200uLL, v9, *(_QWORD *)v9, BugCheckParameter3);
      v33 = (v32 >> 12) & 0xFFFFFFFFFFLL;
      BugCheckParameter4 = 48 * v33 - 0x220000000000LL;
      if ( v33 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v33 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        if ( (*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) == v9 )
          KeBugCheckEx(0x1Au, 0x6080uLL, v9, v32, BugCheckParameter4);
        v35 = 1;
        if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x10000000000LL) != 0
          || (*(_QWORD *)(BugCheckParameter4 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
        {
          v35 = 2;
        }
        if ( (unsigned __int16)*(_DWORD *)(BugCheckParameter4 + 32) < v35 )
          KeBugCheckEx(0x1Au, 0x6081uLL, v9, v32, BugCheckParameter4);
      }
      if ( (v32 & 0x42) != 0 && (*(_DWORD *)(v69 + 48) & 0x600000) == 0x600000 )
        MiCaptureWriteWatchDirtyBit((__int64)Process, (__int64)(v9 << 25) >> 16, v69);
      v36 = MiUnlinkPageChainHead((__int64)&v73);
      v71 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v36 + 0x44000000000LL) >> 4);
      updated = MiUpdateProtectionMask(v37 + ((v32 & 0x800) != 0 ? 3 : 0), a3);
      DemandZeroPte = MiMakeDemandZeroPte(updated);
      v40 = v65;
      v36[2] = DemandZeroPte;
      if ( !v50 )
      {
        v41 = CurrentThread;
        *(_DWORD *)(v40 + 80) = 0;
        *(_QWORD *)(v40 + 88) = 0LL;
        *(_QWORD *)(v40 + 152) = v41;
        *(_QWORD *)(v40 + 248) = v36;
        v50 = v39;
        *(_DWORD *)(v40 + 192) |= 0x80u;
      }
      MiSetPfnContainingFrame((__int64)v36, ContainingPageTable);
      v60 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v36 + 6, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v60);
        while ( v36[3] < 0 );
      }
      v51 = *((_DWORD *)v36 + 8);
      BYTE2(v51) |= 0x20u;
      *((_DWORD *)v36 + 8) = v51;
      if ( v40 )
        v42 = v40 + 32;
      else
        v42 = 0LL;
      *v36 = v42;
      v36[3] &= 0xC000000000000000uLL;
      MiAddLockedPageCharge((__int64)v36, 1);
      v14 = v57;
      v36[1] = v9;
      v52 = *((_DWORD *)v36 + 8);
      BYTE2(v52) = BYTE2(v52) & 0xF8 | 2;
      *((_DWORD *)v36 + 8) = v52;
      v53 = *((_DWORD *)v36 + 8);
      HIBYTE(v53) ^= (HIBYTE(v53) ^ EffectivePagePriorityThread) & 7;
      *((_DWORD *)v36 + 8) = v53;
      if ( (((unsigned __int64)v36[5] >> 43) & 0x3FF) != 0 )
        ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v57 + 2784));
      _InterlockedAnd64(v36 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      MiReturnFaultCharges(v57, 1uLL);
      TransitionPte = MiMakeTransitionPte(v71, updated);
      v26 = (__int64)p_Blink;
      *(_QWORD *)v9 = TransitionPte;
      ++v28;
      *(_QWORD *)(v72 + v9) = v44;
      v9 += 8LL;
      if ( v9 >= v59 )
        goto LABEL_46;
      continue;
    }
    break;
  }
  v27 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiLockNestedPageTable(v26, v27);
  v30 = v59;
  MiUnlockOpportunisticPagesInPageTable(v26, v49, v9, v59 - 8);
  ContainingPageTable = MiGetContainingPageTable(v9);
  v31 = MiUnlockOpportunisticPagesInPageTable(v26, 0x11u, v9, v30 - 8);
  if ( !v31 )
    goto LABEL_21;
  v59 = v31;
  v55 = 1073741849;
  if ( v9 != v31 )
    goto LABEL_21;
  v14 = v57;
LABEL_46:
  if ( v27 )
    MiUnlockPageTableInternal(v26, v27);
  v29 = v49;
LABEL_49:
  MiUnlockWorkingSetShared(v26, v29);
  MiFreePageChain((__int64)&v73);
  if ( v28 == v19 )
  {
    v45 = v55;
  }
  else
  {
    MiReturnFaultCharges(v14, v19 - v28);
    v45 = v55;
    if ( !v28 )
      v45 = 1073741849;
  }
  *(_DWORD *)(BugCheckParameter3 + 40) = (_DWORD)v28 << 12;
  if ( v28 )
  {
    v46 = (__int64)Process;
    _InterlockedAdd64((volatile signed __int64 *)Process[1].Padding, v28);
    MiInitializeTbFlushList((__int64)v75, v26, 20, 8, 1);
    MiInsertTbFlushEntry((__int64)v75, v68 & 0xFFFFFFFFFFFFF000uLL, v28, 0);
    MiFlushTbList((__int64)v75);
    *(_QWORD *)(BugCheckParameter3 + 16) = v46;
    *(_WORD *)(BugCheckParameter3 + 10) |= 2u;
    LODWORD(v47) = KeGetPcr()->Prcb.Number;
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(v46 + 1040) + ((((v47 >> 1) & 3) + 8) << 6)), v28);
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(BugCheckParameter3, v28, 4);
  }
  return v45;
}
