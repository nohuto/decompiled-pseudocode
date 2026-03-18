/*
 * XREFs of MiBuildForkPte @ 0x1402C53E8
 * Callers:
 *     MiCloneVads @ 0x1402C4DAC (MiCloneVads.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiClearPageFileReservation @ 0x140213DEC (MiClearPageFileReservation.c)
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiFinalizePageAttribute @ 0x14021F4F0 (MiFinalizePageAttribute.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSetWsleProtection @ 0x140232ACC (MiSetWsleProtection.c)
 *     MiGetWsleProtection @ 0x140233100 (MiGetWsleProtection.c)
 *     MiMakePrototypePteDirect @ 0x1402331F0 (MiMakePrototypePteDirect.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiMakePrototypePteVadLookup @ 0x140236340 (MiMakePrototypePteVadLookup.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     MiReturnCloneCharges @ 0x14023EE80 (MiReturnCloneCharges.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiIsVadLargePrivate @ 0x14025FD90 (MiIsVadLargePrivate.c)
 *     MiLockPageTablePage @ 0x140284A20 (MiLockPageTablePage.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiPrefetchVirtualMemory @ 0x1402A98D0 (MiPrefetchVirtualMemory.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1402C49A0 (MiUpdateWorkingSetPrivateSize.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1402C63C8 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiTransferPageFileOwnership @ 0x1402C63E0 (MiTransferPageFileOwnership.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402C6590 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiWaitForFreePage @ 0x1402CF708 (MiWaitForFreePage.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiIncrementCombinedPte @ 0x1402F9928 (MiIncrementCombinedPte.c)
 *     MiIsPrototypePteVadLookup @ 0x140303270 (MiIsPrototypePteVadLookup.c)
 *     MiUpdatePageFileHighInPte @ 0x140368F40 (MiUpdatePageFileHighInPte.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 *     MiGetCloneCharges @ 0x14036E068 (MiGetCloneCharges.c)
 *     MiWriteSharedDemandZeroPte @ 0x1403951B4 (MiWriteSharedDemandZeroPte.c)
 *     MiDuplicateCloneLeaf @ 0x140396854 (MiDuplicateCloneLeaf.c)
 *     MiWriteUselessChildPte @ 0x140396F60 (MiWriteUselessChildPte.c)
 *     MiIncreaseUsedPtesInPfn @ 0x140396FF4 (MiIncreaseUsedPtesInPfn.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140397A50 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiTransferSoftwarePte @ 0x14039F300 (MiTransferSoftwarePte.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14040E5F0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiReferenceExistingCloneProto @ 0x1404636A8 (MiReferenceExistingCloneProto.c)
 *     MiLockAndInsertPageInFreeList @ 0x1404653B4 (MiLockAndInsertPageInFreeList.c)
 *     MiMakePerSessionProtoPte @ 0x14046D870 (MiMakePerSessionProtoPte.c)
 *     MiUpdatePageFileBlockOwner @ 0x1404889B8 (MiUpdatePageFileBlockOwner.c)
 *     MiFindZeroCloneBlock @ 0x1404A0088 (MiFindZeroCloneBlock.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1404F31F8 (MiCaptureWriteWatchDirtyBit.c)
 */

