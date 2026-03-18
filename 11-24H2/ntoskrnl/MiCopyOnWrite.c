/*
 * XREFs of MiCopyOnWrite @ 0x1402E47DC
 * Callers:
 *     MiSystemFault @ 0x140229570 (MiSystemFault.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiMakeProtoPrivate @ 0x140239334 (MiMakeProtoPrivate.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiProbeLeafPteAccess @ 0x140283F40 (MiProbeLeafPteAccess.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MiFaultInPagedPool @ 0x140302344 (MiFaultInPagedPool.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiCopyToUserVa @ 0x1403E2DBC (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x1404051C4 (MiSplitPrivatePage.c)
 *     MiValidVirtualizationFault @ 0x1404359DC (MiValidVirtualizationFault.c)
 *     MiMakeDriverPagesPrivate @ 0x140436EA8 (MiMakeDriverPagesPrivate.c)
 *     MiLockPagedAddress @ 0x14047910C (MiLockPagedAddress.c)
 *     MiValidFault @ 0x1404F2C70 (MiValidFault.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F9378 (MiSplitReducedCommitClonePage.c)
 *     MiLockDriverPageRange @ 0x14066AEB0 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x14066C12C (MiReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067D29C (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiFinalizePageAttribute @ 0x14021F4F0 (MiFinalizePageAttribute.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSetWsleProtection @ 0x140232ACC (MiSetWsleProtection.c)
 *     MiGetWsleProtection @ 0x140233100 (MiGetWsleProtection.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1402869A0 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiLogPageAccess @ 0x140286F90 (MiLogPageAccess.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1402C49A0 (MiUpdateWorkingSetPrivateSize.c)
 *     MiUnlockPageTableCharges @ 0x1402C7D50 (MiUnlockPageTableCharges.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E44B0 (MiGetEffectivePagePriorityThread.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiVmAccessLoggingEnabled @ 0x1402E47A4 (MiVmAccessLoggingEnabled.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiGetSlabPage @ 0x1402F3934 (MiGetSlabPage.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiDecrementCombinedPteEx @ 0x1402F9014 (MiDecrementCombinedPteEx.c)
 *     MiDecrementCloneBlockReference @ 0x1402F90A4 (MiDecrementCloneBlockReference.c)
 *     MiComputeFaultNode @ 0x1402FA290 (MiComputeFaultNode.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiIdentifyPfn @ 0x140307510 (MiIdentifyPfn.c)
 *     MiGetVmAccessLoggingPartition @ 0x140399050 (MiGetVmAccessLoggingPartition.c)
 *     MiLocateCloneAddress @ 0x1403E3608 (MiLocateCloneAddress.c)
 *     MiGetCurrentSlabIdentity @ 0x1403FC210 (MiGetCurrentSlabIdentity.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiCopyOnWrite(
        ULONG_PTR BugCheckParameter2,
        volatile signed __int64 *a2,
        ULONG_PTR SlabPage,
        char a4,
        __int128 *a5)
{
  signed __int64 v7; // rsi
  unsigned __int64 v8; // r15
  unsigned int v9; // ebx
  BOOL v10; // r14d
  _KPROCESS *Process; // rdi
  unsigned int SystemRegionType; // eax
  int v13; // ecx
  struct _LIST_ENTRY **p_Blink; // rbx
  unsigned int v15; // edi
  unsigned int v16; // eax
  struct _LIST_ENTRY **v17; // r10
  __int64 v18; // rdx
  unsigned __int8 WsleContents; // al
  struct _LIST_ENTRY **v20; // r10
  int v21; // r11d
  __int64 v22; // r8
  int WsleProtection; // eax
  unsigned int v24; // r9d
  unsigned int v25; // ebx
  char v26; // cl
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 ContainingPageTable; // rax
  unsigned int v30; // r13d
  bool v31; // zf
  unsigned __int64 v32; // r13
  __int16 v33; // r14
  __int64 v34; // r8
  int v35; // eax
  unsigned __int64 v36; // rbx
  _KPROCESS *v37; // rsi
  unsigned int v38; // ebx
  __int64 v39; // r8
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v41; // rdx
  int v42; // eax
  __int64 v44; // r8
  __int64 v45; // rbx
  int v46; // r11d
  __int64 v47; // rbx
  unsigned int v48; // eax
  unsigned int v49; // ecx
  char v50; // al
  unsigned int v51; // [rsp+30h] [rbp-D0h]
  int v52; // [rsp+30h] [rbp-D0h]
  int v53; // [rsp+30h] [rbp-D0h]
  int v54; // [rsp+30h] [rbp-D0h]
  int v55; // [rsp+34h] [rbp-CCh]
  char v56; // [rsp+38h] [rbp-C8h]
  int v57; // [rsp+3Ch] [rbp-C4h]
  int v58; // [rsp+40h] [rbp-C0h]
  unsigned int EffectivePagePriorityThread; // [rsp+40h] [rbp-C0h]
  int v60; // [rsp+40h] [rbp-C0h]
  struct _LIST_ENTRY **v61; // [rsp+48h] [rbp-B8h]
  int v63; // [rsp+54h] [rbp-ACh]
  __int64 Address; // [rsp+68h] [rbp-98h] BYREF
  __int64 v66; // [rsp+70h] [rbp-90h]
  _KPROCESS *v67; // [rsp+78h] [rbp-88h]
  unsigned __int64 v68; // [rsp+80h] [rbp-80h]
  ULONG_PTR v69; // [rsp+88h] [rbp-78h]
  __int128 v70; // [rsp+90h] [rbp-70h] BYREF
  __int64 v71; // [rsp+A0h] [rbp-60h]
  ULONG_PTR v72; // [rsp+A8h] [rbp-58h]
  __int128 v73; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v74; // [rsp+C0h] [rbp-40h]
  _QWORD v75[20]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 *v76; // [rsp+170h] [rbp+70h] BYREF
  int v77; // [rsp+178h] [rbp+78h]
  int v78; // [rsp+17Ch] [rbp+7Ch]

  v69 = BugCheckParameter2;
  v76 = a5;
  v70 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  if ( a5 )
    *(_QWORD *)a5 = 0LL;
  v7 = *a2;
  v72 = ((unsigned __int64)*a2 >> 12) & 0xFFFFFFFFFFLL;
  Address = 0LL;
  v8 = 48 * v72 - 0x220000000000LL;
  v9 = 0;
  v10 = (v7 & 0x200) == 0;
  v68 = *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v67 = Process;
  SystemRegionType = MiGetSystemRegionType(BugCheckParameter2);
  v57 = 0;
  v63 = 1;
  if ( SystemRegionType == 11 )
  {
    v17 = (struct _LIST_ENTRY **)&unk_140E37D40;
    v61 = (struct _LIST_ENTRY **)&unk_140E37D40;
    v15 = (v7 & 0x200) == 0;
    if ( (*(_QWORD *)(v8 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v8 + 8) > 0 )
      v15 = v10 | 2;
LABEL_13:
    v18 = *((unsigned __int16 *)v17 + 87);
    v51 = 0;
    v71 = *(_QWORD *)v8 & 1LL;
    v66 = *((_QWORD *)qword_140E2FF88 + v18);
    WsleContents = MiGetWsleContents(qword_140E2FF88, BugCheckParameter2);
    LOBYTE(v22) = 10;
    if ( (a4 & 1) == 0
      && (WsleContents & 0xF) != 0xA
      && ((WsleContents & 0xF) == 9 || v21 != 1 && (*(_DWORD *)(v8 + 32) & 0x8000000) != 0) )
    {
      WsleContents = WsleContents & 0xF0 | 0xA;
    }
    v56 = WsleContents & 0xF;
    if ( (WsleContents & 0xF) == 0xA )
      goto LABEL_20;
    if ( (WsleContents & 0xF) == 8 )
    {
      v46 = 1;
      if ( (*(_DWORD *)(v8 + 16) & 0x400LL) != 0 )
        v46 = 2;
      v51 = v46;
    }
    WsleProtection = MiGetWsleProtection(BugCheckParameter2, WsleContents);
    v20 = v61;
    if ( !WsleProtection )
LABEL_20:
      WsleProtection = (*(_DWORD *)(v8 + 16) >> 5) & 0x1F;
    v55 = MmMakeProtectNotWriteCopy[WsleProtection];
    if ( SlabPage == -1LL )
    {
      v58 = *(_DWORD *)(v8 + 32);
      MiInitializePageColorBase(v20, 3LL, v9, &v70);
      DWORD2(v70) = DWORD2(v70) & 0xFFF3FFFF | ((BYTE2(v58) & 0xC0) << 12);
      v24 = DWORD2(v70);
      v25 = v24 ^ (unsigned __int8)(v24 ^ (_InterlockedExchangeAdd((volatile signed __int32 *)v70, 1u)
                                         % (unsigned int)dword_140E2DBC0[HIWORD(v24) & 3]));
      if ( ((_DWORD)v61[23] & 0xF) != 0 || (unsigned __int8)MiGetCurrentSlabIdentity(KeGetCurrentThread()) == 0xFF )
        goto LABEL_24;
      SlabPage = MiGetSlabPage(v66, 8, v25, 16, (__int64)v76, 0);
      if ( SlabPage == -1LL )
      {
        if ( *(_QWORD *)v76 )
          return 3221225495LL;
LABEL_24:
        SlabPage = MiGetPage(v66, v25, 1LL);
        if ( SlabPage != -1LL )
          goto LABEL_25;
        return 3221225495LL;
      }
    }
LABEL_25:
    if ( v51 )
    {
      if ( v51 >= 2 )
      {
        v45 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
        MiReturnCommit(v45, 1LL, 0);
        if ( v57 == 1 )
          _InterlockedDecrement64((volatile signed __int64 *)(v45 + 19632));
      }
      MiUnlockPageTableCharges(48 * (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
    }
    v26 = v55;
    if ( v55 == 24 )
    {
      v47 = Address;
      LOBYTE(v55) = 1;
      if ( Address
        || (MiLockVadTree(1, 1LL, v22),
            Address = MiLocateAddress(BugCheckParameter2),
            v47 = Address,
            MiUnlockVadTree(1, 0x11u),
            v47) )
      {
        v48 = (*(_DWORD *)(v47 + 48) >> 7) & 0x1F;
        v49 = v48 >> 3;
        if ( v48 >> 3 == 3 )
        {
          if ( (v48 & 7) != 0 )
          {
            LOBYTE(v55) = 25;
            v26 = 25;
            goto LABEL_27;
          }
        }
        else
        {
          v50 = 1;
          if ( v49 == 1 )
            v50 = 9;
          LOBYTE(v55) = v50;
        }
      }
      v26 = v55;
    }
LABEL_27:
    v27 = 48 * SlabPage - 0x220000000000LL;
    *(_QWORD *)(v27 + 16) = MiMakeDemandZeroPte(v26);
    if ( v56 != 10 )
    {
      MiUpdateWorkingSetPrivateSize((__int64)v61, BugCheckParameter2, 1uLL, 0);
      MiSetWsleProtection(v28, BugCheckParameter2, 0);
      v7 = *a2;
    }
    ContainingPageTable = MiGetContainingPageTable(a2);
    MiSetPfnContainingFrame(v27, ContainingPageTable);
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
    if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
      v15 |= 4u;
    v30 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v30 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v30);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v27 + 24) < 0 );
    }
    v31 = (_DWORD)v71 == 0;
    v32 = v69;
    HIWORD(v52) = HIWORD(*(_DWORD *)(v27 + 32));
    LOWORD(v52) = 1;
    *(_DWORD *)(v27 + 32) = v52;
    if ( !v31 )
      *(_QWORD *)v27 |= 1uLL;
    MiSetPfnModified(v27, 1);
    MiFinalizePageAttribute(v27, (unsigned __int8)BYTE2(*(_DWORD *)(v8 + 32)) >> 6, 1LL);
    *(_QWORD *)(v27 + 24) = *(_QWORD *)(v27 + 24) & 0xC000000000000000uLL | 1;
    v53 = *(_DWORD *)(v27 + 32);
    HIBYTE(v53) ^= (HIBYTE(v53) ^ EffectivePagePriorityThread) & 7;
    *(_DWORD *)(v27 + 32) = v53;
    *(_QWORD *)(v27 + 8) = a2;
    v54 = *(_DWORD *)(v27 + 32);
    BYTE2(v54) = BYTE2(v54) & 0xF8 | 6;
    *(_DWORD *)(v27 + 32) = v54;
    if ( v57 || (*(_DWORD *)(v8 + 32) & 0x8000000) == 0 || (a4 & 1) != 0 )
      *(_BYTE *)(v27 + 35) &= ~8u;
    else
      *(_BYTE *)(v27 + 35) |= 8u;
    if ( (v15 & 4) != 0 )
      MiIdentifyPfn(SlabPage, &v73);
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v15 & 4) != 0 )
    {
      *((_QWORD *)&v74 + 1) |= 8uLL;
      v78 = 0;
      v76 = &v73;
      v77 = 32;
      EtwTraceKernelEvent((int)&v76, 1, 0x28000001u, 642, 290462468);
    }
    __incgsdword(0x2E94u);
    v33 = 256;
    if ( (v55 & 2) != 0 )
    {
      if ( (MiFlags & 0x20000) == 0 && (MiFlags & 0x8000) != 0 )
      {
        if ( v32 >= 0xFFFF800000000000uLL )
        {
          v33 = 272;
          if ( (a4 & 2) != 0 )
            v33 = 304;
LABEL_46:
          MiCopyPage(SlabPage, v72, v33);
          if ( (unsigned int)MiVmAccessLoggingEnabled((__int64)v61)
            && EffectivePagePriorityThread >= *(_DWORD *)(MiGetVmAccessLoggingPartition(v34) + 17456) )
          {
            MiLogPageAccess(v44, (unsigned __int64)a2);
          }
          v35 = 64;
          v60 = 64;
          if ( (v15 & 1) == 0 )
          {
            if ( v7 < 0 || v57 != 1 )
            {
              v35 = 80;
              v7 |= 0x42uLL;
            }
            v60 = v35 | 0x24;
            v7 = v7 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
          }
          v36 = (SlabPage << 12) ^ (v7 ^ (SlabPage << 12)) & 0xFFF0000000000FFFuLL;
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
            if ( (v33 & 0x20) != 0 || (v7 & 0x42) == 0 )
            {
              if ( (MiFlags & 0x2000000) != 0 )
                _mm_lfence();
              if ( _bittest64(&MiFlags, 0x24u) && (v7 & 0x21) == 1 && (unsigned __int64)a2 >= 0xFFFFF6C000000000uLL )
                MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a2, v36, 128);
              _InterlockedExchange64(a2, v36);
              if ( MiPteInShadowRange((unsigned __int64)a2) )
                MiWritePteShadow();
              MiFlushSingleTbEntry(v32 & 0xFFFFFFFFFFFFF000uLL, v63, v60);
            }
            else
            {
              *a2 = v36 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              MiFlushSingleTbEntry(v32 & 0xFFFFFFFFFFFFF000uLL, v63, 1);
              if ( _bittest64(&MiFlags, 0x24u) && (v7 & 0x20) == 0 && (unsigned __int64)a2 >= 0xFFFFF6C000000000uLL )
                MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a2, v36, 128);
              *a2 = v36;
            }
          }
          v37 = v67;
          if ( v57 == 1 )
            _InterlockedIncrement64((volatile signed __int64 *)v67[1].Padding);
          v38 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v38 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v38);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v8 + 24) < 0 );
          }
          if ( !v57 && (a4 & 1) == 0 && (*(_DWORD *)(v8 + 32) & 0x8000000) != 0 )
            *(_BYTE *)(v8 + 35) &= ~8u;
          MiDecrementShareCountEx(v8, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (v15 & 2) != 0 )
          {
            v42 = MiDecrementCombinedPteEx(v61, v68, 0LL);
          }
          else
          {
            if ( ((_DWORD)v61[23] & 0xF) != 0 )
              return 0LL;
            CloneAddress = MiLocateCloneAddress(v37, v68, v39);
            if ( !CloneAddress )
              return 0LL;
            v42 = MiDecrementCloneBlockReference(CloneAddress, v41);
          }
          if ( v42 == 3 )
            MiChargeCommit(v66, 1uLL, 4);
          return 0LL;
        }
LABEL_44:
        if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
          v33 |= 0x10u;
        goto LABEL_46;
      }
    }
    else
    {
      v33 = 264;
    }
    if ( v32 >= 0xFFFF800000000000uLL )
      goto LABEL_46;
    goto LABEL_44;
  }
  if ( SystemRegionType <= 0xF )
  {
    v13 = 41216;
    if ( _bittest(&v13, SystemRegionType) )
      KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v7, (int)(SystemRegionType << 16) | 2LL);
  }
  if ( SystemRegionType == 5 )
  {
    v17 = (struct _LIST_ENTRY **)&unk_140E37FC0;
    v61 = (struct _LIST_ENTRY **)&unk_140E37FC0;
    v15 = v10 | 2;
    if ( (*(_QWORD *)(v8 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v8 + 8) < 0 || !*(_QWORD *)(v8 + 8) )
      KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v7, 0x50000uLL);
    goto LABEL_13;
  }
  if ( SystemRegionType == 4 )
    KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v7, 0x40001uLL);
  if ( !Process[1].ActiveGroupPadding[0] )
  {
    v63 = 0;
    p_Blink = &Process[2].ReadyListHead.Blink;
    v15 = (v7 & 0x200) == 0;
    v61 = p_Blink;
    v57 = 1;
    if ( (*(_QWORD *)(v8 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v8 + 8) > 0 )
      v15 = v10 | 2;
    memset_0(v75, 0, 0x98uLL);
    v75[7] = p_Blink;
    v75[0] = BugCheckParameter2;
    v16 = MiComputeFaultNode(v75, 0LL, &Address);
    v17 = p_Blink;
    v9 = v16;
    goto LABEL_13;
  }
  return 3221226548LL;
}
