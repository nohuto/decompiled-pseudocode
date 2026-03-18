/*
 * XREFs of MiSwitchToTransition @ 0x1404F1388
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140A64CA8 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     MiUpdateProtectionMask @ 0x14021BFAC (MiUpdateProtectionMask.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiChangePageAttributeBatch @ 0x1402668E4 (MiChangePageAttributeBatch.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140268E60 (MiPageAttributeBatchChangeNeeded.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x140283A10 (ExAcquireRundownProtectionCacheAware.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiWaitForFreePage @ 0x1402CF708 (MiWaitForFreePage.c)
 *     MiMakeLinkedListPte @ 0x1402D1A40 (MiMakeLinkedListPte.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E44B0 (MiGetEffectivePagePriorityThread.c)
 *     MiMakeTransitionPte @ 0x1402E67B0 (MiMakeTransitionPte.c)
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiUnlinkPageChainHead @ 0x1402E8490 (MiUnlinkPageChainHead.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402F6568 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiObtainFaultCharges @ 0x1402F6A70 (MiObtainFaultCharges.c)
 *     MiAddLockedPageCharge @ 0x1402F6F40 (MiAddLockedPageCharge.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiInsertPageChainHead @ 0x14039EC34 (MiInsertPageChainHead.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x1403D1CC8 (MiUnlockOpportunisticPagesInPageTable.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiFreePageChain @ 0x14045AD80 (MiFreePageChain.c)
 *     MiReturnFaultCharges @ 0x140481AD4 (MiReturnFaultCharges.c)
 *     MiAddMdlTracker @ 0x1404D2AB8 (MiAddMdlTracker.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1404F31F8 (MiCaptureWriteWatchDirtyBit.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiGetReadyInPageBlock @ 0x140AA3298 (MiGetReadyInPageBlock.c)
 */

