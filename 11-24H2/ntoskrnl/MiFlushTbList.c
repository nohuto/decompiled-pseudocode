/*
 * XREFs of MiFlushTbList @ 0x1402A1330
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140202E14 (MiSetReadOnlyOnSectionView.c)
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiFlushTbAsNeeded @ 0x140207BE0 (MiFlushTbAsNeeded.c)
 *     MmSetAddressRangeModifiedEx @ 0x140208750 (MmSetAddressRangeModifiedEx.c)
 *     MiReleasePteMappings @ 0x140209350 (MiReleasePteMappings.c)
 *     MiAgeTrimListsTail @ 0x14020B9B0 (MiAgeTrimListsTail.c)
 *     MiDeleteNonPagedPoolTail @ 0x14020EFE0 (MiDeleteNonPagedPoolTail.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140211610 (MiProtectPrivateMemory.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402155E0 (MiFlushDirtyBitsToPfn.c)
 *     MiDecommitLargePoolVa @ 0x14021BCD4 (MiDecommitLargePoolVa.c)
 *     MmOutPageKernelStack @ 0x14021EDF0 (MmOutPageKernelStack.c)
 *     MiDecommitPagesTail @ 0x14023D754 (MiDecommitPagesTail.c)
 *     MiGetNextPageTablePte @ 0x140240190 (MiGetNextPageTablePte.c)
 *     MiGetPteFromCopyList @ 0x140252D60 (MiGetPteFromCopyList.c)
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x140296100 (MiUpdateOldWorkingSetPagesTail.c)
 *     MiAgeWorkingSetTail @ 0x140296210 (MiAgeWorkingSetTail.c)
 *     MiFreeWsleList @ 0x140297494 (MiFreeWsleList.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x1402A0630 (MiFillSystemPtes.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiCleanupLazyStampedPageTable @ 0x140305F5C (MiCleanupLazyStampedPageTable.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x14038233C (MmProtectPool.c)
 *     MiFlushValidPteFromTb @ 0x14038D900 (MiFlushValidPteFromTb.c)
 *     MiClearPteAccessedBitRange @ 0x14038DA30 (MiClearPteAccessedBitRange.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x14038E15C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiCreateSystemPageTable @ 0x14038EDA0 (MiCreateSystemPageTable.c)
 *     MiQueryVpabAccessedState @ 0x1403994CC (MiQueryVpabAccessedState.c)
 *     MmProtectMdlSystemAddress @ 0x1404063A0 (MmProtectMdlSystemAddress.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x1404185E8 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiZeroPageWorkMapping @ 0x140421920 (MiZeroPageWorkMapping.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MiUnmapMdlCommon @ 0x140433530 (MiUnmapMdlCommon.c)
 *     MiReadyReservedView @ 0x14044D858 (MiReadyReservedView.c)
 *     MiDeleteSystemPageTableTail @ 0x14044FA20 (MiDeleteSystemPageTableTail.c)
 *     MiGetNextPageTableTail @ 0x140450100 (MiGetNextPageTableTail.c)
 *     MiDecommitHardwareEnclavePages @ 0x14046CF84 (MiDecommitHardwareEnclavePages.c)
 *     MiFinishPteChangesInPageTable @ 0x14046D518 (MiFinishPteChangesInPageTable.c)
 *     MiCreateSystemPageTableTail @ 0x14046F510 (MiCreateSystemPageTableTail.c)
 *     MiRevokeExecuteTail @ 0x140483AD0 (MiRevokeExecuteTail.c)
 *     MiReleaseLargePdeMappings @ 0x14048CC64 (MiReleaseLargePdeMappings.c)
 *     MiMapMemoryDumpMdl @ 0x14049665C (MiMapMemoryDumpMdl.c)
 *     MiSetPagingOfDriver @ 0x140497850 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x140498D98 (MiUnmapKernelScp.c)
 *     MiWritePteHighLevelIsr @ 0x1404B2C80 (MiWritePteHighLevelIsr.c)
 *     MiProtectAweRegion @ 0x1404BDA90 (MiProtectAweRegion.c)
 *     MiMapMdlWithLargePages @ 0x1404C0630 (MiMapMdlWithLargePages.c)
 *     MiLargePageFault @ 0x1404C1204 (MiLargePageFault.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404C4FE4 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MiClearDriverTablePtes @ 0x1404F0310 (MiClearDriverTablePtes.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F0C98 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F10C0 (NtGetWriteWatch.c)
 *     MiPageBootRegistry @ 0x14066A6F8 (MiPageBootRegistry.c)
 *     MiSetPageProtection @ 0x14067044C (MiSetPageProtection.c)
 *     MiFlushEnclaveTb @ 0x140681A4C (MiFlushEnclaveTb.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140682624 (MiBuildPhysicalPageFreeChain.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x1406844BC (MiZeroAndFlushAweLazyPtes.c)
 *     MiClearSystemAccessBits @ 0x140684AD0 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140684C24 (MiDemoteValidLargePageOneLevel.c)
 *     MiScrubLargeMappedPage @ 0x14068E678 (MiScrubLargeMappedPage.c)
 *     MiCalibrateTbFlush @ 0x14068FEB4 (MiCalibrateTbFlush.c)
 *     MiProtectLargeKernelHalRange @ 0x1407E8490 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x1407F7110 (MmDeleteShadowMapping.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A87C74 (MmUnmapProtectedKernelPageRange.c)
 *     MiMarkBootKernelStack @ 0x140C59774 (MiMarkBootKernelStack.c)
 *     MiFreeBootDriverPages @ 0x140C68CE8 (MiFreeBootDriverPages.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402313D4 (VslGetNestedPageProtectionFlags.c)
 *     KiIpiWaitForRequestBarrier @ 0x1402A12C0 (KiIpiWaitForRequestBarrier.c)
 *     ExFlushTb @ 0x1402A1EA4 (ExFlushTb.c)
 *     VmFlushTb @ 0x1402A1F40 (VmFlushTb.c)
 *     VmpFlushTb @ 0x1402A1F80 (VmpFlushTb.c)
 *     KiFlushRangeWorker @ 0x1402A2370 (KiFlushRangeWorker.c)
 *     KiIpiSendRequest @ 0x1402A24D0 (KiIpiSendRequest.c)
 *     HvlFlushRangeListTb @ 0x14039D700 (HvlFlushRangeListTb.c)
 *     KeFlushTb @ 0x14039E600 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x14039F4A0 (KeFlushCurrentTbOnly.c)
 *     KiPrepareFlushCurrentAffinity @ 0x1403FC724 (KiPrepareFlushCurrentAffinity.c)
 *     KiFlushRangeTb @ 0x1403FC780 (KiFlushRangeTb.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1406AC380 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall MiFlushTbList(__int64 a1)
{
  struct _KPRCB *v1; // rbp
  volatile _KAFFINITY_EX *v2; // rbx
  __int64 v3; // rdx
  unsigned int *v4; // rsi
  int v5; // r12d
  int v6; // r14d
  _KPROCESS *Process; // rcx
  unsigned __int64 v8; // r8
  unsigned int v9; // r9d
  unsigned __int64 *v10; // rdi
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // r15d
  unsigned __int64 *v14; // r13
  int v15; // eax
  char v16; // r14
  unsigned __int8 CurrentIrql; // r14
  __int64 v18; // r10
  struct _KPRCB *CurrentPrcb; // rdx
  volatile _KAFFINITY_EX *ActiveProcessors; // r8
  unsigned __int16 i; // cx
  unsigned __int64 v22; // r9
  void **v23; // rax
  int v24; // ebx
  unsigned __int64 v25; // rdx
  __int64 v27; // r13
  bool v29; // zf
  char v30; // cl
  _KSTATIC_AFFINITY_BLOCK *p_StaticAffinity; // r14
  struct _KPRCB *v32; // rcx
  $B38C3B1372D6E954799962D5DD404846 *v33; // r12
  volatile _KAFFINITY_EX *v34; // r8
  unsigned __int16 Size; // dx
  unsigned __int16 Count; // ax
  unsigned __int16 v37; // cx
  __int64 v38; // rax
  __int64 v39; // r12
  unsigned int v40; // r8d
  __int64 v41; // rcx
  unsigned __int16 j; // cx
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  signed __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  struct _LIST_ENTRY *Blink; // rcx
  _KPROCESS *v52; // rcx
  unsigned __int64 v53; // r15
  unsigned __int64 v54; // r10
  unsigned __int8 v55; // dl
  volatile _KAFFINITY_EX *v56; // rax
  char v57; // al
  __int64 v58; // rax
  unsigned __int64 *v59; // r14
  struct _KPRCB *v60; // r12
  __int16 NestedPageProtectionFlags; // ax
  signed __int32 v62[8]; // [rsp+0h] [rbp-208h] BYREF
  unsigned __int8 v63; // [rsp+40h] [rbp-1C8h]
  char v64; // [rsp+41h] [rbp-1C7h]
  unsigned int v65; // [rsp+44h] [rbp-1C4h]
  unsigned __int16 *p_Count; // [rsp+48h] [rbp-1C0h]
  unsigned __int64 v67; // [rsp+50h] [rbp-1B8h]
  unsigned int v68; // [rsp+58h] [rbp-1B0h]
  struct _KPRCB *v69; // [rsp+60h] [rbp-1A8h]
  __int64 v70; // [rsp+68h] [rbp-1A0h]
  volatile _KAFFINITY_EX *v71; // [rsp+70h] [rbp-198h]
  unsigned __int64 *v72; // [rsp+78h] [rbp-190h] BYREF
  int v73; // [rsp+80h] [rbp-188h]
  unsigned int v74; // [rsp+84h] [rbp-184h]
  unsigned __int64 v75; // [rsp+88h] [rbp-180h]
  unsigned __int64 *v76; // [rsp+90h] [rbp-178h]
  __int128 v77; // [rsp+98h] [rbp-170h]
  __int128 v78; // [rsp+A8h] [rbp-160h]
  _BYTE v79[272]; // [rsp+C0h] [rbp-148h] BYREF

  v1 = (struct _KPRCB *)*(unsigned int *)(a1 + 28);
  v2 = (volatile _KAFFINITY_EX *)a1;
  v71 = (volatile _KAFFINITY_EX *)a1;
  if ( !(_DWORD)v1 )
    return;
  v3 = *(unsigned __int8 *)(a1 + 24);
  v4 = (unsigned int *)(a1 + 8);
  v5 = 1;
  v6 = 2;
  if ( (_BYTE)v3 )
  {
    v8 = -1LL;
  }
  else
  {
    if ( *v4 == 1 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[3].ProcessListEntry.Blink || Process->SecureState.SecureHandle )
      {
        v8 = -1LL;
        goto LABEL_11;
      }
    }
    v8 = qword_140E2DD10;
  }
  if ( *v4 == 1 )
  {
LABEL_11:
    v9 = 0;
    goto LABEL_12;
  }
  if ( (v2->StaticBitmap[1] & 4) != 0 )
    v9 = 2;
  else
    v9 = 1;
LABEL_12:
  v65 = v9;
  v10 = &v2->StaticBitmap[1];
  if ( !BYTE1(v2->StaticBitmap[2]) )
  {
    if ( !(_BYTE)v3 && (v2->StaticBitmap[3] >= v8 || BYTE2(v2->StaticBitmap[2])) )
    {
      BYTE1(v2->StaticBitmap[2]) = 1;
      v10 = &v2->StaticBitmap[1];
      goto LABEL_40;
    }
    v11 = HIDWORD(v2->StaticBitmap[1]);
    v12 = (_BYTE)v3 != 0 ? 0x80000000 : 0;
    if ( (v11 & 1) != 0 )
    {
      v12 |= 1u;
    }
    else if ( (v11 & 2) != 0 )
    {
      v12 |= 2u;
    }
    else if ( (v11 & 4) != 0 )
    {
      v12 |= 4u;
    }
    v13 = *v4;
    v10 = &v2->StaticBitmap[1];
    v14 = &v2->StaticBitmap[4];
    v3 = v12 | 8;
    if ( (v11 & 0x100) == 0 )
      v3 = v12;
    v15 = *(_DWORD *)v10;
    v68 = v3;
    if ( (v15 & 1) != 0 )
    {
      if ( v13 == 1 )
      {
        if ( *v14 <= 0x7FFFFFFEFFFFLL && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle )
          goto LABEL_25;
      }
      else if ( !v13 && (v3 & 0x80000009) == 0x80000001 && (VslGetNestedPageProtectionFlags(0LL) & 0x4000) != 0 )
      {
        v5 = 2;
LABEL_25:
        v16 = (HvlEnlightenments & 0x800000) != 0 && (HvlEnlightenments & 2) != 0;
        if ( !v5 && !v16 )
          goto LABEL_157;
        memset_0(v79, 0, 0x108uLL);
        if ( KiKvaShadow )
        {
          if ( v13 )
          {
LABEL_102:
            v67 = 0LL;
            v63 = 1;
            goto LABEL_103;
          }
          v67 = 0LL;
          v63 = 0;
        }
        else
        {
          if ( v13 != 1 )
            goto LABEL_102;
          v63 = 0;
          v67 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
        }
LABEL_103:
        KiPrepareFlushCurrentAffinity(v79);
        if ( (unsigned __int8)HvlFlushRangeListTb(
                                v67,
                                (unsigned int)v79,
                                v63,
                                v5,
                                v16,
                                (_DWORD)v1,
                                (__int64)&v2->StaticBitmap[4]) )
        {
LABEL_30:
          if ( VmTbFlushEnabled )
            VmFlushTb((unsigned int)v1, &v2->StaticBitmap[4], v13);
          if ( !ExTbFlushActive )
            goto LABEL_39;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15LL);
          ExFlushTb((unsigned int)v1, &v2->StaticBitmap[4], v13);
LABEL_36:
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
LABEL_39:
          v9 = v65;
          goto LABEL_40;
        }
LABEL_157:
        v59 = &v2->StaticBitmap[4];
        v60 = v1;
        do
        {
          KiFlushRangeTb(*v59++, v13, v8);
          v60 = (struct _KPRCB *)((char *)v60 - 1);
        }
        while ( v60 );
        goto LABEL_30;
      }
      v5 = 0;
      goto LABEL_25;
    }
    v64 = 0;
    if ( (HvlEnlightenments & 4) != 0 )
    {
      if ( (HvlEnlightenments & 2) != 0 )
      {
        v8 = 1LL;
        v63 = 1;
        goto LABEL_75;
      }
      if ( (KiFlushPcid & 3) == 1 )
      {
        v8 = 1LL;
        v63 = 1;
        goto LABEL_75;
      }
      if ( (_DWORD)KeNumberProcessors_0 != 1 )
      {
        if ( v9 )
        {
          v8 = 1LL;
          v63 = 1;
        }
        else
        {
          _InterlockedOr(v62, 0);
          v18 = KeGetCurrentIrql();
          v70 = v18;
          __writecr8(0xCuLL);
          if ( KiIrqlFlags )
          {
            KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v18, 12LL);
            LOBYTE(v18) = v70;
          }
          CurrentPrcb = KeGetCurrentPrcb();
          ActiveProcessors = CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors;
          for ( i = 0; i < ActiveProcessors->Count; ++i )
          {
            v22 = ActiveProcessors->Bitmap[i];
            if ( v22 && (i != CurrentPrcb->Group || v22 != CurrentPrcb->GroupSetMember) )
            {
              if ( KiIrqlFlags )
              {
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v18);
                LOBYTE(v18) = v70;
              }
              __writecr8((unsigned __int8)v18);
              v3 = v68;
              v8 = 1LL;
              v63 = 1;
              goto LABEL_75;
            }
          }
          v63 = 0;
          v69 = v1;
          v23 = (void **)&v2->StaticBitmap[4];
          v24 = __ROL4__(1, v13) & 6;
          v76 = v14;
          LODWORD(v67) = v24;
          do
          {
            v25 = (unsigned __int64)*v23;
            p_Count = (unsigned __int16 *)*v23;
            if ( v24 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
            {
              if ( (KiFlushPcid & 2) != 0 )
              {
                *(_QWORD *)&v77 = 1LL;
                *((_QWORD *)&v77 + 1) = v25;
                _EAX = 0;
                __asm { invpcid eax, [rsp+208h+var_170] }
              }
              else
              {
                KiSetUserTbFlushPending();
                v25 = (unsigned __int64)p_Count;
              }
            }
            __invlpg((void *)v25);
            v27 = 4096LL << (9 * ((unsigned __int8)(v25 >> 10) & 3u));
            v8 = v25 & 0x3FF;
            v75 = v8;
            if ( (v25 & 0x3FF) != 0 )
            {
              do
              {
                v25 += v27;
                p_Count = (unsigned __int16 *)v25;
                if ( KiFlushPcid && v13 - 1 <= 1 && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                {
                  if ( (KiFlushPcid & 2) != 0 )
                  {
                    *(_QWORD *)&v78 = 1LL;
                    *((_QWORD *)&v78 + 1) = v25;
                    _EAX = 0;
                    __asm { invpcid eax, [rsp+208h+var_160] }
                  }
                  else
                  {
                    KiSetUserTbFlushPending();
                    v25 = (unsigned __int64)p_Count;
                    v8 = v75;
                  }
                }
                __invlpg((void *)v25);
                v75 = --v8;
              }
              while ( v8 );
              v24 = v67;
            }
            v23 = (void **)(v76 + 1);
            v29 = v69 == (struct _KPRCB *)1;
            v69 = (struct _KPRCB *)((char *)v69 - 1);
            ++v76;
          }
          while ( !v29 );
          v2 = v71;
          v6 = 2;
          v14 = &v71->StaticBitmap[4];
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v70);
          __writecr8((unsigned __int8)v70);
          v3 = v68;
          LOBYTE(v8) = 0;
          v64 = 1;
        }
LABEL_75:
        if ( v13 == 1 )
        {
          if ( *v14 <= 0x7FFFFFFEFFFFLL && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle )
          {
            v6 = 1;
            goto LABEL_143;
          }
        }
        else if ( !v13 )
        {
          v3 = (unsigned int)v3 & 0x80000009;
          if ( (_DWORD)v3 == -2147483647 )
          {
            NestedPageProtectionFlags = VslGetNestedPageProtectionFlags(0LL);
            v8 = v63;
            if ( (NestedPageProtectionFlags & 0x4000) != 0 )
              goto LABEL_143;
          }
        }
        v6 = 0;
        if ( !(_BYTE)v8 )
        {
          v30 = v64;
          goto LABEL_80;
        }
LABEL_143:
        if ( KiKvaShadow )
        {
          if ( !v13 )
          {
            LODWORD(v54) = 0;
            v55 = 0;
            goto LABEL_146;
          }
        }
        else if ( v13 == 1 )
        {
          v54 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
          v55 = 0;
          goto LABEL_146;
        }
        LODWORD(v54) = 0;
        v55 = 1;
LABEL_146:
        if ( v65 )
        {
          LODWORD(v56) = 0;
        }
        else
        {
          _InterlockedOr(v62, 0);
          v56 = KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
        }
        v57 = HvlFlushRangeListTb(v54, (_DWORD)v56, v55, v6, v8, (_DWORD)v1, (__int64)v14);
        v30 = v57 | v64;
LABEL_80:
        if ( v30 )
          goto LABEL_129;
        v72 = v14;
        v73 = (int)v1;
        v74 = v13;
        p_StaticAffinity = (_KSTATIC_AFFINITY_BLOCK *)KeGetCurrentIrql();
        p_Count = &p_StaticAffinity->KeFlushTbAffinity.Count;
        __writecr8(0xCuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags((unsigned __int8)p_StaticAffinity, 12LL);
        v32 = KeGetCurrentPrcb();
        v69 = v32;
        if ( v65 )
        {
          if ( (unsigned int)KeNumberProcessors_0 <= 1 )
          {
LABEL_120:
            KiFlushRangeWorker(&v72);
LABEL_126:
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)p_StaticAffinity);
            __writecr8((unsigned __int8)p_StaticAffinity);
LABEL_129:
            if ( v13 == 1 )
            {
              if ( VmTbFlushEnabled )
              {
                Blink = KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink;
                if ( Blink )
                  VmpFlushTb((PEX_SPIN_LOCK)Blink);
              }
            }
            if ( !ExTbFlushActive )
              goto LABEL_39;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            if ( KiIrqlFlags )
              KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15LL);
            v52 = KeGetCurrentThread()->ApcState.Process;
            if ( v13 != 1 )
            {
              guard_dispatch_icall_no_overrides(ExpSvmIommuSystemContext, (unsigned int)v1);
              goto LABEL_36;
            }
            v53 = v52[4].Padding[1];
            if ( v52[3].ActiveGroupPadding[1] )
            {
              guard_dispatch_icall_no_overrides(v52[3].ActiveGroupPadding[1], (unsigned int)v1);
              if ( !v53 )
                goto LABEL_36;
            }
            else if ( !v53 )
            {
              goto LABEL_36;
            }
            guard_dispatch_icall_no_overrides(v53, (unsigned int)v1);
            goto LABEL_36;
          }
          v47 = 2147483652LL;
          if ( v65 != 1 )
            v47 = 4LL;
          KiIpiSendRequest((_DWORD)v32, 1, 0, (unsigned int)&v72, v47);
          v39 = (__int64)v69;
        }
        else
        {
          _InterlockedOr(v62, 0);
          p_StaticAffinity = &v32->StaticAffinity;
          v33 = &v32->StaticAffinity.KeFlushTbAffinity.8;
          v71 = v32->CurrentThread->ApcState.Process->ActiveProcessors;
          *(_QWORD *)&v32->StaticAffinity.KeFlushTbAffinity.Count = 2097153LL;
          memset_0(&v32->StaticAffinity.KeRcuAffinity.8, 0, sizeof(v32->StaticAffinity.KeRcuAffinity.8));
          v34 = v71;
          Size = p_StaticAffinity->KeFlushTbAffinity.Size;
          Count = v71->Count;
          p_StaticAffinity->KeFlushTbAffinity.Size = Size;
          if ( Count <= Size )
            Size = Count;
          p_StaticAffinity->KeFlushTbAffinity.Count = Size;
          v37 = 0;
          p_StaticAffinity->KeFlushTbAffinity.Reserved = 0;
          if ( Size )
          {
            v45 = (char *)v34 - (char *)p_StaticAffinity;
            v46 = Size;
            v37 = Size;
            do
            {
              v33->Bitmap[0] = *(unsigned __int64 *)((char *)v33->Bitmap + v45);
              v33 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v33 + 8);
              --v46;
            }
            while ( v46 );
          }
          for ( ; v37 < p_StaticAffinity->KeFlushTbAffinity.Size; p_StaticAffinity->KeFlushTbAffinity.Bitmap[v38] = 0LL )
            v38 = v37++;
          v39 = (__int64)v69;
          v40 = *((_DWORD *)KiGlobalState + v69->Number);
          v41 = v40 >> 6;
          if ( p_StaticAffinity->KeFlushTbAffinity.Count > (unsigned int)v41 )
            p_StaticAffinity->KeFlushTbAffinity.Bitmap[v41] &= ~(1LL << (v40 & 0x3F));
          for ( j = 0; ; ++j )
          {
            if ( j >= p_StaticAffinity->KeFlushTbAffinity.Count )
            {
              LOBYTE(p_StaticAffinity) = (_BYTE)p_Count;
              goto LABEL_120;
            }
            v43 = p_StaticAffinity->KeFlushTbAffinity.Bitmap[j];
            if ( v43 )
            {
              if ( j != *(unsigned __int8 *)(v39 + 208) || v43 != *(_QWORD *)(v39 + 200) )
                break;
            }
          }
          v58 = 2147483652LL;
          if ( v65 != 1 )
            v58 = 4LL;
          KiIpiSendRequest(v39, 0, (_DWORD)p_StaticAffinity, (unsigned int)&v72, v58);
          LOBYTE(p_StaticAffinity) = (_BYTE)p_Count;
        }
        KiFlushRangeWorker(&v72);
        KiIpiWaitForRequestBarrier(v39, v48, v49, v50);
        goto LABEL_126;
      }
    }
    LOBYTE(v8) = 0;
    v63 = 0;
    goto LABEL_75;
  }
LABEL_40:
  if ( BYTE1(v2->StaticBitmap[2]) )
  {
    v44 = *v4;
    if ( (*(_DWORD *)v10 & 1) != 0 )
      KeFlushCurrentTbOnly(v44, v3, v8);
    else
      KeFlushTb(v44, v9, v8);
  }
  *(_DWORD *)v10 &= ~4u;
  *(_DWORD *)v10 &= ~0x20u;
  HIDWORD(v2->StaticBitmap[2]) = 0;
  v2->StaticBitmap[3] = 0LL;
  *(_WORD *)((char *)&v2->StaticBitmap[2] + 1) = 0;
}
