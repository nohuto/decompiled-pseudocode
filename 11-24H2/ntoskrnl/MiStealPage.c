/*
 * XREFs of MiStealPage @ 0x1402263B0
 * Callers:
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x14020CBCC (MiRewritePteWithLockBit.c)
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiReturnFreeZeroPage @ 0x1402220B0 (MiReturnFreeZeroPage.c)
 *     MI_NODE_FROM_PFN @ 0x1402245F0 (MI_NODE_FROM_PFN.c)
 *     MiCopyPfnEntryEx @ 0x1402247E0 (MiCopyPfnEntryEx.c)
 *     MiPfnIsActivePageTable @ 0x140224A0C (MiPfnIsActivePageTable.c)
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     MiLockStealUserVm @ 0x140227A3C (MiLockStealUserVm.c)
 *     MiPrepareToTradeUsingAccessedBit @ 0x140229DC8 (MiPrepareToTradeUsingAccessedBit.c)
 *     MiLockStealSystemVm @ 0x14022A3E0 (MiLockStealSystemVm.c)
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiHyperSpaceSize @ 0x140235D2C (MiHyperSpaceSize.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiGetPfnChannel @ 0x14026ED40 (MiGetPfnChannel.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiFreeWsleList @ 0x140287894 (MiFreeWsleList.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInitializePageChainPacket @ 0x1402D0D10 (MiInitializePageChainPacket.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiReleaseFaultState @ 0x1402E0010 (MiReleaseFaultState.c)
 *     MiUnlockStealVm @ 0x1402E1FC0 (MiUnlockStealVm.c)
 *     MiRevertPfnActivePageTable @ 0x1402E3AE0 (MiRevertPfnActivePageTable.c)
 *     MiVmAccessLoggingEnabled @ 0x1402E47A4 (MiVmAccessLoggingEnabled.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiReplacePageOfProtoPool @ 0x1402E73F0 (MiReplacePageOfProtoPool.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402EFF38 (MI_WSLE_LOG_ACCESS.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402F6568 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSetPfnTbFlushStamp @ 0x1402FBDB0 (MiSetPfnTbFlushStamp.c)
 *     MiGetPageChain @ 0x1402FCDC0 (MiGetPageChain.c)
 *     MiReplacePageTablePage @ 0x140311CD4 (MiReplacePageTablePage.c)
 *     MiClearPfnImageVerified @ 0x14036C0C0 (MiClearPfnImageVerified.c)
 *     MiTransformValidPteInPlace @ 0x14039404C (MiTransformValidPteInPlace.c)
 *     MiClearPfnReuseFields @ 0x1403A1D30 (MiClearPfnReuseFields.c)
 *     MiWriteValidPteNewPage @ 0x1403A28B8 (MiWriteValidPteNewPage.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiVaIsPageFileHash @ 0x14042D000 (MiVaIsPageFileHash.c)
 *     MiCheckSameSlabType @ 0x140430B10 (MiCheckSameSlabType.c)
 *     KeSwapDirectoryTableBase @ 0x14045B984 (KeSwapDirectoryTableBase.c)
 *     MiSmallVaStillMapsFrame @ 0x140465504 (MiSmallVaStillMapsFrame.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  int v24; // eax
  __int64 v25; // rdx
  unsigned int v26; // ebx
  unsigned __int64 v27; // rcx
  __int64 Page; // rax
  __int64 v29; // r13
  signed __int64 v30; // rdi
  unsigned int v31; // ebx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // r8
  int v35; // eax
  unsigned int v36; // ebx
  __int64 v37; // rcx
  __int16 v38; // bx
  unsigned int v39; // ebx
  unsigned int v40; // r15d
  __int64 v41; // r9
  unsigned __int64 v42; // rcx
  ULONG_PTR v43; // rbx
  char v44; // bl
  unsigned int v45; // ebx
  signed __int64 v46; // rdx
  signed __int64 v47; // rax
  __int64 v48; // rdi
  unsigned int v49; // ebx
  int v50; // eax
  signed __int64 v51; // rbx
  unsigned int v52; // r15d
  unsigned int v53; // ecx
  __int64 v54; // rdx
  __int64 v55; // r8
  volatile __int64 *v57; // rdi
  ULONG_PTR v58; // r9
  int v59; // esi
  char v60; // al
  ULONG_PTR v61; // rcx
  unsigned int v62; // ebx
  int v63; // eax
  int v64; // r10d
  __int64 v65; // rax
  unsigned __int64 v66; // rcx
  unsigned int v67; // ebx
  unsigned int v68; // r15d
  unsigned __int64 v69; // rax
  __int64 v70; // rcx
  unsigned int v71; // r15d
  unsigned int v72; // edi
  int v73; // eax
  _QWORD *v74; // rcx
  _QWORD *v75; // rax
  bool v76; // zf
  __int64 IsPageFileHash; // rax
  volatile LONG *v78; // rbx
  int v79; // eax
  _KPROCESS *v80; // rdx
  int v81; // ecx
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 ProcessorFlushList; // rax
  __int64 v90; // rdi
  int v91; // ebx
  int PfnSlabType; // eax
  int v93; // r9d
  int v96; // [rsp+74h] [rbp-8Ch]
  int v97; // [rsp+74h] [rbp-8Ch]
  int v98; // [rsp+74h] [rbp-8Ch]
  int v99; // [rsp+74h] [rbp-8Ch]
  int v100; // [rsp+74h] [rbp-8Ch]
  int v101; // [rsp+74h] [rbp-8Ch]
  int v102; // [rsp+74h] [rbp-8Ch]
  int v103; // [rsp+74h] [rbp-8Ch]
  unsigned int v104; // [rsp+78h] [rbp-88h]
  unsigned int v105; // [rsp+7Ch] [rbp-84h]
  unsigned int v106; // [rsp+80h] [rbp-80h]
  int v107; // [rsp+80h] [rbp-80h]
  __int64 v108; // [rsp+80h] [rbp-80h]
  ULONG_PTR v109; // [rsp+90h] [rbp-70h]
  volatile signed __int64 *BugCheckParameter2; // [rsp+98h] [rbp-68h]
  __int64 v111; // [rsp+A0h] [rbp-60h]
  __int64 v112; // [rsp+A8h] [rbp-58h]
  int v113; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v114; // [rsp+B8h] [rbp-48h]
  __int64 v115; // [rsp+C0h] [rbp-40h]
  __int64 v116; // [rsp+C8h] [rbp-38h]
  _KPROCESS *Process; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v118; // [rsp+D8h] [rbp-28h] BYREF
  ULONG_PTR v119; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 *v120; // [rsp+E8h] [rbp-18h]
  _QWORD v121[5]; // [rsp+F0h] [rbp-10h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+118h] [rbp+18h]
  _KPROCESS *v123; // [rsp+120h] [rbp+20h]
  int v124; // [rsp+128h] [rbp+28h]
  int v125; // [rsp+12Ch] [rbp+2Ch]
  unsigned int v126; // [rsp+130h] [rbp+30h]
  int v127; // [rsp+134h] [rbp+34h]
  unsigned __int64 KernelWaitTime; // [rsp+138h] [rbp+38h]
  __int64 v129; // [rsp+150h] [rbp+50h]
  __int128 v130; // [rsp+158h] [rbp+58h]
  __int128 v131; // [rsp+168h] [rbp+68h]
  signed __int64 v132; // [rsp+178h] [rbp+78h]
  __int128 v133; // [rsp+180h] [rbp+80h]
  __int128 v134; // [rsp+190h] [rbp+90h]
  __int128 v135; // [rsp+1A0h] [rbp+A0h]
  _BYTE v136[88]; // [rsp+1B0h] [rbp+B0h] BYREF
  _QWORD *v137; // [rsp+208h] [rbp+108h]
  __int64 v138; // [rsp+210h] [rbp+110h]
  __int64 v139; // [rsp+218h] [rbp+118h]
  int v140; // [rsp+220h] [rbp+120h] BYREF
  char v141[4]; // [rsp+224h] [rbp+124h] BYREF
  int v142; // [rsp+228h] [rbp+128h]
  __int64 v143; // [rsp+238h] [rbp+138h] BYREF
  char v144; // [rsp+245h] [rbp+145h]
  int v145; // [rsp+250h] [rbp+150h]
  __int64 v146; // [rsp+298h] [rbp+198h]

  ++MiCont;
  v116 = a4;
  v120 = a6;
  memset_0(v141, 0, 0x74uLL);
  v8 = *(_QWORD *)(a1 + 8);
  v146 = -1LL;
  v9 = 0;
  v140 = a3;
  v10 = v8 | 0x8000000000000000uLL;
  v115 = 0LL;
  BugCheckParameter2 = (volatile signed __int64 *)v10;
  v11 = (__int64)(v10 << 25) >> 16;
  v114 = v11;
  LeafVa = MiGetLeafVa(v11);
  if ( v11 < v14 || v11 > 0xFFFFF6FFFFFFFFFFuLL )
    v142 |= 1u;
  else
    v142 |= 8u;
  Process = v13;
  v15 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
  v16 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v112 = v16;
  if ( LeafVa >= 0xFFFF800000000000uLL )
  {
    if ( LeafVa < qword_140E2F280 || LeafVa > qword_140E2F290 )
    {
      LOWORD(v17) = v142;
    }
    else if ( (v142 & 1) != 0 )
    {
      v64 = v142 | 0xA;
      if ( v11 >= qword_140E2F288 && v11 < qword_140E2F288 + MiHyperSpaceSize() )
        v64 |= 0x80u;
      v17 = v64 | 0x800;
      v142 = v17;
    }
    else
    {
      LOWORD(v17) = v142 | 0x80C;
      v142 |= 0x80Cu;
    }
  }
  else
  {
    LOWORD(v17) = v142 | 0x800;
    v142 |= 0x800u;
  }
  if ( (v17 & 0x800) != 0 )
  {
    v18 = MiLockStealUserVm(v16, a1, a2, v10, &v140);
    if ( v18 == 1 )
    {
      v19 = 0;
      v105 = 0;
      v111 = v143;
      Process = KeGetCurrentThread()->ApcState.Process;
LABEL_8:
      v104 = v19;
      goto LABEL_9;
    }
  }
  else
  {
    v18 = MiLockStealSystemVm(a1, a2, v10, &v140);
    if ( v18 == 1 )
    {
      v19 = 1;
      v53 = 0;
      v105 = 0;
      v111 = v143;
      v104 = 1;
      v60 = *(_DWORD *)(v143 + 184) & 0xF;
      if ( v60 == 7 )
      {
        if ( (a3 & 0x10000000) != 0 )
        {
          ++dword_140EF4E30;
          v48 = 0LL;
          goto LABEL_110;
        }
        v104 = 2;
      }
      else if ( v60 != 2 )
      {
        if ( v145 == 1 )
          v19 = 2;
        goto LABEL_8;
      }
LABEL_9:
      if ( *(char *)(a1 + 35) >= 0 )
      {
        v106 = (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6;
        if ( (a3 & 0x4000) != 0 )
        {
          v26 = 12289;
          v23 = HIWORD(a5) & 3;
          v25 = a5 ^ (unsigned __int8)(a5 ^ (v15 % (unsigned int)dword_140E2DBCC % (unsigned int)dword_140E2DBC0[v23]));
        }
        else
        {
          v20 = v15 % (unsigned int)dword_140E2DBCC;
          PfnChannel = MiGetPfnChannel(a1);
          v22 = MiPageToNode(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4)) & 0x3F | (v106 << 9);
          v24 = (unsigned __int8)v20;
          v16 = v112;
          v25 = v24 | ((PfnChannel & 1 | (2 * (v22 | 0x180u))) << 8);
          v26 = (a3 & 0x1000000 | 0x200u) >> 9;
          if ( (a3 & 0x2000000) != 0 )
            v26 |= 0x800u;
        }
        if ( v120 )
        {
          v27 = *v120;
          v109 = *v120;
          if ( *v120 != -1LL )
          {
            v29 = 48 * v27 - 0x220000000000LL;
            v9 = 8;
            goto LABEL_19;
          }
        }
        if ( v146 == -1 )
        {
          Page = MiGetPage(v16, v25, v26);
          v109 = Page;
          if ( Page != -1 )
          {
            v29 = 48 * Page - 0x220000000000LL;
            goto LABEL_19;
          }
          ++dword_140EF4DB4;
          goto LABEL_168;
        }
        memset_0(v136, 0, 0x70uLL);
        v73 = MI_NODE_FROM_PFN(a1) + 1;
        MiInitializePageChainPacket(
          v16,
          v111,
          (v144 & 1) != 0,
          v11,
          v73,
          v106,
          v26,
          v146,
          0LL,
          9,
          0LL,
          1LL,
          (__int64)v136);
        MiGetPageChain(v136);
        if ( v139 )
        {
          v74 = v137;
          if ( v137 )
          {
            v75 = (_QWORD *)*v137;
            v76 = v139-- == 1;
            v137 = v75;
            if ( v76 )
              v138 = 0LL;
          }
          v29 = (__int64)v74;
          v27 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v74 + 0x44000000000LL) >> 4);
          v109 = v27;
LABEL_19:
          if ( v29 == a1 )
          {
            v48 = 0LL;
            v49 = 1;
LABEL_115:
            if ( v120 )
              *v120 = v109;
            ++dword_140EF4D64;
            goto LABEL_112;
          }
          v30 = 0LL;
          v31 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v31 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v27) )
              {
                HvlNotifyLongSpinWait(v31);
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
            ++dword_140EF4E40;
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_108;
          }
          if ( (MiFlags & 0x4000) != 0 && (unsigned int)MiGetPagePrivilege(a1, 1, 0LL) )
            v142 |= 0x1000u;
          if ( (unsigned __int16)*(_DWORD *)(a1 + 32) != 1 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            ++dword_140EF4DA0;
            goto LABEL_108;
          }
          if ( ((*(_DWORD *)(a1 + 32) & 0x8000000) != 0 || (*(_QWORD *)a1 & 1) == 0) && v145 != 2 && (v142 & 0x26) == 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            ++dword_140EF4DA4;
            goto LABEL_108;
          }
          if ( (*(_BYTE *)(a1 + 34) & 7) != 6
            || (v32 = (__int64)qword_140E2FF88,
                v25 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)),
                v112 != v25) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            ++dword_140EF4DAC;
            goto LABEL_108;
          }
          if ( v9 == 8 && (a3 & 0x410000) == 0x410000 )
          {
            MiGetPfnSlabType(v29);
            PfnSlabType = MiGetPfnSlabType(a1);
            if ( !(unsigned int)MiCheckSameSlabType(a1, PfnSlabType, v29, v93, 1) )
            {
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              ++dword_140EF4DB0;
              goto LABEL_108;
            }
          }
          v33 = v142;
          if ( (v142 & 0x20) == 0 )
          {
            v30 = MI_READ_PTE_LOCK_FREE((unsigned __int64)BugCheckParameter2);
            v33 = v142;
          }
          if ( v145 != 3 )
          {
            v32 = 0x3FFFFFFFFFFFFFFFLL;
            if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && v104 == 1 )
            {
              if ( (v142 & 0x10) == 0 )
              {
                ++dword_140EF4DBC;
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_108;
              }
              v33 = v142 | 0x108;
              v142 |= 0x108u;
            }
            else
            {
              v33 = v142;
            }
          }
          if ( v145 != 2 )
          {
            if ( (v33 & 0x20) != 0 )
            {
              v30 = MiPrepareToTradeUsingAccessedBit(a1, BugCheckParameter2);
              if ( !v30 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_108;
              }
            }
            else if ( ((v33 & 8) == 0 || (v33 & 0x80u) != 0) && ((v30 & 0x42) != 0 || (v33 & 0x1000) != 0) )
            {
              if ( (v33 & 0x80u) != 0 )
              {
                MiWriteValidPteNewProtection((ULONG_PTR)BugCheckParameter2, v30 & 0xFFFFFFFFFFFFFFBDuLL);
                v34 = 2LL;
              }
              else
              {
                v34 = 1LL;
                v142 = v33 | 0x40;
                *BugCheckParameter2 = v30 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
                LOBYTE(v9) = v9 | 2;
              }
              MiFlushSingleTbEntry(v11, v104, v34);
            }
          }
          v35 = v104;
          if ( v104 == 1 )
          {
            v32 = 2LL;
            if ( (v142 & 4) != 0 )
              v35 = 2;
            v104 = v35;
          }
          v36 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v36 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v32) )
              {
                HvlNotifyLongSpinWait(v36);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v29 + 24) < 0 );
          }
          if ( (unsigned __int8)BYTE2(*(_DWORD *)(v29 + 32)) >> 6 != v106 )
            MiChangePageAttribute(v29, v106);
          MiSetPfnTbFlushStamp(v29, 0LL, 1LL);
          if ( v145 != 2 )
          {
LABEL_48:
            MiCopyPfnEntryEx(v29, a1);
            v25 = 0xFFFFFFFFFFLL;
            LOBYTE(v9) = v9 | 4;
            if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL) == v15 )
            {
              MiSetPfnContainingFrame(v29, v109);
              v25 = 0xFFFFFFFFFFLL;
            }
            v37 = 0x7FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v38 = v142;
            if ( (v142 & 0x20) != 0 || v145 == 2 )
              goto LABEL_57;
            if ( (v142 & 0x100) == 0 )
            {
              if ( ((v142 & 8) != 0 || v104) && (v63 = v142 & 0xA, v63 != 10) && (v142 & 0x80u) == 0 )
              {
                if ( (v63 != 8 || v104) && (v145 != 3 || (v142 & 4) == 0) )
                  goto LABEL_57;
              }
              else
              {
                v107 = *(_DWORD *)(a1 + 32);
                BYTE2(v107) = BYTE2(v107) & 0xF8 | 5;
                *(_DWORD *)(a1 + 32) = v107;
              }
            }
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v38 = v142;
            a2 = 17;
LABEL_57:
            if ( (v38 & 0x100) == 0 )
            {
              v108 = 0LL;
              goto LABEL_59;
            }
            v65 = MiLockProtoPoolPage(v11, 0LL);
            v108 = v65;
            v37 = v65;
            if ( !v65 )
            {
              ++dword_140EF4DC0;
              goto LABEL_108;
            }
            if ( (unsigned __int16)*(_DWORD *)(v65 + 32) > 2u )
            {
              ++dword_140EF4DC4;
              LOBYTE(v25) = 17;
              MiUnlockProtoPoolPage(v65, v25);
              goto LABEL_108;
            }
            v30 = *BugCheckParameter2;
            if ( (*BugCheckParameter2 & 0x42) == 0 )
            {
              v38 = v142;
              v25 = 0xFFFFFFFFFFLL;
              goto LABEL_59;
            }
            v68 = 0;
LABEL_233:
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
            {
              if ( (unsigned __int16)*(_DWORD *)(v37 + 32) > 2u )
              {
                ++dword_140EF4DC4;
                _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                LOBYTE(v25) = 17;
                MiUnlockProtoPoolPage(v37, v25);
                goto LABEL_108;
              }
              MiWriteValidPteNewProtection((ULONG_PTR)BugCheckParameter2, v30 & 0xFFFFFFFFFFFFFFBDuLL);
              MiFlushSingleTbEntry(v114, 2LL, 10LL);
              v69 = MiCaptureDirtyBitToPfn(v108);
              v70 = v108;
              _InterlockedAnd64((volatile signed __int64 *)(v108 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v69 )
                MiReleasePageFileInfo(
                  *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v108 + 40) >> 43) & 0x3FFLL)),
                  v69,
                  1LL);
              v71 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v71 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v70) )
                  {
                    HvlNotifyLongSpinWait(v71);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v29 + 24) < 0 );
              }
              MiCaptureDirtyBitToPfn(v29);
              _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v38 = v142;
              v25 = 0xFFFFFFFFFFLL;
              v11 = v114;
LABEL_59:
              if ( (v38 & 0x100) != 0 )
              {
                if ( (unsigned int)MiReplacePageOfProtoPool(
                                     v11,
                                     0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4),
                                     v109,
                                     v116) )
                  LOBYTE(v9) = v9 | 1;
              }
              else
              {
                if ( (v145 != 3 || (v38 & 4) == 0) && ((v38 & 0xA) != 8 || v104) )
                {
                  v39 = (v38 & 0x1000 | 0x80000u) >> 11;
                  if ( a2 != 17 )
                  {
                    LOWORD(v39) = v39 | 4;
                    v40 = 0;
                    while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
                    {
                      do
                      {
                        if ( (++v40 & HvlLongSpinCountMask) == 0
                          && (HvlEnlightenments & 0x40) != 0
                          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v37) )
                        {
                          HvlNotifyLongSpinWait(v40);
                        }
                        else
                        {
                          _mm_pause();
                        }
                      }
                      while ( *(__int64 *)(v29 + 24) < 0 );
                    }
                    v11 = v114;
                  }
                  MiCopyPage(v109, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4), v39);
                  if ( (v39 & 4) != 0 )
                    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( (v142 & 0x20) == 0 && a2 != 17 )
                  {
                    v97 = *(_DWORD *)(a1 + 32);
                    BYTE2(v97) = BYTE2(v97) & 0xF8 | 5;
                    *(_DWORD *)(a1 + 32) = v97;
                  }
LABEL_69:
                  v42 = 0xFFF0000000000FFFuLL;
                  v43 = (v109 << 12) ^ (v30 ^ (v109 << 12)) & 0xFFF0000000000FFFuLL;
                  if ( (v142 & 0x20) != 0 )
                  {
                    v51 = v43 | 0x20;
                    v25 = 0LL;
                    v52 = 0;
                    while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
                    {
                      do
                      {
                        if ( (++v52 & HvlLongSpinCountMask) == 0
                          && (HvlEnlightenments & 0x40) != 0
                          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v42) )
                        {
                          HvlNotifyLongSpinWait(v52);
                        }
                        else
                        {
                          _mm_pause();
                        }
                      }
                      while ( *(__int64 *)(v29 + 24) < 0 );
                    }
                    if ( (MiFlags & 0x2000000) != 0 )
                      _mm_lfence();
                    v42 = (unsigned __int64)BugCheckParameter2;
                    if ( v30 != _InterlockedCompareExchange64(BugCheckParameter2, v51, v30) )
                    {
                      v99 = *(_DWORD *)(v29 + 32);
                      BYTE2(v99) = BYTE2(v99) & 0xF8 | 5;
                      *(_DWORD *)(v29 + 32) = v99;
                      _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      goto LABEL_108;
                    }
                    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    v101 = *(_DWORD *)(a1 + 32);
                    BYTE2(v101) = BYTE2(v101) & 0xF8 | 5;
                    *(_DWORD *)(a1 + 32) = v101;
                    goto LABEL_73;
                  }
                  if ( (v142 & 0x200) == 0 )
                  {
                    if ( (v142 & 0x40) != 0 )
                    {
                      v118 = (v109 << 12) ^ (v30 ^ (v109 << 12)) & 0xFFF0000000000FFFuLL;
                      v98 = 0;
                      if ( (unsigned int)MiPteInShadowRange(BugCheckParameter2) )
                      {
                        v50 = MiSanitizeShadowPxe(v42, &v118);
                        v43 = v118;
                        v98 = v50;
                      }
                      else
                      {
                        v50 = 0;
                      }
                      if ( _bittest64(&MiFlags, 0x24u) )
                      {
                        if ( (v43 & 0x20) == 0 )
                        {
                          v25 = 0x4000000000LL;
                          v42 = 0xFFFFF6C000000000uLL;
                          if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
                          {
                            MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, v43);
                            v50 = v98;
                          }
                        }
                      }
                      *BugCheckParameter2 = v43;
                      if ( v50 )
                        MiWritePteShadow(BugCheckParameter2, v43);
                    }
                    else
                    {
                      if ( (v142 & 0x100) != 0 )
                      {
                        v57 = BugCheckParameter2;
                      }
                      else
                      {
                        if ( (v142 & 0x50) == 0x10 )
                        {
                          v72 = 0;
                          while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
                          {
                            do
                            {
                              if ( (++v72 & HvlLongSpinCountMask) == 0
                                && (HvlEnlightenments & 0x40) != 0
                                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v42) )
                              {
                                HvlNotifyLongSpinWait(v72);
                              }
                              else
                              {
                                _mm_pause();
                              }
                            }
                            while ( *(__int64 *)(v29 + 24) < 0 );
                          }
                        }
                        v57 = BugCheckParameter2;
                      }
                      if ( (v43 & 0x800) != 0 )
                      {
                        if ( (v142 & 0x100) != 0 )
                        {
                          MiTransformValidPteInPlace((_DWORD)v57, (_DWORD)v57, v43, 64, 0);
                        }
                        else
                        {
                          v58 = v43 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
                          if ( (v142 & 1) != 0 )
                            *v57 = v58;
                          else
                            MiRewritePteWithLockBit(v111, v144 & 1, v57, v58);
                          MiFlushSingleTbEntry(v11, v104, 1LL);
                          v119 = v43;
                          v59 = 0;
                          if ( (unsigned int)MiPteInShadowRange(v57) )
                          {
                            v79 = MiSanitizeShadowPxe(v42, &v119);
                            v43 = v119;
                            v59 = v79;
                          }
                          if ( _bittest64(&MiFlags, 0x24u) )
                          {
                            if ( (v43 & 0x20) == 0 )
                            {
                              v25 = 0x4000000000LL;
                              v42 = 0xFFFFF6C000000000uLL;
                              if ( (unsigned __int64)v57 >= 0xFFFFF6C000000000uLL )
                                MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v57, v43);
                            }
                          }
                          *v57 = v43;
                          if ( v59 )
                            MiWritePteShadow(v57, v43);
                        }
                        goto LABEL_73;
                      }
                      MiWriteValidPteNewPage((ULONG_PTR)v57);
                    }
                  }
                  if ( (v9 & 2) == 0 )
                    MiFlushSingleTbEntry(v11, v104, 64LL);
LABEL_73:
                  if ( (v142 & 0x100) != 0 )
                  {
                    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    LOBYTE(v25) = 17;
                    MiUnlockProtoPoolPage(v108, v25);
                    v44 = 17;
                  }
                  else
                  {
                    v44 = a2;
                    if ( (v142 & 0x50) == 0x10 )
                      _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  }
                  if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3 )
                  {
                    v82 = 72LL;
                    if ( v44 != 17 )
                      v82 = 12LL;
                    MiClearPfnImageVerified(a1, v82);
                  }
                  if ( v145 == 2 )
                    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v115 + 200));
                  if ( v44 == 17 )
                  {
                    v45 = 0;
                    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
                    {
                      do
                      {
                        if ( (++v45 & HvlLongSpinCountMask) == 0
                          && (HvlEnlightenments & 0x40) != 0
                          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v42) )
                        {
                          HvlNotifyLongSpinWait(v45);
                        }
                        else
                        {
                          _mm_pause();
                        }
                      }
                      while ( *(__int64 *)(a1 + 24) < 0 );
                    }
                  }
                  v46 = *(_QWORD *)(a1 + 40);
                  v129 = 0LL;
                  v132 = v46;
                  v130 = 0LL;
                  v131 = 0LL;
                  v133 = 0LL;
                  v134 = 0LL;
                  v135 = 0LL;
                  v47 = _InterlockedCompareExchange64(
                          (volatile signed __int64 *)(a1 + 40),
                          v46 & 0x8FFFFFFFFFFFFFFFuLL,
                          v46);
                  for ( *((_QWORD *)&v135 + 1) = v47; v46 != v47; *((_QWORD *)&v135 + 1) = v47 )
                  {
                    v132 = v47;
                    v46 = v47;
                    v47 = _InterlockedCompareExchange64(
                            (volatile signed __int64 *)(a1 + 40),
                            v47 & 0x8FFFFFFFFFFFFFFFuLL,
                            v47);
                  }
                  MiClearPfnReuseFields(a1, v46, 0x8FFFFFFFFFFFFFFFuLL, v41);
                  HIWORD(v96) = HIWORD(*(_DWORD *)(a1 + 32));
                  LOWORD(v96) = 0;
                  *(_DWORD *)(a1 + 32) = v96;
                  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
                  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v48 = 0LL;
                  v49 = 1;
                  goto LABEL_115;
                }
                v23 = v111;
                LOBYTE(v9) = v9 | 1;
                v61 = v109;
                v127 = 0;
                CurrentThread = KeGetCurrentThread();
                v124 = 0;
                v126 = 0;
                KernelWaitTime = 0LL;
                v41 = v116;
                v121[2] = v116;
                v121[0] = v111;
                v121[1] = v11;
                v121[3] = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
                v121[4] = v109;
                v123 = CurrentThread->ApcState.Process;
                v125 = a3;
                if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL) == v15 )
                {
                  if ( (*(_DWORD *)(v111 + 184) & 0x2000000) != 0 )
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
                    v80 = v123;
                    v81 = v142 | 0x200;
                    v142 |= 0x200u;
                    if ( v123->DirectoryTableBase >> 12 != v15 )
                    {
                      v126 = 1;
                      KernelWaitTime = v123[2].KernelWaitTime;
                      v142 = v81 | 0x2000;
                    }
                    LOBYTE(v80) = 17;
                    MiReleaseFaultState(&v143, v80, 0LL);
                    KeSwapDirectoryTableBase(v123, v126, v121);
                    MiLockWorkingSetExclusive(v111);
                    _InterlockedAnd((volatile signed __int32 *)&Process[3].ActiveGroupsMask.Masks[1] + 1, 0xFFFFFFFD);
                  }
                }
                else
                {
                  MiReplacePageTablePage(v121);
                }
                if ( (v9 & 1) == 0 )
                {
LABEL_268:
                  if ( (v142 & 0x100) != 0 )
                  {
                    LOBYTE(v25) = 17;
                    MiUnlockProtoPoolPage(v108, v25);
                  }
LABEL_108:
                  v48 = v29;
                  if ( !v29 )
                  {
LABEL_109:
                    v53 = v105;
                    goto LABEL_110;
                  }
                  if ( (unsigned int)MiPfnIsActivePageTable(v29, v25, v23) )
                    MiRevertPfnActivePageTable(v29);
                  v113 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
                  {
                    do
                      KeYieldProcessorEx(&v113);
                    while ( *(__int64 *)(v29 + 24) < 0 );
                  }
                  v103 = *(_DWORD *)(v29 + 32);
                  BYTE2(v103) = BYTE2(v103) & 0xF8 | 5;
                  *(_DWORD *)(v29 + 32) = v103;
                  if ( (v9 & 4) != 0 && (MiSetOriginalPtePfnFromFreeList(v29 + 16, v83, v84, v85), (v9 & 8) != 0) )
                  {
                    MiReturnFreeZeroPage(v29);
                    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  }
                  else
                  {
                    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    if ( (v9 & 8) == 0 )
                      goto LABEL_109;
                  }
                  v48 = 0LL;
                  goto LABEL_109;
                }
                if ( v124 < 0 )
                  LOBYTE(v9) = v9 & 0xFE;
              }
              if ( (v9 & 1) != 0 )
              {
                if ( (v142 & 0x100) != 0 )
                {
                  v66 = 0xC000000000000001uLL;
                  v102 = *(_DWORD *)(a1 + 32);
                  BYTE2(v102) = BYTE2(v102) & 0xF8 | 5;
                  *(_DWORD *)(a1 + 32) = v102;
                  v25 = 0LL;
                  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
                  v67 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
                  {
                    do
                    {
                      if ( (++v67 & HvlLongSpinCountMask) == 0
                        && (HvlEnlightenments & 0x40) != 0
                        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v66) )
                      {
                        HvlNotifyLongSpinWait(v67);
                      }
                      else
                      {
                        _mm_pause();
                      }
                    }
                    while ( *(__int64 *)(v29 + 24) < 0 );
                  }
                }
                else
                {
                  ++dword_140EF4D70;
                  v25 = 0LL;
                  v62 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
                  {
                    do
                    {
                      if ( (++v62 & HvlLongSpinCountMask) == 0
                        && (HvlEnlightenments & 0x40) != 0
                        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v61) )
                      {
                        HvlNotifyLongSpinWait(v62);
                      }
                      else
                      {
                        _mm_pause();
                      }
                    }
                    while ( *(__int64 *)(a1 + 24) < 0 );
                  }
                  v100 = *(_DWORD *)(a1 + 32);
                  BYTE2(v100) = BYTE2(v100) & 0xF8 | 5;
                  *(_DWORD *)(a1 + 32) = v100;
                  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
                  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                }
                goto LABEL_69;
              }
              goto LABEL_268;
            }
            while ( 1 )
            {
              if ( (++v68 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
              {
                if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v37) )
                {
                  HvlNotifyLongSpinWait(v68);
                  v37 = v108;
                  goto LABEL_262;
                }
                v37 = v108;
              }
              _mm_pause();
LABEL_262:
              if ( *(__int64 *)(v37 + 24) >= 0 )
                goto LABEL_233;
            }
          }
          IsPageFileHash = MiVaIsPageFileHash(v112, v11);
          v115 = IsPageFileHash;
          if ( IsPageFileHash )
          {
            v78 = (volatile LONG *)(IsPageFileHash + 200);
            ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(IsPageFileHash + 200));
            if ( v115 == MiVaIsPageFileHash(v112, v11)
              && (unsigned int)MiSmallVaStillMapsFrame(
                                 v11,
                                 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4)) )
            {
              goto LABEL_48;
            }
            ++dword_140EF4D98;
            ExReleaseSpinLockSharedFromDpcLevel(v78);
          }
          else
          {
            ++dword_140EF4D98;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_108;
        }
        ++dword_140EF4DB8;
        v48 = 0LL;
        v53 = 0;
LABEL_110:
        if ( (*(_BYTE *)(a1 + 34) & 7) == 6 )
        {
          v49 = v105;
          if ( v53 != 2 )
            goto LABEL_112;
        }
        else
        {
          v49 = 2;
        }
        if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
          v49 = 0;
        else
          ++dword_140EF4D68;
LABEL_112:
        MiUnlockStealVm(&v140);
        if ( v48 )
          MiReleaseFreshPage(v48, v54, v55);
        return v49;
      }
      if ( (v142 & 0x20) == 0 && (*(_BYTE *)(a1 + 34) & 0x10) == 0 && v145 != 2 && (v142 & 8) == 0 )
      {
        v86 = MI_READ_PTE_LOCK_FREE(v10);
        if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL) == v15 )
        {
          ++dword_140EF4E34;
LABEL_168:
          v53 = 0;
          v48 = 0LL;
          goto LABEL_110;
        }
        if ( (v86 & 0x42) == 0 )
        {
          if ( (*(_DWORD *)(a1 + 32) & 0x8000000) != 0
            || (MiGetWsleContents(v86, (__int64)(v10 << 25) >> 16) & 0xF) == 8 )
          {
            v48 = 0LL;
          }
          else
          {
            ProcessorFlushList = MiGetProcessorFlushList(v88, v87);
            v90 = ProcessorFlushList + 4136;
            MiInitializeTbFlushList(ProcessorFlushList + 4136, v111, *(_DWORD *)(ProcessorFlushList + 4148), 2, 1);
            if ( (unsigned int)MiVmAccessLoggingEnabled(v111) )
              MI_WSLE_LOG_ACCESS(v111, v10);
            MiInsertTbFlushEntry(v90, (__int64)(v10 << 25) >> 16, 1LL);
            v91 = 0;
            if ( !MiFreeWsleList(v111, v90, 0LL) )
              v91 = 2;
            v105 = v91;
            MiReleaseProcessorFlushList();
            v48 = 0LL;
          }
          goto LABEL_109;
        }
      }
      ++dword_140EF4E38;
      goto LABEL_168;
    }
  }
  ++dword_140EF4DC8;
  dword_140EF4DCC = -1431655765 * ((__int64)(a1 + 0x220000000000LL) >> 4);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    return 0;
  return v18;
}
