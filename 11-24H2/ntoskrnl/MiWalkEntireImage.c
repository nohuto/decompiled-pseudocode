/*
 * XREFs of MiWalkEntireImage @ 0x140349C00
 * Callers:
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiValidateSectionCreate @ 0x14093C5D8 (MiValidateSectionCreate.c)
 *     MiSwitchBaseAddress @ 0x140A45C38 (MiSwitchBaseAddress.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A83AFC (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiFreeRetpolineImportInfo @ 0x140A9495C (MiFreeRetpolineImportInfo.c)
 *     MiRelocateImage @ 0x140AEA57C (MiRelocateImage.c)
 * Callees:
 *     MiDeleteTransitionPte @ 0x140204FF0 (MiDeleteTransitionPte.c)
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     MiCheckSlabPage @ 0x14020CE98 (MiCheckSlabPage.c)
 *     MiDiscardTransitionPteEx @ 0x1402188CC (MiDiscardTransitionPteEx.c)
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140250420 (MI_PAGE_TO_FULL_COLOR.c)
 *     MI_NODE_FROM_PFN @ 0x140251340 (MI_NODE_FROM_PFN.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiInsertProtectedStandbyPage @ 0x1402567C0 (MiInsertProtectedStandbyPage.c)
 *     MiTrimSharedPage @ 0x14025A33C (MiTrimSharedPage.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14029D0B0 (MiRemoveLockedPageCharge.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiCreateDecayPfn @ 0x1402FE8EC (MiCreateDecayPfn.c)
 *     MiPfnReferenceCountIsZero @ 0x140300260 (MiPfnReferenceCountIsZero.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiGetSharedProtos @ 0x14030CC0C (MiGetSharedProtos.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiAddLockedPageCharge @ 0x14033F050 (MiAddLockedPageCharge.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiObtainProtoReference @ 0x14034594C (MiObtainProtoReference.c)
 *     MiCheckProtoPtePageState @ 0x140345BB0 (MiCheckProtoPtePageState.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 *     MiUseSlabAllocator @ 0x140349AF8 (MiUseSlabAllocator.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiInitializePageFaultPacket @ 0x140351870 (MiInitializePageFaultPacket.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     VslApplySecureImageFixups @ 0x1403A9B74 (VslApplySecureImageFixups.c)
 *     MiGetEffectivePagePriorityThread @ 0x1403DC8F0 (MiGetEffectivePagePriorityThread.c)
 *     MiSetActivePfnHeat @ 0x1403FD670 (MiSetActivePfnHeat.c)
 *     MiWaitForCollidedFaultComplete @ 0x1404270E4 (MiWaitForCollidedFaultComplete.c)
 *     MiInitializePageHeatList @ 0x140435B60 (MiInitializePageHeatList.c)
 *     MiAddPageToHeatList @ 0x140435B9C (MiAddPageToHeatList.c)
 *     MiIssuePageHeatList @ 0x140435CBC (MiIssuePageHeatList.c)
 *     MiDecayPfnFullyInitialized @ 0x140437598 (MiDecayPfnFullyInitialized.c)
 *     MiUpdateImagePfnImportRelocations @ 0x14043A5B4 (MiUpdateImagePfnImportRelocations.c)
 *     MiReleaseFreshPageLocked @ 0x14043C168 (MiReleaseFreshPageLocked.c)
 *     MiSplitDirectMapPage @ 0x1404CA510 (MiSplitDirectMapPage.c)
 *     MiWalkEntireImagePageNeedsProcessing @ 0x1404CBB6C (MiWalkEntireImagePageNeedsProcessing.c)
 *     MiFlushFileOnlyDeleteChain @ 0x1404F26E4 (MiFlushFileOnlyDeleteChain.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiApplyDebuggerPatches @ 0x1404F4300 (MiApplyDebuggerPatches.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiGetNextDirectFixupProto @ 0x1406F91BC (MiGetNextDirectFixupProto.c)
 *     MiPrefetchControlArea @ 0x14093AC84 (MiPrefetchControlArea.c)
 *     MiGetSectionStrongImageReference @ 0x14093AE14 (MiGetSectionStrongImageReference.c)
 *     MiValidateImagePfn @ 0x14093AE5C (MiValidateImagePfn.c)
 *     MiPageHasRelocations @ 0x14093B310 (MiPageHasRelocations.c)
 *     MiRelocateImagePfn @ 0x14093B6F8 (MiRelocateImagePfn.c)
 *     MiDereferenceSubsectionProtos @ 0x140A18924 (MiDereferenceSubsectionProtos.c)
 *     MiFreeSubsectionProtos @ 0x140A86254 (MiFreeSubsectionProtos.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiWalkEntireImage(ULONG_PTR a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  char v4; // si
  ULONG_PTR v5; // r13
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // r14d
  unsigned int v12; // edi
  _DWORD *v13; // rcx
  bool v14; // zf
  _DWORD *v15; // rbx
  __int64 v16; // r15
  int v17; // r12d
  __int64 v18; // rsi
  __int64 result; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  unsigned int v22; // ecx
  __int64 v23; // rbx
  void *Pool; // rax
  struct _KTHREAD *v25; // r14
  unsigned __int64 v26; // r14
  __int64 v27; // r15
  int v28; // eax
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rsi
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r15
  char v36; // bl
  __int64 v37; // r15
  int v38; // ebx
  unsigned int v39; // r14d
  unsigned int v40; // edi
  unsigned __int64 v41; // rdx
  __int64 v42; // r9
  unsigned int v43; // edi
  __int64 v44; // r9
  __int64 v45; // rdx
  unsigned int v46; // r14d
  unsigned __int64 v47; // rcx
  __int64 v48; // r8
  unsigned int v49; // edi
  int updated; // eax
  __int64 v51; // r13
  unsigned __int64 v52; // rbx
  unsigned __int8 v53; // al
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rcx
  unsigned int v57; // r14d
  __int64 v58; // rax
  int v59; // eax
  _DWORD *v60; // r14
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v62; // rcx
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rdx
  unsigned __int8 v66; // bl
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rcx
  signed __int64 *v70; // rbx
  char *v71; // rsi
  __int64 SharedProtos; // rax
  __int64 v73; // rsi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r9
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rax
  unsigned int v79; // eax
  __int64 v80; // r8
  int v81; // eax
  __int64 v82; // rax
  int HasRelocations; // eax
  unsigned int EffectivePagePriorityThread; // eax
  int v85; // edx
  int v86; // r9d
  unsigned int v87; // r8d
  int v88; // eax
  int v89; // r8d
  int v90; // r9d
  unsigned int v91; // eax
  int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  int PfnSlabType; // eax
  unsigned __int64 v97; // r10
  char v98; // al
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  unsigned __int64 v102; // rax
  __int64 v103; // rax
  signed __int64 *v104; // rbx
  char *v105; // rsi
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  char BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v110[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v111; // [rsp+58h] [rbp-A8h]
  __int64 SlabPage; // [rsp+60h] [rbp-A0h]
  __int64 v113; // [rsp+68h] [rbp-98h]
  unsigned int v114; // [rsp+70h] [rbp-90h]
  int v115; // [rsp+74h] [rbp-8Ch]
  unsigned int v116; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h]
  unsigned int v118; // [rsp+88h] [rbp-78h]
  unsigned int v119; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned __int64 v120; // [rsp+90h] [rbp-70h]
  unsigned __int64 v121; // [rsp+98h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-60h]
  _DWORD *v123; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v124; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v125; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v126; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v127; // [rsp+C8h] [rbp-38h]
  int v128; // [rsp+D0h] [rbp-30h] BYREF
  int v129; // [rsp+D4h] [rbp-2Ch]
  __int64 v130; // [rsp+D8h] [rbp-28h]
  unsigned __int64 NextDirectFixupProto; // [rsp+E0h] [rbp-20h]
  int v132; // [rsp+E8h] [rbp-18h]
  ULONG_PTR BugCheckParameter2; // [rsp+F0h] [rbp-10h]
  _DWORD *v134; // [rsp+F8h] [rbp-8h]
  __int64 v135; // [rsp+100h] [rbp+0h]
  __int64 v136; // [rsp+108h] [rbp+8h] BYREF
  __int64 v137; // [rsp+110h] [rbp+10h]
  _KPROCESS *Process; // [rsp+118h] [rbp+18h]
  ULONG_PTR v139; // [rsp+120h] [rbp+20h]
  _DWORD *v140; // [rsp+128h] [rbp+28h]
  __int128 v141; // [rsp+130h] [rbp+30h] BYREF
  __int64 v142; // [rsp+140h] [rbp+40h]
  __int128 v143; // [rsp+148h] [rbp+48h] BYREF
  _OWORD v144[9]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v145[160]; // [rsp+1F0h] [rbp+F0h] BYREF

  v4 = a3;
  v114 = a3;
  v130 = a2;
  v5 = a1;
  v139 = a1;
  v128 = 0;
  v116 = a4;
  v143 = 0LL;
  memset_0(v144, 0, sizeof(v144));
  v6 = 0LL;
  v7 = *(_QWORD *)(v5 + 96);
  v8 = *(_WORD *)(v5 + 60) & 0x3FF;
  v126 = *(_QWORD *)v5;
  v9 = v7 & 0xFFFFFFFFFFFFFFF8uLL;
  v10 = 2LL;
  v11 = v4 & 4;
  v127 = v9;
  v12 = 0;
  v118 = v11;
  v135 = *((_QWORD *)qword_140E300C8 + v8);
  if ( (*(_BYTE *)(v5 + 62) & 0xC) == 4 && (v4 & 4) == 0 )
  {
    v13 = (_DWORD *)(v5 + 56);
    goto LABEL_3;
  }
  v13 = (_DWORD *)(v5 + 56);
  v14 = (*(_DWORD *)(v5 + 56) & 0x800) == 0;
  v134 = (_DWORD *)(v5 + 56);
  if ( !v14 )
  {
LABEL_3:
    v134 = v13;
    v12 = 2;
  }
  DWORD1(v144[0]) = -1;
  CurrentThread = KeGetCurrentThread();
  v142 = 0LL;
  NextDirectFixupProto = 0LL;
  v115 = v4 & 0x10;
  v141 = 0LL;
  P = v144;
  if ( (v4 & 0x10) != 0 )
  {
    v12 = 0;
    *((_QWORD *)&v144[0] + 1) = qword_140E2ED38;
    *(_QWORD *)&v144[0] = 131LL;
  }
  else if ( (v4 & 4) != 0 )
  {
    MiInitializePageColorBase(
      (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
      3,
      (*v13 >> 20) & 0x7F,
      (__int64)&v143);
    v9 = v127;
    v6 = 0LL;
    v144[0] = 0LL;
    LODWORD(v144[0]) = 128;
  }
  v15 = (_DWORD *)(v5 + 128);
  v16 = -1LL;
  v123 = (_DWORD *)(v5 + 128);
  v17 = 0;
  v119 = 0;
  v18 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v137 = *(_QWORD *)(v5 + 136);
  v110[0] = 17;
  v111 = 0LL;
  BugCheckParameter2 = 0LL;
  SlabPage = -1LL;
  if ( (MiFlags & 0x2000) != 0 && (*(_DWORD *)(v5 + 92) & 0xC0000) != 0 && !*(_QWORD *)(v9 + 64) )
  {
    result = MiGetSectionStrongImageReference(v9);
    v6 = 0LL;
    v17 = result;
    if ( (int)result < 0 )
      return result;
  }
  v132 = 0;
  if ( v11 )
    NextDirectFixupProto = MiGetNextDirectFixupProto(v130, 0LL, v10);
  v20 = 1LL;
  v21 = v126;
  if ( DWORD1(v144[0]) == -1 )
    goto LABEL_27;
  v22 = *(_DWORD *)(v126 + 8);
  v23 = 511LL;
  if ( v22 < 0x1FF )
    v23 = v22;
  if ( (unsigned int)v23 <= LODWORD(v144[0]) >> 3 )
  {
    v15 = (_DWORD *)(v5 + 128);
    goto LABEL_27;
  }
  Pool = (void *)MiAllocatePool(0x42uLL, 8 * v23 + 16, 1818782029);
  v6 = 0LL;
  P = Pool;
  if ( Pool )
  {
    MiInitializePageHeatList(Pool, v144[0] & 1, (LODWORD(v144[0]) >> 1) & 3, (unsigned int)v23);
    v15 = (_DWORD *)(v5 + 128);
    goto LABEL_25;
  }
  P = v144;
  v15 = (_DWORD *)(v5 + 128);
  while ( 1 )
  {
    v21 = v126;
    v20 = 1LL;
LABEL_27:
    if ( !v15 )
      goto LABEL_132;
    v26 = *((_QWORD *)v15 + 1);
    v27 = (__int64)(v26 - v137) >> 3;
    v140 = (_DWORD *)*((_QWORD *)v15 + 2);
    v28 = v15[8];
    v125 = v26;
    v113 = v27;
    if ( (v28 & 0x20000) != 0 )
    {
      if ( (v114 & 1) != 0 )
      {
        v25 = CurrentThread;
LABEL_272:
        v16 = SlabPage;
        goto LABEL_23;
      }
      if ( (*v134 & 0x8000000) != 0 )
      {
        v25 = CurrentThread;
        if ( (v114 & 0x16) != 0 )
          goto LABEL_272;
        --CurrentThread->SpecialApcDisable;
        v70 = (signed __int64 *)(v21 + 40);
        v71 = (char *)KeAbPreAcquire(v21 + 40, 0LL);
        if ( _InterlockedCompareExchange64(v70, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v70, 0, v71, (__int64)v70);
        if ( v71 )
          v71[10] = 1;
        if ( !*((_QWORD *)v123 + 3)
          || (SharedProtos = MiGetSharedProtos(v5, v116, (__int64)v123), (v73 = SharedProtos) == 0) )
        {
          if ( _InterlockedCompareExchange64(v70, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v70);
          KeAbPostRelease((ULONG_PTR)v70);
          v14 = v25->SpecialApcDisable++ == -1;
          if ( v14 && ($727077A9B6E167EAE1398C74674DC5A5 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
            KiCheckForKernelApcDelivery(v75, v74, 1LL, v76);
          v16 = SlabPage;
LABEL_156:
          v6 = 0LL;
          goto LABEL_23;
        }
        ++*(_DWORD *)(SharedProtos + 80);
        if ( _InterlockedCompareExchange64(v70, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v70);
        KeAbPostRelease((ULONG_PTR)v70);
        v14 = v25->SpecialApcDisable++ == -1;
        if ( v14 && ($727077A9B6E167EAE1398C74674DC5A5 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
          KiCheckForKernelApcDelivery(v100, v99, v101, 1LL);
        v26 = *(_QWORD *)(v73 + 72);
        v12 |= 8u;
        v18 = v111;
        v15 = v123;
        v125 = v26;
      }
    }
    v29 = MiStartingOffset((__int64 *)v15, v26, v116);
    v30 = (unsigned int)v15[11];
    v6 = 0LL;
    v20 = NextDirectFixupProto;
    v21 = v29;
    v121 = v29;
    v31 = v26 + 8 * v30;
    v124 = v31;
    if ( !NextDirectFixupProto )
      goto LABEL_30;
    if ( NextDirectFixupProto < v31 )
      break;
    v16 = SlabPage;
LABEL_22:
    v25 = CurrentThread;
LABEL_23:
    if ( (v12 & 8) != 0 )
    {
      --v25->SpecialApcDisable;
      v104 = (signed __int64 *)(v126 + 40);
      v136 = v6;
      v105 = (char *)KeAbPreAcquire(v126 + 40, 0LL);
      if ( _InterlockedCompareExchange64(v104, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v104, 0, v105, (__int64)v104);
      if ( v105 )
        v105[10] = 1;
      MiDereferenceSubsectionProtos(v123, v116, &v136);
      if ( _InterlockedCompareExchange64(v104, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v104);
      KeAbPostRelease((ULONG_PTR)v104);
      v14 = v25->SpecialApcDisable++ == -1;
      if ( v14 && ($727077A9B6E167EAE1398C74674DC5A5 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
        KiCheckForKernelApcDelivery(v107, v106, v108, 1LL);
      MiFreeSubsectionProtos(&v136);
      v12 &= ~8u;
    }
    v15 = v140;
    v18 = v111;
    v123 = v140;
LABEL_25:
    v6 = 0LL;
  }
  v125 = NextDirectFixupProto;
  v69 = NextDirectFixupProto - v26;
  v26 = NextDirectFixupProto;
  v69 >>= 3;
  v27 = (unsigned int)(v69 + v27);
  v21 = (v69 << 12) + v29;
  v113 = v27;
  v121 = v21;
LABEL_30:
  v120 = 0LL;
  while ( 1 )
  {
LABEL_31:
    if ( v26 >= v31 )
    {
LABEL_19:
      if ( v18 )
      {
        LOBYTE(v21) = v110[0];
        MiUnlockProtoPoolPage(v18, v21, v20, v6);
        v6 = 0LL;
        v111 = 0LL;
      }
      v16 = SlabPage;
      if ( SlabPage != -1 )
      {
        MiReleaseFreshPage(48 * SlabPage - 0x220000000000LL);
        v25 = CurrentThread;
        v16 = -1LL;
        SlabPage = -1LL;
        goto LABEL_156;
      }
      goto LABEL_22;
    }
    if ( (v26 & 0xFFF) != 0 && v18 )
      break;
    if ( v18 )
    {
      LOBYTE(v21) = v110[0];
      MiUnlockProtoPoolPage(v18, v21, v20, v6);
    }
    if ( (v12 & 2) != 0 )
      v58 = MiLockProtoPoolPage(v26, v110);
    else
      v58 = MiCheckProtoPtePageState(v5, v26, 0, v110);
    v6 = 0LL;
    v111 = v58;
    v18 = v58;
    if ( v58 )
    {
      v31 = v124;
      break;
    }
    if ( (v12 & 2) == 0 )
    {
      v62 = (unsigned __int64)(4096 - (unsigned int)(v26 & 0xFFF)) >> 3;
      v121 += v62 << 12;
      v27 = (unsigned int)(v62 + v27);
      v26 += 8 * v62;
      v113 = v27;
      v125 = v26;
LABEL_154:
      v31 = v124;
      continue;
    }
    MmAccessFault(2uLL, v26, 0, 0LL);
    v31 = v124;
    v6 = 0LL;
  }
  v32 = MiLockLeafPage((unsigned __int64 *)v26, 0);
  v6 = 0LL;
  v33 = v32;
  if ( !v32 )
  {
    if ( v118 )
    {
      dword_140E2D838 = 121;
      goto LABEL_130;
    }
    if ( (v12 & 2) != 0 )
    {
      if ( (*(_QWORD *)v26 & 0x400LL) != 0 || !(unsigned int)MiGetPagingFileOffset(*(_QWORD *)v26) )
      {
        v18 = v111;
        goto LABEL_38;
      }
      LOBYTE(v21) = v110[0];
      MiUnlockProtoPoolPage(v111, v21, v20, v6);
      v18 = 0LL;
      v111 = 0LL;
      if ( (v114 & 2) != 0 )
      {
        HasRelocations = MiPageHasRelocations(*(_QWORD *)(v127 + 32), (unsigned int)v27, 1LL);
        v6 = 0LL;
        if ( !HasRelocations )
          goto LABEL_38;
      }
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread);
      if ( EffectivePagePriorityThread > 5 )
        EffectivePagePriorityThread = 5;
      if ( v26 == v120 )
      {
        v87 = 4096;
      }
      else
      {
        v120 = v26;
        v87 = (unsigned int)((__int64)(v31 - v26) >> 3) << 12;
      }
      v88 = MiPrefetchControlArea(v5, v85, v87, EffectivePagePriorityThread, v86, v116);
      v6 = 0LL;
      if ( v88 < 0 )
      {
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        v6 = 0LL;
      }
      v17 = 0;
    }
    else
    {
      v18 = v111;
LABEL_38:
      if ( NextDirectFixupProto == v6 )
      {
        v31 = v124;
        v26 += 8LL;
        v27 = (unsigned int)(v27 + 1);
        v125 = v26;
        v121 += 4096LL;
        v113 = v27;
      }
      else
      {
        v102 = MiGetNextDirectFixupProto(v130, (unsigned int)++v132, v20);
        NextDirectFixupProto = v102;
        v20 = v102;
        if ( !v102 )
        {
          if ( v18 )
          {
            LOBYTE(v21) = v110[0];
            MiUnlockProtoPoolPage(v18, v21, 0LL, v6);
          }
          goto LABEL_131;
        }
        v31 = v124;
        if ( v102 >= v124 )
          goto LABEL_19;
        v103 = (__int64)(v102 - v26) >> 3;
        v27 = (unsigned int)(v103 + v27);
        v121 += v103 << 12;
        v113 = v27;
        if ( v18 )
        {
          if ( ((v20 ^ v26) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          {
            LOBYTE(v21) = v110[0];
            MiUnlockProtoPoolPage(v18, v21, v20, v6);
            v20 = NextDirectFixupProto;
            v6 = 0LL;
            v18 = 0LL;
            v111 = 0LL;
          }
        }
        v26 = v20;
        v125 = v20;
      }
    }
    goto LABEL_31;
  }
  v34 = *(_QWORD *)v26;
  v35 = *(_QWORD *)v26;
  if ( (*(_QWORD *)v26 & 1) == 0 && qword_140E2DCC0 )
  {
    if ( (v34 & 0x10) != 0 )
      v35 &= ~0x10uLL;
    else
      v35 = v34 & ~qword_140E2DCC0;
  }
  v36 = v114;
  v37 = (v35 >> 12) & 0xFFFFFFFFFFLL;
  if ( (v114 & 1) != 0 && ((*(_QWORD *)(v32 + 40) >> 60) & 7) == 3
    || (*(_DWORD *)(v32 + 16) & 0x400LL) == 0 && (v114 & 0x10) == 0 && (v12 & 2) == 0 )
  {
    goto LABEL_167;
  }
  v21 = v118;
  if ( (*(_DWORD *)(v32 + 32) & 0x40000000) != 0 && v118 )
  {
    dword_140E2D838 = 122;
    goto LABEL_129;
  }
  if ( (*(_BYTE *)(v32 + 35) & 0x10) != 0 )
  {
    if ( !v118 )
    {
LABEL_167:
      _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v18 = v111;
      LODWORD(v27) = v113;
      goto LABEL_38;
    }
    dword_140E2D838 = 123;
LABEL_129:
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_130:
    LOBYTE(v21) = v110[0];
    MiUnlockProtoPoolPage(v111, v21, v20, 0LL);
    v17 = -1073740023;
LABEL_131:
    v16 = SlabPage;
    goto LABEL_132;
  }
  if ( (v34 & 1) == 0 && (*(_BYTE *)(v32 + 34) & 0x20) != 0 )
  {
    memset_0(v145, 0, 0x98uLL);
    v6 = 0LL;
    if ( v115 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_96;
    }
    if ( (v36 & 2) != 0 && (*(_DWORD *)(v5 + 56) & 2) == 0 )
    {
      MiDeleteTransitionPte((__int64 *)v26, v33, 17LL, 0);
      v18 = v111;
      v6 = 0LL;
      LODWORD(v27) = v113;
      goto LABEL_38;
    }
    MiInitializePageFaultPacket(0, 0, 0, 0, 0LL, (__int64)v145);
    v128 = v89 + 1;
    MiObtainProtoReference(v111, v89 + 1);
    LOBYTE(v90) = v110[0];
    MiWaitForCollidedFaultComplete((unsigned int)v145, v33, v111, v90, (__int64)&v128);
    LODWORD(v27) = v113;
    v6 = 0LL;
    v18 = 0LL;
    v111 = 0LL;
    v17 = 0;
    goto LABEL_154;
  }
  if ( v115 )
  {
    if ( (v34 & 1) != 0 )
      goto LABEL_167;
    v77 = *(_QWORD *)(v32 + 16);
    v20 = *(_QWORD *)(v33 + 16);
    v21 = v77 >> 11;
    v78 = v77 >> 3;
    if ( (v20 & 0x400) != 0 )
      LOBYTE(v78) = v21;
    if ( (v78 & 1) == 0 )
      goto LABEL_167;
  }
  v38 = 8;
  v129 = 8;
  if ( (v34 & 1) != 0 )
    goto LABEL_52;
  if ( (unsigned int)MiGetPfnSlabType(v33) == 9 && (*(_DWORD *)(v33 + 32) & 0x8000000) != 0 )
  {
    v38 = HIBYTE(*(_DWORD *)(v33 + 32)) & 7;
    v129 = v38;
  }
  if ( (MiUnlinkPageFromListEx(v33, 0) & 3) != 0 )
  {
    MiDiscardTransitionPteEx(v33);
    _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v18 = v111;
    LODWORD(v27) = v113;
    v31 = v124;
    v6 = 0LL;
    if ( (v12 & 2) == 0 )
      goto LABEL_38;
    goto LABEL_31;
  }
  *(_QWORD *)(v33 + 24) &= 0xC000000000000000uLL;
LABEL_52:
  v39 = v114;
  if ( (v114 & 0x11) == 1
    && *(char *)(v33 + 35) >= 0
    && (v79 = MI_NODE_FROM_PFN(v33), (unsigned int)MiUseSlabAllocator(v135, v123, *(_QWORD *)(v33 + 16), v79, &v119))
    && v119 <= 4
    && ((unsigned int)MiGetPfnSlabType(v33) == 9 || !(unsigned int)MiCheckSlabPage(v33, v119, 4)) )
  {
    v40 = v12 | 0x10;
  }
  else
  {
    v40 = v12 & 0xFFFFFFEF;
  }
  MiAddLockedPageCharge(v33, 1);
  if ( v115 )
  {
    v40 &= ~0x40u;
  }
  else
  {
    if ( (v40 & 0x80u) != 0 || (HvlEnlightenments & 0x200000) == 0 )
      goto LABEL_57;
    v42 = 1LL;
    v41 = *(_QWORD *)(v33 + 16) & 0x400LL;
    v82 = *(_QWORD *)(v33 + 16) >> 3;
    if ( v41 )
      LOBYTE(v82) = *(_QWORD *)(v33 + 16) >> 11;
    if ( (v82 & 1) == 0 )
    {
LABEL_57:
      v43 = v40 & 0xFFFFFFDF;
      goto LABEL_58;
    }
  }
  v43 = v40 | 0x20;
LABEL_58:
  _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v41) = v110[0];
  MiUnlockProtoPoolPage(v111, v41, 0LL, v42);
  v45 = 0LL;
  v111 = 0LL;
  if ( (v43 & 0x20) != 0 )
  {
    v80 = v39;
    v46 = v113;
    v81 = MiWalkEntireImagePageNeedsProcessing(v127, (unsigned int)v113, v80);
    v45 = 0LL;
    if ( v81 )
    {
      if ( v115 )
      {
        MiAddPageToHeatList(P, v37, 3LL);
        v43 |= 0x40u;
      }
      else
      {
        MiWalkEntireImage(v5, v130, v114 | 0x10, v116);
        v43 |= 0x80u;
      }
      v45 = 0LL;
    }
  }
  else
  {
    v46 = v113;
  }
  v47 = *(_QWORD *)(v33 + 40);
  v48 = 1LL;
  if ( (v47 & 0x20000000000000LL) != 0 )
    v49 = v43 | 1;
  else
    v49 = v43 & 0xFFFFFFFE;
  if ( v115 )
  {
    v17 = 0;
    goto LABEL_69;
  }
  if ( v118 )
  {
    v63 = MiPageHasRelocations(*(_QWORD *)(v127 + 32), v46, 1LL);
    v45 = 0LL;
    if ( !v63 )
      goto LABEL_69;
    v60 = P;
    v64 = MiSplitDirectMapPage((_DWORD)v123, (unsigned int)&v143, v37, (_DWORD)P, (__int64)&v141);
    if ( v64 == -1 )
    {
      dword_140E2D838 = 120;
      v66 = MiLockPageInline(v33, v65, v48, v44);
      if ( (unsigned int)MiRemoveLockedPageCharge(v33, v67, v68) )
        MiPfnReferenceCountIsZero(v33, v37);
      MiUnlockPage(v33, v66);
      v16 = SlabPage;
      v17 = -1073740023;
      goto LABEL_133;
    }
    v47 = 0xFFFFDE0000000000uLL;
    v33 = 48 * v64 - 0x220000000000LL;
    v37 = v64;
LABEL_171:
    v45 = 0LL;
    goto LABEL_69;
  }
  if ( (v114 & 2) != 0 )
  {
    if ( (MiFlags & 0x2000) != 0 && (*(_DWORD *)(v5 + 92) & 0xC0000) != 0 && ((v47 >> 60) & 7) == 3 )
    {
      v59 = VslApplySecureImageFixups(*(_QWORD *)(v127 + 64), v46, v37);
      v45 = 0LL;
      v17 = v59;
      if ( v59 < 0 )
        KeBugCheckEx(0x1Au, 0x51511uLL, v59, v37, v5);
      goto LABEL_69;
    }
    BugCheckParameter4 = 0;
    updated = MiRelocateImagePfn(v5, v130, v46, v37);
LABEL_67:
    v45 = 0LL;
    v17 = updated;
    if ( updated )
    {
      if ( updated == 1 )
        v17 = 0;
    }
    else
    {
      v49 |= 4u;
    }
    goto LABEL_69;
  }
  if ( (v114 & 8) == 0 )
  {
    if ( (v114 & 0x20) != 0 )
    {
      BugCheckParameter4 = 1;
      MiApplyDebuggerPatches(v5, 0LL, v46, v37);
    }
    else
    {
      v17 = MiValidateImagePfn(
              v5,
              v121,
              (_DWORD)Process,
              v46,
              BugCheckParameter4,
              (v123[8] >> 1) & 0x1F,
              v37,
              0x4000000,
              0);
    }
    goto LABEL_171;
  }
  if ( (MiFlags & 0x2000) == 0 || (*(_DWORD *)(v5 + 92) & 0xC0000) == 0 || ((v47 >> 60) & 7) != 3 )
  {
    updated = MiUpdateImagePfnImportRelocations(v5, v130, v46, v37);
    goto LABEL_67;
  }
  v92 = VslApplySecureImageFixups(*(_QWORD *)(v127 + 64), v46, v37);
  v45 = 0LL;
  v17 = v92;
  if ( v92 < 0 )
    KeBugCheckEx(0x1Au, 0x51512uLL, v92, v37, v5);
LABEL_69:
  if ( v38 != 8 && !BugCheckParameter2 && (v49 & 1) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v45) = 2;
      LOBYTE(v47) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v47, v45);
    }
    BugCheckParameter2 = (ULONG_PTR)MiCreateDecayPfn();
    if ( KiIrqlFlags )
    {
      LOBYTE(v45) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v45);
    }
    __writecr8(CurrentIrql);
  }
  if ( (v49 & 0x10) != 0 && SlabPage == -1 )
  {
    v91 = MI_PAGE_TO_FULL_COLOR(v37);
    SlabPage = MiGetSlabPage(v135, v119, v91, 0, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0);
    if ( SlabPage == -1 )
      v49 &= ~0x10u;
  }
  v51 = 0LL;
  v52 = 0LL;
  v53 = MiLockPageInline(v33, v45, v48, v44);
  v56 = *(_QWORD *)(v33 + 24);
  v110[0] = v53;
  if ( (v56 & 0x4000000000000000LL) != 0 )
  {
    if ( (v49 & 0x10) != 0 )
      v49 &= ~0x10u;
  }
  else if ( (v49 & 0x40) != 0 )
  {
    MiSetActivePfnHeat(v33, 0LL);
  }
  v57 = v49 & 0xFFFFFFEF;
  if ( *(char *)(v33 + 35) >= 0 )
    v57 = v49;
  if ( ((v114 & 8) != 0 || (v114 & 0x12) == 2) && (*(_QWORD *)(v33 + 16) & 0x400LL) == 0 )
  {
    v52 = MiCaptureDirtyBitToPfn(v33);
    v51 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v33 + 40) >> 43) & 0x3FFLL));
  }
  v12 = v57;
  if ( (v57 & 0x10) != 0 && (*(_BYTE *)(v33 + 34) & 7) == 6 )
  {
    MiTrimSharedPage(v33, v110[0], 0);
    MiLockPageInline(v33, v93, v94, v95);
    if ( (*(_QWORD *)(v33 + 24) & 0x4000000000000000LL) != 0 )
      v12 = v57 & 0xFFFFFFEF;
  }
  if ( (unsigned int)MiRemoveLockedPageCharge(v33, v54, v55) )
  {
    if ( (v12 & 1) == 0
      && v129 != 8
      && (*(_BYTE *)(v33 + 34) & 0x10) == 0
      && (*(_QWORD *)(v33 + 24) & 0x4000000000000000LL) == 0
      && (v12 & 0x10) == 0 )
    {
      if ( BugCheckParameter2 )
        MiInsertProtectedStandbyPage(BugCheckParameter2, v33);
      else
        MiPfnReferenceCountIsZero(v33, v37);
      MiUnlockPage(v33, v110[0]);
      v110[0] = 17;
LABEL_85:
      v16 = SlabPage;
      goto LABEL_86;
    }
    MiPfnReferenceCountIsZero(v33, v37);
  }
  if ( (v12 & 0x10) == 0
    || (unsigned __int8)((*(_BYTE *)(v33 + 34) & 7) - 2) > 1u
    || (unsigned __int16)*(_DWORD *)(v33 + 32)
    || *(char *)(v33 + 35) < 0 )
  {
    goto LABEL_85;
  }
  v16 = SlabPage;
  if ( (unsigned int)MiGetPfnSlabType(48 * SlabPage - 0x220000000000LL) != 9 )
  {
    PfnSlabType = MiGetPfnSlabType(v33);
    v98 = MiReplaceTransitionPage(v33, v97, PfnSlabType, 0);
    v12 ^= ((unsigned __int8)v12 ^ (unsigned __int8)(16 * v98)) & 0x10;
    if ( (v98 & 1) != 0 )
    {
      v16 = -1LL;
      *(_QWORD *)(v33 + 16) = CLFS_LSN_NULL_EXT;
      SlabPage = -1LL;
      MiSetOriginalPtePfnFromFreeList((__int64 *)(v33 + 16));
      MiReleaseFreshPageLocked(v33);
    }
  }
LABEL_86:
  if ( v110[0] != 17 )
    _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v6 = 0LL;
  if ( v52 )
  {
    MiReleasePageFileInfo(v51, v52, 1LL, 0LL);
    v6 = 0LL;
  }
  LOBYTE(v21) = v110[0];
  if ( v110[0] != 17 )
  {
    if ( KiIrqlFlags )
    {
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v21);
      v6 = 0LL;
    }
    __writecr8(v110[0]);
    v110[0] = 17;
  }
  if ( v17 >= 0 )
  {
    v26 = v125;
    v5 = v139;
LABEL_96:
    v18 = v111;
    LODWORD(v27) = v113;
    goto LABEL_38;
  }
  dword_140E2D838 = (v17 != -1073741670) + 113;
LABEL_132:
  v60 = P;
LABEL_133:
  if ( BugCheckParameter2 )
    MiDecayPfnFullyInitialized(BugCheckParameter2);
  if ( (unsigned int)(v60[1] - 1) <= 0xFFFFFFFD )
    MiIssuePageHeatList(v60);
  if ( v142 )
    MiFlushFileOnlyDeleteChain(&v141, v21, v20);
  if ( v60 != (_DWORD *)v144 )
    ExFreePoolWithTag(v60, 0);
  if ( v16 != -1 )
    MiReleaseFreshPage(48 * v16 - 0x220000000000LL);
  return (unsigned int)v17;
}
