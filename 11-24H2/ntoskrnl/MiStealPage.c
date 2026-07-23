/*
 * XREFs of MiStealPage @ 0x140253D10
 * Callers:
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiHyperSpaceSize @ 0x14020FEBC (MiHyperSpaceSize.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiWriteValidPteNewPage @ 0x140217188 (MiWriteValidPteNewPage.c)
 *     MiClearPfnReuseFields @ 0x140218960 (MiClearPfnReuseFields.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiGetPfnChannel @ 0x1402242D0 (MiGetPfnChannel.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiReleaseFaultState @ 0x1402418F0 (MiReleaseFaultState.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MiReturnFreeZeroPage @ 0x14024EE00 (MiReturnFreeZeroPage.c)
 *     MI_NODE_FROM_PFN @ 0x140251340 (MI_NODE_FROM_PFN.c)
 *     MiCopyPfnEntryEx @ 0x140251B90 (MiCopyPfnEntryEx.c)
 *     MiPfnIsActivePageTable @ 0x140251DBC (MiPfnIsActivePageTable.c)
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiSetPfnTbFlushStamp @ 0x140253C90 (MiSetPfnTbFlushStamp.c)
 *     MiLockStealUserVm @ 0x14025539C (MiLockStealUserVm.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402590F0 (MI_WSLE_LOG_ACCESS.c)
 *     MiFreeWsleList @ 0x140297494 (MiFreeWsleList.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiClearPfnImageVerified @ 0x1402EAB40 (MiClearPfnImageVerified.c)
 *     MiInitializePageChainPacket @ 0x1402F4870 (MiInitializePageChainPacket.c)
 *     MiPrepareToTradeUsingAccessedBit @ 0x1402FD038 (MiPrepareToTradeUsingAccessedBit.c)
 *     MiLockStealSystemVm @ 0x1402FD650 (MiLockStealSystemVm.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiUnlockStealVm @ 0x1402FE250 (MiUnlockStealVm.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiVmAccessLoggingEnabled @ 0x140346A3C (MiVmAccessLoggingEnabled.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiReplacePageOfProtoPool @ 0x140348A30 (MiReplacePageOfProtoPool.c)
 *     MiTransformValidPteInPlace @ 0x14038D668 (MiTransformValidPteInPlace.c)
 *     MiRevertPfnActivePageTable @ 0x140392B5C (MiRevertPfnActivePageTable.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiReplacePageTablePage @ 0x1403F2DE8 (MiReplacePageTablePage.c)
 *     MiVaIsPageFileHash @ 0x14041F380 (MiVaIsPageFileHash.c)
 *     MiCheckSameSlabType @ 0x1404224C0 (MiCheckSameSlabType.c)
 *     KeSwapDirectoryTableBase @ 0x140450D1C (KeSwapDirectoryTableBase.c)
 *     MiSmallVaStillMapsFrame @ 0x14045BBE4 (MiSmallVaStillMapsFrame.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiStealPage(
        ULONG_PTR a1,
        unsigned __int8 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v8; // rbx
  int v9; // esi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r15
  unsigned __int64 LeafVa; // r9
  _KPROCESS *v13; // r10
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // r12
  __int64 v16; // rdi
  int v17; // r10d
  unsigned int v18; // ecx
  int v19; // edx
  unsigned __int64 v20; // rdi
  char PfnChannel; // bl
  int v22; // edx
  __int64 v23; // r8
  int *v24; // r9
  int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // ebx
  unsigned __int64 v28; // rcx
  __int64 Page; // rax
  __int64 v30; // r13
  signed __int64 v31; // rdi
  unsigned int v32; // ebx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // r8
  int v36; // eax
  unsigned int v37; // ebx
  __int64 v38; // rcx
  __int16 v39; // bx
  __int64 v40; // r9
  unsigned int v41; // ebx
  unsigned int v42; // r15d
  __int64 v43; // r9
  __int64 v44; // rcx
  unsigned __int64 v45; // rbx
  char v46; // bl
  unsigned int v47; // ebx
  signed __int64 v48; // rdx
  signed __int64 v49; // rax
  signed __int64 v50; // rdx
  __int64 v51; // rdi
  unsigned int v52; // ebx
  int v53; // eax
  signed __int64 v54; // rbx
  unsigned int v55; // r15d
  unsigned int v56; // ecx
  volatile signed __int64 *v58; // rdi
  unsigned __int64 v59; // r9
  int v60; // esi
  char v61; // al
  ULONG_PTR v62; // rcx
  unsigned int v63; // ebx
  int v64; // eax
  int v65; // r10d
  __int64 v66; // rax
  __int64 v67; // r9
  unsigned __int64 v68; // rcx
  unsigned int v69; // ebx
  unsigned int v70; // r15d
  unsigned __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rcx
  unsigned int v76; // r15d
  unsigned int v77; // edi
  int v78; // eax
  _QWORD *v79; // rcx
  _QWORD *v80; // rax
  bool v81; // zf
  __int64 IsPageFileHash; // rax
  volatile LONG *v83; // rbx
  int v84; // eax
  int v85; // ecx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 ProcessorFlushList; // rax
  __int64 v95; // rdi
  int v96; // ebx
  int PfnSlabType; // eax
  int v98; // r9d
  int v101; // [rsp+74h] [rbp-8Ch]
  int v102; // [rsp+74h] [rbp-8Ch]
  int v103; // [rsp+74h] [rbp-8Ch]
  int v104; // [rsp+74h] [rbp-8Ch]
  int v105; // [rsp+74h] [rbp-8Ch]
  int v106; // [rsp+74h] [rbp-8Ch]
  int v107; // [rsp+74h] [rbp-8Ch]
  int v108; // [rsp+74h] [rbp-8Ch]
  unsigned int v109; // [rsp+78h] [rbp-88h]
  unsigned int v110; // [rsp+7Ch] [rbp-84h]
  unsigned int v111; // [rsp+80h] [rbp-80h]
  int v112; // [rsp+80h] [rbp-80h]
  __int64 v113; // [rsp+80h] [rbp-80h]
  ULONG_PTR v114; // [rsp+90h] [rbp-70h]
  volatile signed __int64 *BugCheckParameter2; // [rsp+98h] [rbp-68h]
  __int64 v116; // [rsp+A0h] [rbp-60h]
  __int64 v117; // [rsp+A8h] [rbp-58h]
  int v118; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v119; // [rsp+B8h] [rbp-48h]
  __int64 v120; // [rsp+C0h] [rbp-40h]
  __int64 v121; // [rsp+C8h] [rbp-38h]
  _KPROCESS *Process; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v123; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v124; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 *v125; // [rsp+E8h] [rbp-18h]
  _QWORD v126[5]; // [rsp+F0h] [rbp-10h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+118h] [rbp+18h]
  _KPROCESS *v128; // [rsp+120h] [rbp+20h]
  int v129; // [rsp+128h] [rbp+28h]
  int v130; // [rsp+12Ch] [rbp+2Ch]
  unsigned int v131; // [rsp+130h] [rbp+30h]
  int v132; // [rsp+134h] [rbp+34h]
  unsigned __int64 KernelWaitTime; // [rsp+138h] [rbp+38h]
  __int64 v134; // [rsp+150h] [rbp+50h]
  __int128 v135; // [rsp+158h] [rbp+58h]
  __int128 v136; // [rsp+168h] [rbp+68h]
  signed __int64 v137; // [rsp+178h] [rbp+78h]
  __int128 v138; // [rsp+180h] [rbp+80h]
  __int128 v139; // [rsp+190h] [rbp+90h]
  __int128 v140; // [rsp+1A0h] [rbp+A0h]
  _BYTE v141[88]; // [rsp+1B0h] [rbp+B0h] BYREF
  _QWORD *v142; // [rsp+208h] [rbp+108h]
  __int64 v143; // [rsp+210h] [rbp+110h]
  __int64 v144; // [rsp+218h] [rbp+118h]
  int v145; // [rsp+220h] [rbp+120h] BYREF
  char v146[4]; // [rsp+224h] [rbp+124h] BYREF
  int v147; // [rsp+228h] [rbp+128h]
  __int64 v148; // [rsp+238h] [rbp+138h] BYREF
  char v149; // [rsp+245h] [rbp+145h]
  int v150; // [rsp+250h] [rbp+150h]
  __int64 v151; // [rsp+298h] [rbp+198h]

  ++MiCont;
  v121 = a4;
  v125 = a6;
  memset_0(v146, 0, 0x74uLL);
  v8 = *(_QWORD *)(a1 + 8);
  v151 = -1LL;
  v9 = 0;
  v145 = a3;
  v10 = v8 | 0x8000000000000000uLL;
  v120 = 0LL;
  BugCheckParameter2 = (volatile signed __int64 *)v10;
  v11 = (__int64)(v10 << 25) >> 16;
  v119 = v11;
  LeafVa = MiGetLeafVa(v11);
  if ( v11 < v14 || v11 > 0xFFFFF6FFFFFFFFFFuLL )
    v147 |= 1u;
  else
    v147 |= 8u;
  Process = v13;
  v15 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
  v16 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v117 = v16;
  if ( LeafVa >= 0xFFFF800000000000uLL )
  {
    if ( LeafVa < qword_140E2F3C0 || LeafVa > qword_140E2F3D0 )
    {
      LOWORD(v17) = v147;
    }
    else if ( (v147 & 1) != 0 )
    {
      v65 = v147 | 0xA;
      if ( v11 >= qword_140E2F3C8 && v11 < qword_140E2F3C8 + MiHyperSpaceSize() )
        v65 |= 0x80u;
      v17 = v65 | 0x800;
      v147 = v17;
    }
    else
    {
      LOWORD(v17) = v147 | 0x80C;
      v147 |= 0x80Cu;
    }
  }
  else
  {
    LOWORD(v17) = v147 | 0x800;
    v147 |= 0x800u;
  }
  if ( (v17 & 0x800) != 0 )
  {
    v18 = MiLockStealUserVm(v16, a1, a2, v10, &v145);
    if ( v18 == 1 )
    {
      v19 = 0;
      v110 = 0;
      v116 = v148;
      Process = KeGetCurrentThread()->ApcState.Process;
LABEL_8:
      v109 = v19;
      goto LABEL_9;
    }
  }
  else
  {
    v18 = MiLockStealSystemVm(a1, a2, v10, &v145);
    if ( v18 == 1 )
    {
      v19 = 1;
      v56 = 0;
      v110 = 0;
      v116 = v148;
      v109 = 1;
      v61 = *(_DWORD *)(v148 + 184) & 0xF;
      if ( v61 == 7 )
      {
        if ( (a3 & 0x10000000) != 0 )
        {
          ++dword_140EF5050;
          v51 = 0LL;
          goto LABEL_110;
        }
        v109 = 2;
      }
      else if ( v61 != 2 )
      {
        if ( v150 == 1 )
          v19 = 2;
        goto LABEL_8;
      }
LABEL_9:
      if ( *(char *)(a1 + 35) >= 0 )
      {
        v111 = (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6;
        if ( (a3 & 0x4000) != 0 )
        {
          v27 = 12289;
          v23 = HIWORD(a5) & 3;
          v24 = dword_140E2DD00;
          v26 = a5 ^ (unsigned __int8)(a5 ^ (v15 % (unsigned int)dword_140E2DD0C % (unsigned int)dword_140E2DD00[v23]));
        }
        else
        {
          v20 = v15 % (unsigned int)dword_140E2DD0C;
          PfnChannel = MiGetPfnChannel(a1);
          v22 = MiPageToNode(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4)) & 0x3F | (v111 << 9);
          v25 = (unsigned __int8)v20;
          v16 = v117;
          v26 = v25 | ((PfnChannel & 1 | (2 * (v22 | 0x180u))) << 8);
          v27 = (a3 & 0x1000000 | 0x200u) >> 9;
          if ( (a3 & 0x2000000) != 0 )
            v27 |= 0x800u;
        }
        if ( v125 )
        {
          v28 = *v125;
          v114 = *v125;
          if ( *v125 != -1LL )
          {
            v30 = 48 * v28 - 0x220000000000LL;
            v9 = 8;
            goto LABEL_19;
          }
        }
        if ( v151 == -1 )
        {
          Page = MiGetPage(v16, v26, v27, v24);
          v114 = Page;
          if ( Page != -1 )
          {
            v30 = 48 * Page - 0x220000000000LL;
            goto LABEL_19;
          }
          ++dword_140EF4FD4;
          goto LABEL_168;
        }
        memset_0(v141, 0, 0x70uLL);
        v78 = MI_NODE_FROM_PFN(a1) + 1;
        MiInitializePageChainPacket(
          v16,
          v116,
          (v149 & 1) != 0,
          v11,
          v78,
          v111,
          v27,
          v151,
          0LL,
          9,
          0LL,
          1LL,
          (__int64)v141);
        MiGetPageChain(v141);
        if ( v144 )
        {
          v79 = v142;
          if ( v142 )
          {
            v80 = (_QWORD *)*v142;
            v81 = v144-- == 1;
            v142 = v80;
            if ( v81 )
              v143 = 0LL;
          }
          v30 = (__int64)v79;
          v28 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v79 + 0x44000000000LL) >> 4);
          v114 = v28;
LABEL_19:
          if ( v30 == a1 )
          {
            v51 = 0LL;
            v52 = 1;
LABEL_115:
            if ( v125 )
              *v125 = v114;
            ++dword_140EF4F84;
            goto LABEL_112;
          }
          v31 = 0LL;
          v32 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v32 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v28, v26, v23, v24) )
              {
                HvlNotifyLongSpinWait(v32);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(a1 + 24) < 0 );
          }
          if ( (*(_DWORD *)(a1 + 32) & 0x40000000) != 0 && (a3 & 0x10000000) == 0 )
          {
            ++dword_140EF5060;
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_108;
          }
          if ( (MiFlags & 0x4000) != 0 && (unsigned int)MiGetPagePrivilege(a1, 1, 0LL) )
            v147 |= 0x1000u;
          if ( (unsigned __int16)*(_DWORD *)(a1 + 32) != 1 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            ++dword_140EF4FC0;
            goto LABEL_108;
          }
          if ( ((*(_DWORD *)(a1 + 32) & 0x8000000) != 0 || (*(_QWORD *)a1 & 1) == 0) && v150 != 2 && (v147 & 0x26) == 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            ++dword_140EF4FC4;
            goto LABEL_108;
          }
          if ( (*(_BYTE *)(a1 + 34) & 7) != 6
            || (v33 = (__int64)qword_140E300C8,
                v26 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)),
                v117 != v26) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            ++dword_140EF4FCC;
            goto LABEL_108;
          }
          if ( v9 == 8 && (a3 & 0x410000) == 0x410000 )
          {
            MiGetPfnSlabType(v30);
            PfnSlabType = MiGetPfnSlabType(a1);
            if ( !(unsigned int)MiCheckSameSlabType(a1, PfnSlabType, v30, v98, 1) )
            {
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              ++dword_140EF4FD0;
              goto LABEL_108;
            }
          }
          v34 = v147;
          if ( (v147 & 0x20) == 0 )
          {
            v31 = MI_READ_PTE_LOCK_FREE((unsigned __int64)BugCheckParameter2);
            v34 = v147;
          }
          if ( v150 != 3 )
          {
            v33 = 0x3FFFFFFFFFFFFFFFLL;
            if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && v109 == 1 )
            {
              if ( (v147 & 0x10) == 0 )
              {
                ++dword_140EF4FDC;
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_108;
              }
              v34 = v147 | 0x108;
              v147 |= 0x108u;
            }
            else
            {
              v34 = v147;
            }
          }
          if ( v150 != 2 )
          {
            if ( (v34 & 0x20) != 0 )
            {
              v31 = MiPrepareToTradeUsingAccessedBit(a1, BugCheckParameter2);
              if ( !v31 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_108;
              }
            }
            else if ( ((v34 & 8) == 0 || (v34 & 0x80u) != 0) && ((v31 & 0x42) != 0 || (v34 & 0x1000) != 0) )
            {
              if ( (v34 & 0x80u) != 0 )
              {
                MiWriteValidPteNewProtection((ULONG_PTR)BugCheckParameter2, v31 & 0xFFFFFFFFFFFFFFBDuLL, v23);
                v35 = 2LL;
              }
              else
              {
                v35 = 1LL;
                v147 = v34 | 0x40;
                *BugCheckParameter2 = v31 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
                LOBYTE(v9) = v9 | 2;
              }
              MiFlushSingleTbEntry(v11, v109, v35);
            }
          }
          v36 = v109;
          if ( v109 == 1 )
          {
            v33 = 2LL;
            if ( (v147 & 4) != 0 )
              v36 = 2;
            v109 = v36;
          }
          v37 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v37 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v33, v26, v23, v24) )
              {
                HvlNotifyLongSpinWait(v37);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v30 + 24) < 0 );
          }
          if ( (unsigned __int8)BYTE2(*(_DWORD *)(v30 + 32)) >> 6 != v111 )
            MiChangePageAttribute(v30, v111);
          MiSetPfnTbFlushStamp(v30, 0LL, 1);
          if ( v150 != 2 )
          {
LABEL_48:
            MiCopyPfnEntryEx(v30, a1);
            v26 = 0xFFFFFFFFFFLL;
            LOBYTE(v9) = v9 | 4;
            if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL) == v15 )
            {
              MiSetPfnContainingFrame(v30, v114);
              v26 = 0xFFFFFFFFFFLL;
            }
            v38 = 0x7FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v39 = v147;
            if ( (v147 & 0x20) != 0 || v150 == 2 )
              goto LABEL_57;
            if ( (v147 & 0x100) == 0 )
            {
              v23 = v109;
              if ( ((v147 & 8) != 0 || v109) && (v64 = v147 & 0xA, v64 != 10) && (v147 & 0x80u) == 0 )
              {
                if ( (v64 != 8 || v109) && (v150 != 3 || (v147 & 4) == 0) )
                  goto LABEL_57;
              }
              else
              {
                v112 = *(_DWORD *)(a1 + 32);
                BYTE2(v112) = BYTE2(v112) & 0xF8 | 5;
                *(_DWORD *)(a1 + 32) = v112;
              }
            }
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v39 = v147;
            a2 = 17;
LABEL_57:
            if ( (v39 & 0x100) == 0 )
            {
              v40 = 0LL;
              v113 = 0LL;
              goto LABEL_59;
            }
            v66 = MiLockProtoPoolPage(v11, 0LL);
            v113 = v66;
            v38 = v66;
            if ( !v66 )
            {
              ++dword_140EF4FE0;
              goto LABEL_108;
            }
            if ( (unsigned __int16)*(_DWORD *)(v66 + 32) > 2u )
            {
              ++dword_140EF4FE4;
              LOBYTE(v26) = 17;
              MiUnlockProtoPoolPage(v66, v26);
              goto LABEL_108;
            }
            v31 = *BugCheckParameter2;
            if ( (*BugCheckParameter2 & 0x42) == 0 )
            {
              v39 = v147;
              v26 = 0xFFFFFFFFFFLL;
              v40 = 0LL;
              goto LABEL_59;
            }
            v70 = 0;
LABEL_233:
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
            {
              if ( (unsigned __int16)*(_DWORD *)(v38 + 32) > 2u )
              {
                ++dword_140EF4FE4;
                _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                LOBYTE(v26) = 17;
                MiUnlockProtoPoolPage(v38, v26);
                goto LABEL_108;
              }
              MiWriteValidPteNewProtection((ULONG_PTR)BugCheckParameter2, v31 & 0xFFFFFFFFFFFFFFBDuLL, v23);
              MiFlushSingleTbEntry(v119, 2LL, 10LL);
              v71 = MiCaptureDirtyBitToPfn(v113);
              v75 = v113;
              _InterlockedAnd64((volatile signed __int64 *)(v113 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v71 )
                MiReleasePageFileInfo(
                  *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v113 + 40) >> 43) & 0x3FFLL)),
                  v71,
                  1LL,
                  v74);
              v76 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v76 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v75, v72, v73, v74) )
                  {
                    HvlNotifyLongSpinWait(v76);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v30 + 24) < 0 );
              }
              MiCaptureDirtyBitToPfn(v30);
              _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v39 = v147;
              v26 = 0xFFFFFFFFFFLL;
              v11 = v119;
              v40 = 0LL;
LABEL_59:
              if ( (v39 & 0x100) != 0 )
              {
                if ( (unsigned int)MiReplacePageOfProtoPool(
                                     v11,
                                     0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4),
                                     v114,
                                     v121) )
                  LOBYTE(v9) = v9 | 1;
              }
              else
              {
                if ( (v150 != 3 || (v39 & 4) == 0) && ((v39 & 0xA) != 8 || v109) )
                {
                  v41 = (v39 & 0x1000 | 0x80000u) >> 11;
                  if ( a2 != 17 )
                  {
                    LOWORD(v41) = v41 | 4;
                    v42 = 0;
                    while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
                    {
                      do
                      {
                        if ( (++v42 & HvlLongSpinCountMask) == 0
                          && (HvlEnlightenments & 0x40) != 0
                          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v38, v26, v23, v40) )
                        {
                          HvlNotifyLongSpinWait(v42);
                        }
                        else
                        {
                          _mm_pause();
                        }
                      }
                      while ( *(__int64 *)(v30 + 24) < 0 );
                    }
                    v11 = v119;
                  }
                  MiCopyPage(v114, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4), v41);
                  if ( (v41 & 4) != 0 )
                    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( (v147 & 0x20) == 0 && a2 != 17 )
                  {
                    v102 = *(_DWORD *)(a1 + 32);
                    BYTE2(v102) = BYTE2(v102) & 0xF8 | 5;
                    *(_DWORD *)(a1 + 32) = v102;
                  }
LABEL_69:
                  v44 = 0xFFF0000000000FFFuLL;
                  v45 = (v114 << 12) ^ (v31 ^ (v114 << 12)) & 0xFFF0000000000FFFuLL;
                  if ( (v147 & 0x20) != 0 )
                  {
                    v54 = v45 | 0x20;
                    v26 = 0LL;
                    v55 = 0;
                    while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
                    {
                      do
                      {
                        if ( (++v55 & HvlLongSpinCountMask) == 0
                          && (HvlEnlightenments & 0x40) != 0
                          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v44, v26, v23, v43) )
                        {
                          HvlNotifyLongSpinWait(v55);
                        }
                        else
                        {
                          _mm_pause();
                        }
                      }
                      while ( *(__int64 *)(v30 + 24) < 0 );
                    }
                    if ( (MiFlags & 0x2000000) != 0 )
                      _mm_lfence();
                    v44 = (__int64)BugCheckParameter2;
                    if ( v31 != _InterlockedCompareExchange64(BugCheckParameter2, v54, v31) )
                    {
                      v104 = *(_DWORD *)(v30 + 32);
                      BYTE2(v104) = BYTE2(v104) & 0xF8 | 5;
                      *(_DWORD *)(v30 + 32) = v104;
                      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      goto LABEL_108;
                    }
                    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    v106 = *(_DWORD *)(a1 + 32);
                    BYTE2(v106) = BYTE2(v106) & 0xF8 | 5;
                    *(_DWORD *)(a1 + 32) = v106;
                    goto LABEL_73;
                  }
                  if ( (v147 & 0x200) == 0 )
                  {
                    if ( (v147 & 0x40) != 0 )
                    {
                      v123 = (v114 << 12) ^ (v31 ^ (v114 << 12)) & 0xFFF0000000000FFFuLL;
                      v103 = 0;
                      if ( MiPteInShadowRange((unsigned __int64)BugCheckParameter2) )
                      {
                        v53 = MiSanitizeShadowPxe(v44, (__int64)&v123, v23);
                        v45 = v123;
                        v103 = v53;
                      }
                      else
                      {
                        v53 = 0;
                      }
                      if ( _bittest64(&MiFlags, 0x24u) )
                      {
                        if ( (v45 & 0x20) == 0 )
                        {
                          v26 = 0x4000000000LL;
                          v44 = 0xFFFFF6C000000000uLL;
                          if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
                          {
                            MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, v45, 128LL);
                            v53 = v103;
                          }
                        }
                      }
                      *BugCheckParameter2 = v45;
                      if ( v53 )
                        MiWritePteShadow((__int64)BugCheckParameter2, v45, v23, v43);
                    }
                    else
                    {
                      if ( (v147 & 0x100) != 0 )
                      {
                        v58 = BugCheckParameter2;
                      }
                      else
                      {
                        if ( (v147 & 0x50) == 0x10 )
                        {
                          v77 = 0;
                          while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
                          {
                            do
                            {
                              if ( (++v77 & HvlLongSpinCountMask) == 0
                                && (HvlEnlightenments & 0x40) != 0
                                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v44, v26, v23, v43) )
                              {
                                HvlNotifyLongSpinWait(v77);
                              }
                              else
                              {
                                _mm_pause();
                              }
                            }
                            while ( *(__int64 *)(v30 + 24) < 0 );
                          }
                        }
                        v58 = BugCheckParameter2;
                      }
                      if ( (v45 & 0x800) != 0 )
                      {
                        if ( (v147 & 0x100) != 0 )
                        {
                          MiTransformValidPteInPlace((_DWORD)v58, (_DWORD)v58, v45, 64, 0);
                        }
                        else
                        {
                          v59 = v45 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
                          if ( (v147 & 1) != 0 )
                            *v58 = v59;
                          else
                            MiRewritePteWithLockBit(v116, v149 & 1, v58, v59);
                          MiFlushSingleTbEntry(v11, v109, 1LL);
                          v124 = v45;
                          v60 = 0;
                          if ( MiPteInShadowRange((unsigned __int64)v58) )
                          {
                            v84 = MiSanitizeShadowPxe(v44, (__int64)&v124, v23);
                            v45 = v124;
                            v60 = v84;
                          }
                          if ( _bittest64(&MiFlags, 0x24u) )
                          {
                            if ( (v45 & 0x20) == 0 )
                            {
                              v26 = 0x4000000000LL;
                              v44 = 0xFFFFF6C000000000uLL;
                              if ( (unsigned __int64)v58 >= 0xFFFFF6C000000000uLL )
                                MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v58, v45, 128LL);
                            }
                          }
                          *v58 = v45;
                          if ( v60 )
                            MiWritePteShadow((__int64)v58, v45, v23, v43);
                        }
                        goto LABEL_73;
                      }
                      MiWriteValidPteNewPage(v58, v45, 0LL, v43);
                    }
                  }
                  if ( (v9 & 2) == 0 )
                    MiFlushSingleTbEntry(v11, v109, 64LL);
LABEL_73:
                  if ( (v147 & 0x100) != 0 )
                  {
                    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    LOBYTE(v26) = 17;
                    MiUnlockProtoPoolPage(v113, v26);
                    v46 = 17;
                  }
                  else
                  {
                    v46 = a2;
                    if ( (v147 & 0x50) == 0x10 )
                      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  }
                  if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3 )
                  {
                    v86 = 72LL;
                    if ( v46 != 17 )
                      v86 = 12LL;
                    MiClearPfnImageVerified(a1, v86);
                  }
                  if ( v150 == 2 )
                    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v120 + 200));
                  if ( v46 == 17 )
                  {
                    v47 = 0;
                    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
                    {
                      do
                      {
                        if ( (++v47 & HvlLongSpinCountMask) == 0
                          && (HvlEnlightenments & 0x40) != 0
                          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v44, v26, v23, v43) )
                        {
                          HvlNotifyLongSpinWait(v47);
                        }
                        else
                        {
                          _mm_pause();
                        }
                      }
                      while ( *(__int64 *)(a1 + 24) < 0 );
                    }
                  }
                  v48 = *(_QWORD *)(a1 + 40);
                  v134 = 0LL;
                  v137 = v48;
                  v135 = 0LL;
                  v136 = 0LL;
                  v138 = 0LL;
                  v139 = 0LL;
                  v140 = 0LL;
                  v49 = _InterlockedCompareExchange64(
                          (volatile signed __int64 *)(a1 + 40),
                          v48 & 0x8FFFFFFFFFFFFFFFuLL,
                          v48);
                  *((_QWORD *)&v140 + 1) = v49;
                  if ( v48 != v49 )
                  {
                    do
                    {
                      v137 = v49;
                      v50 = v49;
                      v49 = _InterlockedCompareExchange64(
                              (volatile signed __int64 *)(a1 + 40),
                              v49 & 0x8FFFFFFFFFFFFFFFuLL,
                              v49);
                      *((_QWORD *)&v140 + 1) = v49;
                    }
                    while ( v50 != v49 );
                  }
                  MiClearPfnReuseFields(a1);
                  HIWORD(v101) = HIWORD(*(_DWORD *)(a1 + 32));
                  LOWORD(v101) = 0;
                  *(_DWORD *)(a1 + 32) = v101;
                  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
                  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v51 = 0LL;
                  v52 = 1;
                  goto LABEL_115;
                }
                v23 = v116;
                LOBYTE(v9) = v9 | 1;
                v62 = v114;
                v132 = 0;
                CurrentThread = KeGetCurrentThread();
                v129 = 0;
                v131 = 0;
                KernelWaitTime = 0LL;
                v43 = v121;
                v126[2] = v121;
                v126[0] = v116;
                v126[1] = v11;
                v126[3] = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
                v126[4] = v114;
                v128 = CurrentThread->ApcState.Process;
                v130 = a3;
                if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL) == v15 )
                {
                  if ( (*(_DWORD *)(v116 + 184) & 0x2000000) != 0 )
                  {
                    LOBYTE(v9) = v9 & 0xFE;
                  }
                  else if ( _interlockedbittestandset(
                              (volatile signed __int32 *)&Process[3].ActiveGroupsMask.Masks[1] + 1,
                              1u) )
                  {
                    LOBYTE(v9) = v9 & 0xFE;
                  }
                  else
                  {
                    v85 = v147 | 0x200;
                    v147 |= 0x200u;
                    if ( v128->DirectoryTableBase >> 12 != v15 )
                    {
                      v131 = 1;
                      KernelWaitTime = v128[2].KernelWaitTime;
                      v147 = v85 | 0x2000;
                    }
                    MiReleaseFaultState(&v148, 0x11u, 0LL);
                    KeSwapDirectoryTableBase(v128, v131, v126);
                    MiLockWorkingSetExclusive(v116);
                    _InterlockedAnd((volatile signed __int32 *)&Process[3].ActiveGroupsMask.Masks[1] + 1, 0xFFFFFFFD);
                  }
                }
                else
                {
                  MiReplacePageTablePage(v126);
                }
                if ( (v9 & 1) == 0 )
                {
LABEL_268:
                  if ( (v147 & 0x100) != 0 )
                  {
                    LOBYTE(v26) = 17;
                    MiUnlockProtoPoolPage(v113, v26);
                  }
LABEL_108:
                  v51 = v30;
                  if ( !v30 )
                  {
LABEL_109:
                    v56 = v110;
                    goto LABEL_110;
                  }
                  if ( (unsigned int)MiPfnIsActivePageTable(v30, v26, v23) )
                    MiRevertPfnActivePageTable(v30);
                  v118 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
                  {
                    do
                      KeYieldProcessorEx(&v118);
                    while ( *(__int64 *)(v30 + 24) < 0 );
                  }
                  v108 = *(_DWORD *)(v30 + 32);
                  BYTE2(v108) = BYTE2(v108) & 0xF8 | 5;
                  *(_DWORD *)(v30 + 32) = v108;
                  if ( (v9 & 4) != 0 && (MiSetOriginalPtePfnFromFreeList(v30 + 16, v87, v88, v89), (v9 & 8) != 0) )
                  {
                    MiReturnFreeZeroPage(v30);
                    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  }
                  else
                  {
                    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    if ( (v9 & 8) == 0 )
                      goto LABEL_109;
                  }
                  v51 = 0LL;
                  goto LABEL_109;
                }
                if ( v129 < 0 )
                  LOBYTE(v9) = v9 & 0xFE;
              }
              if ( (v9 & 1) != 0 )
              {
                if ( (v147 & 0x100) != 0 )
                {
                  v68 = 0xC000000000000001uLL;
                  v107 = *(_DWORD *)(a1 + 32);
                  BYTE2(v107) = BYTE2(v107) & 0xF8 | 5;
                  *(_DWORD *)(a1 + 32) = v107;
                  v26 = 0LL;
                  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
                  v69 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
                  {
                    do
                    {
                      if ( (++v69 & HvlLongSpinCountMask) == 0
                        && (HvlEnlightenments & 0x40) != 0
                        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v68, v26, v23, v43) )
                      {
                        HvlNotifyLongSpinWait(v69);
                      }
                      else
                      {
                        _mm_pause();
                      }
                    }
                    while ( *(__int64 *)(v30 + 24) < 0 );
                  }
                }
                else
                {
                  ++dword_140EF4F90;
                  v26 = 0LL;
                  v63 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
                  {
                    do
                    {
                      if ( (++v63 & HvlLongSpinCountMask) == 0
                        && (HvlEnlightenments & 0x40) != 0
                        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v62, v26, v23, v43) )
                      {
                        HvlNotifyLongSpinWait(v63);
                      }
                      else
                      {
                        _mm_pause();
                      }
                    }
                    while ( *(__int64 *)(a1 + 24) < 0 );
                  }
                  v105 = *(_DWORD *)(a1 + 32);
                  BYTE2(v105) = BYTE2(v105) & 0xF8 | 5;
                  *(_DWORD *)(a1 + 32) = v105;
                  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
                  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                }
                goto LABEL_69;
              }
              goto LABEL_268;
            }
            while ( 1 )
            {
              if ( (++v70 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
              {
                if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v38, v26, v23, v67) )
                {
                  HvlNotifyLongSpinWait(v70);
                  v38 = v113;
                  goto LABEL_262;
                }
                v38 = v113;
              }
              _mm_pause();
LABEL_262:
              if ( *(__int64 *)(v38 + 24) >= 0 )
                goto LABEL_233;
            }
          }
          IsPageFileHash = MiVaIsPageFileHash(v117, v11);
          v120 = IsPageFileHash;
          if ( IsPageFileHash )
          {
            v83 = (volatile LONG *)(IsPageFileHash + 200);
            ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(IsPageFileHash + 200));
            if ( v120 == MiVaIsPageFileHash(v117, v11)
              && (unsigned int)MiSmallVaStillMapsFrame(
                                 v11,
                                 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4)) )
            {
              goto LABEL_48;
            }
            ++dword_140EF4FB8;
            ExReleaseSpinLockSharedFromDpcLevel(v83);
          }
          else
          {
            ++dword_140EF4FB8;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_108;
        }
        ++dword_140EF4FD8;
        v51 = 0LL;
        v56 = 0;
LABEL_110:
        if ( (*(_BYTE *)(a1 + 34) & 7) == 6 )
        {
          v52 = v110;
          if ( v56 != 2 )
            goto LABEL_112;
        }
        else
        {
          v52 = 2;
        }
        if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
          v52 = 0;
        else
          ++dword_140EF4F88;
LABEL_112:
        MiUnlockStealVm(&v145);
        if ( v51 )
          MiReleaseFreshPage(v51);
        return v52;
      }
      if ( (v147 & 0x20) == 0 && (*(_BYTE *)(a1 + 34) & 0x10) == 0 && v150 != 2 && (v147 & 8) == 0 )
      {
        v90 = MI_READ_PTE_LOCK_FREE(v10);
        if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL) == v15 )
        {
          ++dword_140EF5054;
LABEL_168:
          v56 = 0;
          v51 = 0LL;
          goto LABEL_110;
        }
        if ( (v90 & 0x42) == 0 )
        {
          if ( (*(_DWORD *)(a1 + 32) & 0x8000000) != 0
            || (MiGetWsleContents(v90, (__int64)(v10 << 25) >> 16) & 0xF) == 8 )
          {
            v51 = 0LL;
          }
          else
          {
            ProcessorFlushList = MiGetProcessorFlushList(v92, v91, v93);
            v95 = ProcessorFlushList + 4136;
            MiInitializeTbFlushList(ProcessorFlushList + 4136, v116, *(_DWORD *)(ProcessorFlushList + 4148), 2, 1);
            if ( (unsigned int)MiVmAccessLoggingEnabled(v116) )
              MI_WSLE_LOG_ACCESS(v116, v10);
            MiInsertTbFlushEntry(v95, (__int64)(v10 << 25) >> 16, 1LL, 0);
            v96 = 0;
            if ( !MiFreeWsleList(v116, v95, 0LL) )
              v96 = 2;
            v110 = v96;
            MiReleaseProcessorFlushList();
            v51 = 0LL;
          }
          goto LABEL_109;
        }
      }
      ++dword_140EF5058;
      goto LABEL_168;
    }
  }
  ++dword_140EF4FE8;
  dword_140EF4FEC = -1431655765 * ((__int64)(a1 + 0x220000000000LL) >> 4);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    return 0;
  return v18;
}