__int64 __fastcall MiBuildForkPte(_QWORD *a1)
{
  ULONG_PTR *v1; // rax
  _QWORD *v2; // r15
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r11
  ULONG_PTR *v6; // r13
  __int64 v7; // rdx
  ULONG_PTR v8; // rax
  __int64 v9; // r13
  int v10; // ebx
  ULONG_PTR v11; // r12
  int v12; // edi
  __int64 v13; // rsi
  ULONG_PTR v14; // r14
  ULONG_PTR v15; // r8
  __int64 v16; // r13
  __int64 *v17; // rsi
  __int64 v18; // rcx
  unsigned __int8 WsleContents; // bl
  unsigned int v20; // r10d
  __int64 v21; // r11
  __int64 v22; // r14
  unsigned __int64 v23; // rdi
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  __int64 v29; // rdx
  unsigned int v30; // ebx
  unsigned int v31; // edi
  __int64 v32; // rax
  unsigned __int64 v33; // r8
  __int64 v34; // r14
  ULONG_PTR v35; // rdx
  unsigned __int64 v36; // rdi
  __int64 v37; // rcx
  ULONG_PTR v38; // rbx
  ULONG_PTR PrototypePteDirect; // rax
  int v40; // ecx
  unsigned int v41; // ebx
  __int64 v42; // rdi
  unsigned __int64 v43; // rdx
  __int64 v45; // rdi
  ULONG_PTR v46; // r8
  unsigned __int8 v47; // r9
  __int64 ZeroCloneBlock; // rax
  int v49; // edx
  int v50; // r11d
  ULONG_PTR *v51; // r13
  __int64 v52; // rdi
  unsigned int v53; // ebx
  int WsleProtection; // eax
  __int64 v55; // r11
  __int64 v56; // r11
  __int64 v57; // rdi
  ULONG_PTR PerSessionProtoPte; // rax
  __int64 v59; // rdi
  unsigned int v60; // ebx
  unsigned int v61; // r15d
  __int64 v62; // rcx
  unsigned __int32 v63; // eax
  unsigned int v64; // edx
  __int64 v65; // rbx
  __int64 Page; // rax
  char v67; // al
  unsigned int v68; // r9d
  __int64 v69; // r10
  __int64 v70; // r11
  __int64 v71; // rcx
  __int64 v72; // rdi
  ULONG_PTR v73; // rax
  __int64 v74; // rdi
  unsigned int v75; // ebx
  __int64 v76; // r9
  unsigned int v77; // r10d
  __int64 v78; // r11
  __int64 v79; // rsi
  unsigned __int64 v80; // rbx
  ULONG_PTR v81; // rdx
  ULONG_PTR v82; // rax
  __int64 v83; // r9
  unsigned int v84; // ebx
  __int64 v85; // rdi
  __int64 *ProcessorFlushList; // rax
  __int64 v87; // rdx
  __int64 v88; // rax
  int v89; // edx
  int v90; // r11d
  __int64 v91; // rdx
  __int64 v92; // rcx
  ULONG_PTR *v93; // [rsp+30h] [rbp-79h]
  __int64 v94; // [rsp+38h] [rbp-71h]
  __int64 v95; // [rsp+40h] [rbp-69h] BYREF
  __int64 v96; // [rsp+48h] [rbp-61h]
  __int64 v97; // [rsp+50h] [rbp-59h]
  __int64 v98; // [rsp+58h] [rbp-51h] BYREF
  __int64 v99; // [rsp+60h] [rbp-49h]
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-41h]
  ULONG_PTR v101; // [rsp+70h] [rbp-39h]
  __int64 v102; // [rsp+78h] [rbp-31h]
  unsigned __int64 v103; // [rsp+80h] [rbp-29h]
  __int64 v104; // [rsp+88h] [rbp-21h]
  __int128 v105; // [rsp+90h] [rbp-19h] BYREF
  __int64 v106; // [rsp+A0h] [rbp-9h]
  __int128 v107; // [rsp+A8h] [rbp-1h] BYREF
  char v109; // [rsp+118h] [rbp+6Fh]
  ULONG_PTR BugCheckParameter3; // [rsp+128h] [rbp+7Fh] BYREF

  v1 = (ULONG_PTR *)a1[7];
  v95 = 0LL;
  v2 = a1;
  v3 = a1[5];
  v4 = a1[2];
  v5 = a1[1];
  v6 = (ULONG_PTR *)a1[8];
  v7 = a1[6];
  BugCheckParameter1 = (ULONG_PTR)v1;
  v8 = *v1;
  v104 = v3;
  v106 = v4;
  v94 = v5;
  v93 = v6;
  BugCheckParameter3 = v8;
  v105 = 0LL;
  if ( v8 )
  {
    v9 = *a1;
    v10 = 0;
    v11 = a1[9];
    v12 = 0;
    v98 = -1LL;
    v96 = v9;
    v13 = v9 + 1024;
    v97 = v9 + 1024;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = BugCheckParameter1;
        *(_OWORD *)v11 = 0LL;
        *(_OWORD *)(v11 + 16) = 0LL;
        *(_QWORD *)(v11 + 24) = 2LL;
        if ( v12 )
        {
          MiMakeSystemAddressValid(v14, 0, *((_BYTE *)v2 + 28), 1);
          v15 = *(_QWORD *)v14;
          BugCheckParameter3 = *(_QWORD *)v14;
        }
        else
        {
          v15 = BugCheckParameter3;
        }
        v109 = 0;
        v12 = 1;
        if ( (v15 & 1) == 0 )
          break;
        v16 = 48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        if ( v10 )
          goto LABEL_99;
        v17 = (__int64 *)(v16 + 40);
        if ( (unsigned __int16)*(_DWORD *)(v16 + 32) > 1u && *v17 >= 0
          || (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(*(_QWORD *)(v16 + 16)) )
        {
          v13 = v97;
LABEL_99:
          MiInitializePageColorBase(v13, 3LL, 0LL, &v105);
          v63 = _InterlockedExchangeAdd((volatile signed __int32 *)v105, 1u);
          v64 = v63 % dword_140E2DBC0[(*((_QWORD *)&v105 + 1) >> 16) & 3LL];
          v65 = *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(v94 + 1198));
          Page = v98;
          if ( v98 != -1
            || (Page = MiGetPage(
                         v65,
                         (unsigned __int8)v64 | ((HIWORD(*(_DWORD *)(v16 + 32)) & 0xC0) << 12) | DWORD2(v105) & 0xFFF3FF00,
                         1LL),
                v98 = Page,
                Page != -1) )
          {
            MiFinalizePageAttribute(
              48 * Page - 0x220000000000LL,
              (unsigned __int8)BYTE2(*(_DWORD *)(v16 + 32)) >> 6,
              16LL);
            MiDuplicateCloneLeaf(v2[7], v2[8], v98, v2[10], *((_BYTE *)v2 + 28));
            ++v2[11];
            goto LABEL_45;
          }
          v92 = v2[13];
          if ( v92 )
          {
            MiFlushTbList(v92);
            MiReleaseProcessorFlushList();
            v2[13] = 0LL;
          }
          MiUnlockWorkingSetExclusive(v13, *((_BYTE *)v2 + 28));
          MiWaitForFreePage(v65, 0LL);
          *((_BYTE *)v2 + 28) = MiLockWorkingSetExclusive(v13);
          return 3221226029LL;
        }
        v103 = (__int64)(v14 << 25) >> 16;
        WsleContents = MiGetWsleContents(v18, v103);
        if ( *v17 < 0 )
        {
          WsleProtection = MiGetWsleProtection((__int64)(v14 << 25) >> 16, WsleContents);
          if ( WsleProtection )
          {
            BugCheckParameter3 = MiMakePrototypePteVadLookup(WsleProtection);
          }
          else
          {
            BugCheckParameter3 = MiMakePrototypePteDirect(v55);
            if ( (*v17 & 0x10000000000LL) == 0 && *(__int64 *)(v16 + 8) > 0 )
              BugCheckParameter3 |= 0x800uLL;
          }
          if ( (*(_QWORD *)(v16 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v16 + 8) <= 0 )
          {
            if ( (unsigned int)MiReferenceExistingCloneProto(
                                 (int)v94 + 1024,
                                 v56,
                                 *((_DWORD *)v2 + 6),
                                 (int)v2 + 32,
                                 (__int64)&v95) )
            {
              if ( v95 )
              {
                BugCheckParameter3 |= 8uLL;
              }
              else if ( !(unsigned int)MiIsPrototypePteVadLookup(*(_QWORD *)(v16 + 16)) )
              {
                v57 = v104;
                if ( (*(_BYTE *)(v104 + 48) & 0x70) == 0x20 && !MiIsVadLargePrivate(v104) )
                {
                  PerSessionProtoPte = MiMakePerSessionProtoPte(v96, v94, v14, v57);
                  if ( PerSessionProtoPte )
                    BugCheckParameter3 = PerSessionProtoPte;
                }
              }
LABEL_72:
              v59 = v2[10];
              v60 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v59 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v60 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v60);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v59 + 24) < 0 );
              }
LABEL_74:
              *v93 = BugCheckParameter3;
LABEL_75:
              MiIncreaseUsedPtesInPfn(v2[10], 1LL);
              _InterlockedAnd64((volatile signed __int64 *)(v2[10] + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_39:
              *(__m128i *)(v2 + 7) = _mm_add_epi64(
                                       _mm_load_si128((const __m128i *)&_xmm),
                                       _mm_loadu_si128((const __m128i *)(v2 + 7)));
LABEL_40:
              if ( v98 != -1 )
                MiLockAndInsertPageInFreeList(48 * v98 - 0x220000000000LL);
              return 0LL;
            }
          }
          else if ( (unsigned int)MiIncrementCombinedPte(v94 + 1024, v56, 1LL) )
          {
            goto LABEL_72;
          }
          goto LABEL_85;
        }
        v22 = (*(_QWORD *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
        v23 = CLFS_LSN_NULL_EXT;
        v24 = 48 * v22 - 0x220000000000LL;
        v25 = ((unsigned __int64)*v17 >> 43) & 0x3FF;
        v99 = v24;
        v26 = *((_QWORD *)qword_140E2FF88 + v25);
        v27 = *(unsigned __int16 *)(v21 + 1198);
        v102 = v26;
        if ( *((_QWORD *)qword_140E2FF88 + v27) != v26 )
        {
          v20 = 5;
          *(_QWORD *)(v11 + 8) = 1LL;
          v109 = 5;
        }
        v28 = *(_QWORD *)(v11 + 16);
        if ( (v2[3] & 1) != 0 )
        {
          v20 |= 2u;
          v109 = v20;
          v28 = v28 & 0xF00000000000001FuLL | 0x20;
          *(_QWORD *)(v11 + 16) = v28;
        }
        if ( v20 )
        {
          if ( !(unsigned int)MiGetCloneCharges(v26, v20) )
            goto LABEL_85;
          v24 = v99;
        }
        if ( (WsleContents & 0xF) != 8 || (unsigned int)MiLockPageTablePage(v24, 3) )
        {
          v29 = v99;
          v30 = 0;
          while ( 2 )
          {
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
            {
              *(_QWORD *)(v29 + 24) = (*(_QWORD *)(v29 + 24) + 1LL) ^ ((*(_QWORD *)(v29 + 24) + 1LL) ^ *(_QWORD *)(v29 + 24)) & 0xC000000000000000uLL;
              _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( (BugCheckParameter3 & 0x42) != 0 )
              {
                if ( (*(_DWORD *)(v104 + 48) & 0x600000) == 0x600000 && *(__int64 *)(v16 + 40) >= 0 )
                  MiCaptureWriteWatchDirtyBit(v96, v103, v104);
                v31 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v31 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && KiCheckVpBackingLongSpinWaitHypercall() )
                    {
                      HvlNotifyLongSpinWait(v31);
                    }
                    else
                    {
                      _mm_pause();
                    }
                  }
                  while ( *(__int64 *)(v16 + 24) < 0 );
                }
                v32 = MiCaptureDirtyBitToPfn(v16);
                BugCheckParameter3 &= 0xFFFFFFFFFFFFFFBDuLL;
                v23 = v32;
              }
              else
              {
                v61 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v61 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && KiCheckVpBackingLongSpinWaitHypercall() )
                    {
                      HvlNotifyLongSpinWait(v61);
                    }
                    else
                    {
                      _mm_pause();
                    }
                  }
                  while ( *(__int64 *)(v16 + 24) < 0 );
                }
                v2 = a1;
              }
              v33 = *(_QWORD *)(v16 + 16);
              if ( (v33 & 2) != 0 )
              {
                v91 = *(_QWORD *)(v102 + 8LL * ((unsigned __int16)v33 >> 12) + 18528);
                if ( qword_140E2DB80 && (v33 & 0x10) == 0 )
                  v33 &= ~qword_140E2DB80;
                v23 = MiTransferSoftwarePte(*(_QWORD *)(v16 + 16), v91, HIDWORD(v33), (unsigned int)(v23 != 0) + 2);
                *(_QWORD *)(v16 + 16) &= ~2uLL;
              }
              *(_QWORD *)(v16 + 8) = v11;
              *(_QWORD *)(v16 + 40) |= 0x8000000000000000uLL;
              MiSetPfnContainingFrame(v16, v22);
              MI_MAKE_PROTECT_WRITE_COPY(v16 + 16);
              v34 = *(_QWORD *)(v16 + 16) >> 5;
              MiTransferPageFileOwnership(v16, BugCheckParameter1);
              _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v23 )
                MiReleasePageFileInfo(v102, v23, 1LL);
              v35 = BugCheckParameter3;
              if ( (BugCheckParameter3 & 0x800) != 0 )
              {
                v35 = BugCheckParameter3 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
                BugCheckParameter3 = v35;
              }
              MiWriteValidPteNewProtection(BugCheckParameter1, v35);
              if ( !v2[13] )
              {
                ProcessorFlushList = MiGetProcessorFlushList();
                v87 = v97;
                v2[13] = ProcessorFlushList;
                MiInitializeTbFlushList((__int64)ProcessorFlushList, v87, *((_DWORD *)ProcessorFlushList + 3), 0, 32);
              }
              v36 = v103;
              MiInsertTbFlushEntry(v2[13], v103, 1LL, 0);
              v38 = BugCheckParameter3;
              if ( _bittest64(&MiFlags, 0x24u) )
              {
                if ( (BugCheckParameter3 & 0x20) == 0 )
                {
                  v37 = 0x4000000000LL;
                  if ( v11 >= 0xFFFFF6C000000000uLL )
                    MiCheckLinearProtectedPteAccessedBit(v11, BugCheckParameter3, 128);
                }
              }
              *(_QWORD *)v11 = v38;
              MiSetWsleProtection(v37, v36, 0);
              PrototypePteDirect = MiMakePrototypePteDirect(*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL);
              v40 = *((_DWORD *)v2 + 6);
              BugCheckParameter3 = PrototypePteDirect;
              if ( (v40 & 1) != 0 )
              {
                ++v2[4];
                BugCheckParameter3 = PrototypePteDirect | 8;
              }
              *(_QWORD *)(v11 + 16) = (unsigned int)v34 ^ (v28 ^ (unsigned int)v34) & 0xFFFFFFFFFFFFFFE0uLL;
              v41 = 0;
              v42 = v2[10];
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v42 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v41 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v41);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v42 + 24) < 0 );
              }
              *v93 = BugCheckParameter3;
              MiIncreaseUsedPtesInPfn(v2[10], 1LL);
              _InterlockedAnd64((volatile signed __int64 *)(v2[10] + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
              v43 = v103;
              _InterlockedDecrement64((volatile signed __int64 *)(v96 + 648));
              MiUpdateWorkingSetPrivateSize(v97, v43, 0xFFFFFFFFFFFFFFFFuLL, 0);
              goto LABEL_38;
            }
LABEL_76:
            if ( (++v30 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
            {
              if ( KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v30);
                v29 = v99;
LABEL_78:
                if ( *(__int64 *)(v29 + 24) >= 0 )
                  continue;
                goto LABEL_76;
              }
              v29 = v99;
            }
            break;
          }
          _mm_pause();
          goto LABEL_78;
        }
        MiReturnCloneCharges(v102, v109);
        v12 = 1;
        v10 = 1;
        v13 = v97;
      }
      if ( (v15 & 0x400) != 0 )
      {
        v67 = MI_PROTO_FORMAT_COMBINED(v15, v7, v15);
        v71 = v70 + 1024;
        if ( v67 )
        {
          if ( !(unsigned int)MiIncrementCombinedPte(v71, v69, v68) )
            goto LABEL_85;
        }
        else
        {
          if ( !(unsigned int)MiReferenceExistingCloneProto(v71, v69, *((_DWORD *)v2 + 6), (int)v2 + 32, (__int64)&v95) )
            goto LABEL_85;
          if ( v95 )
          {
            if ( (*(_BYTE *)(v95 + 16) & 0x1F) != 0x18 )
              BugCheckParameter3 |= 8uLL;
          }
          else if ( !(unsigned int)MiIsPrototypePteVadLookup(BugCheckParameter3) )
          {
            v72 = v104;
            if ( (*(_BYTE *)(v104 + 48) & 0x70) == 0x20 && !MiIsVadLargePrivate(v104) )
            {
              v73 = MiMakePerSessionProtoPte(v96, v94, v14, v72);
              if ( v73 )
                BugCheckParameter3 = v73;
            }
          }
        }
        v74 = v2[10];
        v75 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v74 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v75 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v75);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v74 + 24) < 0 );
        }
        goto LABEL_74;
      }
      if ( (v15 & 0x800) != 0 )
      {
        if ( (unsigned int)MiHandleForkTransitionPte(v2, &v98, v15, 1LL) )
          goto LABEL_40;
      }
      else
      {
        v45 = (v15 >> 5) & 0x1F;
        if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v15) )
        {
          if ( (((unsigned __int8)v46 >> 1) & v47) != 0 )
          {
            MiClearPageFileReservation((__int64 *)&BugCheckParameter3);
            v46 = BugCheckParameter3;
          }
          BugCheckParameter3 = MiUpdatePageFileHighInPte(v46, 0LL, v46) & 0xFFFFFFFFFFFF0FFFuLL;
          if ( (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(BugCheckParameter3) || !v106 )
          {
            v51 = v93;
          }
          else
          {
            ZeroCloneBlock = MiFindZeroCloneBlock(v106, (unsigned int)v45);
            v51 = v93;
            v95 = ZeroCloneBlock;
            if ( ZeroCloneBlock )
            {
              if ( (unsigned int)MiWriteSharedDemandZeroPte(
                                   v50,
                                   v49,
                                   ZeroCloneBlock,
                                   (_DWORD)v93,
                                   v2[10],
                                   (__int64)(v2 + 4)) )
                goto LABEL_39;
              v95 = 0LL;
            }
          }
          v52 = v2[10];
          v53 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v53 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v53);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v52 + 24) < 0 );
          }
          *v51 = BugCheckParameter3;
          goto LABEL_75;
        }
        if ( (v45 & 0xFFFFFFF8) != 0x10 && !(unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(v46) )
        {
          v79 = *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(v96 + 1198));
          if ( *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(v78 + 1198)) != v79 )
          {
            v77 = 5;
            *(_QWORD *)(v11 + 8) = v76;
          }
          v80 = *(_QWORD *)(v11 + 16);
          if ( ((unsigned __int8)*((_DWORD *)v2 + 6) & (unsigned __int8)v76) != 0 )
          {
            v77 |= 2u;
            v80 = v80 & 0xF00000000000001FuLL | 0x20;
            *(_QWORD *)(v11 + 16) = v80;
          }
          if ( !v77 )
          {
LABEL_134:
            v81 = BugCheckParameter3;
            if ( (((unsigned __int8)BugCheckParameter3 >> 2) & (unsigned __int8)v76) != 0 )
            {
              if ( qword_140E2DB80 && (BugCheckParameter3 & 0x10) == 0 )
                v81 = BugCheckParameter3 & ~qword_140E2DB80;
              MiUpdatePageFileBlockOwner(
                *(_QWORD *)(v79 + 8LL * ((unsigned __int16)BugCheckParameter3 >> 12) + 18528),
                HIDWORD(v81),
                v11,
                v14,
                0);
              LODWORD(v76) = 1;
            }
            if ( (BugCheckParameter3 & 0x80u) != 0LL )
              BugCheckParameter3 |= 0x20uLL;
            v82 = BugCheckParameter3;
            if ( (((unsigned __int8)BugCheckParameter3 >> 1) & (unsigned __int8)v76) != 0 )
            {
              v101 = BugCheckParameter3 & 0xFFFFFFFFFFFFFFFBuLL;
              MiReleasePageFileInfo(v79, BugCheckParameter3 & 0xFFFFFFFFFFFFFFFBuLL, (unsigned int)v76);
              MiClearPageFileReservation((__int64 *)&BugCheckParameter3);
              v82 = BugCheckParameter3;
            }
            *(_QWORD *)v11 = v82;
            BugCheckParameter3 = MiMakePrototypePteDirect(v11);
            *(_QWORD *)v14 = BugCheckParameter3;
            if ( ((unsigned __int8)*((_DWORD *)v2 + 6) & (unsigned __int8)v83) != 0 )
            {
              v2[4] += v83;
              if ( (_DWORD)v45 != 24 )
                BugCheckParameter3 |= 8uLL;
            }
            *(_QWORD *)(v11 + 16) = (unsigned int)v45 | v80 & 0xFFFFFFFFFFFFFFE0uLL;
            v84 = 0;
            v85 = v2[10];
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v85 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v84 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait(v84);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v85 + 24) < 0 );
            }
            *v93 = BugCheckParameter3;
            MiIncreaseUsedPtesInPfn(v2[10], 1LL);
            _InterlockedAnd64((volatile signed __int64 *)(v2[10] + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
            _InterlockedDecrement64((volatile signed __int64 *)(v96 + 648));
LABEL_38:
            v2[9] += 32LL;
            goto LABEL_39;
          }
          if ( (unsigned int)MiGetCloneCharges(v79, v77) )
          {
            LODWORD(v76) = 1;
            goto LABEL_134;
          }
LABEL_85:
          MiWriteUselessChildPte(v93, v2[10]);
          *((_DWORD *)v2 + 24) = 1;
          goto LABEL_39;
        }
        v62 = v2[13];
        v107 = 0LL;
        if ( v62 )
        {
          MiFlushTbList(v62);
          MiReleaseProcessorFlushList();
          v2[13] = 0LL;
        }
        MiUnlockWorkingSetExclusive(v13, *((_BYTE *)v2 + 28));
        *((_QWORD *)&v107 + 1) = 4096LL;
        *(_QWORD *)&v107 = (__int64)(v14 << 25) >> 16;
        MiPrefetchVirtualMemory(1uLL, (unsigned __int64)&v107, v13, 173);
        v12 = 1;
        *((_BYTE *)v2 + 28) = MiLockWorkingSetExclusive(v13);
      }
    }
  }
  if ( v4 )
  {
    if ( (*(_DWORD *)(v7 + 48) & 0x2000000) != 0 )
    {
      v88 = MiFindZeroCloneBlock(v4, (*(_DWORD *)(v3 + 48) >> 7) & 0x1F);
      if ( v88 )
        MiWriteSharedDemandZeroPte(v90, v89, v88, (_DWORD)v6, v2[10], (__int64)(v2 + 4));
    }
  }
LABEL_45:
  *(__m128i *)(v2 + 7) = _mm_add_epi64(
                           _mm_load_si128((const __m128i *)&_xmm),
                           _mm_loadu_si128((const __m128i *)(v2 + 7)));
  return 0LL;
}
