/*
 * XREFs of MiSwitchToTransition @ 0x1404AC960
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140A62AD8 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1402247A0 (MiPageAttributeBatchChangeNeeded.c)
 *     MiObtainFaultCharges @ 0x14022B950 (MiObtainFaultCharges.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MiUpdateProtectionMask @ 0x140234CAC (MiUpdateProtectionMask.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402A3914 (MiCaptureWriteWatchDirtyBit.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1402ADA40 (ExAcquireRundownProtectionCacheAware.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeTransitionPte @ 0x140339DF0 (MiMakeTransitionPte.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiGetEffectivePagePriorityThread @ 0x140387440 (MiGetEffectivePagePriorityThread.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x1403911E8 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiChangePageAttributeBatch @ 0x1403B70F4 (MiChangePageAttributeBatch.c)
 *     MiMakeLinkedListPte @ 0x1403B7F30 (MiMakeLinkedListPte.c)
 *     MiWaitForFreePage @ 0x1403BFC64 (MiWaitForFreePage.c)
 *     MiReturnFaultCharges @ 0x140480970 (MiReturnFaultCharges.c)
 *     MiAddMdlTracker @ 0x1404D2BE8 (MiAddMdlTracker.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiGetReadyInPageBlock @ 0x140A9EAE8 (MiGetReadyInPageBlock.c)
 */

