/*
 * XREFs of MiFlushTbList @ 0x14032BCA0
 * Callers:
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MiFlushTbAsNeeded @ 0x140237D10 (MiFlushTbAsNeeded.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402A52C8 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1402A5800 (NtGetWriteWatch.c)
 *     MiUnmapContiguousMemory @ 0x1402AA7B8 (MiUnmapContiguousMemory.c)
 *     MiDecommitPagesTail @ 0x1402B2194 (MiDecommitPagesTail.c)
 *     MiGetNextPageTablePte @ 0x1402B4B60 (MiGetNextPageTablePte.c)
 *     MiReleasePteMappings @ 0x1402BF490 (MiReleasePteMappings.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402C18C0 (MmSetAddressRangeModifiedEx.c)
 *     MiGetPteFromCopyList @ 0x1402C7490 (MiGetPteFromCopyList.c)
 *     MiCloneVads @ 0x1402CC944 (MiCloneVads.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     MiCreateSystemPageTable @ 0x1402D0110 (MiCreateSystemPageTable.c)
 *     MiClearPteAccessedBitRange @ 0x1402D1788 (MiClearPteAccessedBitRange.c)
 *     MmOutPageKernelStack @ 0x1402D2FE4 (MmOutPageKernelStack.c)
 *     MiAgeTrimListsTail @ 0x1402E8290 (MiAgeTrimListsTail.c)
 *     MiDeleteNonPagedPoolTail @ 0x1402FB5D0 (MiDeleteNonPagedPoolTail.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x14032AD60 (MiFillSystemPtes.c)
 *     MiDeleteSystemPageTableTail @ 0x140377BC0 (MiDeleteSystemPageTableTail.c)
 *     MiSetReadOnlyOnSectionView @ 0x14037D0D8 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14037F8B0 (MiProtectPrivateMemory.c)
 *     MiFreeWsleList @ 0x1403815C4 (MiFreeWsleList.c)
 *     MiFlushDirtyBitsToPfn @ 0x140388960 (MiFlushDirtyBitsToPfn.c)
 *     MiDecommitLargePoolVa @ 0x14038BEF0 (MiDecommitLargePoolVa.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140391464 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 *     MiLargePageFault @ 0x1403EC554 (MiLargePageFault.c)
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403FC4C8 (MiDecommitHardwareEnclavePages.c)
 *     MiFinishPteChangesInPageTable @ 0x1403FCA58 (MiFinishPteChangesInPageTable.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiFlushValidPteFromTb @ 0x1403FF67C (MiFlushValidPteFromTb.c)
 *     MmProtectMdlSystemAddress @ 0x1404107F0 (MmProtectMdlSystemAddress.c)
 *     MiUnmapMdlCommon @ 0x140412070 (MiUnmapMdlCommon.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14042ACB0 (MiUpdateOldWorkingSetPagesTail.c)
 *     MiAgeWorkingSetTail @ 0x14042ADC0 (MiAgeWorkingSetTail.c)
 *     MiQueryVpabAccessedState @ 0x14042AF30 (MiQueryVpabAccessedState.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x14042C6C4 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiCleanupLazyStampedPageTable @ 0x140432F28 (MiCleanupLazyStampedPageTable.c)
 *     MiZeroPageWorkMapping @ 0x14043AE70 (MiZeroPageWorkMapping.c)
 *     MiGetNextPageTableTail @ 0x14045B9A0 (MiGetNextPageTableTail.c)
 *     MiCreateSystemPageTableTail @ 0x1404741F0 (MiCreateSystemPageTableTail.c)
 *     MiRevokeExecuteTail @ 0x1404892C0 (MiRevokeExecuteTail.c)
 *     MiReleaseLargePdeMappings @ 0x140492BE8 (MiReleaseLargePdeMappings.c)
 *     MiMapMemoryDumpMdl @ 0x14049C45C (MiMapMemoryDumpMdl.c)
 *     MiSetPagingOfDriver @ 0x14049D9E4 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x14049F14C (MiUnmapKernelScp.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MiWritePteHighLevelIsr @ 0x1404B8D10 (MiWritePteHighLevelIsr.c)
 *     MiReadyReservedView @ 0x1404C30BC (MiReadyReservedView.c)
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 *     MiMapMdlWithLargePages @ 0x1404C6BAC (MiMapMdlWithLargePages.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404CBC10 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiClearDriverTablePtes @ 0x1404EE8A0 (MiClearDriverTablePtes.c)
 *     MiPageBootRegistry @ 0x14065D9FC (MiPageBootRegistry.c)
 *     MiSetPageProtection @ 0x14066375C (MiSetPageProtection.c)
 *     MiFlushEnclaveTb @ 0x14067502C (MiFlushEnclaveTb.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140675C14 (MiBuildPhysicalPageFreeChain.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x140677AAC (MiZeroAndFlushAweLazyPtes.c)
 *     MiClearSystemAccessBits @ 0x140678120 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140678274 (MiDemoteValidLargePageOneLevel.c)
 *     MiScrubLargeMappedPage @ 0x140681CB8 (MiScrubLargeMappedPage.c)
 *     MiCalibrateTbFlush @ 0x1406834F4 (MiCalibrateTbFlush.c)
 *     MiProtectLargeKernelHalRange @ 0x1407D8000 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x1407E6B0C (MmDeleteShadowMapping.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A86B54 (MmUnmapProtectedKernelPageRange.c)
 *     MiMarkBootKernelStack @ 0x140C46304 (MiMarkBootKernelStack.c)
 *     MiFreeBootDriverPages @ 0x140C54EE4 (MiFreeBootDriverPages.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14025D590 (VslGetNestedPageProtectionFlags.c)
 *     KeFlushTb @ 0x14026F7E0 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x14027027C (KeFlushCurrentTbOnly.c)
 *     KiIpiWaitForRequestBarrier @ 0x14032BC30 (KiIpiWaitForRequestBarrier.c)
 *     HvlFlushRangeListTb @ 0x14032CB20 (HvlFlushRangeListTb.c)
 *     VmFlushTb @ 0x14032CFB0 (VmFlushTb.c)
 *     VmpFlushTb @ 0x14032CFF0 (VmpFlushTb.c)
 *     KiFlushRangeWorker @ 0x14032D3F0 (KiFlushRangeWorker.c)
 *     KiIpiSendRequest @ 0x14032D550 (KiIpiSendRequest.c)
 *     KiPrepareFlushCurrentAffinity @ 0x1403FA0C0 (KiPrepareFlushCurrentAffinity.c)
 *     ExFlushTb @ 0x1403FA11C (ExFlushTb.c)
 *     KiFlushRangeTb @ 0x1403FA1C0 (KiFlushRangeTb.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1406A0110 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall MiFlushTbList(__int64 a1)
{
  struct _KPRCB *v1; // rbp
  char v3; // dl
  int v4; // r12d
  int v5; // r14d
  _KPROCESS *Process; // rcx
  unsigned __int64 ActiveProcessors; // r8
  unsigned int v8; // r9d
  int *v9; // rdi
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // r15d
  _QWORD *v13; // rdx
  int v14; // r13d
  int v15; // eax
  char v16; // r14
  _QWORD *v17; // r13
  unsigned __int8 CurrentIrql; // r14
  __int64 v19; // rax
  __int64 v20; // r12
  struct _LIST_ENTRY *Blink; // rcx
  _KPROCESS *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r10
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int16 i; // cx
  __int64 v27; // rdx
  void **v28; // rax
  int v29; // r14d
  unsigned __int64 v30; // rdx
  __int64 v32; // r13
  bool v34; // zf
  char v35; // r9
  char v36; // cl
  unsigned __int8 v37; // r13
  struct _KPRCB *v38; // rcx
  _KSTATIC_AFFINITY_BLOCK *p_StaticAffinity; // r14
  $B38C3B1372D6E954799962D5DD404846 *v40; // r12
  volatile _KAFFINITY_EX *v41; // r8
  unsigned __int16 Size; // dx
  unsigned __int16 Count; // ax
  unsigned __int16 v44; // cx
  __int64 v45; // rax
  unsigned int v46; // r8d
  __int64 v47; // rcx
  unsigned __int16 j; // cx
  unsigned __int64 v49; // rdx
  unsigned int v50; // ecx
  signed __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r15
  unsigned __int64 v54; // r10
  volatile _KAFFINITY_EX *v55; // rax
  char v56; // al
  __int64 v57; // rax
  _QWORD *v58; // r14
  struct _KPRCB *v59; // r12
  __int16 NestedPageProtectionFlags; // ax
  signed __int32 v61[8]; // [rsp+0h] [rbp-1F8h] BYREF
  unsigned __int8 v62; // [rsp+40h] [rbp-1B8h]
  char v63; // [rsp+41h] [rbp-1B7h]
  unsigned int v64; // [rsp+44h] [rbp-1B4h]
  unsigned __int64 v65; // [rsp+48h] [rbp-1B0h]
  struct _KPRCB *v66; // [rsp+50h] [rbp-1A8h]
  __int64 v67; // [rsp+58h] [rbp-1A0h]
  volatile _KAFFINITY_EX *v68; // [rsp+60h] [rbp-198h]
  int v69; // [rsp+68h] [rbp-190h]
  int v70; // [rsp+6Ch] [rbp-18Ch]
  unsigned __int64 v71; // [rsp+70h] [rbp-188h]
  __int64 v72; // [rsp+78h] [rbp-180h] BYREF
  int v73; // [rsp+80h] [rbp-178h]
  unsigned int v74; // [rsp+84h] [rbp-174h]
  unsigned __int64 v75; // [rsp+88h] [rbp-170h]
  __int128 v76; // [rsp+90h] [rbp-168h]
  __int128 v77; // [rsp+A0h] [rbp-158h]
  _BYTE v78[272]; // [rsp+B0h] [rbp-148h] BYREF

  v1 = (struct _KPRCB *)*(unsigned int *)(a1 + 28);
  v70 = (int)v1;
  if ( !(_DWORD)v1 )
    return;
  v3 = *(_BYTE *)(a1 + 24);
  v4 = 1;
  v5 = 2;
  if ( v3 )
  {
    ActiveProcessors = -1LL;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 8) == 1 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[3].ProcessListEntry.Blink || Process->SecureState.SecureHandle )
      {
        ActiveProcessors = -1LL;
        goto LABEL_11;
      }
    }
    ActiveProcessors = qword_140E2D990;
  }
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
LABEL_11:
    v8 = 0;
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(a1 + 16) & 4) != 0 )
    v8 = 2;
  else
    v8 = 1;
LABEL_12:
  v64 = v8;
  v9 = (int *)(a1 + 16);
  if ( !*(_BYTE *)(a1 + 25) )
  {
    if ( !v3 && (*(_QWORD *)(a1 + 32) >= ActiveProcessors || *(_BYTE *)(a1 + 26)) )
    {
      *(_BYTE *)(a1 + 25) = 1;
      v9 = (int *)(a1 + 16);
      goto LABEL_58;
    }
    v10 = *(_DWORD *)(a1 + 20);
    v11 = v3 != 0 ? 0x80000000 : 0;
    if ( (v10 & 1) != 0 )
    {
      v11 |= 1u;
    }
    else if ( (v10 & 2) != 0 )
    {
      v11 |= 2u;
    }
    else if ( (v10 & 4) != 0 )
    {
      v11 |= 4u;
    }
    v12 = *(_DWORD *)(a1 + 8);
    v9 = (int *)(a1 + 16);
    v13 = (_QWORD *)(a1 + 40);
    v14 = v11 | 8;
    if ( (v10 & 0x100) == 0 )
      v14 = v11;
    v15 = *v9;
    LODWORD(v65) = v14;
    if ( (v15 & 1) != 0 )
    {
      if ( v12 == 1 )
      {
        if ( *v13 <= 0x7FFFFFFEFFFFuLL && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle )
          goto LABEL_25;
      }
      else if ( !v12 && (v14 & 0x80000009) == 0x80000001 && (VslGetNestedPageProtectionFlags(0LL) & 0x4000) != 0 )
      {
        v4 = 2;
LABEL_25:
        v16 = (HvlEnlightenments & 0x800000) != 0 && (HvlEnlightenments & 2) != 0;
        if ( !v4 && !v16 )
        {
          v17 = (_QWORD *)(a1 + 40);
          goto LABEL_158;
        }
        memset_0(v78, 0, 0x108uLL);
        if ( KiKvaShadow )
        {
          if ( v12 )
          {
LABEL_120:
            v65 = 0LL;
            v62 = 1;
            goto LABEL_121;
          }
          v65 = 0LL;
          v62 = 0;
        }
        else
        {
          if ( v12 != 1 )
            goto LABEL_120;
          v62 = 0;
          v65 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
        }
LABEL_121:
        KiPrepareFlushCurrentAffinity(v78);
        v17 = (_QWORD *)(a1 + 40);
        if ( (unsigned __int8)HvlFlushRangeListTb(v65, (unsigned int)v78, v62, v4, v16, (_DWORD)v1, a1 + 40) )
        {
LABEL_30:
          if ( VmTbFlushEnabled )
            VmFlushTb((unsigned int)v1, v17, v12);
          if ( !ExTbFlushActive )
            goto LABEL_57;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
          ExFlushTb((unsigned int)v1, v17, v12);
          goto LABEL_54;
        }
LABEL_158:
        v58 = v17;
        v59 = v1;
        do
        {
          KiFlushRangeTb(*v58++, v12, ActiveProcessors);
          v59 = (struct _KPRCB *)((char *)v59 - 1);
        }
        while ( v59 );
        goto LABEL_30;
      }
      v4 = 0;
      goto LABEL_25;
    }
    v63 = 0;
    if ( (HvlEnlightenments & 4) != 0 )
    {
      if ( (HvlEnlightenments & 2) != 0 )
      {
        v35 = 1;
        v62 = 1;
        goto LABEL_93;
      }
      if ( (KiFlushPcid & 3) == 1 )
      {
        v35 = 1;
        v62 = 1;
        goto LABEL_93;
      }
      if ( (_DWORD)KeNumberProcessors_0 != 1 )
      {
        if ( v8 )
        {
          v35 = 1;
          v62 = 1;
        }
        else
        {
          _InterlockedOr(v61, 0);
          v24 = KeGetCurrentIrql();
          v67 = v24;
          __writecr8(0xCuLL);
          if ( KiIrqlFlags )
          {
            KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v24);
            LOBYTE(v24) = v67;
          }
          CurrentPrcb = KeGetCurrentPrcb();
          ActiveProcessors = (unsigned __int64)CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors;
          for ( i = 0; i < *(_WORD *)ActiveProcessors; ++i )
          {
            v27 = *(_QWORD *)(ActiveProcessors + 8LL * i + 8);
            if ( v27 && (i != CurrentPrcb->Group || v27 != CurrentPrcb->GroupSetMember) )
            {
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v24);
              __writecr8((unsigned __int8)v67);
              v35 = 1;
              v62 = 1;
              v13 = (_QWORD *)(a1 + 40);
              goto LABEL_93;
            }
          }
          v62 = 0;
          v66 = v1;
          v28 = (void **)(a1 + 40);
          v29 = __ROL4__(1, v12) & 6;
          v68 = (volatile _KAFFINITY_EX *)(a1 + 40);
          v69 = v29;
          do
          {
            v30 = (unsigned __int64)*v28;
            v71 = (unsigned __int64)*v28;
            if ( v29 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
            {
              if ( (KiFlushPcid & 2) != 0 )
              {
                *(_QWORD *)&v76 = 1LL;
                *((_QWORD *)&v76 + 1) = v30;
                _EAX = 0;
                __asm { invpcid eax, [rsp+1F8h+var_168] }
              }
              else
              {
                KiSetUserTbFlushPending();
                v30 = v71;
              }
            }
            __invlpg((void *)v30);
            v32 = 4096LL << (9 * ((unsigned __int8)(v30 >> 10) & 3u));
            ActiveProcessors = v30 & 0x3FF;
            v75 = ActiveProcessors;
            if ( (v30 & 0x3FF) != 0 )
            {
              do
              {
                v30 += v32;
                v71 = v30;
                if ( KiFlushPcid && v12 - 1 <= 1 && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                {
                  if ( (KiFlushPcid & 2) != 0 )
                  {
                    *(_QWORD *)&v77 = 1LL;
                    *((_QWORD *)&v77 + 1) = v30;
                    _EAX = 0;
                    __asm { invpcid eax, [rsp+1F8h+var_158] }
                  }
                  else
                  {
                    KiSetUserTbFlushPending();
                    v30 = v71;
                    ActiveProcessors = v75;
                  }
                }
                __invlpg((void *)v30);
                v75 = --ActiveProcessors;
              }
              while ( ActiveProcessors );
              v29 = v69;
            }
            v28 = (void **)&v68->8;
            v34 = v66 == (struct _KPRCB *)1;
            v66 = (struct _KPRCB *)((char *)v66 - 1);
            v68 = (volatile _KAFFINITY_EX *)((char *)v68 + 8);
          }
          while ( !v34 );
          LODWORD(v1) = v70;
          v5 = 2;
          v14 = v65;
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v67);
          __writecr8((unsigned __int8)v67);
          v63 = 1;
          v13 = (_QWORD *)(a1 + 40);
          v35 = 0;
        }
LABEL_93:
        if ( v12 == 1 )
        {
          if ( *v13 <= 0x7FFFFFFEFFFFuLL && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle )
          {
            v5 = 1;
            goto LABEL_145;
          }
        }
        else if ( !v12 && (v14 & 0x80000009) == 0x80000001 )
        {
          NestedPageProtectionFlags = VslGetNestedPageProtectionFlags(0LL);
          v35 = v62;
          v13 = (_QWORD *)(a1 + 40);
          if ( (NestedPageProtectionFlags & 0x4000) != 0 )
            goto LABEL_145;
        }
        v5 = 0;
        if ( !v35 )
        {
          v36 = v63;
          goto LABEL_98;
        }
LABEL_145:
        if ( KiKvaShadow )
        {
          if ( !v12 )
          {
            LODWORD(v54) = 0;
            LOBYTE(ActiveProcessors) = 0;
            goto LABEL_148;
          }
        }
        else if ( v12 == 1 )
        {
          v54 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
          LOBYTE(ActiveProcessors) = 0;
          goto LABEL_148;
        }
        LODWORD(v54) = 0;
        LODWORD(ActiveProcessors) = 1;
LABEL_148:
        if ( v64 )
        {
          LODWORD(v55) = 0;
        }
        else
        {
          _InterlockedOr(v61, 0);
          v55 = KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
        }
        v56 = HvlFlushRangeListTb(v54, (_DWORD)v55, ActiveProcessors, v5, v35, (_DWORD)v1, (__int64)v13);
        v36 = v56 | v63;
LABEL_98:
        if ( v36 )
        {
LABEL_44:
          if ( v12 == 1 )
          {
            if ( VmTbFlushEnabled )
            {
              Blink = KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink;
              if ( Blink )
                VmpFlushTb((PEX_SPIN_LOCK)Blink);
            }
          }
          if ( !ExTbFlushActive )
            goto LABEL_57;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
          v22 = KeGetCurrentThread()->ApcState.Process;
          if ( v12 == 1 )
          {
            v53 = v22[4].Padding[1];
            if ( v22[3].ActiveGroupPadding[1] )
            {
              guard_dispatch_icall_no_overrides(v22[3].ActiveGroupPadding[1], (unsigned int)v1);
              if ( !v53 )
                goto LABEL_54;
            }
            else if ( !v53 )
            {
              goto LABEL_54;
            }
            v23 = v53;
          }
          else
          {
            v23 = ExpSvmIommuSystemContext;
          }
          guard_dispatch_icall_no_overrides(v23, (unsigned int)v1);
LABEL_54:
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
LABEL_57:
          v8 = v64;
          goto LABEL_58;
        }
        v73 = (int)v1;
        v72 = a1 + 40;
        v74 = v12;
        v37 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v37);
        v38 = KeGetCurrentPrcb();
        v66 = v38;
        if ( v64 )
        {
          if ( (unsigned int)KeNumberProcessors_0 > 1 )
          {
            v19 = 2147483652LL;
            if ( v64 != 1 )
              v19 = 4LL;
            KiIpiSendRequest((_DWORD)v38, 1, 0, (unsigned int)&v72, v19);
            v20 = (__int64)v66;
LABEL_40:
            KiFlushRangeWorker(&v72);
            KiIpiWaitForRequestBarrier(v20);
            goto LABEL_41;
          }
        }
        else
        {
          _InterlockedOr(v61, 0);
          p_StaticAffinity = &v38->StaticAffinity;
          v40 = &v38->StaticAffinity.KeFlushTbAffinity.8;
          v68 = v38->CurrentThread->ApcState.Process->ActiveProcessors;
          *(_QWORD *)&v38->StaticAffinity.KeFlushTbAffinity.Count = 2097153LL;
          memset_0(&v38->StaticAffinity.KeRcuAffinity.8, 0, sizeof(v38->StaticAffinity.KeRcuAffinity.8));
          v41 = v68;
          Size = p_StaticAffinity->KeFlushTbAffinity.Size;
          Count = v68->Count;
          p_StaticAffinity->KeFlushTbAffinity.Size = Size;
          if ( Count <= Size )
            Size = Count;
          p_StaticAffinity->KeFlushTbAffinity.Count = Size;
          v44 = 0;
          p_StaticAffinity->KeFlushTbAffinity.Reserved = 0;
          if ( Size )
          {
            v51 = (char *)v41 - (char *)p_StaticAffinity;
            v52 = Size;
            v44 = Size;
            do
            {
              v40->Bitmap[0] = *(unsigned __int64 *)((char *)v40->Bitmap + v51);
              v40 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v40 + 8);
              --v52;
            }
            while ( v52 );
          }
          for ( ; v44 < p_StaticAffinity->KeFlushTbAffinity.Size; p_StaticAffinity->KeFlushTbAffinity.Bitmap[v45] = 0LL )
            v45 = v44++;
          v20 = (__int64)v66;
          v46 = *((_DWORD *)KiGlobalState + v66->Number);
          v47 = v46 >> 6;
          if ( p_StaticAffinity->KeFlushTbAffinity.Count > (unsigned int)v47 )
            p_StaticAffinity->KeFlushTbAffinity.Bitmap[v47] &= ~(1LL << (v46 & 0x3F));
          for ( j = 0; j < p_StaticAffinity->KeFlushTbAffinity.Count; ++j )
          {
            v49 = p_StaticAffinity->KeFlushTbAffinity.Bitmap[j];
            if ( v49 && (j != *(unsigned __int8 *)(v20 + 208) || v49 != *(_QWORD *)(v20 + 200)) )
            {
              v57 = 2147483652LL;
              if ( v64 != 1 )
                v57 = 4LL;
              KiIpiSendRequest(v20, 0, (_DWORD)p_StaticAffinity, (unsigned int)&v72, v57);
              goto LABEL_40;
            }
          }
        }
        KiFlushRangeWorker(&v72);
LABEL_41:
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v37);
        __writecr8(v37);
        goto LABEL_44;
      }
    }
    v35 = 0;
    v62 = 0;
    goto LABEL_93;
  }
LABEL_58:
  if ( *(_BYTE *)(a1 + 25) )
  {
    v50 = *(_DWORD *)(a1 + 8);
    if ( (*v9 & 1) != 0 )
      KeFlushCurrentTbOnly(v50);
    else
      KeFlushTb(v50, v8);
  }
  *v9 &= ~4u;
  *v9 &= ~0x20u;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_WORD *)(a1 + 25) = 0;
}
