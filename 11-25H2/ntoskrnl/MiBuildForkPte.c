/*
 * XREFs of MiBuildForkPte @ 0x1402CCF80
 * Callers:
 *     MiCloneVads @ 0x1402CC944 (MiCloneVads.c)
 * Callees:
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140208510 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiLockAndInsertPageInFreeList @ 0x140223D04 (MiLockAndInsertPageInFreeList.c)
 *     MiTransferSoftwarePte @ 0x1402280C0 (MiTransferSoftwarePte.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiIncrementCombinedPte @ 0x14023AE9C (MiIncrementCombinedPte.c)
 *     MiIsPrototypePteVadLookup @ 0x140246860 (MiIsPrototypePteVadLookup.c)
 *     MiFinalizePageAttribute @ 0x14024DDE0 (MiFinalizePageAttribute.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402A3914 (MiCaptureWriteWatchDirtyBit.c)
 *     MiMakePrototypePteDirect @ 0x1402A69A0 (MiMakePrototypePteDirect.c)
 *     MiIsVadLargePrivate @ 0x1402A82E0 (MiIsVadLargePrivate.c)
 *     MiLockPageTablePage @ 0x1402AC2E0 (MiLockPageTablePage.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiClearPageFileReservation @ 0x1402CC084 (MiClearPageFileReservation.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402CE090 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1402CE0D4 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiTransferPageFileOwnership @ 0x1402CE0EC (MiTransferPageFileOwnership.c)
 *     MiFindZeroCloneBlock @ 0x1402CE17C (MiFindZeroCloneBlock.c)
 *     MiGetCloneCharges @ 0x1402CF39C (MiGetCloneCharges.c)
 *     MiUpdatePageFileBlockOwner @ 0x1402CF4D0 (MiUpdatePageFileBlockOwner.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402CF530 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiReferenceExistingCloneProto @ 0x1402CF578 (MiReferenceExistingCloneProto.c)
 *     MiMakePerSessionProtoPte @ 0x1402CF61C (MiMakePerSessionProtoPte.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     MiWriteSharedDemandZeroPte @ 0x1402CFFF4 (MiWriteSharedDemandZeroPte.c)
 *     MiDuplicateCloneLeaf @ 0x1402D08F8 (MiDuplicateCloneLeaf.c)
 *     MiWriteUselessChildPte @ 0x1402D0FFC (MiWriteUselessChildPte.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1402D1090 (MiIncreaseUsedPtesInPfn.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1402FD330 (MiUpdateWorkingSetPrivateSize.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     MiReturnCloneCharges @ 0x14033FDD4 (MiReturnCloneCharges.c)
 *     MiPrefetchVirtualMemory @ 0x1403799D0 (MiPrefetchVirtualMemory.c)
 *     MiUpdatePageFileHighInPte @ 0x14037C850 (MiUpdatePageFileHighInPte.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSetWsleProtection @ 0x14037D510 (MiSetWsleProtection.c)
 *     MiGetWsleProtection @ 0x14037D600 (MiGetWsleProtection.c)
 *     MiMakePrototypePteVadLookup @ 0x14037DD10 (MiMakePrototypePteVadLookup.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiWaitForFreePage @ 0x1403BFC64 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiBuildForkPte(__int64 *a1)
{
  ULONG_PTR *v1; // rax
  __int64 *v2; // r15
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
  __int64 v19; // rdx
  char WsleContents; // bl
  unsigned int v21; // r10d
  __int64 v22; // r11
  __int64 v23; // r14
  ULONG_PTR v24; // rdi
  __int64 v25; // r8
  PVOID v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned __int64 v30; // rsi
  __int64 v32; // rdi
  __int64 v33; // rdx
  ULONG_PTR v34; // r8
  unsigned __int8 v35; // r9
  __int64 v36; // rcx
  __int64 ZeroCloneBlock; // rax
  int v38; // edx
  int v39; // r11d
  ULONG_PTR *v40; // r13
  __int64 v41; // rdi
  unsigned int v42; // ebx
  __int64 v43; // rdx
  unsigned int v44; // ebx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  unsigned int v48; // edi
  __int64 v49; // rax
  unsigned __int64 v50; // r8
  __int64 v51; // r14
  ULONG_PTR v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned __int64 v57; // rdi
  __int64 v58; // rcx
  ULONG_PTR v59; // rbx
  ULONG_PTR PrototypePteDirect; // rax
  int v61; // ecx
  unsigned __int64 v62; // rcx
  unsigned int v63; // ebx
  __int64 v64; // rdi
  unsigned __int64 v65; // rdx
  unsigned int WsleProtection; // eax
  __int64 v67; // r11
  __int64 v68; // r11
  __int64 v69; // rcx
  __int64 v70; // rdi
  ULONG_PTR PerSessionProtoPte; // rax
  __int64 v72; // rdi
  unsigned int v73; // ebx
  __int64 v74; // r9
  unsigned int v75; // r10d
  __int64 v76; // r11
  __int64 v77; // rsi
  unsigned __int64 v78; // rbx
  ULONG_PTR v79; // rdx
  ULONG_PTR v80; // rax
  __int64 v81; // rcx
  __int64 v82; // r9
  unsigned int v83; // ebx
  __int64 v84; // rdi
  unsigned __int32 v85; // eax
  unsigned int v86; // edx
  __int64 v87; // rbx
  __int64 Page; // rax
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // rcx
  unsigned int v92; // r15d
  __int64 v93; // rax
  int v94; // edx
  int v95; // r11d
  char v96; // al
  int v97; // r9d
  __int64 v98; // r10
  __int64 v99; // r11
  __int64 v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // rdi
  ULONG_PTR v103; // rax
  __int64 v104; // rdi
  unsigned int v105; // ebx
  __int64 v106; // rdx
  __int64 ProcessorFlushList; // rax
  int v108; // edx
  __int64 v109; // rcx
  ULONG_PTR *v110; // [rsp+30h] [rbp-79h]
  __int64 v111; // [rsp+38h] [rbp-71h]
  __int64 v112; // [rsp+40h] [rbp-69h] BYREF
  __int64 v113; // [rsp+48h] [rbp-61h]
  __int64 v114; // [rsp+50h] [rbp-59h]
  __int64 v115; // [rsp+58h] [rbp-51h] BYREF
  __int64 v116; // [rsp+60h] [rbp-49h]
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-41h]
  ULONG_PTR v118; // [rsp+70h] [rbp-39h]
  __int64 v119; // [rsp+78h] [rbp-31h]
  unsigned __int64 v120; // [rsp+80h] [rbp-29h]
  __int64 v121; // [rsp+88h] [rbp-21h]
  __int128 v122; // [rsp+90h] [rbp-19h] BYREF
  __int64 v123; // [rsp+A0h] [rbp-9h]
  __int128 v124; // [rsp+A8h] [rbp-1h] BYREF
  unsigned int v126; // [rsp+118h] [rbp+6Fh]
  ULONG_PTR BugCheckParameter3; // [rsp+128h] [rbp+7Fh] BYREF

  v1 = (ULONG_PTR *)a1[7];
  v112 = 0LL;
  v2 = a1;
  v3 = a1[5];
  v4 = a1[2];
  v5 = a1[1];
  v6 = (ULONG_PTR *)a1[8];
  v7 = a1[6];
  BugCheckParameter1 = (ULONG_PTR)v1;
  v8 = *v1;
  v121 = v3;
  v123 = v4;
  v111 = v5;
  v110 = v6;
  BugCheckParameter3 = v8;
  v122 = 0LL;
  if ( v8 )
  {
    v9 = *a1;
    v10 = 0;
    v11 = a1[9];
    v12 = 0;
    v115 = -1LL;
    v113 = v9;
    v13 = v9 + 1024;
    v114 = v9 + 1024;
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
        v126 = 0;
        v12 = 1;
        if ( (v15 & 1) == 0 )
          break;
        v16 = 48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        if ( v10 )
          goto LABEL_100;
        v17 = (__int64 *)(v16 + 40);
        if ( (unsigned __int16)*(_DWORD *)(v16 + 32) > 1u && *v17 >= 0
          || (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(*(_QWORD *)(v16 + 16)) )
        {
          v13 = v114;
LABEL_100:
          MiInitializePageColorBase(v13, 3, 0, (__int64)&v122);
          v85 = _InterlockedExchangeAdd((volatile signed __int32 *)v122, 1u);
          v86 = v85 % dword_140E2D980[(*((_QWORD *)&v122 + 1) >> 16) & 3LL];
          v87 = *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(v111 + 1198));
          Page = v115;
          if ( v115 != -1
            || (Page = MiGetPage(
                         v87,
                         (unsigned __int8)v86 | ((HIWORD(*(_DWORD *)(v16 + 32)) & 0xC0) << 12) | DWORD2(v122) & 0xFFF3FF00,
                         1u),
                v115 = Page,
                Page != -1) )
          {
            MiFinalizePageAttribute(
              48 * Page - 0x220000000000LL,
              (unsigned __int8)BYTE2(*(_DWORD *)(v16 + 32)) >> 6,
              16LL);
            MiDuplicateCloneLeaf(v2[7], v2[8], v115, v2[10], *((_BYTE *)v2 + 28));
            ++v2[11];
            goto LABEL_20;
          }
          v109 = v2[13];
          if ( v109 )
          {
            MiFlushTbList(v109, v89, v90);
            MiReleaseProcessorFlushList();
            v2[13] = 0LL;
          }
          MiUnlockWorkingSetExclusive(v13, *((_BYTE *)v2 + 28));
          MiWaitForFreePage(v87, 0LL);
          *((_BYTE *)v2 + 28) = MiLockWorkingSetExclusive(v13);
          return 3221226029LL;
        }
        v120 = (__int64)(v14 << 25) >> 16;
        WsleContents = MiGetWsleContents(v18, v120);
        if ( *v17 < 0 )
        {
          LOBYTE(v19) = WsleContents;
          WsleProtection = MiGetWsleProtection((__int64)(v14 << 25) >> 16, v19);
          if ( WsleProtection )
          {
            BugCheckParameter3 = MiMakePrototypePteVadLookup(WsleProtection);
          }
          else
          {
            BugCheckParameter3 = MiMakePrototypePteDirect(v67);
            if ( (*v17 & 0x10000000000LL) == 0 && *(__int64 *)(v16 + 8) > 0 )
              BugCheckParameter3 |= 0x800uLL;
          }
          if ( (*(_QWORD *)(v16 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v16 + 8) > 0 )
          {
            if ( (unsigned int)MiIncrementCombinedPte(v111 + 1024, v68, 1) )
              goto LABEL_73;
            goto LABEL_163;
          }
          if ( !(unsigned int)MiReferenceExistingCloneProto(
                                (int)v111 + 1024,
                                v68,
                                *((_DWORD *)v2 + 6),
                                (int)v2 + 32,
                                (__int64)&v112) )
            goto LABEL_163;
          if ( v112 )
          {
            BugCheckParameter3 |= 8uLL;
          }
          else if ( !MiIsPrototypePteVadLookup(*(_QWORD *)(v16 + 16)) )
          {
            v70 = v121;
            if ( (*(_BYTE *)(v121 + 48) & 0x70) == 0x20 && !MiIsVadLargePrivate(v121) )
            {
              PerSessionProtoPte = MiMakePerSessionProtoPte(v113, v111, v14, v70);
              if ( PerSessionProtoPte )
                BugCheckParameter3 = PerSessionProtoPte;
            }
          }
LABEL_73:
          v72 = v2[10];
          v73 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v72 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v73 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v69) )
              {
                HvlNotifyLongSpinWait(v73);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v72 + 24) < 0 );
          }
LABEL_75:
          *v110 = BugCheckParameter3;
LABEL_33:
          MiIncreaseUsedPtesInPfn(v2[10], 1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v2[10] + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_34:
          *(__m128i *)(v2 + 7) = _mm_add_epi64(
                                   _mm_load_si128((const __m128i *)&_xmm),
                                   _mm_loadu_si128((const __m128i *)(v2 + 7)));
LABEL_35:
          if ( v115 != -1 )
            MiLockAndInsertPageInFreeList(48 * v115 - 0x220000000000LL);
          return 0LL;
        }
        v23 = (*(_QWORD *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
        v24 = CLFS_LSN_NULL_EXT;
        v25 = 48 * v23 - 0x220000000000LL;
        v26 = qword_140E2FD48;
        v27 = ((unsigned __int64)*v17 >> 43) & 0x3FF;
        v116 = v25;
        v28 = *((_QWORD *)qword_140E2FD48 + v27);
        v29 = *(unsigned __int16 *)(v22 + 1198);
        v119 = v28;
        if ( *((_QWORD *)qword_140E2FD48 + v29) != v28 )
        {
          v21 = 5;
          *(_QWORD *)(v11 + 8) = 1LL;
          v126 = 5;
        }
        v30 = *(_QWORD *)(v11 + 16);
        if ( (v2[3] & 1) != 0 )
        {
          v21 |= 2u;
          v126 = v21;
          v30 = v30 & 0xF00000000000001FuLL | 0x20;
          *(_QWORD *)(v11 + 16) = v30;
        }
        if ( v21 )
        {
          if ( !(unsigned int)MiGetCloneCharges(v28, v21) )
            goto LABEL_163;
          v25 = v116;
        }
        if ( (WsleContents & 0xF) != 8 || (unsigned int)MiLockPageTablePage(v25, 3) )
        {
          v43 = v116;
          v44 = 0;
          while ( 2 )
          {
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) )
            {
              v45 = *(_QWORD *)(v43 + 24);
              v46 = v45 + 1;
              *(_QWORD *)(v43 + 24) = (v45 + 1) ^ ((v45 + 1) ^ v45) & 0xC000000000000000uLL;
              _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( (BugCheckParameter3 & 0x42) != 0 )
              {
                v47 = 6291456LL;
                if ( (*(_DWORD *)(v121 + 48) & 0x600000) == 0x600000 && *(__int64 *)(v16 + 40) >= 0 )
                  MiCaptureWriteWatchDirtyBit(v113, v120, v121);
                v48 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v48 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v47) )
                    {
                      HvlNotifyLongSpinWait(v48);
                    }
                    else
                    {
                      _mm_pause();
                    }
                  }
                  while ( *(__int64 *)(v16 + 24) < 0 );
                }
                v49 = MiCaptureDirtyBitToPfn(v16);
                BugCheckParameter3 &= 0xFFFFFFFFFFFFFFBDuLL;
                v24 = v49;
              }
              else
              {
                v92 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v92 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v46) )
                    {
                      HvlNotifyLongSpinWait(v92);
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
              v50 = *(_QWORD *)(v16 + 16);
              if ( (v50 & 2) != 0 )
              {
                v106 = *(_QWORD *)(v119 + 8LL * ((unsigned __int16)v50 >> 12) + 18528);
                if ( qword_140E2D940 && (v50 & 0x10) == 0 )
                  v50 &= ~qword_140E2D940;
                v24 = MiTransferSoftwarePte(*(_QWORD *)(v16 + 16), v106, (_KPROCESS *)HIDWORD(v50), (v24 != 0) + 2);
                *(_QWORD *)(v16 + 16) &= ~2uLL;
              }
              *(_QWORD *)(v16 + 8) = v11;
              *(_QWORD *)(v16 + 40) |= 0x8000000000000000uLL;
              MiSetPfnContainingFrame(v16, v23);
              MI_MAKE_PROTECT_WRITE_COPY(v16 + 16);
              v51 = *(_QWORD *)(v16 + 16) >> 5;
              MiTransferPageFileOwnership(v16, BugCheckParameter1);
              _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v24 )
                MiReleasePageFileInfo(v119, v24, 1);
              v52 = BugCheckParameter3;
              if ( (BugCheckParameter3 & 0x800) != 0 )
              {
                v52 = BugCheckParameter3 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
                BugCheckParameter3 = v52;
              }
              MiWriteValidPteNewProtection(BugCheckParameter1, v52);
              if ( !v2[13] )
              {
                ProcessorFlushList = MiGetProcessorFlushList(v54, v53, v55, v56);
                v108 = v114;
                v2[13] = ProcessorFlushList;
                MiInitializeTbFlushList(ProcessorFlushList, v108, *(_DWORD *)(ProcessorFlushList + 12), 0, 32);
              }
              v57 = v120;
              MiInsertTbFlushEntry(v2[13], v120, 1LL, 0LL);
              v59 = BugCheckParameter3;
              if ( _bittest64(&MiFlags, 0x24u) )
              {
                if ( (BugCheckParameter3 & 0x20) == 0 )
                {
                  v58 = 0x4000000000LL;
                  if ( v11 >= 0xFFFFF6C000000000uLL )
                    MiCheckLinearProtectedPteAccessedBit(v11, BugCheckParameter3);
                }
              }
              *(_QWORD *)v11 = v59;
              MiSetWsleProtection(v58, v57, 0LL);
              PrototypePteDirect = MiMakePrototypePteDirect(*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL);
              v61 = *((_DWORD *)v2 + 6);
              BugCheckParameter3 = PrototypePteDirect;
              if ( (v61 & 1) != 0 )
              {
                ++v2[4];
                BugCheckParameter3 = PrototypePteDirect | 8;
              }
              v62 = (unsigned int)v51 ^ (v30 ^ (unsigned int)v51) & 0xFFFFFFFFFFFFFFE0uLL;
              *(_QWORD *)(v11 + 16) = v62;
              v63 = 0;
              v64 = v2[10];
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v64 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v63 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v62) )
                  {
                    HvlNotifyLongSpinWait(v63);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v64 + 24) < 0 );
              }
              *v110 = BugCheckParameter3;
              MiIncreaseUsedPtesInPfn(v2[10], 1LL);
              _InterlockedAnd64((volatile signed __int64 *)(v2[10] + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v65 = v120;
              _InterlockedDecrement64((volatile signed __int64 *)(v113 + 648));
              MiUpdateWorkingSetPrivateSize(v114, v65, -1LL, 0LL);
              goto LABEL_57;
            }
LABEL_105:
            if ( (++v44 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
            {
              if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v26) )
              {
                HvlNotifyLongSpinWait(v44);
                v43 = v116;
LABEL_107:
                if ( *(__int64 *)(v43 + 24) >= 0 )
                  continue;
                goto LABEL_105;
              }
              v43 = v116;
            }
            break;
          }
          _mm_pause();
          goto LABEL_107;
        }
        MiReturnCloneCharges(v119, v126);
        v12 = 1;
        v10 = 1;
        v13 = v114;
      }
      if ( (v15 & 0x400) != 0 )
      {
        v96 = MI_PROTO_FORMAT_COMBINED(v15);
        v100 = v99 + 1024;
        if ( v96 )
        {
          if ( !(unsigned int)MiIncrementCombinedPte(v100, v98, v97) )
            goto LABEL_163;
        }
        else
        {
          if ( !(unsigned int)MiReferenceExistingCloneProto(
                                v100,
                                v98,
                                *((_DWORD *)v2 + 6),
                                (int)v2 + 32,
                                (__int64)&v112) )
            goto LABEL_163;
          if ( v112 )
          {
            if ( (*(_BYTE *)(v112 + 16) & 0x1F) != 0x18 )
              BugCheckParameter3 |= 8uLL;
          }
          else if ( !MiIsPrototypePteVadLookup(BugCheckParameter3) )
          {
            v102 = v121;
            if ( (*(_BYTE *)(v121 + 48) & 0x70) == 0x20 && !MiIsVadLargePrivate(v121) )
            {
              v103 = MiMakePerSessionProtoPte(v113, v111, v14, v102);
              if ( v103 )
                BugCheckParameter3 = v103;
            }
          }
        }
        v104 = v2[10];
        v105 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v104 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v105 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v101) )
            {
              HvlNotifyLongSpinWait(v105);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v104 + 24) < 0 );
        }
        goto LABEL_75;
      }
      if ( (v15 & 0x800) != 0 )
      {
        if ( (unsigned int)MiHandleForkTransitionPte(v2, &v115, v15, 1LL) )
          goto LABEL_35;
      }
      else
      {
        v32 = (v15 >> 5) & 0x1F;
        if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v15) )
        {
          if ( (((unsigned __int8)v34 >> 1) & v35) != 0 )
          {
            MiClearPageFileReservation((unsigned __int64)&BugCheckParameter3);
            v34 = BugCheckParameter3;
          }
          BugCheckParameter3 = MiUpdatePageFileHighInPte(v34, 0LL) & 0xFFFFFFFFFFFF0FFFuLL;
          if ( (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(BugCheckParameter3) || !v123 )
          {
            v40 = v110;
          }
          else
          {
            ZeroCloneBlock = MiFindZeroCloneBlock(v123, (unsigned int)v32);
            v40 = v110;
            v112 = ZeroCloneBlock;
            if ( ZeroCloneBlock )
            {
              if ( (unsigned int)MiWriteSharedDemandZeroPte(
                                   v39,
                                   v38,
                                   ZeroCloneBlock,
                                   (_DWORD)v110,
                                   v2[10],
                                   (__int64)(v2 + 4)) )
                goto LABEL_34;
              v112 = 0LL;
            }
          }
          v41 = v2[10];
          v42 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v42 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v36) )
              {
                HvlNotifyLongSpinWait(v42);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v41 + 24) < 0 );
          }
          *v40 = BugCheckParameter3;
          goto LABEL_33;
        }
        if ( (v32 & 0xFFFFFFF8) != 0x10 && !(unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(v34) )
        {
          v77 = *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(v113 + 1198));
          if ( *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(v76 + 1198)) != v77 )
          {
            v75 = 5;
            *(_QWORD *)(v11 + 8) = v74;
          }
          v78 = *(_QWORD *)(v11 + 16);
          if ( ((unsigned __int8)*((_DWORD *)v2 + 6) & (unsigned __int8)v74) != 0 )
          {
            v75 |= 2u;
            v78 = v78 & 0xF00000000000001FuLL | 0x20;
            *(_QWORD *)(v11 + 16) = v78;
          }
          if ( !v75 )
          {
LABEL_85:
            v79 = BugCheckParameter3;
            if ( (((unsigned __int8)BugCheckParameter3 >> 2) & (unsigned __int8)v74) != 0 )
            {
              if ( qword_140E2D940 && (BugCheckParameter3 & 0x10) == 0 )
                v79 = BugCheckParameter3 & ~qword_140E2D940;
              MiUpdatePageFileBlockOwner(
                *(_QWORD *)(v77 + 8LL * ((unsigned __int16)BugCheckParameter3 >> 12) + 18528),
                HIDWORD(v79),
                v11,
                v14,
                0);
              LOBYTE(v74) = 1;
            }
            if ( (BugCheckParameter3 & 0x80u) != 0LL )
              BugCheckParameter3 |= 0x20uLL;
            v80 = BugCheckParameter3;
            if ( (((unsigned __int8)BugCheckParameter3 >> 1) & (unsigned __int8)v74) != 0 )
            {
              v118 = BugCheckParameter3 & 0xFFFFFFFFFFFFFFFBuLL;
              MiReleasePageFileInfo(v77, BugCheckParameter3 & 0xFFFFFFFFFFFFFFFBuLL, v74);
              MiClearPageFileReservation((unsigned __int64)&BugCheckParameter3);
              v80 = BugCheckParameter3;
            }
            *(_QWORD *)v11 = v80;
            BugCheckParameter3 = MiMakePrototypePteDirect(v11);
            *(_QWORD *)v14 = BugCheckParameter3;
            if ( ((unsigned __int8)*((_DWORD *)v2 + 6) & (unsigned __int8)v82) != 0 )
            {
              v2[4] += v82;
              if ( (_DWORD)v32 != 24 )
                BugCheckParameter3 |= 8uLL;
            }
            *(_QWORD *)(v11 + 16) = (unsigned int)v32 | v78 & 0xFFFFFFFFFFFFFFE0uLL;
            v83 = 0;
            v84 = v2[10];
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v84 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v83 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v81) )
                {
                  HvlNotifyLongSpinWait(v83);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v84 + 24) < 0 );
            }
            *v110 = BugCheckParameter3;
            MiIncreaseUsedPtesInPfn(v2[10], 1LL);
            _InterlockedAnd64((volatile signed __int64 *)(v2[10] + 24), 0x7FFFFFFFFFFFFFFFuLL);
            _InterlockedDecrement64((volatile signed __int64 *)(v113 + 648));
LABEL_57:
            v2[9] += 32LL;
            goto LABEL_34;
          }
          if ( (unsigned int)MiGetCloneCharges(v77, v75) )
          {
            LOBYTE(v74) = 1;
            goto LABEL_85;
          }
LABEL_163:
          MiWriteUselessChildPte(v110, v2[10]);
          *((_DWORD *)v2 + 24) = 1;
          goto LABEL_34;
        }
        v91 = v2[13];
        v124 = 0LL;
        if ( v91 )
        {
          MiFlushTbList(v91, v33, v34);
          MiReleaseProcessorFlushList();
          v2[13] = 0LL;
        }
        MiUnlockWorkingSetExclusive(v13, *((_BYTE *)v2 + 28));
        *((_QWORD *)&v124 + 1) = 4096LL;
        *(_QWORD *)&v124 = (__int64)(v14 << 25) >> 16;
        MiPrefetchVirtualMemory(1LL, &v124, v13, 173LL);
        v12 = 1;
        *((_BYTE *)v2 + 28) = MiLockWorkingSetExclusive(v13);
      }
    }
  }
  if ( v4 )
  {
    if ( (*(_DWORD *)(v7 + 48) & 0x2000000) != 0 )
    {
      v93 = MiFindZeroCloneBlock(v4, (*(_DWORD *)(v3 + 48) >> 7) & 0x1F);
      if ( v93 )
        MiWriteSharedDemandZeroPte(v95, v94, v93, (_DWORD)v6, v2[10], (__int64)(v2 + 4));
    }
  }
LABEL_20:
  *(__m128i *)(v2 + 7) = _mm_add_epi64(
                           _mm_load_si128((const __m128i *)&_xmm),
                           _mm_loadu_si128((const __m128i *)(v2 + 7)));
  return 0LL;
}
