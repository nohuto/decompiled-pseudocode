/*
 * XREFs of MiWalkEntireImage @ 0x1402E85C0
 * Callers:
 *     MiCheckControlArea @ 0x14020EFD0 (MiCheckControlArea.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiRelocateImage @ 0x1408F5784 (MiRelocateImage.c)
 *     MiSwitchBaseAddress @ 0x1408F6D04 (MiSwitchBaseAddress.c)
 *     MiValidateSectionCreate @ 0x140957B50 (MiValidateSectionCreate.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A8760C (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiFreeRetpolineImportInfo @ 0x140A981A0 (MiFreeRetpolineImportInfo.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x1402236D0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MI_NODE_FROM_PFN @ 0x1402245F0 (MI_NODE_FROM_PFN.c)
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 *     MiCreateDecayPfn @ 0x14022AFD8 (MiCreateDecayPfn.c)
 *     MiPfnReferenceCountIsZero @ 0x14022C950 (MiPfnReferenceCountIsZero.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiWaitForCollidedFaultComplete @ 0x14023B89C (MiWaitForCollidedFaultComplete.c)
 *     MiObtainProtoReference @ 0x14023BBE8 (MiObtainProtoReference.c)
 *     MiCheckProtoPtePageState @ 0x14023BE50 (MiCheckProtoPtePageState.c)
 *     MiDeleteTransitionPte @ 0x14023D260 (MiDeleteTransitionPte.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     MiStartingOffset @ 0x140244020 (MiStartingOffset.c)
 *     MiCheckSlabPage @ 0x140244708 (MiCheckSlabPage.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     VslApplySecureImageFixups @ 0x140266300 (VslApplySecureImageFixups.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14028D4B0 (MiRemoveLockedPageCharge.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1402C89A4 (MiUpdateImagePfnImportRelocations.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E44B0 (MiGetEffectivePagePriorityThread.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     MiLockLeafPage @ 0x1402E8100 (MiLockLeafPage.c)
 *     MiUseSlabAllocator @ 0x1402E84B8 (MiUseSlabAllocator.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiInsertProtectedStandbyPage @ 0x1402F09B0 (MiInsertProtectedStandbyPage.c)
 *     MiGetSlabPage @ 0x1402F3934 (MiGetSlabPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402F6568 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiAddLockedPageCharge @ 0x1402F6F40 (MiAddLockedPageCharge.c)
 *     MiGetSharedProtos @ 0x1403025FC (MiGetSharedProtos.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     MiTrimSharedPage @ 0x140370B4C (MiTrimSharedPage.c)
 *     MiInitializePageFaultPacket @ 0x1403975B0 (MiInitializePageFaultPacket.c)
 *     MiDiscardTransitionPteEx @ 0x1403A1C98 (MiDiscardTransitionPteEx.c)
 *     MiSetActivePfnHeat @ 0x140403070 (MiSetActivePfnHeat.c)
 *     MiInitializePageHeatList @ 0x14043F8A0 (MiInitializePageHeatList.c)
 *     MiAddPageToHeatList @ 0x14043F8DC (MiAddPageToHeatList.c)
 *     MiIssuePageHeatList @ 0x14043F9FC (MiIssuePageHeatList.c)
 *     MiDecayPfnFullyInitialized @ 0x140440AC8 (MiDecayPfnFullyInitialized.c)
 *     MiReleaseFreshPageLocked @ 0x14044321C (MiReleaseFreshPageLocked.c)
 *     MiSplitDirectMapPage @ 0x1404D14D0 (MiSplitDirectMapPage.c)
 *     MiWalkEntireImagePageNeedsProcessing @ 0x1404D29AC (MiWalkEntireImagePageNeedsProcessing.c)
 *     MiFlushFileOnlyDeleteChain @ 0x1404F4DE4 (MiFlushFileOnlyDeleteChain.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiApplyDebuggerPatches @ 0x1404F6A1C (MiApplyDebuggerPatches.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiGetNextDirectFixupProto @ 0x1406FB57C (MiGetNextDirectFixupProto.c)
 *     MiPrefetchControlArea @ 0x1409572D4 (MiPrefetchControlArea.c)
 *     MiValidateImagePfn @ 0x140957464 (MiValidateImagePfn.c)
 *     MiPageHasRelocations @ 0x140957920 (MiPageHasRelocations.c)
 *     MiRelocateImagePfn @ 0x1409587A8 (MiRelocateImagePfn.c)
 *     MiGetSectionStrongImageReference @ 0x1409593FC (MiGetSectionStrongImageReference.c)
 *     MiDereferenceSubsectionProtos @ 0x140A24554 (MiDereferenceSubsectionProtos.c)
 *     MiFreeSubsectionProtos @ 0x140A89E54 (MiFreeSubsectionProtos.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiWalkEntireImage(ULONG_PTR a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
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
  __int128 v15; // xmm0
  _DWORD *v16; // rbx
  __int64 v17; // r15
  int v18; // r12d
  ULONG_PTR v19; // rsi
  __int64 result; // rax
  __int64 v21; // r8
  unsigned __int64 v22; // rdx
  unsigned int v23; // ecx
  __int64 v24; // rbx
  void *Pool; // rax
  struct _KTHREAD *v26; // r14
  unsigned __int64 v27; // r14
  __int64 v28; // r15
  int v29; // eax
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rbx
  ULONG_PTR v33; // rax
  __int64 v34; // rsi
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r15
  char v37; // bl
  __int64 v38; // r15
  int v39; // ebx
  unsigned int v40; // r14d
  unsigned int v41; // edi
  unsigned __int64 v42; // rdx
  unsigned int v43; // edi
  __int64 v44; // rdx
  unsigned int v45; // r14d
  unsigned __int64 v46; // rcx
  unsigned int v47; // edi
  int updated; // eax
  __int64 v49; // r13
  unsigned __int64 v50; // rbx
  unsigned __int8 v51; // al
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rcx
  unsigned int v55; // r14d
  __int64 v56; // rax
  int v57; // eax
  _DWORD *v58; // r14
  unsigned __int8 CurrentIrql; // bl
  __int64 v60; // rdx
  unsigned __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rax
  unsigned __int8 v64; // bl
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // rcx
  volatile signed __int64 *v68; // rbx
  __int64 v69; // rsi
  __int64 SharedProtos; // rax
  __int64 v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // rcx
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rax
  unsigned int v76; // eax
  __int64 v77; // r8
  int v78; // eax
  __int64 v79; // rax
  int HasRelocations; // eax
  unsigned int EffectivePagePriorityThread; // eax
  int v82; // edx
  int v83; // r9d
  unsigned int v84; // r8d
  int v85; // eax
  int v86; // r8d
  int v87; // eax
  int v88; // eax
  int PfnSlabType; // eax
  unsigned __int64 v90; // r10
  char v91; // al
  __int64 v92; // r9
  __int64 v93; // rdx
  __int64 v94; // rcx
  unsigned __int64 v95; // rax
  __int64 v96; // rax
  volatile signed __int64 *v97; // rbx
  __int64 v98; // rsi
  __int64 v99; // rdx
  __int64 v100; // rcx
  char BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v102[8]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v103; // [rsp+58h] [rbp-A8h]
  __int64 SlabPage; // [rsp+60h] [rbp-A0h]
  __int64 v105; // [rsp+68h] [rbp-98h]
  unsigned int v106; // [rsp+70h] [rbp-90h]
  int v107; // [rsp+74h] [rbp-8Ch]
  unsigned int v108; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h]
  unsigned int v110; // [rsp+88h] [rbp-78h]
  unsigned int v111; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned __int64 v112; // [rsp+90h] [rbp-70h]
  unsigned __int64 v113; // [rsp+98h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-60h]
  _DWORD *v115; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v116; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v117; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v118; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v119; // [rsp+C8h] [rbp-38h]
  int v120; // [rsp+D0h] [rbp-30h] BYREF
  int v121; // [rsp+D4h] [rbp-2Ch]
  unsigned __int64 v122; // [rsp+D8h] [rbp-28h]
  unsigned __int64 NextDirectFixupProto; // [rsp+E0h] [rbp-20h]
  int v124; // [rsp+E8h] [rbp-18h]
  ULONG_PTR BugCheckParameter2; // [rsp+F0h] [rbp-10h]
  _DWORD *v126; // [rsp+F8h] [rbp-8h]
  __int64 v127; // [rsp+100h] [rbp+0h]
  __int64 v128; // [rsp+108h] [rbp+8h] BYREF
  __int64 v129; // [rsp+110h] [rbp+10h]
  _KPROCESS *Process; // [rsp+118h] [rbp+18h]
  ULONG_PTR v131; // [rsp+120h] [rbp+20h]
  _DWORD *v132; // [rsp+128h] [rbp+28h]
  __int128 v133; // [rsp+130h] [rbp+30h] BYREF
  __int64 v134; // [rsp+140h] [rbp+40h]
  __int128 v135; // [rsp+148h] [rbp+48h] BYREF
  _OWORD v136[9]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v137[20]; // [rsp+1F0h] [rbp+F0h] BYREF

  v4 = a3;
  v106 = a3;
  v122 = a2;
  v5 = a1;
  v131 = a1;
  v120 = 0;
  v108 = a4;
  v135 = 0LL;
  memset_0(v136, 0, sizeof(v136));
  v6 = 0LL;
  v7 = *(_QWORD *)(v5 + 96);
  v8 = *(_WORD *)(v5 + 60) & 0x3FF;
  v118 = *(_QWORD *)v5;
  v9 = v7 & 0xFFFFFFFFFFFFFFF8uLL;
  v10 = 2LL;
  v11 = v4 & 4;
  v119 = v9;
  v12 = 0;
  v110 = v11;
  v127 = *((_QWORD *)qword_140E2FF88 + v8);
  if ( (*(_BYTE *)(v5 + 62) & 0xC) == 4 && (v4 & 4) == 0 )
  {
    v13 = (_DWORD *)(v5 + 56);
    goto LABEL_3;
  }
  v13 = (_DWORD *)(v5 + 56);
  v14 = (*(_DWORD *)(v5 + 56) & 0x800) == 0;
  v126 = (_DWORD *)(v5 + 56);
  if ( !v14 )
  {
LABEL_3:
    v126 = v13;
    v12 = 2;
  }
  DWORD1(v136[0]) = -1;
  v15 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v134 = 0LL;
  NextDirectFixupProto = 0LL;
  v107 = v4 & 0x10;
  v133 = 0LL;
  P = v136;
  if ( (v4 & 0x10) != 0 )
  {
    v12 = 0;
    *((_QWORD *)&v136[0] + 1) = qword_140E2EBF8;
    *(_QWORD *)&v136[0] = 131LL;
  }
  else if ( (v4 & 4) != 0 )
  {
    *(double *)&v15 = MiInitializePageColorBase(
                        &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
                        3LL,
                        (*v13 >> 20) & 0x7F,
                        &v135);
    v9 = v119;
    v6 = 0LL;
    v136[0] = v15;
    LODWORD(v136[0]) = 128;
  }
  v16 = (_DWORD *)(v5 + 128);
  v17 = -1LL;
  v115 = (_DWORD *)(v5 + 128);
  v18 = 0;
  v111 = 0;
  v19 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v129 = *(_QWORD *)(v5 + 136);
  v102[0] = 17;
  v103 = 0LL;
  BugCheckParameter2 = 0LL;
  SlabPage = -1LL;
  if ( (MiFlags & 0x2000) != 0 && (*(_DWORD *)(v5 + 92) & 0xC0000) != 0 && !*(_QWORD *)(v9 + 64) )
  {
    result = MiGetSectionStrongImageReference(v9);
    v6 = 0LL;
    v18 = result;
    if ( (int)result < 0 )
      return result;
  }
  v124 = 0;
  if ( v11 )
    NextDirectFixupProto = MiGetNextDirectFixupProto(v122, 0LL, v10);
  v21 = 1LL;
  v22 = v118;
  if ( DWORD1(v136[0]) == -1 )
    goto LABEL_27;
  v23 = *(_DWORD *)(v118 + 8);
  v24 = 511LL;
  if ( v23 < 0x1FF )
    v24 = v23;
  if ( (unsigned int)v24 <= LODWORD(v136[0]) >> 3 )
  {
    v16 = (_DWORD *)(v5 + 128);
    goto LABEL_27;
  }
  Pool = (void *)MiAllocatePool(0x42uLL, 8 * v24 + 16, 1818782029);
  v6 = 0LL;
  P = Pool;
  if ( Pool )
  {
    MiInitializePageHeatList(Pool, v136[0] & 1, (LODWORD(v136[0]) >> 1) & 3, (unsigned int)v24);
    v16 = (_DWORD *)(v5 + 128);
    goto LABEL_25;
  }
  P = v136;
  v16 = (_DWORD *)(v5 + 128);
  while ( 1 )
  {
    v22 = v118;
    v21 = 1LL;
LABEL_27:
    if ( !v16 )
      goto LABEL_132;
    v27 = *((_QWORD *)v16 + 1);
    v28 = (__int64)(v27 - v129) >> 3;
    v132 = (_DWORD *)*((_QWORD *)v16 + 2);
    v29 = v16[8];
    v117 = v27;
    v105 = v28;
    if ( (v29 & 0x20000) != 0 )
    {
      if ( (v106 & 1) != 0 )
      {
        v26 = CurrentThread;
LABEL_272:
        v17 = SlabPage;
        goto LABEL_23;
      }
      if ( (*v126 & 0x8000000) != 0 )
      {
        v26 = CurrentThread;
        if ( (v106 & 0x16) != 0 )
          goto LABEL_272;
        --CurrentThread->SpecialApcDisable;
        v68 = (volatile signed __int64 *)(v22 + 40);
        v69 = KeAbPreAcquire(v22 + 40, 0LL, 0LL);
        if ( _InterlockedCompareExchange64(v68, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v68, 0LL, v69, v68);
        if ( v69 )
          *(_BYTE *)(v69 + 10) = 1;
        if ( !*((_QWORD *)v115 + 3) || (SharedProtos = MiGetSharedProtos(v5, v108, v115), (v71 = SharedProtos) == 0) )
        {
          if ( _InterlockedCompareExchange64(v68, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v68);
          KeAbPostRelease((ULONG_PTR)v68);
          v14 = v26->SpecialApcDisable++ == -1;
          if ( v14 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
            KiCheckForKernelApcDelivery(v73, v72);
          v17 = SlabPage;
LABEL_156:
          v6 = 0LL;
          goto LABEL_23;
        }
        ++*(_DWORD *)(SharedProtos + 80);
        if ( _InterlockedCompareExchange64(v68, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v68);
        KeAbPostRelease((ULONG_PTR)v68);
        v14 = v26->SpecialApcDisable++ == -1;
        if ( v14 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
          KiCheckForKernelApcDelivery(v94, v93);
        v27 = *(_QWORD *)(v71 + 72);
        v12 |= 8u;
        v19 = v103;
        v16 = v115;
        v117 = v27;
      }
    }
    v30 = MiStartingOffset((__int64 *)v16, v27, v108);
    v31 = (unsigned int)v16[11];
    v6 = 0LL;
    v21 = NextDirectFixupProto;
    v22 = v30;
    v113 = v30;
    v32 = v27 + 8 * v31;
    v116 = v32;
    if ( !NextDirectFixupProto )
      goto LABEL_30;
    if ( NextDirectFixupProto < v32 )
      break;
    v17 = SlabPage;
LABEL_22:
    v26 = CurrentThread;
LABEL_23:
    if ( (v12 & 8) != 0 )
    {
      --v26->SpecialApcDisable;
      v97 = (volatile signed __int64 *)(v118 + 40);
      v128 = v6;
      v98 = KeAbPreAcquire(v118 + 40, 0LL, 0LL);
      if ( _InterlockedCompareExchange64(v97, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v97, 0LL, v98, v97);
      if ( v98 )
        *(_BYTE *)(v98 + 10) = 1;
      MiDereferenceSubsectionProtos(v115, v108, &v128);
      if ( _InterlockedCompareExchange64(v97, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v97);
      KeAbPostRelease((ULONG_PTR)v97);
      v14 = v26->SpecialApcDisable++ == -1;
      if ( v14 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
        KiCheckForKernelApcDelivery(v100, v99);
      MiFreeSubsectionProtos(&v128);
      v12 &= ~8u;
    }
    v16 = v132;
    v19 = v103;
    v115 = v132;
LABEL_25:
    v6 = 0LL;
  }
  v117 = NextDirectFixupProto;
  v67 = NextDirectFixupProto - v27;
  v27 = NextDirectFixupProto;
  v67 >>= 3;
  v28 = (unsigned int)(v67 + v28);
  v22 = (v67 << 12) + v30;
  v105 = v28;
  v113 = v22;
LABEL_30:
  v112 = 0LL;
  while ( 1 )
  {
LABEL_31:
    if ( v27 >= v32 )
    {
LABEL_19:
      if ( v19 )
      {
        LOBYTE(v22) = v102[0];
        MiUnlockProtoPoolPage(v19, v22, v21);
        v6 = 0LL;
        v103 = 0LL;
      }
      v17 = SlabPage;
      if ( SlabPage != -1 )
      {
        MiReleaseFreshPage(48 * SlabPage - 0x220000000000LL, v22, v21);
        v26 = CurrentThread;
        v17 = -1LL;
        SlabPage = -1LL;
        goto LABEL_156;
      }
      goto LABEL_22;
    }
    if ( (v27 & 0xFFF) != 0 && v19 )
      break;
    if ( v19 )
    {
      LOBYTE(v22) = v102[0];
      MiUnlockProtoPoolPage(v19, v22, v21);
    }
    if ( (v12 & 2) != 0 )
      v56 = MiLockProtoPoolPage(v27, v102);
    else
      v56 = MiCheckProtoPtePageState(v5, v27, 0, v102);
    v6 = 0LL;
    v103 = v56;
    v19 = v56;
    if ( v56 )
    {
      v32 = v116;
      break;
    }
    if ( (v12 & 2) == 0 )
    {
      v61 = (unsigned __int64)(4096 - (unsigned int)(v27 & 0xFFF)) >> 3;
      v113 += v61 << 12;
      v28 = (unsigned int)(v61 + v28);
      v27 += 8 * v61;
      v105 = v28;
      v117 = v27;
LABEL_154:
      v32 = v116;
      continue;
    }
    MmAccessFault(2uLL, v27, 0, 0LL);
    v32 = v116;
    v6 = 0LL;
  }
  v33 = MiLockLeafPage((unsigned __int64 *)v27, 0);
  v6 = 0LL;
  v34 = v33;
  if ( !v33 )
  {
    if ( v110 )
    {
      dword_140E2D6F8 = 121;
      goto LABEL_130;
    }
    if ( (v12 & 2) != 0 )
    {
      if ( (*(_QWORD *)v27 & 0x400LL) != 0 || !(unsigned int)MiGetPagingFileOffset(*(_QWORD *)v27) )
      {
        v19 = v103;
        goto LABEL_38;
      }
      LOBYTE(v22) = v102[0];
      MiUnlockProtoPoolPage(v103, v22, v21);
      v19 = 0LL;
      v103 = 0LL;
      if ( (v106 & 2) != 0 )
      {
        HasRelocations = MiPageHasRelocations(*(_QWORD *)(v119 + 32), (unsigned int)v28, 1LL);
        v6 = 0LL;
        if ( !HasRelocations )
          goto LABEL_38;
      }
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
      if ( EffectivePagePriorityThread > 5 )
        EffectivePagePriorityThread = 5;
      if ( v27 == v112 )
      {
        v84 = 4096;
      }
      else
      {
        v112 = v27;
        v84 = (unsigned int)((__int64)(v32 - v27) >> 3) << 12;
      }
      v85 = MiPrefetchControlArea(v5, v82, v84, EffectivePagePriorityThread, v83, v108);
      v6 = 0LL;
      if ( v85 < 0 )
      {
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        v6 = 0LL;
      }
      v18 = 0;
    }
    else
    {
      v19 = v103;
LABEL_38:
      if ( NextDirectFixupProto == v6 )
      {
        v32 = v116;
        v27 += 8LL;
        v28 = (unsigned int)(v28 + 1);
        v117 = v27;
        v113 += 4096LL;
        v105 = v28;
      }
      else
      {
        v95 = MiGetNextDirectFixupProto(v122, (unsigned int)++v124, v21);
        NextDirectFixupProto = v95;
        v21 = v95;
        if ( !v95 )
        {
          if ( v19 )
          {
            LOBYTE(v22) = v102[0];
            MiUnlockProtoPoolPage(v19, v22, 0LL);
          }
          goto LABEL_131;
        }
        v32 = v116;
        if ( v95 >= v116 )
          goto LABEL_19;
        v96 = (__int64)(v95 - v27) >> 3;
        v28 = (unsigned int)(v96 + v28);
        v113 += v96 << 12;
        v105 = v28;
        if ( v19 )
        {
          if ( ((v21 ^ v27) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          {
            LOBYTE(v22) = v102[0];
            MiUnlockProtoPoolPage(v19, v22, v21);
            v21 = NextDirectFixupProto;
            v6 = 0LL;
            v19 = 0LL;
            v103 = 0LL;
          }
        }
        v27 = v21;
        v117 = v21;
      }
    }
    goto LABEL_31;
  }
  v35 = *(_QWORD *)v27;
  v36 = *(_QWORD *)v27;
  if ( (*(_QWORD *)v27 & 1) == 0 && qword_140E2DB80 )
  {
    if ( (v35 & 0x10) != 0 )
      v36 &= ~0x10uLL;
    else
      v36 = v35 & ~qword_140E2DB80;
  }
  v37 = v106;
  v38 = (v36 >> 12) & 0xFFFFFFFFFFLL;
  if ( (v106 & 1) != 0 && ((*(_QWORD *)(v33 + 40) >> 60) & 7) == 3 )
    goto LABEL_167;
  if ( (*(_DWORD *)(v33 + 16) & 0x400LL) == 0 )
  {
    LOBYTE(v22) = (v106 & 0x10) == 0;
    if ( ((unsigned __int8)v22 & ((v12 & 2) == 0)) != 0 )
      goto LABEL_167;
  }
  v22 = v110;
  if ( (*(_DWORD *)(v33 + 32) & 0x40000000) != 0 && v110 )
  {
    dword_140E2D6F8 = 122;
    goto LABEL_129;
  }
  if ( (*(_BYTE *)(v33 + 35) & 0x10) != 0 )
  {
    if ( !v110 )
    {
LABEL_167:
      _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v19 = v103;
      LODWORD(v28) = v105;
      goto LABEL_38;
    }
    dword_140E2D6F8 = 123;
LABEL_129:
    _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_130:
    LOBYTE(v22) = v102[0];
    MiUnlockProtoPoolPage(v103, v22, v21);
    v18 = -1073740023;
LABEL_131:
    v17 = SlabPage;
    goto LABEL_132;
  }
  if ( (v35 & 1) == 0 && (*(_BYTE *)(v33 + 34) & 0x20) != 0 )
  {
    memset_0(v137, 0, 0x98uLL);
    v6 = 0LL;
    if ( v107 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_96;
    }
    if ( (v37 & 2) != 0 && (*(_DWORD *)(v5 + 56) & 2) == 0 )
    {
      MiDeleteTransitionPte((__int64 *)v27, v34, 0x11u, 0);
      v19 = v103;
      v6 = 0LL;
      LODWORD(v28) = v105;
      goto LABEL_38;
    }
    MiInitializePageFaultPacket(0, 0, 0, 0, 0LL, (__int64)v137);
    v120 = v86 + 1;
    MiObtainProtoReference(v103, v86 + 1);
    MiWaitForCollidedFaultComplete(v137, (__int64 *)v34, v103, v102[0], &v120);
    LODWORD(v28) = v105;
    v6 = 0LL;
    v19 = 0LL;
    v103 = 0LL;
    v18 = 0;
    goto LABEL_154;
  }
  if ( v107 )
  {
    if ( (v35 & 1) != 0 )
      goto LABEL_167;
    v74 = *(_QWORD *)(v33 + 16);
    v21 = *(_QWORD *)(v34 + 16);
    v22 = v74 >> 11;
    v75 = v74 >> 3;
    if ( (v21 & 0x400) != 0 )
      LOBYTE(v75) = v22;
    if ( (v75 & 1) == 0 )
      goto LABEL_167;
  }
  v39 = 8;
  v121 = 8;
  if ( (v35 & 1) != 0 )
    goto LABEL_52;
  if ( (unsigned int)MiGetPfnSlabType(v34) == 9 && (*(_DWORD *)(v34 + 32) & 0x8000000) != 0 )
  {
    v39 = HIBYTE(*(_DWORD *)(v34 + 32)) & 7;
    v121 = v39;
  }
  if ( (MiUnlinkPageFromListEx(v34, 0) & 3) != 0 )
  {
    MiDiscardTransitionPteEx(v34, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v19 = v103;
    LODWORD(v28) = v105;
    v32 = v116;
    v6 = 0LL;
    if ( (v12 & 2) == 0 )
      goto LABEL_38;
    goto LABEL_31;
  }
  *(_QWORD *)(v34 + 24) &= 0xC000000000000000uLL;
LABEL_52:
  v40 = v106;
  if ( (v106 & 0x11) == 1
    && *(char *)(v34 + 35) >= 0
    && (v76 = MI_NODE_FROM_PFN(v34), (unsigned int)MiUseSlabAllocator(v127, v115, *(_QWORD *)(v34 + 16), v76, &v111))
    && v111 <= 4
    && ((unsigned int)MiGetPfnSlabType(v34) == 9 || !(unsigned int)MiCheckSlabPage(v34, v111, 4)) )
  {
    v41 = v12 | 0x10;
  }
  else
  {
    v41 = v12 & 0xFFFFFFEF;
  }
  MiAddLockedPageCharge(v34, 1LL);
  if ( v107 )
  {
    v41 &= ~0x40u;
  }
  else
  {
    if ( (v41 & 0x80u) != 0 || (HvlEnlightenments & 0x200000) == 0 )
      goto LABEL_57;
    v42 = *(_QWORD *)(v34 + 16) & 0x400LL;
    v79 = *(_QWORD *)(v34 + 16) >> 3;
    if ( v42 )
      LOBYTE(v79) = *(_QWORD *)(v34 + 16) >> 11;
    if ( (v79 & 1) == 0 )
    {
LABEL_57:
      v43 = v41 & 0xFFFFFFDF;
      goto LABEL_58;
    }
  }
  v43 = v41 | 0x20;
LABEL_58:
  _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v42) = v102[0];
  MiUnlockProtoPoolPage(v103, v42, 0LL);
  v44 = 0LL;
  v103 = 0LL;
  if ( (v43 & 0x20) != 0 )
  {
    v77 = v40;
    v45 = v105;
    v78 = MiWalkEntireImagePageNeedsProcessing(v119, (unsigned int)v105, v77);
    v44 = 0LL;
    if ( v78 )
    {
      if ( v107 )
      {
        MiAddPageToHeatList(P, v38, 3LL);
        v43 |= 0x40u;
      }
      else
      {
        MiWalkEntireImage(v5, v122, v106 | 0x10, v108);
        v43 |= 0x80u;
      }
      v44 = 0LL;
    }
  }
  else
  {
    v45 = v105;
  }
  v46 = *(_QWORD *)(v34 + 40);
  if ( (v46 & 0x20000000000000LL) != 0 )
    v47 = v43 | 1;
  else
    v47 = v43 & 0xFFFFFFFE;
  if ( v107 )
  {
    v18 = 0;
    goto LABEL_69;
  }
  if ( v110 )
  {
    v62 = MiPageHasRelocations(*(_QWORD *)(v119 + 32), v45, 1LL);
    v44 = 0LL;
    if ( !v62 )
      goto LABEL_69;
    v58 = P;
    v63 = MiSplitDirectMapPage((_DWORD)v115, (unsigned int)&v135, v38, (_DWORD)P, (__int64)&v133);
    if ( v63 == -1 )
    {
      dword_140E2D6F8 = 120;
      v64 = MiLockPageInline(v34);
      if ( (unsigned int)MiRemoveLockedPageCharge(v34, v65, v66) )
        MiPfnReferenceCountIsZero(v34, v38);
      MiUnlockPage(v34, v64);
      v17 = SlabPage;
      v18 = -1073740023;
      goto LABEL_133;
    }
    v46 = 0xFFFFDE0000000000uLL;
    v34 = 48 * v63 - 0x220000000000LL;
    v38 = v63;
LABEL_171:
    v44 = 0LL;
    goto LABEL_69;
  }
  if ( (v106 & 2) != 0 )
  {
    if ( (MiFlags & 0x2000) != 0 && (*(_DWORD *)(v5 + 92) & 0xC0000) != 0 && ((v46 >> 60) & 7) == 3 )
    {
      v57 = VslApplySecureImageFixups(*(_QWORD *)(v119 + 64), v45, v38);
      v44 = 0LL;
      v18 = v57;
      if ( v57 < 0 )
        KeBugCheckEx(0x1Au, 0x51511uLL, v57, v38, v5);
      goto LABEL_69;
    }
    BugCheckParameter4 = 0;
    updated = MiRelocateImagePfn(v5, v122, v45, v38);
LABEL_67:
    v44 = 0LL;
    v18 = updated;
    if ( updated )
    {
      if ( updated == 1 )
        v18 = 0;
    }
    else
    {
      v47 |= 4u;
    }
    goto LABEL_69;
  }
  if ( (v106 & 8) == 0 )
  {
    if ( (v106 & 0x20) != 0 )
    {
      BugCheckParameter4 = 1;
      MiApplyDebuggerPatches(v5, 0LL, v45, v38);
    }
    else
    {
      v18 = MiValidateImagePfn(
              v5,
              v113,
              (_DWORD)Process,
              v45,
              BugCheckParameter4,
              (v115[8] >> 1) & 0x1F,
              v38,
              0x4000000,
              0);
    }
    goto LABEL_171;
  }
  if ( (MiFlags & 0x2000) == 0 || (*(_DWORD *)(v5 + 92) & 0xC0000) == 0 || ((v46 >> 60) & 7) != 3 )
  {
    updated = MiUpdateImagePfnImportRelocations(v5, v122, v45, v38);
    goto LABEL_67;
  }
  v88 = VslApplySecureImageFixups(*(_QWORD *)(v119 + 64), v45, v38);
  v44 = 0LL;
  v18 = v88;
  if ( v88 < 0 )
    KeBugCheckEx(0x1Au, 0x51512uLL, v88, v38, v5);
LABEL_69:
  if ( v39 != 8 && !BugCheckParameter2 && (v47 & 1) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v44) = 2;
      LOBYTE(v46) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v46, v44);
    }
    BugCheckParameter2 = (ULONG_PTR)MiCreateDecayPfn();
    if ( KiIrqlFlags )
    {
      LOBYTE(v60) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v60);
    }
    __writecr8(CurrentIrql);
  }
  if ( (v47 & 0x10) != 0 && SlabPage == -1 )
  {
    v87 = MI_PAGE_TO_FULL_COLOR(v38);
    SlabPage = MiGetSlabPage(v127, v111, v87, 0, -1LL, 0);
    if ( SlabPage == -1 )
      v47 &= ~0x10u;
  }
  v49 = 0LL;
  v50 = 0LL;
  v51 = MiLockPageInline(v34);
  v54 = *(_QWORD *)(v34 + 24);
  v102[0] = v51;
  if ( (v54 & 0x4000000000000000LL) != 0 )
  {
    if ( (v47 & 0x10) != 0 )
      v47 &= ~0x10u;
  }
  else if ( (v47 & 0x40) != 0 )
  {
    MiSetActivePfnHeat(v34, 0LL);
  }
  v55 = v47 & 0xFFFFFFEF;
  if ( *(char *)(v34 + 35) >= 0 )
    v55 = v47;
  if ( ((v106 & 8) != 0 || (v106 & 0x12) == 2) && (*(_QWORD *)(v34 + 16) & 0x400LL) == 0 )
  {
    v50 = MiCaptureDirtyBitToPfn(v34);
    v49 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v34 + 40) >> 43) & 0x3FFLL));
  }
  v12 = v55;
  if ( (v55 & 0x10) != 0 && (*(_BYTE *)(v34 + 34) & 7) == 6 )
  {
    LOBYTE(v52) = v102[0];
    MiTrimSharedPage(v34, v52, 0LL);
    MiLockPageInline(v34);
    if ( (*(_QWORD *)(v34 + 24) & 0x4000000000000000LL) != 0 )
      v12 = v55 & 0xFFFFFFEF;
  }
  if ( (unsigned int)MiRemoveLockedPageCharge(v34, v52, v53) )
  {
    if ( (v12 & 1) == 0
      && v121 != 8
      && (*(_BYTE *)(v34 + 34) & 0x10) == 0
      && (*(_QWORD *)(v34 + 24) & 0x4000000000000000LL) == 0
      && (v12 & 0x10) == 0 )
    {
      if ( BugCheckParameter2 )
        MiInsertProtectedStandbyPage(BugCheckParameter2, v34);
      else
        MiPfnReferenceCountIsZero(v34, v38);
      MiUnlockPage(v34, v102[0]);
      v102[0] = 17;
LABEL_85:
      v17 = SlabPage;
      goto LABEL_86;
    }
    MiPfnReferenceCountIsZero(v34, v38);
  }
  if ( (v12 & 0x10) == 0
    || (unsigned __int8)((*(_BYTE *)(v34 + 34) & 7) - 2) > 1u
    || (unsigned __int16)*(_DWORD *)(v34 + 32)
    || *(char *)(v34 + 35) < 0 )
  {
    goto LABEL_85;
  }
  v17 = SlabPage;
  if ( (unsigned int)MiGetPfnSlabType(48 * SlabPage - 0x220000000000LL) != 9 )
  {
    PfnSlabType = MiGetPfnSlabType(v34);
    v91 = MiReplaceTransitionPage(v34, v90, PfnSlabType, 0);
    v12 ^= ((unsigned __int8)v12 ^ (unsigned __int8)(16 * v91)) & 0x10;
    if ( (v91 & 1) != 0 )
    {
      v17 = -1LL;
      *(_QWORD *)(v34 + 16) = CLFS_LSN_NULL_EXT;
      SlabPage = -1LL;
      MiSetOriginalPtePfnFromFreeList(v34 + 16, v22, v21, v92);
      MiReleaseFreshPageLocked(v34);
    }
  }
LABEL_86:
  if ( v102[0] != 17 )
    _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v6 = 0LL;
  if ( v50 )
  {
    MiReleasePageFileInfo(v49, v50, 1LL);
    v6 = 0LL;
  }
  LOBYTE(v22) = v102[0];
  if ( v102[0] != 17 )
  {
    if ( KiIrqlFlags )
    {
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
      v6 = 0LL;
    }
    __writecr8(v102[0]);
    v102[0] = 17;
  }
  if ( v18 >= 0 )
  {
    v27 = v117;
    v5 = v131;
LABEL_96:
    v19 = v103;
    LODWORD(v28) = v105;
    goto LABEL_38;
  }
  dword_140E2D6F8 = (v18 != -1073741670) + 113;
LABEL_132:
  v58 = P;
LABEL_133:
  if ( BugCheckParameter2 )
    MiDecayPfnFullyInitialized(BugCheckParameter2);
  if ( (unsigned int)(v58[1] - 1) <= 0xFFFFFFFD )
    MiIssuePageHeatList(v58);
  if ( v134 )
    MiFlushFileOnlyDeleteChain(&v133, v22, v21);
  if ( v58 != (_DWORD *)v136 )
    ExFreePoolWithTag(v58, 0);
  if ( v17 != -1 )
    MiReleaseFreshPage(48 * v17 - 0x220000000000LL, v22, v21);
  return (unsigned int)v18;
}
