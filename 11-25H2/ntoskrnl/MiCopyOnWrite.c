/*
 * XREFs of MiCopyOnWrite @ 0x140386068
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MiFaultInPagedPool @ 0x140246044 (MiFaultInPagedPool.c)
 *     MiProbeLeafPteAccess @ 0x1402ADF50 (MiProbeLeafPteAccess.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 *     MiCopyToUserVa @ 0x1403DDE48 (MiCopyToUserVa.c)
 *     MiMakeProtoPrivate @ 0x1403DE138 (MiMakeProtoPrivate.c)
 *     MiSystemFault @ 0x1403E1EBC (MiSystemFault.c)
 *     MiValidVirtualizationFault @ 0x1403F2F20 (MiValidVirtualizationFault.c)
 *     MiMakeDriverPagesPrivate @ 0x1403F4388 (MiMakeDriverPagesPrivate.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiSplitPrivatePage @ 0x1404672C0 (MiSplitPrivatePage.c)
 *     MiLockPagedAddress @ 0x140478BA0 (MiLockPagedAddress.c)
 *     MiValidFault @ 0x1404EECA0 (MiValidFault.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F6C24 (MiSplitReducedCommitClonePage.c)
 *     MiLockDriverPageRange @ 0x14065F370 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x1406605EC (MiReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140671A88 (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiGetVmAccessLoggingPartition @ 0x140209E80 (MiGetVmAccessLoggingPartition.c)
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MiIdentifyPfn @ 0x140221170 (MiIdentifyPfn.c)
 *     MiDecrementCombinedPteEx @ 0x140224E9C (MiDecrementCombinedPteEx.c)
 *     MiDecrementCloneBlockReference @ 0x140224F2C (MiDecrementCloneBlockReference.c)
 *     MiGetSlabPage @ 0x14022BC70 (MiGetSlabPage.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140247E00 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiFinalizePageAttribute @ 0x14024DDE0 (MiFinalizePageAttribute.c)
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     MiUnlockPageTableCharges @ 0x1402CBD20 (MiUnlockPageTableCharges.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1402FD330 (MiUpdateWorkingSetPrivateSize.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiComputeFaultNode @ 0x14037C200 (MiComputeFaultNode.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSetWsleProtection @ 0x14037D510 (MiSetWsleProtection.c)
 *     MiGetWsleProtection @ 0x14037D600 (MiGetWsleProtection.c)
 *     MiLogPageAccess @ 0x1403806A0 (MiLogPageAccess.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiVmAccessLoggingEnabled @ 0x140386C1C (MiVmAccessLoggingEnabled.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 *     MiGetEffectivePagePriorityThread @ 0x140387440 (MiGetEffectivePagePriorityThread.c)
 *     MiGetCurrentSlabIdentity @ 0x1403BEAC0 (MiGetCurrentSlabIdentity.c)
 *     MiLocateCloneAddress @ 0x1403DE800 (MiLocateCloneAddress.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiCopyOnWrite(
        ULONG_PTR BugCheckParameter2,
        volatile signed __int64 *a2,
        unsigned __int64 SlabPage,
        char a4,
        __int64 *a5)
{
  signed __int64 v7; // rsi
  unsigned __int64 v8; // r15
  int v9; // ebx
  BOOL v10; // r14d
  _KPROCESS *Process; // rdi
  unsigned int SystemRegionType; // eax
  int v13; // ecx
  struct _LIST_ENTRY **p_Blink; // rbx
  unsigned int v15; // edi
  int v16; // eax
  struct _LIST_ENTRY **v17; // r10
  __int64 v18; // rdx
  unsigned __int8 WsleContents; // al
  __int64 v20; // r10
  int v21; // r11d
  int WsleProtection; // eax
  unsigned int v23; // r9d
  unsigned int v24; // ebx
  char v25; // cl
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 ContainingPageTable; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // r13d
  bool v32; // zf
  unsigned __int64 v33; // r13
  __int16 v34; // r14
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // eax
  unsigned __int64 v38; // rbx
  ULONG_PTR v39; // rsi
  int v40; // ebx
  __int64 v41; // r8
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v43; // rdx
  int v44; // eax
  __int64 v46; // r8
  int v47; // r11d
  __int64 v48; // rbx
  struct _LIST_ENTRY *v49; // rbx
  unsigned int v50; // eax
  unsigned int v51; // ecx
  char v52; // al
  unsigned int v53; // [rsp+30h] [rbp-D0h]
  int v54; // [rsp+30h] [rbp-D0h]
  int v55; // [rsp+30h] [rbp-D0h]
  int v56; // [rsp+30h] [rbp-D0h]
  int v57; // [rsp+34h] [rbp-CCh]
  char v58; // [rsp+38h] [rbp-C8h]
  int v59; // [rsp+3Ch] [rbp-C4h]
  int v60; // [rsp+40h] [rbp-C0h]
  ULONG EffectivePagePriorityThread; // [rsp+40h] [rbp-C0h]
  int v62; // [rsp+40h] [rbp-C0h]
  struct _LIST_ENTRY **v63; // [rsp+48h] [rbp-B8h]
  int v65; // [rsp+54h] [rbp-ACh]
  struct _LIST_ENTRY *Address; // [rsp+68h] [rbp-98h] BYREF
  __int64 v68; // [rsp+70h] [rbp-90h]
  _KPROCESS *v69; // [rsp+78h] [rbp-88h]
  unsigned __int64 v70; // [rsp+80h] [rbp-80h]
  ULONG_PTR v71; // [rsp+88h] [rbp-78h]
  __int128 v72; // [rsp+90h] [rbp-70h] BYREF
  __int64 v73; // [rsp+A0h] [rbp-60h]
  ULONG_PTR v74; // [rsp+A8h] [rbp-58h]
  __int128 v75; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v76; // [rsp+C0h] [rbp-40h]
  _QWORD v77[20]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v78; // [rsp+170h] [rbp+70h] BYREF
  int v79; // [rsp+178h] [rbp+78h]
  int v80; // [rsp+17Ch] [rbp+7Ch]

  v71 = BugCheckParameter2;
  v78 = a5;
  v72 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  v7 = *a2;
  v74 = ((unsigned __int64)*a2 >> 12) & 0xFFFFFFFFFFLL;
  Address = 0LL;
  v8 = 48 * v74 - 0x220000000000LL;
  v9 = 0;
  v10 = (v7 & 0x200) == 0;
  v70 = *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v69 = Process;
  SystemRegionType = MiGetSystemRegionType(BugCheckParameter2);
  v59 = 0;
  v65 = 1;
  if ( SystemRegionType == 11 )
  {
    v17 = (struct _LIST_ENTRY **)&unk_140E37B00;
    v63 = (struct _LIST_ENTRY **)&unk_140E37B00;
    v15 = (v7 & 0x200) == 0;
    if ( (*(_QWORD *)(v8 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v8 + 8) > 0 )
      v15 = v10 | 2;
LABEL_13:
    v18 = *((unsigned __int16 *)v17 + 87);
    v53 = 0;
    v73 = *(_QWORD *)v8 & 1LL;
    v68 = *((_QWORD *)qword_140E2FD48 + v18);
    WsleContents = MiGetWsleContents((__int64)qword_140E2FD48, BugCheckParameter2);
    if ( (a4 & 1) == 0
      && (WsleContents & 0xF) != 0xA
      && ((WsleContents & 0xF) == 9 || v21 != 1 && (*(_DWORD *)(v8 + 32) & 0x8000000) != 0) )
    {
      WsleContents = WsleContents & 0xF0 | 0xA;
    }
    v58 = WsleContents & 0xF;
    if ( (WsleContents & 0xF) == 0xA )
      goto LABEL_20;
    if ( (WsleContents & 0xF) == 8 )
    {
      v47 = 1;
      if ( (*(_DWORD *)(v8 + 16) & 0x400LL) != 0 )
        v47 = 2;
      v53 = v47;
    }
    WsleProtection = MiGetWsleProtection(BugCheckParameter2, WsleContents);
    v20 = (__int64)v63;
    if ( !WsleProtection )
LABEL_20:
      WsleProtection = (*(_DWORD *)(v8 + 16) >> 5) & 0x1F;
    v57 = MmMakeProtectNotWriteCopy[WsleProtection];
    if ( SlabPage == -1LL )
    {
      v60 = *(_DWORD *)(v8 + 32);
      MiInitializePageColorBase(v20, 3, v9, (__int64)&v72);
      DWORD2(v72) = DWORD2(v72) & 0xFFF3FFFF | ((BYTE2(v60) & 0xC0) << 12);
      v23 = DWORD2(v72);
      v24 = v23 ^ (unsigned __int8)(v23 ^ (_InterlockedExchangeAdd((volatile signed __int32 *)v72, 1u)
                                         % (unsigned int)dword_140E2D980[HIWORD(v23) & 3]));
      if ( ((_DWORD)v63[23] & 0xF) != 0 || (unsigned __int8)MiGetCurrentSlabIdentity(KeGetCurrentThread()) == 0xFF )
        goto LABEL_24;
      SlabPage = MiGetSlabPage(v68, 8, v24, 0x10u, v78, 0);
      if ( SlabPage == -1LL )
      {
        if ( *v78 )
          return 3221225495LL;
LABEL_24:
        SlabPage = MiGetPage(v68, v24, 1u);
        if ( SlabPage != -1LL )
          goto LABEL_25;
        return 3221225495LL;
      }
    }
LABEL_25:
    if ( v53 )
    {
      if ( v53 >= 2 )
      {
        v48 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
        MiReturnCommit(v48, 1LL, 0);
        if ( v59 == 1 )
          _InterlockedDecrement64((volatile signed __int64 *)(v48 + 19632));
      }
      MiUnlockPageTableCharges(48 * (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
    }
    v25 = v57;
    if ( v57 == 24 )
    {
      v49 = Address;
      LOBYTE(v57) = 1;
      if ( Address
        || (MiLockVadTree(1, 1LL),
            Address = MiLocateAddress(BugCheckParameter2),
            v49 = Address,
            MiUnlockVadTree(1, 0x11u),
            v49) )
      {
        v50 = (LODWORD(v49[3].Flink) >> 7) & 0x1F;
        v51 = v50 >> 3;
        if ( v50 >> 3 == 3 )
        {
          if ( (v50 & 7) != 0 )
          {
            LOBYTE(v57) = 25;
            v25 = 25;
            goto LABEL_27;
          }
        }
        else
        {
          v52 = 1;
          if ( v51 == 1 )
            v52 = 9;
          LOBYTE(v57) = v52;
        }
      }
      v25 = v57;
    }
LABEL_27:
    v26 = 48 * SlabPage - 0x220000000000LL;
    *(_QWORD *)(v26 + 16) = MiMakeDemandZeroPte(v25);
    if ( v58 != 10 )
    {
      MiUpdateWorkingSetPrivateSize((__int64)v63, BugCheckParameter2, 1uLL, 0);
      MiSetWsleProtection(v27, BugCheckParameter2, 0);
      v7 = *a2;
    }
    ContainingPageTable = MiGetContainingPageTable((unsigned __int64)a2);
    MiSetPfnContainingFrame(v26, ContainingPageTable);
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread(), v29, v30);
    if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
      v15 |= 4u;
    v31 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v31 & HvlLongSpinCountMask) == 0
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
      while ( *(__int64 *)(v26 + 24) < 0 );
    }
    v32 = (_DWORD)v73 == 0;
    v33 = v71;
    HIWORD(v54) = HIWORD(*(_DWORD *)(v26 + 32));
    LOWORD(v54) = 1;
    *(_DWORD *)(v26 + 32) = v54;
    if ( !v32 )
      *(_QWORD *)v26 |= 1uLL;
    MiSetPfnModified(v26, 1LL);
    MiFinalizePageAttribute(v26, (unsigned __int8)BYTE2(*(_DWORD *)(v8 + 32)) >> 6, 1LL);
    *(_QWORD *)(v26 + 24) = *(_QWORD *)(v26 + 24) & 0xC000000000000000uLL | 1;
    v55 = *(_DWORD *)(v26 + 32);
    HIBYTE(v55) ^= (HIBYTE(v55) ^ EffectivePagePriorityThread) & 7;
    *(_DWORD *)(v26 + 32) = v55;
    *(_QWORD *)(v26 + 8) = a2;
    v56 = *(_DWORD *)(v26 + 32);
    BYTE2(v56) = BYTE2(v56) & 0xF8 | 6;
    *(_DWORD *)(v26 + 32) = v56;
    if ( v59 || (*(_DWORD *)(v8 + 32) & 0x8000000) == 0 || (a4 & 1) != 0 )
      *(_BYTE *)(v26 + 35) &= ~8u;
    else
      *(_BYTE *)(v26 + 35) |= 8u;
    if ( (v15 & 4) != 0 )
      MiIdentifyPfn(SlabPage, (__int64 *)&v75);
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v15 & 4) != 0 )
    {
      *((_QWORD *)&v76 + 1) |= 8uLL;
      v80 = 0;
      v78 = (__int64 *)&v75;
      v79 = 32;
      EtwTraceKernelEvent((int)&v78, 1, 0x28000001u, 642, 290462468);
    }
    __incgsdword(0x2E94u);
    v34 = 256;
    if ( (v57 & 2) != 0 )
    {
      if ( (MiFlags & 0x20000) == 0 && (MiFlags & 0x8000) != 0 )
      {
        if ( v33 >= 0xFFFF800000000000uLL )
        {
          v34 = 272;
          if ( (a4 & 2) != 0 )
            v34 = 304;
LABEL_46:
          MiCopyPage(SlabPage, v74, v34);
          if ( (unsigned int)MiVmAccessLoggingEnabled(v63)
            && EffectivePagePriorityThread >= MiGetVmAccessLoggingPartition(v35)[4364] )
          {
            MiLogPageAccess(v46, (unsigned __int64)a2);
          }
          v37 = 64;
          v62 = 64;
          if ( (v15 & 1) == 0 )
          {
            if ( v7 < 0 || v59 != 1 )
            {
              v37 = 80;
              v7 |= 0x42uLL;
            }
            v62 = v37 | 0x24;
            v7 = v7 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
          }
          v38 = (SlabPage << 12) ^ (v7 ^ (SlabPage << 12)) & 0xFFF0000000000FFFuLL;
          if ( (a4 & 8) != 0
            && !(unsigned int)MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(
                                a2,
                                (SlabPage << 12) ^ (v7 ^ (SlabPage << 12)) & 0xFFF0000000000FFFuLL,
                                4LL,
                                v36) )
          {
            v15 |= 8u;
          }
          if ( v15 < 8 )
          {
            if ( (v34 & 0x20) != 0 || (v7 & 0x42) == 0 )
            {
              if ( (MiFlags & 0x2000000) != 0 )
                _mm_lfence();
              if ( _bittest64(&MiFlags, 0x24u) && (v7 & 0x21) == 1 && (unsigned __int64)a2 >= 0xFFFFF6C000000000uLL )
                MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a2, v38, 128);
              _InterlockedExchange64(a2, v38);
              if ( MiPteInShadowRange((unsigned __int64)a2) )
                MiWritePteShadow(a2, v38);
              MiFlushSingleTbEntry(v33 & 0xFFFFFFFFFFFFF000uLL, v65, v62);
            }
            else
            {
              *a2 = v38 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              MiFlushSingleTbEntry(v33 & 0xFFFFFFFFFFFFF000uLL, v65, 1);
              if ( _bittest64(&MiFlags, 0x24u) && (v7 & 0x20) == 0 && (unsigned __int64)a2 >= 0xFFFFF6C000000000uLL )
                MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a2, v38, 128);
              *a2 = v38;
            }
          }
          v39 = (ULONG_PTR)v69;
          if ( v59 == 1 )
            _InterlockedIncrement64((volatile signed __int64 *)v69[1].Padding);
          v40 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v40 & HvlLongSpinCountMask) == 0
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
            while ( *(__int64 *)(v8 + 24) < 0 );
          }
          if ( !v59 && (a4 & 1) == 0 && (*(_DWORD *)(v8 + 32) & 0x8000000) != 0 )
            *(_BYTE *)(v8 + 35) &= ~8u;
          MiDecrementShareCountEx(v8, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (v15 & 2) != 0 )
          {
            v44 = MiDecrementCombinedPteEx((int)v63, v70, 0);
          }
          else
          {
            if ( ((_DWORD)v63[23] & 0xF) != 0 )
              return 0LL;
            CloneAddress = MiLocateCloneAddress(v39, v70, v41);
            if ( !CloneAddress )
              return 0LL;
            v44 = MiDecrementCloneBlockReference(CloneAddress, v43, v39);
          }
          if ( v44 == 3 )
            MiChargeCommit(v68, 1uLL, 4);
          return 0LL;
        }
LABEL_44:
        if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
          v34 |= 0x10u;
        goto LABEL_46;
      }
    }
    else
    {
      v34 = 264;
    }
    if ( v33 >= 0xFFFF800000000000uLL )
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
    v17 = (struct _LIST_ENTRY **)&unk_140E37D80;
    v63 = (struct _LIST_ENTRY **)&unk_140E37D80;
    v15 = v10 | 2;
    if ( (*(_QWORD *)(v8 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v8 + 8) < 0 || !*(_QWORD *)(v8 + 8) )
      KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v7, 0x50000uLL);
    goto LABEL_13;
  }
  if ( SystemRegionType == 4 )
    KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v7, 0x40001uLL);
  if ( !Process[1].ActiveGroupPadding[0] )
  {
    v65 = 0;
    p_Blink = &Process[2].ReadyListHead.Blink;
    v15 = (v7 & 0x200) == 0;
    v63 = p_Blink;
    v59 = 1;
    if ( (*(_QWORD *)(v8 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v8 + 8) > 0 )
      v15 = v10 | 2;
    memset_0(v77, 0, 0x98uLL);
    v77[7] = p_Blink;
    v77[0] = BugCheckParameter2;
    v16 = MiComputeFaultNode((__int64)v77, 0LL, &Address);
    v17 = p_Blink;
    v9 = v16;
    goto LABEL_13;
  }
  return 3221226548LL;
}