__int64 __fastcall MiSwitchToTransition(ULONG_PTR a1, __int64 a2, int a3)
{
  char v3; // r12
  __int64 v6; // r15
  __int64 ReadyInPageBlock; // rax
  unsigned __int64 v8; // rbx
  unsigned int v9; // r14d
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  _QWORD *v13; // r13
  __int64 v14; // r9
  unsigned __int64 v15; // r12
  __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // r15
  int v20; // r12d
  unsigned __int32 v21; // et2
  __int64 Page; // rax
  __int64 v23; // r14
  _QWORD *v24; // rbx
  __int64 v25; // rbx
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // rdi
  unsigned __int8 v28; // al
  __int64 v29; // r8
  __int64 v30; // r11
  __int64 v31; // r9
  unsigned __int64 v32; // rbx
  __int64 ContainingPageTable; // rax
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rax
  ULONG_PTR v36; // rbx
  unsigned __int64 v37; // rcx
  ULONG_PTR BugCheckParameter4; // rdx
  unsigned __int16 v39; // cx
  __int64 v40; // r14
  __int64 v41; // r8
  char v42; // r11
  __int64 v43; // rax
  __int64 v44; // r8
  unsigned __int64 v45; // r9
  int v46; // ebx
  __int64 v47; // rax
  __int64 TransitionPte; // rax
  __int64 v49; // rcx
  ULONG_PTR v50; // rbx
  __int64 v51; // rsi
  unsigned __int64 v52; // rax
  volatile signed __int64 *v53; // rax
  unsigned __int8 v55; // [rsp+30h] [rbp-D0h]
  char v56; // [rsp+31h] [rbp-CFh]
  int v57; // [rsp+34h] [rbp-CCh]
  int v58; // [rsp+34h] [rbp-CCh]
  int v59; // [rsp+34h] [rbp-CCh]
  int v60; // [rsp+38h] [rbp-C8h]
  char updated; // [rsp+40h] [rbp-C0h]
  __int64 p_Blink; // [rsp+48h] [rbp-B8h]
  __int64 v64; // [rsp+50h] [rbp-B0h]
  __int64 v65; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v66; // [rsp+60h] [rbp-A0h]
  int EffectivePagePriorityThread; // [rsp+68h] [rbp-98h]
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp-90h]
  __int128 v69; // [rsp+78h] [rbp-88h] BYREF
  __int64 v70; // [rsp+88h] [rbp-78h] BYREF
  __int64 v71; // [rsp+90h] [rbp-70h]
  __int64 v72; // [rsp+98h] [rbp-68h]
  _KPROCESS *Process; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v74; // [rsp+A8h] [rbp-58h]
  __int64 v75; // [rsp+B0h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-48h]
  __int64 v77; // [rsp+C0h] [rbp-40h]
  ULONG_PTR v78; // [rsp+C8h] [rbp-38h]
  _BYTE v79[208]; // [rsp+E0h] [rbp-20h] BYREF

  v3 = a3;
  v75 = a2;
  BugCheckParameter3 = a1;
  v69 = 0LL;
  memset_0(v79, 0, 0xC8uLL);
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v6 = (__int64)Process;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  ReadyInPageBlock = MiGetReadyInPageBlock(a2);
  v8 = *(unsigned int *)(a1 + 40);
  v72 = ReadyInPageBlock;
  v74 = *(_QWORD *)(a1 + 32);
  v9 = 0;
  v10 = ((v74 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v60 = 0;
  v56 = 0;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  MiInitializePageColorBase((__int64)&Process[2].ReadyListHead.Blink, 3, 0, (__int64)&v69);
  v11 = *(unsigned __int16 *)(v6 + 1198);
  v12 = v8 >> 12;
  v13 = 0LL;
  v14 = DWORD2(v69) & 0xFFF3FFFF | ((v3 & 3) << 18);
  v65 = 0x7FFFFFFFFFLL;
  v15 = (unsigned int)v14;
  DWORD2(v69) = v14;
  v64 = *((_QWORD *)qword_140E2FD48 + v11);
  v16 = v64;
  v17 = MiObtainFaultCharges((ULONG *)v64, v12, 2, v14);
  v71 = -1LL;
  v18 = 0LL;
  v19 = v17;
  if ( !v17 )
    goto LABEL_15;
  v20 = (v15 >> 16) & 3;
  while ( 1 )
  {
    v21 = _InterlockedExchangeAdd((volatile signed __int32 *)v69, 1u) % (unsigned int)dword_140E2D980[v20];
    Page = MiGetPage(v16, DWORD2(v69) ^ (unsigned int)(unsigned __int8)(BYTE8(v69) ^ v21), 8u);
    v23 = Page;
    if ( Page != -1 )
    {
      v24 = (_QWORD *)(48 * Page - 0x220000000000LL);
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded((__int64)v24, a3) )
      {
        v24[2] = MiMakeLinkedListPte(v65);
        v65 = v23;
      }
      *v24 = v13;
      v13 = v24;
      ++v18;
      v16 = v64;
      goto LABEL_9;
    }
    if ( v18 )
      break;
    MiWaitForFreePage(v16, 0);
LABEL_9:
    if ( v18 == v19 )
      goto LABEL_12;
  }
  MiReturnResident(v16, v19 - v18);
  v19 = v18;
LABEL_12:
  if ( v65 != 0x7FFFFFFFFFLL )
  {
    v70 = 0LL;
    MiSetOriginalPtePfnFromFreeList(&v70);
    MiChangePageAttributeBatch(&v65, a3, v70, 0);
  }
  v9 = 0;
LABEL_15:
  v25 = p_Blink;
  v66 = v10 + 8 * v19;
  v26 = 0LL;
  v27 = 0LL;
  v28 = MiLockWorkingSetShared(p_Blink);
  v55 = v28;
  if ( v10 >= v66 )
    goto LABEL_56;
  LODWORD(v30) = 1;
  v78 = BugCheckParameter3 - ((v74 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000030LL;
  while ( 2 )
  {
    v31 = 0xFFFFFFFFFFLL;
    if ( v26 )
    {
      if ( (v10 & 0xFFF) == 0 )
      {
        MiUnlockPageTable(v25, v26);
        goto LABEL_20;
      }
    }
    else
    {
LABEL_20:
      v26 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable(v25, v26, v29, v31);
      v32 = v66;
      MiUnlockOpportunisticPagesInPageTable(p_Blink, v55, v10, v66 - 8);
      ContainingPageTable = MiGetContainingPageTable(v10);
      v34 = v32 - 8;
      v71 = ContainingPageTable;
      v25 = p_Blink;
      v35 = MiUnlockOpportunisticPagesInPageTable(p_Blink, 0x11u, v10, v34);
      if ( v35 )
      {
        v66 = v35;
        v9 = 1073741849;
        v60 = 1073741849;
        if ( v10 == v35 )
          goto LABEL_53;
      }
      LODWORD(v30) = 1;
    }
    v36 = *(_QWORD *)v10;
    if ( ((unsigned __int8)*(_QWORD *)v10 & (unsigned __int8)v30) == 0 )
      KeBugCheckEx(0x1Au, 0x41200uLL, v10, *(_QWORD *)v10, BugCheckParameter3);
    v37 = (v36 >> 12) & 0xFFFFFFFFFFLL;
    BugCheckParameter4 = 48 * v37 - 0x220000000000LL;
    if ( v37 <= qword_140E2D9A0 && ((*(_QWORD *)(48 * v37 - 0x21FFFFFFFFD8LL) >> 54) & (unsigned __int16)v30) != 0 )
    {
      if ( (*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) == v10 )
        KeBugCheckEx(0x1Au, 0x6080uLL, v10, v36, BugCheckParameter4);
      v39 = v30;
      if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x10000000000LL) != 0
        || (*(_QWORD *)(BugCheckParameter4 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
      {
        v39 = 2;
      }
      if ( (unsigned __int16)*(_DWORD *)(BugCheckParameter4 + 32) < v39 )
        KeBugCheckEx(0x1Au, 0x6081uLL, v10, v36, BugCheckParameter4);
    }
    if ( (v36 & 0x42) != 0 && (*(_DWORD *)(v75 + 48) & 0x600000) == 0x600000 )
    {
      MiCaptureWriteWatchDirtyBit((__int64)Process, (__int64)(v10 << 25) >> 16, v75);
      LODWORD(v30) = 1;
    }
    v40 = (__int64)v13;
    if ( v13 )
      v13 = (_QWORD *)*v13;
    v77 = 0xAAAAAAAAAAAAAAABuLL * ((v40 + 0x220000000000LL) >> 4);
    updated = MiUpdateProtectionMask((unsigned int)v30 + ((v36 & 0x800) != 0 ? 3 : 0), a3);
    *(_QWORD *)(v40 + 16) = MiMakeDemandZeroPte(updated);
    if ( v56 == (_BYTE)v41 )
    {
      v43 = v72;
      v56 = v42;
      *(_QWORD *)(v72 + 152) = CurrentThread;
      *(_QWORD *)(v43 + 248) = v40;
      *(_DWORD *)(v43 + 80) = v41;
      *(_QWORD *)(v43 + 88) = v41;
      *(_DWORD *)(v43 + 192) |= 0x80u;
    }
    MiSetPfnContainingFrame(v40, v71);
    v46 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v46 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v40 + 24) < 0 );
    }
    v57 = *(_DWORD *)(v40 + 32);
    BYTE2(v57) |= 0x20u;
    *(_DWORD *)(v40 + 32) = v57;
    v47 = v72;
    if ( v72 )
      v47 = v72 + 32;
    *(_QWORD *)v40 = v47;
    *(_QWORD *)(v40 + 24) &= 0xC000000000000000uLL;
    MiAddLockedPageCharge(v40, 1, v44, v45);
    *(_QWORD *)(v40 + 8) = v10;
    v58 = *(_DWORD *)(v40 + 32);
    BYTE2(v58) = BYTE2(v58) & 0xF8 | 2;
    *(_DWORD *)(v40 + 32) = v58;
    v59 = *(_DWORD *)(v40 + 32);
    HIBYTE(v59) ^= (HIBYTE(v59) ^ EffectivePagePriorityThread) & 7;
    *(_DWORD *)(v40 + 32) = v59;
    if ( ((*(_QWORD *)(v40 + 40) >> 43) & 0x3FF) != 0 )
      ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v64 + 2784));
    _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiReturnResident(v64, 1uLL);
    TransitionPte = MiMakeTransitionPte(v77, updated);
    v25 = p_Blink;
    v27 += v30;
    *(_QWORD *)v10 = TransitionPte;
    *(_QWORD *)(v78 + v10) = v29;
    v10 += 8LL;
    if ( v10 < v66 )
      continue;
    break;
  }
  v9 = v60;
