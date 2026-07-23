/*
 * XREFs of MiBuildForkPte @ 0x1402687D0
 * Callers:
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 * Callees:
 *     MiCaptureWriteWatchDirtyBit @ 0x140202774 (MiCaptureWriteWatchDirtyBit.c)
 *     MiGetWsleProtection @ 0x140202860 (MiGetWsleProtection.c)
 *     MiSetWsleProtection @ 0x140203240 (MiSetWsleProtection.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakePrototypePteDirect @ 0x140203600 (MiMakePrototypePteDirect.c)
 *     MiLockPageTablePage @ 0x140205E40 (MiLockPageTablePage.c)
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiReturnCloneCharges @ 0x140206FD0 (MiReturnCloneCharges.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiMakePrototypePteVadLookup @ 0x1402104D0 (MiMakePrototypePteVadLookup.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiTransferSoftwarePte @ 0x140215AA0 (MiTransferSoftwarePte.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x140219A20 (MiUpdateWorkingSetPrivateSize.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiFinalizePageAttribute @ 0x14024C240 (MiFinalizePageAttribute.c)
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1402697B0 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiTransferPageFileOwnership @ 0x1402697C8 (MiTransferPageFileOwnership.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140269980 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiFindZeroCloneBlock @ 0x1402699C4 (MiFindZeroCloneBlock.c)
 *     MiGetCloneCharges @ 0x140269B50 (MiGetCloneCharges.c)
 *     MiUpdatePageFileBlockOwner @ 0x140269EDC (MiUpdatePageFileBlockOwner.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140269F40 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiMakePerSessionProtoPte @ 0x140269F88 (MiMakePerSessionProtoPte.c)
 *     MiWriteSharedDemandZeroPte @ 0x14026A080 (MiWriteSharedDemandZeroPte.c)
 *     MiIsVadLargePrivate @ 0x1402903A0 (MiIsVadLargePrivate.c)
 *     MiReferenceExistingCloneProto @ 0x14029447C (MiReferenceExistingCloneProto.c)
 *     MiIncrementCombinedPte @ 0x1402946E0 (MiIncrementCombinedPte.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUpdatePageFileHighInPte @ 0x1402EACE0 (MiUpdatePageFileHighInPte.c)
 *     MiClearPageFileReservation @ 0x14030714C (MiClearPageFileReservation.c)
 *     MiIsPrototypePteVadLookup @ 0x14030D150 (MiIsPrototypePteVadLookup.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x1403517B0 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiPrefetchVirtualMemory @ 0x140351B80 (MiPrefetchVirtualMemory.c)
 *     MiDuplicateCloneLeaf @ 0x14038FAFC (MiDuplicateCloneLeaf.c)
 *     MiWriteUselessChildPte @ 0x140391668 (MiWriteUselessChildPte.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1403916FC (MiIncreaseUsedPtesInPfn.c)
 *     MiLockAndInsertPageInFreeList @ 0x14045BA98 (MiLockAndInsertPageInFreeList.c)
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
  unsigned __int8 WsleContents; // bl
  unsigned int v20; // r10d
  __int64 v21; // r11
  __int64 v22; // r14
  ULONG_PTR v23; // rdi
  __int64 v24; // r8
  PVOID v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  __int64 v30; // rdx
  unsigned int v31; // ebx
  __int64 v32; // rax
  unsigned __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  unsigned int v37; // edi
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r14
  __int64 v41; // r8
  __int64 v42; // r9
  ULONG_PTR v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  unsigned __int64 v47; // rdi
  __int64 v48; // rcx
  ULONG_PTR v49; // rbx
  ULONG_PTR PrototypePteDirect; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // ecx
  unsigned __int64 v55; // rcx
  unsigned int v56; // ebx
  __int64 v57; // rdi
  unsigned __int64 v58; // rdx
  __int64 v60; // rdi
  ULONG_PTR v61; // r8
  unsigned __int8 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 ZeroCloneBlock; // r8
  __int64 v66; // r9
  ULONG_PTR *v67; // r13
  int v68; // r11d
  __int64 v69; // rdi
  unsigned int v70; // ebx
  int WsleProtection; // eax
  __int64 v72; // r11
  __int64 v73; // r11
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdi
  ULONG_PTR PerSessionProtoPte; // rax
  __int64 v80; // rdi
  unsigned int v81; // ebx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  unsigned int v86; // r15d
  __int64 v87; // rcx
  __int64 v88; // r9
  unsigned __int32 v89; // eax
  unsigned int v90; // edx
  __int64 v91; // rbx
  __int64 Page; // rax
  char v93; // al
  unsigned int v94; // r9d
  __int64 v95; // r10
  __int64 v96; // r11
  __int64 v97; // rcx
  __int64 v98; // rdi
  ULONG_PTR v99; // rax
  __int64 v100; // rdi
  unsigned int v101; // ebx
  __int64 v102; // r9
  unsigned int v103; // r10d
  __int64 v104; // r11
  __int64 v105; // rsi
  unsigned __int64 v106; // rbx
  ULONG_PTR v107; // rdx
  ULONG_PTR v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  unsigned int v113; // ebx
  __int64 v114; // rdi
  __int64 ProcessorFlushList; // rax
  __int64 v116; // rdx
  __int64 v117; // rax
  int v118; // edx
  int v119; // r11d
  __int64 v120; // rdx
  __int64 v121; // rcx
  ULONG_PTR *v122; // [rsp+30h] [rbp-79h]
  __int64 v123; // [rsp+38h] [rbp-71h]
  __int64 v124; // [rsp+40h] [rbp-69h] BYREF
  __int64 v125; // [rsp+48h] [rbp-61h]
  __int64 v126; // [rsp+50h] [rbp-59h]
  __int64 v127; // [rsp+58h] [rbp-51h] BYREF
  __int64 v128; // [rsp+60h] [rbp-49h]
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-41h]
  ULONG_PTR v130; // [rsp+70h] [rbp-39h]
  __int64 v131; // [rsp+78h] [rbp-31h]
  unsigned __int64 v132; // [rsp+80h] [rbp-29h]
  __int64 v133; // [rsp+88h] [rbp-21h]
  __int128 v134; // [rsp+90h] [rbp-19h] BYREF
  __int64 v135; // [rsp+A0h] [rbp-9h]
  __int128 v136; // [rsp+A8h] [rbp-1h] BYREF
  char v138; // [rsp+118h] [rbp+6Fh]
  ULONG_PTR BugCheckParameter3; // [rsp+128h] [rbp+7Fh] BYREF

  v1 = (ULONG_PTR *)a1[7];
  v124 = 0LL;
  v2 = a1;
  v3 = a1[5];
  v4 = a1[2];
  v5 = a1[1];
  v6 = (ULONG_PTR *)a1[8];
  v7 = a1[6];
  BugCheckParameter1 = (ULONG_PTR)v1;
  v8 = *v1;
  v133 = v3;
  v135 = v4;
  v123 = v5;
  v122 = v6;
  BugCheckParameter3 = v8;
  v134 = 0LL;
  if ( v8 )
  {
    v9 = *a1;
    v10 = 0;
    v11 = a1[9];
    v12 = 0;
    v127 = -1LL;
    v125 = v9;
    v13 = v9 + 1024;
    v126 = v9 + 1024;
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
        v138 = 0;
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
          v13 = v126;
LABEL_99:
          MiInitializePageColorBase(v13, 3LL, 0LL, &v134);
          v88 = v134;
          v89 = _InterlockedExchangeAdd((volatile signed __int32 *)v134, 1u);
          v90 = v89 % dword_140E2DD00[(*((_QWORD *)&v134 + 1) >> 16) & 3LL];
          v91 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(v123 + 1198));
          Page = v127;
          if ( v127 != -1
            || (Page = MiGetPage(
                         v91,
                         (unsigned __int8)v90 | ((HIWORD(*(_DWORD *)(v16 + 32)) & 0xC0) << 12) | DWORD2(v134) & 0xFFF3FF00,
                         1LL,
                         v88),
                v127 = Page,
                Page != -1) )
          {
            MiFinalizePageAttribute(
              48 * Page - 0x220000000000LL,
              (unsigned __int8)BYTE2(*(_DWORD *)(v16 + 32)) >> 6,
              16LL);
            MiDuplicateCloneLeaf(v2[7], v2[8], v127, v2[10], *((_BYTE *)v2 + 28));
            ++v2[11];
            goto LABEL_45;
          }
          v121 = v2[13];
          if ( v121 )
          {
            MiFlushTbList(v121);
            MiReleaseProcessorFlushList();
            v2[13] = 0LL;
          }
          MiUnlockWorkingSetExclusive(v13, *((_BYTE *)v2 + 28));
          MiWaitForFreePage(v91, 0);
          *((_BYTE *)v2 + 28) = MiLockWorkingSetExclusive(v13);
          return 3221226029LL;
        }
        v132 = (__int64)(v14 << 25) >> 16;
        WsleContents = MiGetWsleContents(v18, v132);
        if ( *v17 < 0 )
        {
          WsleProtection = MiGetWsleProtection((__int64)(v14 << 25) >> 16, WsleContents);
          if ( WsleProtection )
          {
            BugCheckParameter3 = MiMakePrototypePteVadLookup(WsleProtection);
          }
          else
          {
            BugCheckParameter3 = MiMakePrototypePteDirect(v72);
            if ( (*v17 & 0x10000000000LL) == 0 && *(__int64 *)(v16 + 8) > 0 )
              BugCheckParameter3 |= 0x800uLL;
          }
          if ( (*(_QWORD *)(v16 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v16 + 8) <= 0 )
          {
            if ( (unsigned int)MiReferenceExistingCloneProto(
                                 (int)v123 + 1024,
                                 v73,
                                 *((_DWORD *)v2 + 6),
                                 (int)v2 + 32,
                                 (__int64)&v124) )
            {
              if ( v124 )
              {
                BugCheckParameter3 |= 8uLL;
              }
              else if ( !(unsigned int)MiIsPrototypePteVadLookup(*(_QWORD *)(v16 + 16), v74) )
              {
                v78 = v133;
                if ( (*(_BYTE *)(v133 + 48) & 0x70) == 0x20 && !(unsigned int)MiIsVadLargePrivate(v133, v74, v76, v77) )
                {
                  PerSessionProtoPte = MiMakePerSessionProtoPte(v125, v123, v14, v78);
                  if ( PerSessionProtoPte )
                    BugCheckParameter3 = PerSessionProtoPte;
                }
              }
LABEL_72:
              v80 = v2[10];
              v81 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v80 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v81 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v75, v74, v76, v77) )
                  {
                    HvlNotifyLongSpinWait(v81);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v80 + 24) < 0 );
              }
LABEL_74:
              *v122 = BugCheckParameter3;
LABEL_75:
              MiIncreaseUsedPtesInPfn(v2[10], 1LL);
              _InterlockedAnd64((volatile signed __int64 *)(v2[10] + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_39:
              *(__m128i *)(v2 + 7) = _mm_add_epi64(
                                       _mm_load_si128((const __m128i *)&_xmm),
                                       _mm_loadu_si128((const __m128i *)(v2 + 7)));
LABEL_40:
              if ( v127 != -1 )
                MiLockAndInsertPageInFreeList(48 * v127 - 0x220000000000LL);
              return 0LL;
            }
          }
          else if ( (unsigned int)MiIncrementCombinedPte(v123 + 1024, v73, 1LL) )
          {
            goto LABEL_72;
          }
          goto LABEL_85;
        }
        v22 = (*(_QWORD *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
        v23 = CLFS_LSN_NULL_EXT;
        v24 = 48 * v22 - 0x220000000000LL;
        v25 = qword_140E300C8;
        v26 = ((unsigned __int64)*v17 >> 43) & 0x3FF;
        v128 = v24;
        v27 = *((_QWORD *)qword_140E300C8 + v26);
        v28 = *(unsigned __int16 *)(v21 + 1198);
        v131 = v27;
        if ( *((_QWORD *)qword_140E300C8 + v28) != v27 )
        {
          v20 = 5;
          *(_QWORD *)(v11 + 8) = 1LL;
          v138 = 5;
        }
        v29 = *(_QWORD *)(v11 + 16);
        if ( (v2[3] & 1) != 0 )
        {
          v20 |= 2u;
          v138 = v20;
          v29 = v29 & 0xF00000000000001FuLL | 0x20;
          *(_QWORD *)(v11 + 16) = v29;
        }
        if ( v20 )
        {
          if ( !(unsigned int)MiGetCloneCharges(v27, v20) )
            goto LABEL_85;
          v24 = v128;
        }
        if ( (WsleContents & 0xF) != 8 || (unsigned int)MiLockPageTablePage(v24, 3) )
        {
          v30 = v128;
          v31 = 0;
          while ( 2 )
          {
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
            {
              v32 = *(_QWORD *)(v30 + 24);
              v33 = 0xC000000000000000uLL;
              v34 = v32 + 1;
              *(_QWORD *)(v30 + 24) = (v32 + 1) ^ ((v32 + 1) ^ v32) & 0xC000000000000000uLL;
              _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( (BugCheckParameter3 & 0x42) != 0 )
              {
                v35 = v133;
                v36 = 6291456LL;
                if ( (*(_DWORD *)(v133 + 48) & 0x600000) == 0x600000 && *(__int64 *)(v16 + 40) >= 0 )
                  MiCaptureWriteWatchDirtyBit(v125, v132, v133);
                v37 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v37 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v36, v30, v35, v27) )
                    {
                      HvlNotifyLongSpinWait(v37);
                    }
                    else
                    {
                      _mm_pause();
                    }
                  }
                  while ( *(__int64 *)(v16 + 24) < 0 );
                }
                v38 = MiCaptureDirtyBitToPfn(v16);
                BugCheckParameter3 &= 0xFFFFFFFFFFFFFFBDuLL;
                v23 = v38;
              }
              else
              {
                v86 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v86 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v34, v30, v33, v27) )
                    {
                      HvlNotifyLongSpinWait(v86);
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
              v39 = *(_QWORD *)(v16 + 16);
              if ( (v39 & 2) != 0 )
              {
                v120 = *(_QWORD *)(v131 + 8LL * ((unsigned __int16)v39 >> 12) + 18528);
                if ( qword_140E2DCC0 && (v39 & 0x10) == 0 )
                  v39 &= ~qword_140E2DCC0;
                v23 = MiTransferSoftwarePte(*(_QWORD *)(v16 + 16), v120, HIDWORD(v39), (v23 != 0) + 2);
                *(_QWORD *)(v16 + 16) &= ~2uLL;
              }
              *(_QWORD *)(v16 + 8) = v11;
              *(_QWORD *)(v16 + 40) |= 0x8000000000000000uLL;
              MiSetPfnContainingFrame(v16, v22);
              MI_MAKE_PROTECT_WRITE_COPY(v16 + 16);
              v40 = *(_QWORD *)(v16 + 16) >> 5;
              MiTransferPageFileOwnership(v16, BugCheckParameter1);
              _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v23 )
                MiReleasePageFileInfo(v131, v23, 1LL, v42);
              v43 = BugCheckParameter3;
              if ( (BugCheckParameter3 & 0x800) != 0 )
              {
                v43 = BugCheckParameter3 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
                BugCheckParameter3 = v43;
              }
              MiWriteValidPteNewProtection(BugCheckParameter1, v43, v41);
              if ( !v2[13] )
              {
                ProcessorFlushList = MiGetProcessorFlushList(v45, v44, v46);
                v116 = v126;
                v2[13] = ProcessorFlushList;
                MiInitializeTbFlushList(ProcessorFlushList, v116, *(_DWORD *)(ProcessorFlushList + 12), 0, 32);
              }
              v47 = v132;
              MiInsertTbFlushEntry(v2[13], v132, 1LL, 0);
              v49 = BugCheckParameter3;
              if ( _bittest64(&MiFlags, 0x24u) )
              {
                if ( (BugCheckParameter3 & 0x20) == 0 )
                {
                  v48 = 0x4000000000LL;
                  if ( v11 >= 0xFFFFF6C000000000uLL )
                    MiCheckLinearProtectedPteAccessedBit(v11, BugCheckParameter3, 128LL);
                }
              }
              *(_QWORD *)v11 = v49;
              MiSetWsleProtection(v48, v47, 0LL);
              PrototypePteDirect = MiMakePrototypePteDirect(*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL);
              v54 = *((_DWORD *)v2 + 6);
              BugCheckParameter3 = PrototypePteDirect;
              if ( (v54 & 1) != 0 )
              {
                ++v2[4];
                BugCheckParameter3 = PrototypePteDirect | 8;
              }
              v55 = (unsigned int)v40 ^ (v29 ^ (unsigned int)v40) & 0xFFFFFFFFFFFFFFE0uLL;
              *(_QWORD *)(v11 + 16) = v55;
              v56 = 0;
              v57 = v2[10];
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v57 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v56 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v55, v51, v52, v53) )
                  {
                    HvlNotifyLongSpinWait(v56);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v57 + 24) < 0 );
              }
              *v122 = BugCheckParameter3;
              MiIncreaseUsedPtesInPfn(v2[10], 1LL);
              _InterlockedAnd64((volatile signed __int64 *)(v2[10] + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v58 = v132;
              _InterlockedDecrement64((volatile signed __int64 *)(v125 + 648));
              MiUpdateWorkingSetPrivateSize(v126, v58, 0xFFFFFFFFFFFFFFFFuLL, 0);
              goto LABEL_38;
            }
LABEL_76:
            if ( (++v31 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
            {
              if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v25, v30, v24, v27) )
              {
                HvlNotifyLongSpinWait(v31);
                v30 = v128;
LABEL_78:
                if ( *(__int64 *)(v30 + 24) >= 0 )
                  continue;
                goto LABEL_76;
              }
              v30 = v128;
            }
            break;
          }
          _mm_pause();
          goto LABEL_78;
        }
        MiReturnCloneCharges(v131, v138);
        v12 = 1;
        v10 = 1;
        v13 = v126;
      }
      if ( (v15 & 0x400) != 0 )
      {
        v93 = MI_PROTO_FORMAT_COMBINED(v15);
        v97 = v96 + 1024;
        if ( v93 )
        {
          if ( !(unsigned int)MiIncrementCombinedPte(v97, v95, v94) )
            goto LABEL_85;
        }
        else
        {
          if ( !(unsigned int)MiReferenceExistingCloneProto(v97, v95, *((_DWORD *)v2 + 6), (int)v2 + 32, (__int64)&v124) )
            goto LABEL_85;
          if ( v124 )
          {
            if ( (*(_BYTE *)(v124 + 16) & 0x1F) != 0x18 )
              BugCheckParameter3 |= 8uLL;
          }
          else if ( !(unsigned int)MiIsPrototypePteVadLookup(BugCheckParameter3, v82) )
          {
            v98 = v133;
            if ( (*(_BYTE *)(v133 + 48) & 0x70) == 0x20 && !(unsigned int)MiIsVadLargePrivate(v133, v82, v84, v85) )
            {
              v99 = MiMakePerSessionProtoPte(v125, v123, v14, v98);
              if ( v99 )
                BugCheckParameter3 = v99;
            }
          }
        }
        v100 = v2[10];
        v101 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v100 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v101 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v83, v82, v84, v85) )
            {
              HvlNotifyLongSpinWait(v101);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v100 + 24) < 0 );
        }
        goto LABEL_74;
      }
      if ( (v15 & 0x800) != 0 )
      {
        if ( (unsigned int)MiHandleForkTransitionPte(v2, &v127) )
          goto LABEL_40;
      }
      else
      {
        v60 = (v15 >> 5) & 0x1F;
        if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v15) )
        {
          if ( (((unsigned __int8)v61 >> 1) & v62) != 0 )
          {
            MiClearPageFileReservation(&BugCheckParameter3);
            v61 = BugCheckParameter3;
          }
          BugCheckParameter3 = MiUpdatePageFileHighInPte(v61, 0LL) & 0xFFFFFFFFFFFF0FFFuLL;
          if ( (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(BugCheckParameter3) || !v135 )
          {
            v67 = v122;
          }
          else
          {
            v67 = v122;
            ZeroCloneBlock = MiFindZeroCloneBlock(v135, (unsigned int)v60);
            v124 = ZeroCloneBlock;
            if ( ZeroCloneBlock )
            {
              if ( (unsigned int)MiWriteSharedDemandZeroPte(
                                   v68,
                                   v63,
                                   ZeroCloneBlock,
                                   (_DWORD)v122,
                                   v2[10],
                                   (__int64)(v2 + 4)) )
                goto LABEL_39;
              v124 = 0LL;
            }
          }
          v69 = v2[10];
          v70 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v69 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v70 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v64, v63, ZeroCloneBlock, v66) )
              {
                HvlNotifyLongSpinWait(v70);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v69 + 24) < 0 );
          }
          *v67 = BugCheckParameter3;
          goto LABEL_75;
        }
        if ( (v60 & 0xFFFFFFF8) != 0x10 && !(unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(v61) )
        {
          v105 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(v125 + 1198));
          if ( *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(v104 + 1198)) != v105 )
          {
            v103 = 5;
            *(_QWORD *)(v11 + 8) = v102;
          }
          v106 = *(_QWORD *)(v11 + 16);
          if ( ((unsigned __int8)*((_DWORD *)v2 + 6) & (unsigned __int8)v102) != 0 )
          {
            v103 |= 2u;
            v106 = v106 & 0xF00000000000001FuLL | 0x20;
            *(_QWORD *)(v11 + 16) = v106;
          }
          if ( !v103 )
          {
LABEL_134:
            v107 = BugCheckParameter3;
            if ( (((unsigned __int8)BugCheckParameter3 >> 2) & (unsigned __int8)v102) != 0 )
            {
              if ( qword_140E2DCC0 && (BugCheckParameter3 & 0x10) == 0 )
                v107 = BugCheckParameter3 & ~qword_140E2DCC0;
              MiUpdatePageFileBlockOwner(
                *(_QWORD *)(v105 + 8LL * ((unsigned __int16)BugCheckParameter3 >> 12) + 18528),
                HIDWORD(v107),
                v11,
                v14,
                0);
              v102 = 1LL;
            }
            if ( (BugCheckParameter3 & 0x80u) != 0LL )
              BugCheckParameter3 |= 0x20uLL;
            v108 = BugCheckParameter3;
            if ( (((unsigned __int8)BugCheckParameter3 >> 1) & (unsigned __int8)v102) != 0 )
            {
              v130 = BugCheckParameter3 & 0xFFFFFFFFFFFFFFFBuLL;
              MiReleasePageFileInfo(v105, BugCheckParameter3 & 0xFFFFFFFFFFFFFFFBuLL, (unsigned int)v102, v102);
              MiClearPageFileReservation(&BugCheckParameter3);
              v108 = BugCheckParameter3;
            }
            *(_QWORD *)v11 = v108;
            BugCheckParameter3 = MiMakePrototypePteDirect(v11);
            *(_QWORD *)v14 = BugCheckParameter3;
            if ( ((unsigned __int8)*((_DWORD *)v2 + 6) & (unsigned __int8)v112) != 0 )
            {
              v2[4] += v112;
              if ( (_DWORD)v60 != 24 )
                BugCheckParameter3 |= 8uLL;
            }
            *(_QWORD *)(v11 + 16) = (unsigned int)v60 | v106 & 0xFFFFFFFFFFFFFFE0uLL;
            v113 = 0;
            v114 = v2[10];
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v114 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v113 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v110, v109, v111, v112) )
                {
                  HvlNotifyLongSpinWait(v113);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v114 + 24) < 0 );
            }
            *v122 = BugCheckParameter3;
            MiIncreaseUsedPtesInPfn(v2[10], 1LL);
            _InterlockedAnd64((volatile signed __int64 *)(v2[10] + 24), 0x7FFFFFFFFFFFFFFFuLL);
            _InterlockedDecrement64((volatile signed __int64 *)(v125 + 648));
LABEL_38:
            v2[9] += 32LL;
            goto LABEL_39;
          }
          if ( (unsigned int)MiGetCloneCharges(v105, v103) )
          {
            v102 = 1LL;
            goto LABEL_134;
          }
LABEL_85:
          MiWriteUselessChildPte(v122, v2[10]);
          *((_DWORD *)v2 + 24) = 1;
          goto LABEL_39;
        }
        v87 = v2[13];
        v136 = 0LL;
        if ( v87 )
        {
          MiFlushTbList(v87);
          MiReleaseProcessorFlushList();
          v2[13] = 0LL;
        }
        MiUnlockWorkingSetExclusive(v13, *((_BYTE *)v2 + 28));
        *((_QWORD *)&v136 + 1) = 4096LL;
        *(_QWORD *)&v136 = (__int64)(v14 << 25) >> 16;
        MiPrefetchVirtualMemory(1LL, &v136, v13, 173LL);
        v12 = 1;
        *((_BYTE *)v2 + 28) = MiLockWorkingSetExclusive(v13);
      }
    }
  }
  if ( v4 )
  {
    if ( (*(_DWORD *)(v7 + 48) & 0x2000000) != 0 )
    {
      v117 = MiFindZeroCloneBlock(v4, (*(_DWORD *)(v3 + 48) >> 7) & 0x1F);
      if ( v117 )
        MiWriteSharedDemandZeroPte(v119, v118, v117, (_DWORD)v6, v2[10], (__int64)(v2 + 4));
    }
  }
LABEL_45:
  *(__m128i *)(v2 + 7) = _mm_add_epi64(
                           _mm_load_si128((const __m128i *)&_xmm),
                           _mm_loadu_si128((const __m128i *)(v2 + 7)));
  return 0LL;
}
