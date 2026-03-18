/*
 * XREFs of MiFlushTbList @ 0x140291730
 * Callers:
 *     MiCleanupLazyStampedPageTable @ 0x140212BFC (MiCleanupLazyStampedPageTable.c)
 *     MiGetPteFromCopyList @ 0x1402259B0 (MiGetPteFromCopyList.c)
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     MiSetReadOnlyOnSectionView @ 0x140232BB8 (MiSetReadOnlyOnSectionView.c)
 *     MiFlushDirtyBitsToPfn @ 0x140233F80 (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteNonPagedPoolTail @ 0x140235020 (MiDeleteNonPagedPoolTail.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140237480 (MiProtectPrivateMemory.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiFlushTbAsNeeded @ 0x14023FA90 (MiFlushTbAsNeeded.c)
 *     MmSetAddressRangeModifiedEx @ 0x140240600 (MmSetAddressRangeModifiedEx.c)
 *     MiReleasePteMappings @ 0x140241200 (MiReleasePteMappings.c)
 *     MiUnmapContiguousMemory @ 0x140263178 (MiUnmapContiguousMemory.c)
 *     MmOutPageKernelStack @ 0x14026962C (MmOutPageKernelStack.c)
 *     MiFreeWsleList @ 0x140287894 (MiFreeWsleList.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x140290A30 (MiFillSystemPtes.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiCloneVads @ 0x1402C4DAC (MiCloneVads.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiDecommitPagesTail @ 0x1402DBE74 (MiDecommitPagesTail.c)
 *     MiGetNextPageTablePte @ 0x1402DE8B0 (MiGetNextPageTablePte.c)
 *     MiAgeTrimListsTail @ 0x1402E36B0 (MiAgeTrimListsTail.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiFlushValidPteFromTb @ 0x1403942E4 (MiFlushValidPteFromTb.c)
 *     MiClearPteAccessedBitRange @ 0x140394414 (MiClearPteAccessedBitRange.c)
 *     MiCreateSystemPageTable @ 0x140395350 (MiCreateSystemPageTable.c)
 *     MiDecommitLargePoolVa @ 0x1403A3F50 (MiDecommitLargePoolVa.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x1403AAA70 (MiUpdateOldWorkingSetPagesTail.c)
 *     MiAgeWorkingSetTail @ 0x1403AAB80 (MiAgeWorkingSetTail.c)
 *     MiQueryVpabAccessedState @ 0x1403AACE4 (MiQueryVpabAccessedState.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403CE11C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403D172C (MiDecommitHardwareEnclavePages.c)
 *     MiLargePageFault @ 0x1403F38B4 (MiLargePageFault.c)
 *     MmProtectMdlSystemAddress @ 0x14040E150 (MmProtectMdlSystemAddress.c)
 *     MiUnmapMdlCommon @ 0x14040F900 (MiUnmapMdlCommon.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x140424738 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiZeroPageWorkMapping @ 0x14042FE70 (MiZeroPageWorkMapping.c)
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 *     MiDeleteSystemPageTableTail @ 0x14045A5D0 (MiDeleteSystemPageTableTail.c)
 *     MiGetNextPageTableTail @ 0x14045ACD0 (MiGetNextPageTableTail.c)
 *     MiCreateSystemPageTableTail @ 0x140473190 (MiCreateSystemPageTableTail.c)
 *     MiFinishPteChangesInPageTable @ 0x1404738AC (MiFinishPteChangesInPageTable.c)
 *     MiRevokeExecuteTail @ 0x140488980 (MiRevokeExecuteTail.c)
 *     MiReleaseLargePdeMappings @ 0x140491DC4 (MiReleaseLargePdeMappings.c)
 *     MiMapMemoryDumpMdl @ 0x14049BB2C (MiMapMemoryDumpMdl.c)
 *     MiSetPagingOfDriver @ 0x14049CBA8 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x14049DF98 (MiUnmapKernelScp.c)
 *     MiWritePteHighLevelIsr @ 0x1404B8330 (MiWritePteHighLevelIsr.c)
 *     MiReadyReservedView @ 0x1404C04A8 (MiReadyReservedView.c)
 *     MiProtectAweRegion @ 0x1404C2558 (MiProtectAweRegion.c)
 *     MiMapMdlWithLargePages @ 0x1404C71D0 (MiMapMdlWithLargePages.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404CBB68 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiClearDriverTablePtes @ 0x1404F2870 (MiClearDriverTablePtes.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F32E4 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F3710 (NtGetWriteWatch.c)
 *     MiPageBootRegistry @ 0x140669520 (MiPageBootRegistry.c)
 *     MiSetPageProtection @ 0x14066F27C (MiSetPageProtection.c)
 *     MiFlushEnclaveTb @ 0x14068084C (MiFlushEnclaveTb.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140681434 (MiBuildPhysicalPageFreeChain.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x1406832CC (MiZeroAndFlushAweLazyPtes.c)
 *     MiClearSystemAccessBits @ 0x140683974 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140683AC8 (MiDemoteValidLargePageOneLevel.c)
 *     MiScrubLargeMappedPage @ 0x14068D548 (MiScrubLargeMappedPage.c)
 *     MiCalibrateTbFlush @ 0x14068EDD8 (MiCalibrateTbFlush.c)
 *     MiProtectLargeKernelHalRange @ 0x1407E7EC0 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x1407F699C (MmDeleteShadowMapping.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A8B784 (MmUnmapProtectedKernelPageRange.c)
 *     MiMarkBootKernelStack @ 0x140C575E4 (MiMarkBootKernelStack.c)
 *     MiFreeBootDriverPages @ 0x140C66B6C (MiFreeBootDriverPages.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14027BE44 (VslGetNestedPageProtectionFlags.c)
 *     KiIpiWaitForRequestBarrier @ 0x1402916C0 (KiIpiWaitForRequestBarrier.c)
 *     ExFlushTb @ 0x1402922A4 (ExFlushTb.c)
 *     VmFlushTb @ 0x140292340 (VmFlushTb.c)
 *     VmpFlushTb @ 0x140292380 (VmpFlushTb.c)
 *     KiFlushRangeWorker @ 0x140292770 (KiFlushRangeWorker.c)
 *     KiIpiSendRequest @ 0x1402928D0 (KiIpiSendRequest.c)
 *     HvlFlushRangeListTb @ 0x1403AEEF0 (HvlFlushRangeListTb.c)
 *     KeFlushTb @ 0x1403AFDF0 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403B0C90 (KeFlushCurrentTbOnly.c)
 *     KiPrepareFlushCurrentAffinity @ 0x1404021A4 (KiPrepareFlushCurrentAffinity.c)
 *     KiFlushRangeTb @ 0x140402200 (KiFlushRangeTb.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1406AB3E0 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  __int64 v30; // r9
  char v31; // cl
  _KSTATIC_AFFINITY_BLOCK *p_StaticAffinity; // r14
  struct _KPRCB *v33; // rcx
  $B38C3B1372D6E954799962D5DD404846 *v34; // r12
  volatile _KAFFINITY_EX *v35; // r8
  unsigned __int16 Size; // dx
  unsigned __int16 Count; // ax
  unsigned __int16 v38; // cx
  __int64 v39; // rax
  __int64 v40; // r12
  unsigned int v41; // r8d
  __int64 v42; // rcx
  unsigned __int16 j; // cx
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  signed __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  struct _LIST_ENTRY *Blink; // rcx
  _KPROCESS *v50; // rcx
  unsigned __int64 v51; // r9
  unsigned __int64 v52; // r15
  unsigned __int64 v53; // r10
  unsigned __int8 v54; // dl
  volatile _KAFFINITY_EX *v55; // rax
  char v56; // al
  __int64 v57; // rax
  unsigned __int64 *v58; // r14
  struct _KPRCB *v59; // r12
  __int16 NestedPageProtectionFlags; // ax
  signed __int32 v61[8]; // [rsp+0h] [rbp-208h] BYREF
  unsigned __int8 v62; // [rsp+40h] [rbp-1C8h]
  char v63; // [rsp+41h] [rbp-1C7h]
  unsigned int v64; // [rsp+44h] [rbp-1C4h]
  unsigned __int16 *p_Count; // [rsp+48h] [rbp-1C0h]
  unsigned __int64 v66; // [rsp+50h] [rbp-1B8h]
  unsigned int v67; // [rsp+58h] [rbp-1B0h]
  struct _KPRCB *v68; // [rsp+60h] [rbp-1A8h]
  __int64 v69; // [rsp+68h] [rbp-1A0h]
  volatile _KAFFINITY_EX *v70; // [rsp+70h] [rbp-198h]
  unsigned __int64 *v71; // [rsp+78h] [rbp-190h] BYREF
  int v72; // [rsp+80h] [rbp-188h]
  unsigned int v73; // [rsp+84h] [rbp-184h]
  unsigned __int64 v74; // [rsp+88h] [rbp-180h]
  unsigned __int64 *v75; // [rsp+90h] [rbp-178h]
  __int128 v76; // [rsp+98h] [rbp-170h]
  __int128 v77; // [rsp+A8h] [rbp-160h]
  _BYTE v78[272]; // [rsp+C0h] [rbp-148h] BYREF

  v1 = (struct _KPRCB *)*(unsigned int *)(a1 + 28);
  v2 = (volatile _KAFFINITY_EX *)a1;
  v70 = (volatile _KAFFINITY_EX *)a1;
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
    v8 = qword_140E2DBD0;
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
  v64 = v9;
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
    v67 = v3;
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
        memset_0(v78, 0, 0x108uLL);
        if ( KiKvaShadow )
        {
          if ( v13 )
          {
LABEL_102:
            v66 = 0LL;
            v62 = 1;
            goto LABEL_103;
          }
          v66 = 0LL;
          v62 = 0;
        }
        else
        {
          if ( v13 != 1 )
            goto LABEL_102;
          v62 = 0;
          v66 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
        }
LABEL_103:
        KiPrepareFlushCurrentAffinity(v78);
        if ( (unsigned __int8)HvlFlushRangeListTb(
                                v66,
                                (unsigned int)v78,
                                v62,
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
          v9 = v64;
          goto LABEL_40;
        }
LABEL_157:
        v58 = &v2->StaticBitmap[4];
        v59 = v1;
        do
        {
          KiFlushRangeTb(*v58++, v13, v8);
          v59 = (struct _KPRCB *)((char *)v59 - 1);
        }
        while ( v59 );
        goto LABEL_30;
      }
      v5 = 0;
      goto LABEL_25;
    }
    v63 = 0;
    if ( (HvlEnlightenments & 4) != 0 )
    {
      if ( (HvlEnlightenments & 2) != 0 )
      {
        v8 = 1LL;
        v62 = 1;
        goto LABEL_75;
      }
      if ( (KiFlushPcid & 3) == 1 )
      {
        v8 = 1LL;
        v62 = 1;
        goto LABEL_75;
      }
      if ( (_DWORD)KeNumberProcessors_0 != 1 )
      {
        if ( v9 )
        {
          v8 = 1LL;
          v62 = 1;
        }
        else
        {
          _InterlockedOr(v61, 0);
          v18 = KeGetCurrentIrql();
          v69 = v18;
          __writecr8(0xCuLL);
          if ( KiIrqlFlags )
          {
            KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v18, 12LL);
            LOBYTE(v18) = v69;
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
                LOBYTE(v18) = v69;
              }
              __writecr8((unsigned __int8)v18);
              v3 = v67;
              v8 = 1LL;
              v62 = 1;
              goto LABEL_75;
            }
          }
          v62 = 0;
          v68 = v1;
          v23 = (void **)&v2->StaticBitmap[4];
          v24 = __ROL4__(1, v13) & 6;
          v75 = v14;
          LODWORD(v66) = v24;
          do
          {
            v25 = (unsigned __int64)*v23;
            p_Count = (unsigned __int16 *)*v23;
            if ( v24 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
            {
              if ( (KiFlushPcid & 2) != 0 )
              {
                *(_QWORD *)&v76 = 1LL;
                *((_QWORD *)&v76 + 1) = v25;
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
            v74 = v8;
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
                    *(_QWORD *)&v77 = 1LL;
                    *((_QWORD *)&v77 + 1) = v25;
                    _EAX = 0;
                    __asm { invpcid eax, [rsp+208h+var_160] }
                  }
                  else
                  {
                    KiSetUserTbFlushPending();
                    v25 = (unsigned __int64)p_Count;
                    v8 = v74;
                  }
                }
                __invlpg((void *)v25);
                v74 = --v8;
              }
              while ( v8 );
              v24 = v66;
            }
            v23 = (void **)(v75 + 1);
            v29 = v68 == (struct _KPRCB *)1;
            v68 = (struct _KPRCB *)((char *)v68 - 1);
            ++v75;
          }
          while ( !v29 );
          v2 = v70;
          v6 = 2;
          v14 = &v70->StaticBitmap[4];
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v69);
          __writecr8((unsigned __int8)v69);
          v3 = v67;
          LOBYTE(v8) = 0;
          v63 = 1;
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
            v8 = v62;
            if ( (NestedPageProtectionFlags & 0x4000) != 0 )
              goto LABEL_143;
          }
        }
        v30 = 0LL;
        v6 = 0;
        if ( !(_BYTE)v8 )
        {
          v31 = v63;
          goto LABEL_80;
        }
LABEL_143:
        if ( KiKvaShadow )
        {
          if ( !v13 )
          {
            LODWORD(v53) = 0;
            v54 = 0;
            goto LABEL_146;
          }
        }
        else if ( v13 == 1 )
        {
          v53 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
          v54 = 0;
          goto LABEL_146;
        }
        LODWORD(v53) = 0;
        v54 = 1;
LABEL_146:
        if ( v64 )
        {
          LODWORD(v55) = 0;
        }
        else
        {
          _InterlockedOr(v61, 0);
          v55 = KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
        }
        v56 = HvlFlushRangeListTb(v53, (_DWORD)v55, v54, v6, v8, (_DWORD)v1, (__int64)v14);
        v31 = v56 | v63;
LABEL_80:
        if ( v31 )
          goto LABEL_129;
        v71 = v14;
        v72 = (int)v1;
        v73 = v13;
        p_StaticAffinity = (_KSTATIC_AFFINITY_BLOCK *)KeGetCurrentIrql();
        p_Count = &p_StaticAffinity->KeFlushTbAffinity.Count;
        __writecr8(0xCuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags((unsigned __int8)p_StaticAffinity, 12LL);
        v33 = KeGetCurrentPrcb();
        v68 = v33;
        if ( v64 )
        {
          if ( (unsigned int)KeNumberProcessors_0 <= 1 )
          {
LABEL_120:
            KiFlushRangeWorker(&v71);
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
            v50 = KeGetCurrentThread()->ApcState.Process;
            if ( v13 != 1 )
            {
              guard_dispatch_icall_no_overrides(ExpSvmIommuSystemContext, (unsigned int)v1, v14, v30);
              goto LABEL_36;
            }
            v51 = v50[3].ActiveGroupPadding[1];
            v52 = v50[4].Padding[1];
            if ( v51 )
            {
              guard_dispatch_icall_no_overrides(v50[3].ActiveGroupPadding[1], (unsigned int)v1, v14, v51);
              if ( !v52 )
                goto LABEL_36;
            }
            else if ( !v52 )
            {
              goto LABEL_36;
            }
            guard_dispatch_icall_no_overrides(v52, (unsigned int)v1, v14, v51);
            goto LABEL_36;
          }
          v48 = 2147483652LL;
          if ( v64 != 1 )
            v48 = 4LL;
          KiIpiSendRequest((_DWORD)v33, 1, 0, (unsigned int)&v71, v48);
          v40 = (__int64)v68;
        }
        else
        {
          _InterlockedOr(v61, 0);
          p_StaticAffinity = &v33->StaticAffinity;
          v34 = &v33->StaticAffinity.KeFlushTbAffinity.8;
          v70 = v33->CurrentThread->ApcState.Process->ActiveProcessors;
          *(_QWORD *)&v33->StaticAffinity.KeFlushTbAffinity.Count = 2097153LL;
          memset_0(&v33->StaticAffinity.KeRcuAffinity.8, 0, sizeof(v33->StaticAffinity.KeRcuAffinity.8));
          v35 = v70;
          Size = p_StaticAffinity->KeFlushTbAffinity.Size;
          Count = v70->Count;
          p_StaticAffinity->KeFlushTbAffinity.Size = Size;
          if ( Count <= Size )
            Size = Count;
          p_StaticAffinity->KeFlushTbAffinity.Count = Size;
          v38 = 0;
          p_StaticAffinity->KeFlushTbAffinity.Reserved = 0;
          if ( Size )
          {
            v46 = (char *)v35 - (char *)p_StaticAffinity;
            v47 = Size;
            v38 = Size;
            do
            {
              v34->Bitmap[0] = *(unsigned __int64 *)((char *)v34->Bitmap + v46);
              v34 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v34 + 8);
              --v47;
            }
            while ( v47 );
          }
          for ( ; v38 < p_StaticAffinity->KeFlushTbAffinity.Size; p_StaticAffinity->KeFlushTbAffinity.Bitmap[v39] = 0LL )
            v39 = v38++;
          v40 = (__int64)v68;
          v41 = *((_DWORD *)KiGlobalState + v68->Number);
          v42 = v41 >> 6;
          if ( p_StaticAffinity->KeFlushTbAffinity.Count > (unsigned int)v42 )
            p_StaticAffinity->KeFlushTbAffinity.Bitmap[v42] &= ~(1LL << (v41 & 0x3F));
          for ( j = 0; ; ++j )
          {
            if ( j >= p_StaticAffinity->KeFlushTbAffinity.Count )
            {
              LOBYTE(p_StaticAffinity) = (_BYTE)p_Count;
              goto LABEL_120;
            }
            v44 = p_StaticAffinity->KeFlushTbAffinity.Bitmap[j];
            if ( v44 )
            {
              if ( j != *(unsigned __int8 *)(v40 + 208) || v44 != *(_QWORD *)(v40 + 200) )
                break;
            }
          }
          v57 = 2147483652LL;
          if ( v64 != 1 )
            v57 = 4LL;
          KiIpiSendRequest(v40, 0, (_DWORD)p_StaticAffinity, (unsigned int)&v71, v57);
          LOBYTE(p_StaticAffinity) = (_BYTE)p_Count;
        }
        KiFlushRangeWorker(&v71);
        KiIpiWaitForRequestBarrier(v40);
        goto LABEL_126;
      }
    }
    LOBYTE(v8) = 0;
    v62 = 0;
    goto LABEL_75;
  }
LABEL_40:
  if ( BYTE1(v2->StaticBitmap[2]) )
  {
    v45 = *v4;
    if ( (*(_DWORD *)v10 & 1) != 0 )
      KeFlushCurrentTbOnly(v45, v3, v8);
    else
      KeFlushTb(v45, v9, v8);
  }
  *(_DWORD *)v10 &= ~4u;
  *(_DWORD *)v10 &= ~0x20u;
  HIDWORD(v2->StaticBitmap[2]) = 0;
  v2->StaticBitmap[3] = 0LL;
  *(_WORD *)((char *)&v2->StaticBitmap[2] + 1) = 0;
}