LABEL_53:
  if ( v26 )
    MiUnlockPageTable(v25, v26);
  v28 = v55;
LABEL_56:
  MiUnlockWorkingSetShared(v25, v28);
  while ( 1 )
  {
    v49 = (__int64)v13;
    if ( !v13 )
      break;
    v13 = (_QWORD *)*v13;
    MiReleaseFreshPage(v49);
  }
  if ( v27 != v19 )
  {
    MiReturnFaultCharges(v64, v19 - v27);
    if ( !v27 )
      v9 = 1073741849;
  }
  v50 = BugCheckParameter3;
  *(_DWORD *)(BugCheckParameter3 + 40) = (_DWORD)v27 << 12;
  if ( v27 )
  {
    v51 = (__int64)Process;
    _InterlockedAdd64((volatile signed __int64 *)Process[1].Padding, v27);
    MiInitializeTbFlushList((__int64)v79, v51 + 1024, 20, 8, 1);
    MiInsertTbFlushEntry((__int64)v79, v74 & 0xFFFFFFFFFFFFF000uLL, v27, 0);
    MiFlushTbList((__int64)v79);
    *(_QWORD *)(v50 + 16) = v51;
    *(_WORD *)(v50 + 10) |= 2u;
    if ( MmNumLockedPagesFixEnabled )
    {
      v52 = MmNumLockedPagesFanOutEnabled
          ? *(_QWORD *)(v51 + 1040) + ((((unsigned __int64)KeGetPcr()->Prcb.Number >> 1) & 3) << 6)
          : *(_QWORD *)(v51 + 1040);
      v53 = (volatile signed __int64 *)(v52 + 512);
    }
    else
    {
      v53 = (volatile signed __int64 *)(v51 + 656);
    }
    _InterlockedAdd64(v53, v27);
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(v50);
  }
  return v9;
}