__int64 __fastcall MiSwitchToTransition(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  char v3; // r14
  _KPROCESS *v6; // rsi
  __int64 ReadyInPageBlock; // rax
  unsigned __int64 v8; // rbx
  ULONG_PTR v9; // rdi
  __int64 Blink_high; // rcx
  unsigned int v11; // r9d
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // r15
  int v18; // r14d
  unsigned __int32 v19; // et2
  __int64 Page; // rax
  __int64 v21; // r12
  __int64 *v22; // rbx
  __int64 v23; // r14
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rsi
  unsigned __int8 v26; // al
  ULONG_PTR v27; // rbx
  unsigned __int64 v28; // rax
  ULONG_PTR v29; // rbx
  unsigned __int64 v30; // rcx
  ULONG_PTR BugCheckParameter4; // rdx
  unsigned __int16 v32; // cx
  __int64 *v33; // r14
  int v34; // r9d
  __int64 DemandZeroPte; // rax
  char v36; // r9
  __int64 v37; // rbx
  struct _KTHREAD *v38; // rax
  __int64 v39; // rax
  __int64 TransitionPte; // rax
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // r8
  unsigned int v44; // ebx
  _KPROCESS *v45; // rdi
  unsigned __int64 v46; // r8
  unsigned __int8 v48; // [rsp+30h] [rbp-D0h]
  char v49; // [rsp+31h] [rbp-CFh]
  int v50; // [rsp+34h] [rbp-CCh]
  int v51; // [rsp+34h] [rbp-CCh]
  int v52; // [rsp+34h] [rbp-CCh]
  int v54; // [rsp+3Ch] [rbp-C4h]
  char updated; // [rsp+40h] [rbp-C0h]
  __int64 v56; // [rsp+48h] [rbp-B8h]
  __int64 v57; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v58; // [rsp+58h] [rbp-A8h]
  unsigned int v59; // [rsp+60h] [rbp-A0h] BYREF
  int EffectivePagePriorityThread; // [rsp+64h] [rbp-9Ch]
  struct _LIST_ENTRY **p_Blink; // [rsp+68h] [rbp-98h]
  __int128 v62; // [rsp+70h] [rbp-90h] BYREF
  __int64 v63; // [rsp+80h] [rbp-80h] BYREF
  __int64 v64; // [rsp+88h] [rbp-78h]
  __int64 ContainingPageTable; // [rsp+90h] [rbp-70h]
  _KPROCESS *Process; // [rsp+98h] [rbp-68h]
  unsigned __int64 v67; // [rsp+A0h] [rbp-60h]
  __int64 v68; // [rsp+A8h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-50h]
  __int64 v70; // [rsp+B8h] [rbp-48h]
  ULONG_PTR v71; // [rsp+C0h] [rbp-40h]
  __int128 v72; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v73; // [rsp+D8h] [rbp-28h]
  _BYTE v74[208]; // [rsp+F0h] [rbp-10h] BYREF

  v3 = a3;
  v68 = a2;
  v62 = 0LL;
  memset_0(v74, 0, 0xC8uLL);
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v6 = Process;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  ReadyInPageBlock = MiGetReadyInPageBlock(a2);
  v8 = *(unsigned int *)(BugCheckParameter3 + 40);
  v64 = ReadyInPageBlock;
  v67 = *(_QWORD *)(BugCheckParameter3 + 32);
  v9 = ((v67 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v54 = 0;
  v49 = 0;
  p_Blink = &Process[2].ReadyListHead.Blink;
  MiInitializePageColorBase((__int64)&Process[2].ReadyListHead.Blink, 3, 0, (__int64)&v62);
  Blink_high = HIWORD(v6[2].ProcessListEntry.Blink);
  v11 = DWORD2(v62) & 0xFFF3FFFF | ((v3 & 3) << 18);
  v73 = 0LL;
  v12 = v11;
  DWORD2(v62) = v11;
  v57 = 0x7FFFFFFFFFLL;
  v72 = 0LL;
  v56 = *((_QWORD *)qword_140E2FF88 + Blink_high);
  v13 = v8 >> 12;
  v14 = v56;
  v15 = MiObtainFaultCharges((ULONG *)v56, v13, 2);
  ContainingPageTable = -1LL;
  v16 = 0LL;
  v17 = v15;
  if ( !v15 )
    goto LABEL_14;
  v18 = (v12 >> 16) & 3;
  while ( 1 )
  {
    v19 = _InterlockedExchangeAdd((volatile signed __int32 *)v62, 1u) % (unsigned int)dword_140E2DBC0[v18];
    Page = MiGetPage(v14, DWORD2(v62) ^ (unsigned int)(unsigned __int8)(BYTE8(v62) ^ v19), 8u);
    v21 = Page;
    if ( Page != -1 )
    {
      v22 = (__int64 *)(48 * Page - 0x220000000000LL);
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded((unsigned __int64)v22, a3) )
      {
        v22[2] = MiMakeLinkedListPte(v57);
        v57 = v21;
      }
      MiInsertPageChainHead((__int64 *)&v72, v22);
      v14 = v56;
      ++v16;
      goto LABEL_9;
    }
    if ( v16 )
      break;
    MiWaitForFreePage(v14, 0);
LABEL_9:
    if ( v16 == v17 )
      goto LABEL_12;
  }
  MiReturnFaultCharges(v14, v17 - v16);
  v17 = v16;
LABEL_12:
  if ( v57 != 0x7FFFFFFFFFLL )
  {
    v63 = 0LL;
    MiSetOriginalPtePfnFromFreeList(&v63);
    MiChangePageAttributeBatch(&v57, a3, v63, 0);
  }
LABEL_14:
  v23 = (__int64)p_Blink;
  v58 = v9 + 8 * v17;
  v24 = 0LL;
  v25 = 0LL;
  v26 = MiLockWorkingSetShared((__int64)p_Blink);
  v48 = v26;
  if ( v9 >= v58 )
    goto LABEL_49;
  v71 = BugCheckParameter3 - ((v67 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000030LL;
  while ( 2 )
  {
    if ( v24 )
    {
      if ( (v9 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(v23, v24);
        break;
      }
LABEL_21:
      v29 = *(_QWORD *)v9;
      if ( (*(_QWORD *)v9 & 1) == 0 )
        KeBugCheckEx(0x1Au, 0x41200uLL, v9, *(_QWORD *)v9, BugCheckParameter3);
      v30 = (v29 >> 12) & 0xFFFFFFFFFFLL;
      BugCheckParameter4 = 48 * v30 - 0x220000000000LL;
      if ( v30 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * v30 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        if ( (*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) == v9 )
          KeBugCheckEx(0x1Au, 0x6080uLL, v9, v29, BugCheckParameter4);
        v32 = 1;
        if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x10000000000LL) != 0
          || (*(_QWORD *)(BugCheckParameter4 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
        {
          v32 = 2;
        }
        if ( (unsigned __int16)*(_DWORD *)(BugCheckParameter4 + 32) < v32 )
          KeBugCheckEx(0x1Au, 0x6081uLL, v9, v29, BugCheckParameter4);
      }
      if ( (v29 & 0x42) != 0 && (*(_DWORD *)(v68 + 48) & 0x600000) == 0x600000 )
        MiCaptureWriteWatchDirtyBit(Process, (__int64)(v9 << 25) >> 16, v68);
      v33 = MiUnlinkPageChainHead((__int64)&v72);
      v70 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v33 + 0x44000000000LL) >> 4);
      updated = MiUpdateProtectionMask(v34 + ((v29 & 0x800) != 0 ? 3 : 0), a3);
      DemandZeroPte = MiMakeDemandZeroPte(updated);
      v37 = v64;
      v33[2] = DemandZeroPte;
      if ( !v49 )
      {
        v38 = CurrentThread;
        *(_DWORD *)(v37 + 80) = 0;
        *(_QWORD *)(v37 + 88) = 0LL;
        *(_QWORD *)(v37 + 152) = v38;
        *(_QWORD *)(v37 + 248) = v33;
        v49 = v36;
        *(_DWORD *)(v37 + 192) |= 0x80u;
      }
      MiSetPfnContainingFrame((__int64)v33, ContainingPageTable);
      v59 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v33 + 6, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v59);
        while ( v33[3] < 0 );
      }
      v50 = *((_DWORD *)v33 + 8);
      BYTE2(v50) |= 0x20u;
      *((_DWORD *)v33 + 8) = v50;
      if ( v37 )
        v39 = v37 + 32;
      else
        v39 = 0LL;
      *v33 = v39;
      v33[3] &= 0xC000000000000000uLL;
      MiAddLockedPageCharge((__int64)v33, 1);
      v14 = v56;
      v33[1] = v9;
      v51 = *((_DWORD *)v33 + 8);
      BYTE2(v51) = BYTE2(v51) & 0xF8 | 2;
      *((_DWORD *)v33 + 8) = v51;
      v52 = *((_DWORD *)v33 + 8);
      HIBYTE(v52) ^= (HIBYTE(v52) ^ EffectivePagePriorityThread) & 7;
      *((_DWORD *)v33 + 8) = v52;
      if ( (((unsigned __int64)v33[5] >> 43) & 0x3FF) != 0 )
        ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v56 + 2784));
      _InterlockedAnd64(v33 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      MiReturnFaultCharges(v56, 1uLL);
      TransitionPte = MiMakeTransitionPte(v70, updated);
      v23 = (__int64)p_Blink;
      *(_QWORD *)v9 = TransitionPte;
      ++v25;
      *(_QWORD *)(v71 + v9) = v41;
      v9 += 8LL;
      if ( v9 >= v58 )
        goto LABEL_46;
      continue;
    }
    break;
  }
  v24 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiLockNestedPageTable(v23, v24);
  v27 = v58;
  MiUnlockOpportunisticPagesInPageTable(v23, v48, v9, v58 - 8);
  ContainingPageTable = MiGetContainingPageTable(v9);
  v28 = MiUnlockOpportunisticPagesInPageTable(v23, 0x11u, v9, v27 - 8);
  if ( !v28 )
    goto LABEL_21;
  v58 = v28;
  v54 = 1073741849;
  if ( v9 != v28 )
    goto LABEL_21;
  v14 = v56;
LABEL_46:
  if ( v24 )
    MiUnlockPageTableInternal(v23, v24);
  v26 = v48;
LABEL_49:
  MiUnlockWorkingSetShared(v23, v26);
  MiFreePageChain((__int64)&v72, v42, v43);
  if ( v25 == v17 )
  {
    v44 = v54;
  }
  else
  {
    MiReturnFaultCharges(v14, v17 - v25);
    v44 = v54;
    if ( !v25 )
      v44 = 1073741849;
  }
  *(_DWORD *)(BugCheckParameter3 + 40) = (_DWORD)v25 << 12;
  if ( v25 )
  {
    v45 = Process;
    _InterlockedAdd64((volatile signed __int64 *)Process[1].Padding, v25);
    MiInitializeTbFlushList((__int64)v74, v23, 20, 8, 1);
    MiInsertTbFlushEntry((__int64)v74, v67 & 0xFFFFFFFFFFFFF000uLL, v25, 0);
    MiFlushTbList((__int64)v74);
    *(_QWORD *)(BugCheckParameter3 + 16) = v45;
    *(_WORD *)(BugCheckParameter3 + 10) |= 2u;
    LODWORD(v46) = KeGetPcr()->Prcb.Number;
    _InterlockedAdd64(
      (volatile signed __int64 *)&v45[2].ActiveProcessors[1].StaticBitmap[8 * ((v46 >> 1) & 3) + 30],
      v25);
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(BugCheckParameter3, v25, 4);
  }
  return v44;
}
