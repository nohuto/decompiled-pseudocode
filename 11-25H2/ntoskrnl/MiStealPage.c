/*
 * XREFs of MiStealPage @ 0x1402C80F0
 * Callers:
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x1402110AC (MiRewritePteWithLockBit.c)
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiGetPfnChannel @ 0x140216430 (MiGetPfnChannel.c)
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiLockStealSystemVm @ 0x140218E00 (MiLockStealSystemVm.c)
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MI_NODE_FROM_PFN @ 0x14021CB00 (MI_NODE_FROM_PFN.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiGetPageChain @ 0x140241940 (MiGetPageChain.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiReleaseFaultState @ 0x1402B9970 (MiReleaseFaultState.c)
 *     MiUnlockStealVm @ 0x1402BB590 (MiUnlockStealVm.c)
 *     MiClearPfnReuseFields @ 0x1402C4CC0 (MiClearPfnReuseFields.c)
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     MiSetPfnTbFlushStamp @ 0x1402C7C70 (MiSetPfnTbFlushStamp.c)
 *     MiCopyPfnEntryEx @ 0x1402C7CF0 (MiCopyPfnEntryEx.c)
 *     MiPfnIsActivePageTable @ 0x1402C7F24 (MiPfnIsActivePageTable.c)
 *     MiLockStealUserVm @ 0x1402C97A0 (MiLockStealUserVm.c)
 *     MiClearPfnImageVerified @ 0x1402CC5F0 (MiClearPfnImageVerified.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReplacePageOfProtoPool @ 0x14033AFCC (MiReplacePageOfProtoPool.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MiReturnFreeZeroPage @ 0x1403433B0 (MiReturnFreeZeroPage.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiInitializePageChainPacket @ 0x1403796D8 (MiInitializePageChainPacket.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x1403815C4 (MiFreeWsleList.c)
 *     MiRevertPfnActivePageTable @ 0x1403858EC (MiRevertPfnActivePageTable.c)
 *     MiVmAccessLoggingEnabled @ 0x140386C1C (MiVmAccessLoggingEnabled.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140389E74 (MI_WSLE_LOG_ACCESS.c)
 *     MiCheckSameSlabType @ 0x1403DC910 (MiCheckSameSlabType.c)
 *     MiHyperSpaceSize @ 0x1403E2A20 (MiHyperSpaceSize.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     MiWriteValidPteNewPage @ 0x1403FF2B0 (MiWriteValidPteNewPage.c)
 *     MiTransformValidPteInPlace @ 0x1403FF3E4 (MiTransformValidPteInPlace.c)
 *     MiReplacePageTablePage @ 0x14040B438 (MiReplacePageTablePage.c)
 *     MiVaIsPageFileHash @ 0x140432B40 (MiVaIsPageFileHash.c)
 *     MiPrepareToTradeUsingAccessedBit @ 0x14045496C (MiPrepareToTradeUsingAccessedBit.c)
 *     KeSwapDirectoryTableBase @ 0x14045CCC0 (KeSwapDirectoryTableBase.c)
 *     MiSmallVaStillMapsFrame @ 0x140466968 (MiSmallVaStillMapsFrame.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiStealPage(
        ULONG_PTR a1,
        unsigned __int8 a2,
        int a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v9; // rbx
  int v10; // esi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r15
  __int64 v13; // rdx
  unsigned __int64 LeafVa; // r9
  _KPROCESS *v15; // r10
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // r12
  __int64 v18; // rdi
  int v19; // r10d
  unsigned int v20; // ecx
  int v21; // edx
  int v22; // r13d
  unsigned __int64 v23; // rdi
  char PfnChannel; // bl
  int v25; // edx
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rdx
  unsigned int v29; // ebx
  unsigned __int64 v30; // rcx
  __int64 Page; // rax
  __int64 v32; // r13
  signed __int64 v33; // rdi
  unsigned int v34; // ebx
  __int64 v35; // rcx
  int v36; // eax
  int v37; // r8d
  int v38; // eax
  unsigned int v39; // ebx
  ULONG_PTR v40; // rcx
  __int16 v41; // bx
  unsigned int v42; // ebx
  unsigned __int64 v43; // r9
  unsigned __int64 v44; // rcx
  ULONG_PTR v45; // rbx
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
  unsigned int v58; // r15d
  volatile __int64 *v59; // rdi
  ULONG_PTR v60; // r9
  int v61; // esi
  char v62; // al
  ULONG_PTR v63; // rcx
  unsigned int v64; // ebx
  int v65; // eax
  int v66; // r10d
  ULONG_PTR v67; // rax
  unsigned __int64 v68; // r9
  unsigned __int64 v69; // rcx
  unsigned int v70; // ebx
  unsigned int v71; // r15d
  unsigned __int64 v72; // rax
  ULONG_PTR v73; // rcx
  unsigned int v74; // r15d
  unsigned int v75; // edi
  int v76; // eax
  _QWORD *v77; // rcx
  _QWORD *v78; // rax
  bool v79; // zf
  __int64 IsPageFileHash; // rax
  volatile LONG *v81; // rbx
  int v82; // eax
  int v83; // ecx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 ProcessorFlushList; // rax
  __int64 v91; // rdi
  __int64 v92; // r8
  __int64 v93; // r9
  int v94; // ebx
  int PfnSlabType; // eax
  int v96; // r9d
  char v97; // [rsp+70h] [rbp-90h]
  int v98; // [rsp+74h] [rbp-8Ch]
  int v99; // [rsp+74h] [rbp-8Ch]
  int v100; // [rsp+74h] [rbp-8Ch]
  int v101; // [rsp+74h] [rbp-8Ch]
  int v102; // [rsp+74h] [rbp-8Ch]
  int v103; // [rsp+74h] [rbp-8Ch]
  int v104; // [rsp+74h] [rbp-8Ch]
  int v105; // [rsp+74h] [rbp-8Ch]
  int v106; // [rsp+74h] [rbp-8Ch]
  int v107; // [rsp+74h] [rbp-8Ch]
  int v108; // [rsp+78h] [rbp-88h]
  unsigned int v109; // [rsp+7Ch] [rbp-84h]
  __int64 v111; // [rsp+88h] [rbp-78h]
  ULONG_PTR v112; // [rsp+88h] [rbp-78h]
  ULONG_PTR v113; // [rsp+98h] [rbp-68h]
  volatile signed __int64 *BugCheckParameter2; // [rsp+A0h] [rbp-60h]
  __int64 v115; // [rsp+A8h] [rbp-58h]
  int v116; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v117; // [rsp+B8h] [rbp-48h]
  __int64 v118; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v119; // [rsp+C8h] [rbp-38h]
  _KPROCESS *Process; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v121; // [rsp+D8h] [rbp-28h] BYREF
  ULONG_PTR v122; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 *v123; // [rsp+E8h] [rbp-18h]
  _QWORD v124[5]; // [rsp+F0h] [rbp-10h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+118h] [rbp+18h]
  _KPROCESS *v126; // [rsp+120h] [rbp+20h]
  int v127; // [rsp+128h] [rbp+28h]
  int v128; // [rsp+12Ch] [rbp+2Ch]
  unsigned int v129; // [rsp+130h] [rbp+30h]
  int v130; // [rsp+134h] [rbp+34h]
  unsigned __int64 KernelWaitTime; // [rsp+138h] [rbp+38h]
  __int64 v132; // [rsp+150h] [rbp+50h]
  __int128 v133; // [rsp+158h] [rbp+58h]
  __int128 v134; // [rsp+168h] [rbp+68h]
  signed __int64 v135; // [rsp+178h] [rbp+78h]
  __int128 v136; // [rsp+180h] [rbp+80h]
  __int128 v137; // [rsp+190h] [rbp+90h]
  __int128 v138; // [rsp+1A0h] [rbp+A0h]
  _QWORD v139[11]; // [rsp+1B0h] [rbp+B0h] BYREF
  _QWORD *v140; // [rsp+208h] [rbp+108h]
  __int64 v141; // [rsp+210h] [rbp+110h]
  __int64 v142; // [rsp+218h] [rbp+118h]
  int v143; // [rsp+220h] [rbp+120h] BYREF
  char v144[4]; // [rsp+224h] [rbp+124h] BYREF
  int v145; // [rsp+228h] [rbp+128h]
  __int64 v146; // [rsp+238h] [rbp+138h] BYREF
  char v147; // [rsp+245h] [rbp+145h]
  int v148; // [rsp+250h] [rbp+150h]
  __int64 v149; // [rsp+298h] [rbp+198h]

  ++MiCont[0];
  v97 = a2;
  v119 = a4;
  v123 = a6;
  memset_0(v144, 0, 0x74uLL);
  v143 = a3;
  v9 = *(_QWORD *)(a1 + 8);
  v10 = 0;
  v149 = -1LL;
  v11 = v9 | 0x8000000000000000uLL;
  v118 = 0LL;
  BugCheckParameter2 = (volatile signed __int64 *)v11;
  v12 = (__int64)(v11 << 25) >> 16;
  v117 = v12;
  LeafVa = MiGetLeafVa(v12);
  if ( v12 < v16 || v12 > 0xFFFFF6FFFFFFFFFFuLL )
    v145 |= 1u;
  else
    v145 |= 8u;
  Process = v15;
  v17 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
  v18 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v111 = v18;
  if ( LeafVa >= 0xFFFF800000000000uLL )
  {
    if ( LeafVa < qword_140E2F040 || LeafVa > qword_140E2F050 )
    {
      LOWORD(v19) = v145;
    }
    else if ( (v145 & 1) != 0 )
    {
      v66 = v145 | 0xA;
      if ( v12 >= qword_140E2F048 && v12 < qword_140E2F048 + MiHyperSpaceSize(qword_140E2FD48, v13) )
        v66 |= 0x80u;
      v19 = v66 | 0x800;
      v145 = v19;
    }
    else
    {
      LOWORD(v19) = v145 | 0x80C;
      v145 |= 0x80Cu;
    }
  }
  else
  {
    LOWORD(v19) = v145 | 0x800;
    v145 |= 0x800u;
  }
  if ( (v19 & 0x800) != 0 )
  {
    v20 = MiLockStealUserVm(v18, a1, a2, v11, &v143);
    if ( v20 == 1 )
    {
      v21 = 0;
      v109 = 0;
      v115 = v146;
      Process = KeGetCurrentThread()->ApcState.Process;
      goto LABEL_8;
    }
  }
  else
  {
    v20 = MiLockStealSystemVm(a1, a2, (_QWORD *)v11, &v143);
    if ( v20 == 1 )
    {
      v21 = 1;
      v56 = 0;
      v109 = 0;
      v115 = v146;
      v108 = 1;
      v62 = *(_DWORD *)(v146 + 184) & 0xF;
      if ( v62 == 7 )
      {
        v22 = a3;
        if ( (a3 & 0x10000000) != 0 )
        {
          ++dword_140EF4B50;
          v51 = 0LL;
          goto LABEL_108;
        }
        v108 = 2;
LABEL_10:
        if ( *(char *)(a1 + 35) >= 0 )
        {
          v98 = (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6;
          if ( (v22 & 0x4000) != 0 )
          {
            v29 = 12289;
            v26 = HIWORD(a5) & 3;
            v28 = a5 ^ (unsigned __int8)(a5 ^ (v17 % (unsigned int)dword_140E2D98C % (unsigned int)dword_140E2D980[v26]));
          }
          else
          {
            v23 = v17 % (unsigned int)dword_140E2D98C;
            PfnChannel = MiGetPfnChannel(a1);
            v25 = MiPageToNode(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4)) & 0x3F | (v98 << 9);
            v27 = (unsigned __int8)v23;
            v18 = v111;
            v28 = v27 | ((PfnChannel & 1 | (2 * (v25 | 0x180u))) << 8);
            v29 = (v22 & 0x1000000 | 0x200u) >> 9;
            if ( (v22 & 0x2000000) != 0 )
              v29 |= 0x800u;
          }
          if ( v123 )
          {
            v30 = *v123;
            v113 = *v123;
            if ( *v123 != -1LL )
            {
              v32 = 48 * v30 - 0x220000000000LL;
              v10 = 8;
              goto LABEL_19;
            }
          }
          if ( v149 == -1 )
          {
            Page = MiGetPage(v18, v28, v29);
            v113 = Page;
            if ( Page != -1 )
            {
              v32 = 48 * Page - 0x220000000000LL;
              goto LABEL_19;
            }
            ++dword_140EF4AD4;
            goto LABEL_169;
          }
          memset_0(v139, 0, 0x70uLL);
          v76 = MI_NODE_FROM_PFN(a1) + 1;
          MiInitializePageChainPacket(
            v18,
            v115,
            (v147 & 1) != 0,
            v12,
            v76,
            v98,
            v29,
            v149,
            0LL,
            9,
            0LL,
            1LL,
            (__int64)v139);
          MiGetPageChain(v139);
          if ( v142 )
          {
            v77 = v140;
            if ( v140 )
            {
              v78 = (_QWORD *)*v140;
              v79 = v142-- == 1;
              v140 = v78;
              if ( v79 )
                v141 = 0LL;
            }
            v32 = (__int64)v77;
            v30 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v77 + 0x44000000000LL) >> 4);
            v113 = v30;
LABEL_19:
            if ( v32 == a1 )
            {
              v51 = 0LL;
              v52 = 1;
LABEL_113:
              if ( v123 )
                *v123 = v113;
              ++dword_140EF4A84;
              goto LABEL_110;
            }
            v33 = 0LL;
            v34 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v34 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v30) )
                {
                  HvlNotifyLongSpinWait(v34);
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
              ++dword_140EF4B60;
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_106;
            }
            if ( (MiFlags & 0x4000) != 0 && (unsigned int)MiGetPagePrivilege(a1, 1, 0LL) )
              v145 |= 0x1000u;
            if ( (unsigned __int16)*(_DWORD *)(a1 + 32) != 1 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              ++dword_140EF4AC0;
              goto LABEL_106;
            }
            if ( ((*(_DWORD *)(a1 + 32) & 0x8000000) != 0 || (*(_QWORD *)a1 & 1) == 0)
              && v148 != 2
              && (v145 & 0x26) == 0 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              ++dword_140EF4AC4;
              goto LABEL_106;
            }
            if ( (*(_BYTE *)(a1 + 34) & 7) != 6
              || (v35 = (__int64)qword_140E2FD48,
                  v28 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)),
                  v111 != v28) )
            {
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              ++dword_140EF4ACC;
              goto LABEL_106;
            }
            if ( v10 == 8 && (a3 & 0x410000) == 0x410000 )
            {
              MiGetPfnSlabType(v32);
              PfnSlabType = MiGetPfnSlabType(a1);
              if ( !(unsigned int)MiCheckSameSlabType(a1, PfnSlabType, v32, v96, 1) )
              {
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                ++dword_140EF4AD0;
                goto LABEL_106;
              }
            }
            v36 = v145;
            if ( (v145 & 0x20) == 0 )
            {
              v33 = MI_READ_PTE_LOCK_FREE((unsigned __int64)BugCheckParameter2);
              v36 = v145;
            }
            if ( v148 != 3 )
            {
              v35 = 0x3FFFFFFFFFFFFFFFLL;
              if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && v108 == 1 )
              {
                if ( (v145 & 0x10) == 0 )
                {
                  ++dword_140EF4ADC;
                  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  goto LABEL_106;
                }
                v36 = v145 | 0x108;
                v145 |= 0x108u;
              }
              else
              {
                v36 = v145;
              }
            }
            if ( v148 != 2 )
            {
              if ( (v36 & 0x20) != 0 )
              {
                v33 = MiPrepareToTradeUsingAccessedBit(a1, BugCheckParameter2);
                if ( !v33 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  goto LABEL_106;
                }
              }
              else if ( ((v36 & 8) == 0 || (v36 & 0x80u) != 0) && ((v33 & 0x42) != 0 || (v36 & 0x1000) != 0) )
              {
                if ( (v36 & 0x80u) != 0 )
                {
                  MiWriteValidPteNewProtection((ULONG_PTR)BugCheckParameter2, v33 & 0xFFFFFFFFFFFFFFBDuLL);
                  v37 = 2;
                }
                else
                {
                  v37 = 1;
                  v145 = v36 | 0x40;
                  *BugCheckParameter2 = v33 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
                  LOBYTE(v10) = v10 | 2;
                }
                MiFlushSingleTbEntry(v12, v108, v37);
              }
            }
            v38 = v108;
            if ( v108 == 1 )
            {
              v35 = 2LL;
              if ( (v145 & 4) != 0 )
                v38 = 2;
              v108 = v38;
            }
            v39 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v39 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v35) )
                {
                  HvlNotifyLongSpinWait(v39);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v32 + 24) < 0 );
            }
            if ( (unsigned __int8)BYTE2(*(_DWORD *)(v32 + 32)) >> 6 != v98 )
              MiChangePageAttribute(v32, v98);
            MiSetPfnTbFlushStamp(v32, 0LL, 1);
            if ( v148 != 2 )
            {
LABEL_48:
              MiCopyPfnEntryEx(v32, a1);
              v28 = 0xFFFFFFFFFFLL;
              LOBYTE(v10) = v10 | 4;
              if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL) == v17 )
              {
                MiSetPfnContainingFrame(v32, v113);
                v28 = 0xFFFFFFFFFFLL;
              }
              v40 = 0x7FFFFFFFFFFFFFFFLL;
              _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v41 = v145;
              if ( (v145 & 0x20) != 0 || v148 == 2 )
                goto LABEL_57;
              if ( (v145 & 0x100) == 0 )
              {
                if ( ((v145 & 8) != 0 || v108) && (v65 = v145 & 0xA, v65 != 10) && (v145 & 0x80u) == 0 )
                {
                  if ( (v65 != 8 || v108) && (v148 != 3 || (v145 & 4) == 0) )
                    goto LABEL_57;
                }
                else
                {
                  v99 = *(_DWORD *)(a1 + 32);
                  BYTE2(v99) = BYTE2(v99) & 0xF8 | 5;
                  *(_DWORD *)(a1 + 32) = v99;
                }
              }
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v41 = v145;
              v97 = 17;
LABEL_57:
              if ( (v41 & 0x100) == 0 )
              {
                v112 = 0LL;
                goto LABEL_59;
              }
              v67 = MiLockProtoPoolPage(v12, 0LL);
              v112 = v67;
              v40 = v67;
              if ( !v67 )
              {
                ++dword_140EF4AE0;
                goto LABEL_106;
              }
              if ( (unsigned __int16)*(_DWORD *)(v67 + 32) > 2u )
              {
                ++dword_140EF4AE4;
                MiUnlockProtoPoolPage(v67, 0x11u, v26, v68);
                goto LABEL_106;
              }
              v33 = *BugCheckParameter2;
              if ( (*BugCheckParameter2 & 0x42) == 0 )
              {
                v41 = v145;
                v28 = 0xFFFFFFFFFFLL;
                goto LABEL_59;
              }
              v71 = 0;
LABEL_234:
              if ( !_interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) )
              {
                if ( (unsigned __int16)*(_DWORD *)(v40 + 32) > 2u )
                {
                  ++dword_140EF4AE4;
                  _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  MiUnlockProtoPoolPage(v40, 0x11u, v26, v68);
                  goto LABEL_106;
                }
                MiWriteValidPteNewProtection((ULONG_PTR)BugCheckParameter2, v33 & 0xFFFFFFFFFFFFFFBDuLL);
                MiFlushSingleTbEntry(v117, 2, 10);
                v72 = MiCaptureDirtyBitToPfn(v112);
                v73 = v112;
                _InterlockedAnd64((volatile signed __int64 *)(v112 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( v72 )
                  MiReleasePageFileInfo(
                    *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v112 + 40) >> 43) & 0x3FFLL)),
                    v72,
                    1);
                v74 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v74 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v73) )
                    {
                      HvlNotifyLongSpinWait(v74);
                    }
                    else
                    {
                      _mm_pause();
                    }
                  }
                  while ( *(__int64 *)(v32 + 24) < 0 );
                }
                MiCaptureDirtyBitToPfn(v32);
                _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v41 = v145;
                v28 = 0xFFFFFFFFFFLL;
                v12 = v117;
LABEL_59:
                if ( (v41 & 0x100) != 0 )
                {
                  if ( (unsigned int)MiReplacePageOfProtoPool(
                                       v12,
                                       0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4),
                                       v113,
                                       v119) )
                    LOBYTE(v10) = v10 | 1;
                }
                else
                {
                  if ( (v148 != 3 || (v41 & 4) == 0) && ((v41 & 0xA) != 8 || v108) )
                  {
                    v42 = (v41 & 0x1000 | 0x80000u) >> 11;
                    if ( v97 != 17 )
                    {
                      LOWORD(v42) = v42 | 4;
                      v58 = 0;
                      while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
                      {
                        do
                        {
                          if ( (++v58 & HvlLongSpinCountMask) == 0
                            && (HvlEnlightenments & 0x40) != 0
                            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v40) )
                          {
                            HvlNotifyLongSpinWait(v58);
                          }
                          else
                          {
                            _mm_pause();
                          }
                        }
                        while ( *(__int64 *)(v32 + 24) < 0 );
                      }
                      v12 = v117;
                    }
                    MiCopyPage(v113, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4), v42);
                    if ( (v42 & 4) != 0 )
                      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    if ( (v145 & 0x20) == 0 && v97 != 17 )
                    {
                      v101 = *(_DWORD *)(a1 + 32);
                      BYTE2(v101) = BYTE2(v101) & 0xF8 | 5;
                      *(_DWORD *)(a1 + 32) = v101;
                    }
LABEL_66:
                    v44 = 0xFFF0000000000FFFuLL;
                    v45 = (v113 << 12) ^ (v33 ^ (v113 << 12)) & 0xFFF0000000000FFFuLL;
                    if ( (v145 & 0x20) != 0 )
                    {
                      v54 = v45 | 0x20;
                      v28 = 0LL;
                      v55 = 0;
                      while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
                      {
                        do
                        {
                          if ( (++v55 & HvlLongSpinCountMask) == 0
                            && (HvlEnlightenments & 0x40) != 0
                            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v44) )
                          {
                            HvlNotifyLongSpinWait(v55);
                          }
                          else
                          {
                            _mm_pause();
                          }
                        }
                        while ( *(__int64 *)(v32 + 24) < 0 );
                      }
                      if ( (MiFlags & 0x2000000) != 0 )
                        _mm_lfence();
                      v44 = (unsigned __int64)BugCheckParameter2;
                      if ( v33 != _InterlockedCompareExchange64(BugCheckParameter2, v54, v33) )
                      {
                        v103 = *(_DWORD *)(v32 + 32);
                        BYTE2(v103) = BYTE2(v103) & 0xF8 | 5;
                        *(_DWORD *)(v32 + 32) = v103;
                        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                        goto LABEL_106;
                      }
                      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      v105 = *(_DWORD *)(a1 + 32);
                      BYTE2(v105) = BYTE2(v105) & 0xF8 | 5;
                      *(_DWORD *)(a1 + 32) = v105;
                      goto LABEL_70;
                    }
                    if ( (v145 & 0x200) == 0 )
                    {
                      if ( (v145 & 0x40) != 0 )
                      {
                        v121 = (v113 << 12) ^ (v33 ^ (v113 << 12)) & 0xFFF0000000000FFFuLL;
                        v102 = 0;
                        if ( MiPteInShadowRange((unsigned __int64)BugCheckParameter2) )
                        {
                          v53 = MiSanitizeShadowPxe(v44, &v121);
                          v45 = v121;
                          v102 = v53;
                        }
                        else
                        {
                          v53 = 0;
                        }
                        if ( _bittest64(&MiFlags, 0x24u) )
                        {
                          if ( (v45 & 0x20) == 0 )
                          {
                            v44 = 0xFFFFF6C000000000uLL;
                            if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
                            {
                              MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, v45);
                              v53 = v102;
                            }
                          }
                        }
                        *BugCheckParameter2 = v45;
                        if ( v53 )
                          MiWritePteShadow(BugCheckParameter2, v45);
                      }
                      else
                      {
                        if ( (v145 & 0x100) != 0 )
                        {
                          v59 = BugCheckParameter2;
                        }
                        else
                        {
                          if ( (v145 & 0x50) == 0x10 )
                          {
                            v75 = 0;
                            while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
                            {
                              do
                              {
                                if ( (++v75 & HvlLongSpinCountMask) == 0
                                  && (HvlEnlightenments & 0x40) != 0
                                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v44) )
                                {
                                  HvlNotifyLongSpinWait(v75);
                                }
                                else
                                {
                                  _mm_pause();
                                }
                              }
                              while ( *(__int64 *)(v32 + 24) < 0 );
                            }
                          }
                          v59 = BugCheckParameter2;
                        }
                        if ( (v45 & 0x800) != 0 )
                        {
                          if ( (v145 & 0x100) != 0 )
                          {
                            MiTransformValidPteInPlace((_DWORD)v59, (_DWORD)v59, v45, 64, 0);
                          }
                          else
                          {
                            v60 = v45 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
                            if ( (v145 & 1) != 0 )
                              *v59 = v60;
                            else
                              MiRewritePteWithLockBit(v115, v147 & 1, v59, v60);
                            MiFlushSingleTbEntry(v12, v108, 1);
                            v122 = v45;
                            v61 = 0;
                            if ( MiPteInShadowRange((unsigned __int64)v59) )
                            {
                              v82 = MiSanitizeShadowPxe(v44, &v122);
                              v45 = v122;
                              v61 = v82;
                            }
                            if ( _bittest64(&MiFlags, 0x24u) )
                            {
                              if ( (v45 & 0x20) == 0 )
                              {
                                v44 = 0xFFFFF6C000000000uLL;
                                if ( (unsigned __int64)v59 >= 0xFFFFF6C000000000uLL )
                                  MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v59, v45);
                              }
                            }
                            *v59 = v45;
                            if ( v61 )
                              MiWritePteShadow(v59, v45);
                          }
                          goto LABEL_70;
                        }
                        MiWriteValidPteNewPage((ULONG_PTR)v59);
                      }
                    }
                    if ( (v10 & 2) == 0 )
                      MiFlushSingleTbEntry(v12, v108, 64);
LABEL_70:
                    if ( (v145 & 0x100) != 0 )
                    {
                      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      MiUnlockProtoPoolPage(v112, 0x11u, v26, v43);
                      v46 = 17;
                    }
                    else
                    {
                      v46 = v97;
                      if ( (v145 & 0x50) == 0x10 )
                        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    }
                    if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3 )
                    {
                      v84 = 72LL;
                      if ( v46 != 17 )
                        v84 = 12LL;
                      MiClearPfnImageVerified(a1, v84);
                    }
                    if ( v148 == 2 )
                      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v118 + 200));
                    if ( v46 == 17 )
                    {
                      v47 = 0;
                      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
                      {
                        do
                        {
                          if ( (++v47 & HvlLongSpinCountMask) == 0
                            && (HvlEnlightenments & 0x40) != 0
                            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v44) )
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
                    v132 = 0LL;
                    v135 = v48;
                    v133 = 0LL;
                    v134 = 0LL;
                    v136 = 0LL;
                    v137 = 0LL;
                    v138 = 0LL;
                    v49 = _InterlockedCompareExchange64(
                            (volatile signed __int64 *)(a1 + 40),
                            v48 & 0x8FFFFFFFFFFFFFFFuLL,
                            v48);
                    *((_QWORD *)&v138 + 1) = v49;
                    if ( v48 != v49 )
                    {
                      do
                      {
                        v135 = v49;
                        v50 = v49;
                        v49 = _InterlockedCompareExchange64(
                                (volatile signed __int64 *)(a1 + 40),
                                v49 & 0x8FFFFFFFFFFFFFFFuLL,
                                v49);
                        *((_QWORD *)&v138 + 1) = v49;
                      }
                      while ( v50 != v49 );
                    }
                    MiClearPfnReuseFields(a1);
                    HIWORD(v100) = HIWORD(*(_DWORD *)(a1 + 32));
                    LOWORD(v100) = 0;
                    *(_DWORD *)(a1 + 32) = v100;
                    *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
                    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    v51 = 0LL;
                    v52 = 1;
                    goto LABEL_113;
                  }
                  v26 = v115;
                  LOBYTE(v10) = v10 | 1;
                  v63 = v113;
                  v130 = 0;
                  CurrentThread = KeGetCurrentThread();
                  v127 = 0;
                  v129 = 0;
                  KernelWaitTime = 0LL;
                  v43 = v119;
                  v124[2] = v119;
                  v124[0] = v115;
                  v124[1] = v12;
                  v124[3] = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
                  v124[4] = v113;
                  v126 = CurrentThread->ApcState.Process;
                  v128 = a3;
                  if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL) == v17 )
                  {
                    if ( (*(_DWORD *)(v115 + 184) & 0x2000000) != 0 )
                    {
                      LOBYTE(v10) = v10 & 0xFE;
                    }
                    else if ( _interlockedbittestandset(
                                (volatile signed __int32 *)&Process[3].ActiveGroupsMask.Masks[1] + 1,
                                1u) )
                    {
                      LOBYTE(v10) = v10 & 0xFE;
                    }
                    else
                    {
                      v83 = v145 | 0x200;
                      v145 |= 0x200u;
                      if ( v126->DirectoryTableBase >> 12 != v17 )
                      {
                        v129 = 1;
                        KernelWaitTime = v126[2].KernelWaitTime;
                        v145 = v83 | 0x2000;
                      }
                      MiReleaseFaultState((__int64)&v146, 0x11u, 0LL);
                      KeSwapDirectoryTableBase(v126, v129, v124);
                      MiLockWorkingSetExclusive(v115);
                      _InterlockedAnd((volatile signed __int32 *)&Process[3].ActiveGroupsMask.Masks[1] + 1, 0xFFFFFFFD);
                    }
                  }
                  else
                  {
                    MiReplacePageTablePage(v124);
                  }
                  if ( (v10 & 1) == 0 )
                  {
LABEL_269:
                    if ( (v145 & 0x100) != 0 )
                      MiUnlockProtoPoolPage(v112, 0x11u, v26, v43);
LABEL_106:
                    v51 = v32;
                    if ( !v32 )
                    {
LABEL_107:
                      v56 = v109;
                      goto LABEL_108;
                    }
                    if ( (unsigned int)MiPfnIsActivePageTable(v32, v28, v26) )
                      MiRevertPfnActivePageTable(v32);
                    v116 = 0;
                    while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
                    {
                      do
                        KeYieldProcessorEx(&v116);
                      while ( *(__int64 *)(v32 + 24) < 0 );
                    }
                    v107 = *(_DWORD *)(v32 + 32);
                    BYTE2(v107) = BYTE2(v107) & 0xF8 | 5;
                    *(_DWORD *)(v32 + 32) = v107;
                    if ( (v10 & 4) != 0 && (MiSetOriginalPtePfnFromFreeList((__int64 *)(v32 + 16)), (v10 & 8) != 0) )
                    {
                      MiReturnFreeZeroPage(v32, 4096LL);
                      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    }
                    else
                    {
                      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      if ( (v10 & 8) == 0 )
                        goto LABEL_107;
                    }
                    v51 = 0LL;
                    goto LABEL_107;
                  }
                  if ( v127 < 0 )
                    LOBYTE(v10) = v10 & 0xFE;
                }
                if ( (v10 & 1) != 0 )
                {
                  if ( (v145 & 0x100) != 0 )
                  {
                    v69 = 0xC000000000000001uLL;
                    v106 = *(_DWORD *)(a1 + 32);
                    BYTE2(v106) = BYTE2(v106) & 0xF8 | 5;
                    *(_DWORD *)(a1 + 32) = v106;
                    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
                    v70 = 0;
                    while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
                    {
                      do
                      {
                        if ( (++v70 & HvlLongSpinCountMask) == 0
                          && (HvlEnlightenments & 0x40) != 0
                          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v69) )
                        {
                          HvlNotifyLongSpinWait(v70);
                        }
                        else
                        {
                          _mm_pause();
                        }
                      }
                      while ( *(__int64 *)(v32 + 24) < 0 );
                    }
                  }
                  else
                  {
                    ++dword_140EF4A90;
                    v64 = 0;
                    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
                    {
                      do
                      {
                        if ( (++v64 & HvlLongSpinCountMask) == 0
                          && (HvlEnlightenments & 0x40) != 0
                          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v63) )
                        {
                          HvlNotifyLongSpinWait(v64);
                        }
                        else
                        {
                          _mm_pause();
                        }
                      }
                      while ( *(__int64 *)(a1 + 24) < 0 );
                    }
                    v104 = *(_DWORD *)(a1 + 32);
                    BYTE2(v104) = BYTE2(v104) & 0xF8 | 5;
                    *(_DWORD *)(a1 + 32) = v104;
                    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
                    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  }
                  goto LABEL_66;
                }
                goto LABEL_269;
              }
              while ( 1 )
              {
                if ( (++v71 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
                {
                  if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v40) )
                  {
                    HvlNotifyLongSpinWait(v71);
                    v40 = v112;
                    goto LABEL_260;
                  }
                  v40 = v112;
                }
                _mm_pause();
LABEL_260:
                if ( *(__int64 *)(v40 + 24) >= 0 )
                  goto LABEL_234;
              }
            }
            IsPageFileHash = MiVaIsPageFileHash(v111, v12);
            v118 = IsPageFileHash;
            if ( IsPageFileHash )
            {
              v81 = (volatile LONG *)(IsPageFileHash + 200);
              ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(IsPageFileHash + 200));
              if ( v118 == MiVaIsPageFileHash(v111, v12)
                && (unsigned int)MiSmallVaStillMapsFrame(
                                   v12,
                                   0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4)) )
              {
                goto LABEL_48;
              }
              ++dword_140EF4AB8;
              ExReleaseSpinLockSharedFromDpcLevel(v81);
            }
            else
            {
              ++dword_140EF4AB8;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_106;
          }
          ++dword_140EF4AD8;
          v51 = 0LL;
          v56 = 0;
LABEL_108:
          if ( (*(_BYTE *)(a1 + 34) & 7) == 6 )
          {
            v52 = v109;
            if ( v56 != 2 )
              goto LABEL_110;
          }
          else
          {
            v52 = 2;
          }
          if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
            v52 = 0;
          else
            ++dword_140EF4A88;
LABEL_110:
          MiUnlockStealVm((__int64)&v143);
          if ( v51 )
            MiReleaseFreshPage(v51);
          return v52;
        }
        if ( (v145 & 0x20) == 0 && (*(_BYTE *)(a1 + 34) & 0x10) == 0 && v148 != 2 && (v145 & 8) == 0 )
        {
          v85 = MI_READ_PTE_LOCK_FREE(v11);
          if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL) == v17 )
          {
            ++dword_140EF4B54;
LABEL_169:
            v56 = 0;
            v51 = 0LL;
            goto LABEL_108;
          }
          if ( (v85 & 0x42) == 0 )
          {
            if ( (*(_DWORD *)(a1 + 32) & 0x8000000) != 0
              || (MiGetWsleContents(v85, (__int64)(v11 << 25) >> 16) & 0xF) == 8 )
            {
              v51 = 0LL;
            }
            else
            {
              ProcessorFlushList = MiGetProcessorFlushList(v87, v86, v88, v89);
              v91 = ProcessorFlushList + 4136;
              MiInitializeTbFlushList(ProcessorFlushList + 4136, v115, *(_DWORD *)(ProcessorFlushList + 4148), 2, 1);
              if ( (unsigned int)MiVmAccessLoggingEnabled(v115) )
                MI_WSLE_LOG_ACCESS(v115, v11, v92, v93);
              MiInsertTbFlushEntry(v91, (__int64)(v11 << 25) >> 16, 1LL, 0LL);
              v94 = 0;
              if ( !MiFreeWsleList(v115, v91, 0LL) )
                v94 = 2;
              v109 = v94;
              MiReleaseProcessorFlushList();
              v51 = 0LL;
            }
            goto LABEL_107;
          }
        }
        ++dword_140EF4B58;
        goto LABEL_169;
      }
      if ( v62 == 2 )
      {
LABEL_9:
        v22 = a3;
        goto LABEL_10;
      }
      if ( v148 == 1 )
        v21 = 2;
LABEL_8:
      v108 = v21;
      goto LABEL_9;
    }
  }
  ++dword_140EF4AE8;
  dword_140EF4AEC = -1431655765 * ((__int64)(a1 + 0x220000000000LL) >> 4);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    return 0;
  return v20;
}
