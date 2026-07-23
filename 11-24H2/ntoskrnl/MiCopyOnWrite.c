/*
 * XREFs of MiCopyOnWrite @ 0x140346A74
 * Callers:
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiProbeLeafPteAccess @ 0x1402394D0 (MiProbeLeafPteAccess.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiSystemFault @ 0x1402FC7E0 (MiSystemFault.c)
 *     MiFaultInPagedPool @ 0x14030CAC4 (MiFaultInPagedPool.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MmProtectPool @ 0x14038233C (MmProtectPool.c)
 *     MiSplitPrivatePage @ 0x1403C7720 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x1403C9340 (MiCopyToUserVa.c)
 *     MiMakeProtoPrivate @ 0x1403C9630 (MiMakeProtoPrivate.c)
 *     MiValidVirtualizationFault @ 0x14042845C (MiValidVirtualizationFault.c)
 *     MiMakeDriverPagesPrivate @ 0x140429928 (MiMakeDriverPagesPrivate.c)
 *     MiLockPagedAddress @ 0x14047499C (MiLockPagedAddress.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F6C58 (MiSplitReducedCommitClonePage.c)
 *     MiLockDriverPageRange @ 0x14066C080 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x14066D2FC (MiReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067E494 (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140201590 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiGetWsleProtection @ 0x140202860 (MiGetWsleProtection.c)
 *     MiSetWsleProtection @ 0x140203240 (MiSetWsleProtection.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x140219A20 (MiUpdateWorkingSetPrivateSize.c)
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiFinalizePageAttribute @ 0x14024C240 (MiFinalizePageAttribute.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiGetCurrentSlabIdentity @ 0x1402619D0 (MiGetCurrentSlabIdentity.c)
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiDecrementCombinedPteEx @ 0x140294CC8 (MiDecrementCombinedPteEx.c)
 *     MiDecrementCloneBlockReference @ 0x140294D58 (MiDecrementCloneBlockReference.c)
 *     MiLogPageAccess @ 0x140296B90 (MiLogPageAccess.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiIdentifyPfn @ 0x1403113F0 (MiIdentifyPfn.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiComputeFaultNode @ 0x140343670 (MiComputeFaultNode.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiVmAccessLoggingEnabled @ 0x140346A3C (MiVmAccessLoggingEnabled.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiGetVmAccessLoggingPartition @ 0x140351780 (MiGetVmAccessLoggingPartition.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiLocateCloneAddress @ 0x1403C9CE8 (MiLocateCloneAddress.c)
 *     MiUnlockPageTableCharges @ 0x1403DB820 (MiUnlockPageTableCharges.c)
 *     MiGetEffectivePagePriorityThread @ 0x1403DC8F0 (MiGetEffectivePagePriorityThread.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiCopyOnWrite(
        ULONG_PTR BugCheckParameter2,
        volatile signed __int64 *a2,
        unsigned __int64 SlabPage,
        char a4,
        __int64 *a5)
{
  signed __int64 v7; // rsi
  __int64 v8; // r15
  int v9; // ebx
  BOOL v10; // r14d
  _KPROCESS *Process; // rdi
  unsigned int SystemRegionType; // eax
  int v13; // ecx
  struct _LIST_ENTRY **p_Blink; // rbx
  unsigned int v15; // edi
  __int64 v16; // r9
  int v17; // eax
  struct _LIST_ENTRY **v18; // r10
  __int64 v19; // rdx
  unsigned __int8 WsleContents; // al
  __int64 v21; // r10
  int v22; // r11d
  __int64 v23; // r9
  __int64 v24; // r8
  int WsleProtection; // eax
  unsigned int v26; // r9d
  unsigned int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 ContainingPageTable; // rax
  unsigned int v33; // r13d
  bool v34; // zf
  unsigned __int64 v35; // r13
  __int16 v36; // r14
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // eax
  unsigned __int64 v40; // rbx
  ULONG_PTR v41; // rsi
  unsigned int v42; // ebx
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v44; // rdx
  int v45; // eax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rbx
  int v50; // r11d
  __int64 v51; // rbx
  unsigned int v52; // eax
  unsigned int v53; // ecx
  int v54; // eax
  unsigned int v55; // [rsp+30h] [rbp-D0h]
  int v56; // [rsp+30h] [rbp-D0h]
  int v57; // [rsp+30h] [rbp-D0h]
  int v58; // [rsp+30h] [rbp-D0h]
  unsigned int v59; // [rsp+34h] [rbp-CCh]
  char v60; // [rsp+38h] [rbp-C8h]
  int v61; // [rsp+3Ch] [rbp-C4h]
  int v62; // [rsp+40h] [rbp-C0h]
  unsigned int EffectivePagePriorityThread; // [rsp+40h] [rbp-C0h]
  int v64; // [rsp+40h] [rbp-C0h]
  struct _LIST_ENTRY **v65; // [rsp+48h] [rbp-B8h]
  int v67; // [rsp+54h] [rbp-ACh]
  struct _LIST_ENTRY *Address; // [rsp+68h] [rbp-98h] BYREF
  __int64 v70; // [rsp+70h] [rbp-90h]
  _KPROCESS *v71; // [rsp+78h] [rbp-88h]
  unsigned __int64 v72; // [rsp+80h] [rbp-80h]
  ULONG_PTR v73; // [rsp+88h] [rbp-78h]
  __int128 v74; // [rsp+90h] [rbp-70h] BYREF
  __int64 v75; // [rsp+A0h] [rbp-60h]
  ULONG_PTR v76; // [rsp+A8h] [rbp-58h]
  __int128 v77; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v78; // [rsp+C0h] [rbp-40h]
  _QWORD v79[20]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v80; // [rsp+170h] [rbp+70h] BYREF
  int v81; // [rsp+178h] [rbp+78h]
  int v82; // [rsp+17Ch] [rbp+7Ch]

  v73 = BugCheckParameter2;
  v80 = a5;
  v74 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  v7 = *a2;
  v76 = ((unsigned __int64)*a2 >> 12) & 0xFFFFFFFFFFLL;
  Address = 0LL;
  v8 = 48 * v76 - 0x220000000000LL;
  v9 = 0;
  v10 = (v7 & 0x200) == 0;
  v72 = *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v71 = Process;
  SystemRegionType = MiGetSystemRegionType(BugCheckParameter2);
  v61 = 0;
  v67 = 1;
  if ( SystemRegionType == 11 )
  {
    v18 = (struct _LIST_ENTRY **)&unk_140E37E80;
    v65 = (struct _LIST_ENTRY **)&unk_140E37E80;
    v15 = (v7 & 0x200) == 0;
    if ( (*(_QWORD *)(v8 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v8 + 8) > 0 )
      v15 = v10 | 2;
LABEL_13:
    v19 = *((unsigned __int16 *)v18 + 87);
    v55 = 0;
    v75 = *(_QWORD *)v8 & 1LL;
    v70 = *((_QWORD *)qword_140E300C8 + v19);
    WsleContents = MiGetWsleContents((__int64)qword_140E300C8, BugCheckParameter2);
    v23 = 9LL;
    LOBYTE(v24) = 10;
    if ( (a4 & 1) == 0
      && (WsleContents & 0xF) != 0xA
      && ((WsleContents & 0xF) == 9 || v22 != 1 && (*(_DWORD *)(v8 + 32) & 0x8000000) != 0) )
    {
      WsleContents = WsleContents & 0xF0 | 0xA;
    }
    v60 = WsleContents & 0xF;
    if ( (WsleContents & 0xF) == 0xA )
      goto LABEL_20;
    if ( (WsleContents & 0xF) == 8 )
    {
      v50 = 1;
      if ( (*(_DWORD *)(v8 + 16) & 0x400LL) != 0 )
        v50 = 2;
      v55 = v50;
    }
    WsleProtection = MiGetWsleProtection(BugCheckParameter2, WsleContents);
    v21 = (__int64)v65;
    if ( !WsleProtection )
LABEL_20:
      WsleProtection = (*(_DWORD *)(v8 + 16) >> 5) & 0x1F;
    v59 = MmMakeProtectNotWriteCopy[WsleProtection];
    if ( SlabPage == -1LL )
    {
      v62 = *(_DWORD *)(v8 + 32);
      MiInitializePageColorBase(v21, 3, v9, (__int64)&v74);
      DWORD2(v74) = DWORD2(v74) & 0xFFF3FFFF | ((BYTE2(v62) & 0xC0) << 12);
      v26 = DWORD2(v74);
      v27 = v26 ^ (unsigned __int8)(v26 ^ (_InterlockedExchangeAdd((volatile signed __int32 *)v74, 1u)
                                         % (unsigned int)dword_140E2DD00[HIWORD(v26) & 3]));
      if ( ((_DWORD)v65[23] & 0xF) != 0
        || (unsigned __int8)MiGetCurrentSlabIdentity((__int64)KeGetCurrentThread()) == 0xFF )
      {
        goto LABEL_24;
      }
      SlabPage = MiGetSlabPage(v70, 8, v27, 0x10u, v80, 0);
      if ( SlabPage == -1LL )
      {
        if ( *v80 )
          return 3221225495LL;
LABEL_24:
        SlabPage = MiGetPage(v70, v27, 1u);
        if ( SlabPage != -1LL )
          goto LABEL_25;
        return 3221225495LL;
      }
    }
LABEL_25:
    v28 = 1LL;
    if ( v55 )
    {
      if ( v55 >= 2 )
      {
        v49 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
        MiReturnCommit(v49, 1LL, 0);
        if ( v61 == 1 )
          _InterlockedDecrement64((volatile signed __int64 *)(v49 + 19632));
      }
      MiUnlockPageTableCharges(48 * (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
      v28 = 1LL;
    }
    v29 = v59;
    if ( v59 != 24 )
    {
LABEL_27:
      v30 = 48 * SlabPage - 0x220000000000LL;
      *(_QWORD *)(v30 + 16) = MiMakeDemandZeroPte(v29, v28, v24, v23);
      if ( v60 != 10 )
      {
        MiUpdateWorkingSetPrivateSize((__int64)v65, BugCheckParameter2, 1uLL, 0);
        MiSetWsleProtection(v31, BugCheckParameter2, 0LL);
        v7 = *a2;
      }
      ContainingPageTable = MiGetContainingPageTable(a2);
      MiSetPfnContainingFrame(v30, ContainingPageTable);
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread());
      if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
        v15 |= 4u;
      v33 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v33 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v33);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v30 + 24) < 0 );
      }
      v34 = (_DWORD)v75 == 0;
      v35 = v73;
      HIWORD(v56) = HIWORD(*(_DWORD *)(v30 + 32));
      LOWORD(v56) = 1;
      *(_DWORD *)(v30 + 32) = v56;
      if ( !v34 )
        *(_QWORD *)v30 |= 1uLL;
      MiSetPfnModified(v30, 1);
      MiFinalizePageAttribute(v30, (unsigned __int8)BYTE2(*(_DWORD *)(v8 + 32)) >> 6, 1LL);
      *(_QWORD *)(v30 + 24) = *(_QWORD *)(v30 + 24) & 0xC000000000000000uLL | 1;
      v57 = *(_DWORD *)(v30 + 32);
      HIBYTE(v57) ^= (HIBYTE(v57) ^ EffectivePagePriorityThread) & 7;
      *(_DWORD *)(v30 + 32) = v57;
      *(_QWORD *)(v30 + 8) = a2;
      v58 = *(_DWORD *)(v30 + 32);
      BYTE2(v58) = BYTE2(v58) & 0xF8 | 6;
      *(_DWORD *)(v30 + 32) = v58;
      if ( v61 || (*(_DWORD *)(v8 + 32) & 0x8000000) == 0 || (a4 & 1) != 0 )
        *(_BYTE *)(v30 + 35) &= ~8u;
      else
        *(_BYTE *)(v30 + 35) |= 8u;
      if ( (v15 & 4) != 0 )
        MiIdentifyPfn(SlabPage, (__int64 *)&v77);
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v15 & 4) != 0 )
      {
        *((_QWORD *)&v78 + 1) |= 8uLL;
        v82 = 0;
        v80 = (__int64 *)&v77;
        v81 = 32;
        EtwTraceKernelEvent((int)&v80, 1, 0x28000001u, 642, 290462468);
      }
      __incgsdword(0x2E94u);
      v36 = 256;
      if ( (v59 & 2) != 0 )
      {
        if ( (MiFlags & 0x20000) == 0 && (MiFlags & 0x8000) != 0 )
        {
          if ( v35 >= 0xFFFF800000000000uLL )
          {
            v36 = 272;
            if ( (a4 & 2) != 0 )
              v36 = 304;
LABEL_46:
            MiCopyPage(SlabPage, v76, v36);
            if ( (unsigned int)MiVmAccessLoggingEnabled((__int64)v65)
              && EffectivePagePriorityThread >= *(_DWORD *)(MiGetVmAccessLoggingPartition(v37) + 17456) )
            {
              MiLogPageAccess(v37, (unsigned __int64)a2);
            }
            v39 = 64;
            v64 = 64;
            if ( (v15 & 1) == 0 )
            {
              if ( v7 < 0 || v61 != 1 )
              {
                v39 = 80;
                v7 |= 0x42uLL;
              }
              v64 = v39 | 0x24;
              v7 = v7 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
            }
            v40 = (SlabPage << 12) ^ (v7 ^ (SlabPage << 12)) & 0xFFF0000000000FFFuLL;
            if ( (a4 & 8) != 0
              && !(unsigned int)MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(
                                  a2,
                                  (SlabPage << 12) ^ (v7 ^ (SlabPage << 12)) & 0xFFF0000000000FFFuLL,
                                  4) )
            {
              v15 |= 8u;
            }
            if ( v15 < 8 )
            {
              if ( (v36 & 0x20) != 0 || (v7 & 0x42) == 0 )
              {
                if ( (MiFlags & 0x2000000) != 0 )
                  _mm_lfence();
                if ( _bittest64(&MiFlags, 0x24u) && (v7 & 0x21) == 1 && (unsigned __int64)a2 >= 0xFFFFF6C000000000uLL )
                  MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a2, v40, 128LL);
                _InterlockedExchange64(a2, v40);
                if ( MiPteInShadowRange((unsigned __int64)a2) )
                  MiWritePteShadow((__int64)a2, v40, v47, v48);
                MiFlushSingleTbEntry(v35 & 0xFFFFFFFFFFFFF000uLL, v67, v64);
              }
              else
              {
                *a2 = v40 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
                MiFlushSingleTbEntry(v35 & 0xFFFFFFFFFFFFF000uLL, v67, 1);
                if ( _bittest64(&MiFlags, 0x24u) && (v7 & 0x20) == 0 && (unsigned __int64)a2 >= 0xFFFFF6C000000000uLL )
                  MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a2, v40, 128LL);
                *a2 = v40;
              }
            }
            v41 = (ULONG_PTR)v71;
            if ( v61 == 1 )
              _InterlockedIncrement64((volatile signed __int64 *)v71[1].Padding);
            v42 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v42 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait(v42);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v8 + 24) < 0 );
            }
            if ( !v61 && (a4 & 1) == 0 && (*(_DWORD *)(v8 + 32) & 0x8000000) != 0 )
              *(_BYTE *)(v8 + 35) &= ~8u;
            MiDecrementShareCountEx(v8, 0LL, v37, v38);
            _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (v15 & 2) != 0 )
            {
              v45 = MiDecrementCombinedPteEx((int)v65, v72, 0);
            }
            else
            {
              if ( ((_DWORD)v65[23] & 0xF) != 0 )
                return 0LL;
              CloneAddress = MiLocateCloneAddress(v41, v72);
              if ( !CloneAddress )
                return 0LL;
              v45 = MiDecrementCloneBlockReference(CloneAddress, v44, v41);
            }
            if ( v45 == 3 )
              MiChargeCommit(v70, 1uLL, 4);
            return 0LL;
          }
LABEL_44:
          if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
            v36 |= 0x10u;
          goto LABEL_46;
        }
      }
      else
      {
        v36 = 264;
      }
      if ( v35 >= 0xFFFF800000000000uLL )
        goto LABEL_46;
      goto LABEL_44;
    }
    v51 = (__int64)Address;
    v59 = 1;
    if ( !Address )
    {
      MiLockVadTree(1, 1LL, v24, v23);
      Address = MiLocateAddress(BugCheckParameter2);
      v51 = (__int64)Address;
      MiUnlockVadTree(1, 0x11u);
      if ( !v51 )
      {
LABEL_146:
        v29 = v59;
        goto LABEL_27;
      }
      v28 = 1LL;
    }
    v52 = (*(_DWORD *)(v51 + 48) >> 7) & 0x1F;
    v53 = v52 >> 3;
    if ( v52 >> 3 == 3 )
    {
      if ( (v52 & 7) != 0 )
      {
        LOBYTE(v59) = 25;
        v29 = 25LL;
        goto LABEL_27;
      }
    }
    else
    {
      v54 = 1;
      if ( v53 == 1 )
        v54 = 9;
      v59 = v54;
    }
    goto LABEL_146;
  }
  if ( SystemRegionType <= 0xF )
  {
    v13 = 41216;
    if ( _bittest(&v13, SystemRegionType) )
      KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v7, (int)(SystemRegionType << 16) | 2LL);
  }
  if ( SystemRegionType == 5 )
  {
    v18 = (struct _LIST_ENTRY **)&unk_140E38100;
    v65 = (struct _LIST_ENTRY **)&unk_140E38100;
    v15 = v10 | 2;
    if ( (*(_QWORD *)(v8 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v8 + 8) < 0 || !*(_QWORD *)(v8 + 8) )
      KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v7, 0x50000uLL);
    goto LABEL_13;
  }
  if ( SystemRegionType == 4 )
    KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v7, 0x40001uLL);
  if ( !Process[1].ActiveGroupPadding[0] )
  {
    v67 = 0;
    p_Blink = &Process[2].ReadyListHead.Blink;
    v15 = (v7 & 0x200) == 0;
    v65 = p_Blink;
    v61 = 1;
    if ( (*(_QWORD *)(v8 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v8 + 8) > 0 )
      v15 = v10 | 2;
    memset_0(v79, 0, 0x98uLL);
    v79[7] = p_Blink;
    v79[0] = BugCheckParameter2;
    v17 = MiComputeFaultNode(v79, 0LL, (__int64 *)&Address, v16);
    v18 = p_Blink;
    v9 = v17;
    goto LABEL_13;
  }
  return 3221226548LL;
}
