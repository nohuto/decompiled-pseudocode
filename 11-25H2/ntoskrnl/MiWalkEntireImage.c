/*
 * XREFs of MiWalkEntireImage @ 0x14033BD50
 * Callers:
 *     MiCheckControlArea @ 0x14022F1E0 (MiCheckControlArea.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiSwitchBaseAddress @ 0x140941584 (MiSwitchBaseAddress.c)
 *     MiRelocateImage @ 0x140941BE8 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x140945124 (MiValidateSectionCreate.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A8DB7C (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiFreeRetpolineImportInfo @ 0x140A9400C (MiFreeRetpolineImportInfo.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiPfnReferenceCountIsZero @ 0x14021ADE0 (MiPfnReferenceCountIsZero.c)
 *     MiCreateDecayPfn @ 0x14021C248 (MiCreateDecayPfn.c)
 *     MI_NODE_FROM_PFN @ 0x14021CB00 (MI_NODE_FROM_PFN.c)
 *     MiGetSlabPage @ 0x14022BC70 (MiGetSlabPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x140235C40 (MiRemoveLockedPageCharge.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiInsertProtectedStandbyPage @ 0x14023C818 (MiInsertProtectedStandbyPage.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiDiscardTransitionPteEx @ 0x1402C5640 (MiDiscardTransitionPteEx.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiGetSharedProtos @ 0x140322970 (MiGetSharedProtos.c)
 *     MiCheckSlabPage @ 0x1403234E8 (MiCheckSlabPage.c)
 *     MiStartingOffset @ 0x1403236B0 (MiStartingOffset.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 *     MiUseSlabAllocator @ 0x14033BB18 (MiUseSlabAllocator.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiWaitForCollidedFaultComplete @ 0x14033DB60 (MiWaitForCollidedFaultComplete.c)
 *     MiObtainProtoReference @ 0x14033DEAC (MiObtainProtoReference.c)
 *     MiCheckProtoPtePageState @ 0x14033E110 (MiCheckProtoPtePageState.c)
 *     MiDeleteTransitionPte @ 0x140340900 (MiDeleteTransitionPte.c)
 *     MiReleaseFreshPageLocked @ 0x140342C10 (MiReleaseFreshPageLocked.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140344980 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiTrimSharedPage @ 0x14035A2DC (MiTrimSharedPage.c)
 *     MiInitializePageFaultPacket @ 0x140379270 (MiInitializePageFaultPacket.c)
 *     MiGetPagingFileOffset @ 0x14037C4CC (MiGetPagingFileOffset.c)
 *     MiGetEffectivePagePriorityThread @ 0x140387440 (MiGetEffectivePagePriorityThread.c)
 *     MiSetActivePfnHeat @ 0x1403FA970 (MiSetActivePfnHeat.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403FF808 (MiUpdateImagePfnImportRelocations.c)
 *     MiInitializePageHeatList @ 0x140440440 (MiInitializePageHeatList.c)
 *     MiAddPageToHeatList @ 0x14044047C (MiAddPageToHeatList.c)
 *     MiIssuePageHeatList @ 0x14044059C (MiIssuePageHeatList.c)
 *     MiDecayPfnFullyInitialized @ 0x140440EE8 (MiDecayPfnFullyInitialized.c)
 *     VslApplySecureImageFixups @ 0x14047E680 (VslApplySecureImageFixups.c)
 *     MiSplitDirectMapPage @ 0x1404D1400 (MiSplitDirectMapPage.c)
 *     MiWalkEntireImagePageNeedsProcessing @ 0x1404D2ADC (MiWalkEntireImagePageNeedsProcessing.c)
 *     MiFlushFileOnlyDeleteChain @ 0x1404F0DD4 (MiFlushFileOnlyDeleteChain.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiApplyDebuggerPatches @ 0x1404F41FC (MiApplyDebuggerPatches.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiGetNextDirectFixupProto @ 0x1406EF70C (MiGetNextDirectFixupProto.c)
 *     MiRelocateImagePfn @ 0x140945ED0 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x140946B4C (MiValidateImagePfn.c)
 *     MiPageHasRelocations @ 0x140946FF0 (MiPageHasRelocations.c)
 *     MiGetSectionStrongImageReference @ 0x1409470C8 (MiGetSectionStrongImageReference.c)
 *     MiPrefetchControlArea @ 0x1409CABB4 (MiPrefetchControlArea.c)
 *     MiDereferenceSubsectionProtos @ 0x140A1D2D4 (MiDereferenceSubsectionProtos.c)
 *     MiFreeSubsectionProtos @ 0x140A85348 (MiFreeSubsectionProtos.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiWalkEntireImage(ULONG_PTR a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  char v4; // si
  ULONG_PTR v5; // r13
  unsigned __int64 v6; // r9
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
  ULONG_PTR v18; // rsi
  __int64 result; // rax
  __int64 v20; // rdx
  unsigned int v21; // ecx
  __int64 v22; // rbx
  void *Pool; // rax
  _DWORD *v24; // r14
  struct _KTHREAD *v25; // r14
  unsigned __int64 v26; // r14
  __int64 v27; // r15
  int v28; // eax
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rsi
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r15
  char v37; // bl
  __int64 v38; // r15
  int v39; // ebx
  unsigned int v40; // r14d
  unsigned int v41; // edi
  unsigned __int64 v42; // r9
  unsigned int v43; // edi
  unsigned int v44; // r14d
  unsigned __int64 v45; // rcx
  unsigned int v46; // edi
  int updated; // eax
  __int64 v48; // r13
  unsigned __int64 v49; // rbx
  unsigned __int8 v50; // al
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned int v53; // r14d
  __int64 v54; // rdx
  unsigned __int64 v55; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v57; // rdx
  __int64 v58; // rax
  unsigned __int8 v59; // bl
  int v60; // eax
  unsigned __int64 v61; // rcx
  signed __int64 *v62; // rbx
  __int64 *v63; // rsi
  __int64 SharedProtos; // rax
  __int64 v65; // rsi
  __int64 v66; // rcx
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rax
  __int64 v70; // r8
  unsigned int v71; // eax
  __int64 v72; // rax
  int v73; // eax
  int HasRelocations; // eax
  unsigned int EffectivePagePriorityThread; // eax
  int v76; // edx
  int v77; // r9d
  unsigned int v78; // r8d
  int v79; // eax
  int v80; // r8d
  int v81; // r9d
  unsigned int v82; // eax
  int PfnSlabType; // eax
  unsigned __int64 v84; // r10
  char v85; // al
  unsigned __int64 v86; // rax
  __int64 v87; // rax
  signed __int64 *v88; // rbx
  __int64 *v89; // rsi
  char BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v91[8]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v92; // [rsp+58h] [rbp-A8h]
  __int64 SlabPage; // [rsp+60h] [rbp-A0h]
  __int64 v94; // [rsp+68h] [rbp-98h]
  unsigned int v95; // [rsp+70h] [rbp-90h]
  unsigned int v96; // [rsp+74h] [rbp-8Ch]
  unsigned int v97; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h]
  int v99; // [rsp+88h] [rbp-78h]
  unsigned int v100; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned __int64 v101; // [rsp+90h] [rbp-70h]
  unsigned __int64 v102; // [rsp+98h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-60h]
  _DWORD *v104; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v105; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v106; // [rsp+B8h] [rbp-48h]
  __int64 v107; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v108; // [rsp+C8h] [rbp-38h]
  int v109; // [rsp+D0h] [rbp-30h] BYREF
  int v110; // [rsp+D4h] [rbp-2Ch]
  __int64 v111; // [rsp+D8h] [rbp-28h]
  unsigned __int64 NextDirectFixupProto; // [rsp+E0h] [rbp-20h]
  int v113; // [rsp+E8h] [rbp-18h]
  ULONG_PTR BugCheckParameter2; // [rsp+F0h] [rbp-10h]
  _DWORD *v115; // [rsp+F8h] [rbp-8h]
  __int64 v116; // [rsp+100h] [rbp+0h]
  unsigned __int64 v117; // [rsp+108h] [rbp+8h] BYREF
  __int64 v118; // [rsp+110h] [rbp+10h]
  _KPROCESS *Process; // [rsp+118h] [rbp+18h]
  ULONG_PTR v120; // [rsp+120h] [rbp+20h]
  _DWORD *v121; // [rsp+128h] [rbp+28h]
  __int128 v122; // [rsp+130h] [rbp+30h] BYREF
  __int64 v123; // [rsp+140h] [rbp+40h]
  __int128 v124; // [rsp+148h] [rbp+48h] BYREF
  _OWORD v125[9]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v126[160]; // [rsp+1F0h] [rbp+F0h] BYREF

  v4 = a3;
  v95 = a3;
  v111 = a2;
  v5 = a1;
  v120 = a1;
  v109 = 0;
  v97 = a4;
  v124 = 0LL;
  memset_0(v125, 0, sizeof(v125));
  v6 = 0LL;
  v7 = *(_QWORD *)(v5 + 96);
  v8 = *(_WORD *)(v5 + 60) & 0x3FF;
  v107 = *(_QWORD *)v5;
  v9 = v7 & 0xFFFFFFFFFFFFFFF8uLL;
  v10 = 2LL;
  v11 = v4 & 4;
  v108 = v9;
  v12 = 0;
  v99 = v11;
  v116 = *((_QWORD *)qword_140E2FD48 + v8);
  if ( (*(_BYTE *)(v5 + 62) & 0xC) == 4 && (v4 & 4) == 0 )
  {
    v13 = (_DWORD *)(v5 + 56);
    goto LABEL_3;
  }
  v13 = (_DWORD *)(v5 + 56);
  v14 = (*(_DWORD *)(v5 + 56) & 0x800) == 0;
  v115 = (_DWORD *)(v5 + 56);
  if ( !v14 )
  {
LABEL_3:
    v115 = v13;
    v12 = 2;
  }
  DWORD1(v125[0]) = -1;
  CurrentThread = KeGetCurrentThread();
  v123 = 0LL;
  NextDirectFixupProto = 0LL;
  v96 = v4 & 0x10;
  v122 = 0LL;
  P = v125;
  if ( (v4 & 0x10) != 0 )
  {
    v12 = 0;
    *((_QWORD *)&v125[0] + 1) = qword_140E2E9B8;
    *(_QWORD *)&v125[0] = 131LL;
  }
  else if ( (v4 & 4) != 0 )
  {
    MiInitializePageColorBase(
      (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
      3,
      (*v13 >> 20) & 0x7F,
      (__int64)&v124);
    v9 = v108;
    v6 = 0LL;
    v125[0] = 0LL;
    LODWORD(v125[0]) = 128;
  }
  v15 = (_DWORD *)(v5 + 128);
  v16 = -1LL;
  v104 = (_DWORD *)(v5 + 128);
  v17 = 0;
  v100 = 0;
  v18 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v118 = *(_QWORD *)(v5 + 136);
  v91[0] = 17;
  v92 = 0LL;
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
  v113 = 0;
  if ( v11 )
    NextDirectFixupProto = MiGetNextDirectFixupProto(v111, 0LL, v10);
  v20 = v107;
  if ( DWORD1(v125[0]) == -1 )
    goto LABEL_44;
  v21 = *(_DWORD *)(v107 + 8);
  v22 = 511LL;
  if ( v21 < 0x1FF )
    v22 = v21;
  if ( (unsigned int)v22 <= LODWORD(v125[0]) >> 3 )
  {
    v15 = (_DWORD *)(v5 + 128);
    goto LABEL_44;
  }
  Pool = (void *)MiAllocatePool(0x42uLL, 8 * v22 + 16, 1818782029);
  v6 = 0LL;
  P = Pool;
  if ( Pool )
  {
    MiInitializePageHeatList(Pool, v125[0] & 1, (LODWORD(v125[0]) >> 1) & 3, (unsigned int)v22);
    v15 = (_DWORD *)(v5 + 128);
    goto LABEL_42;
  }
  P = v125;
  v15 = (_DWORD *)(v5 + 128);
  while ( 1 )
  {
    v20 = v107;
LABEL_44:
    if ( !v15 )
      goto LABEL_24;
    v26 = *((_QWORD *)v15 + 1);
    v27 = (__int64)(v26 - v118) >> 3;
    v121 = (_DWORD *)*((_QWORD *)v15 + 2);
    v28 = v15[8];
    v106 = v26;
    v94 = v27;
    if ( (v28 & 0x20000) != 0 )
    {
      if ( (v95 & 1) != 0 )
      {
        v25 = CurrentThread;
LABEL_269:
        v16 = SlabPage;
        goto LABEL_40;
      }
      if ( (*v115 & 0x8000000) != 0 )
      {
        v25 = CurrentThread;
        if ( (v95 & 0x16) != 0 )
          goto LABEL_269;
        --CurrentThread->SpecialApcDisable;
        v62 = (signed __int64 *)(v20 + 40);
        v63 = KeAbPreAcquire(v20 + 40, 0LL);
        if ( _InterlockedCompareExchange64(v62, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v62, 0, v63, (unsigned __int64)v62);
        if ( v63 )
          *((_BYTE *)v63 + 10) = 1;
        if ( !*((_QWORD *)v104 + 3)
          || (SharedProtos = MiGetSharedProtos(v5, v97, (__int64)v104), (v65 = SharedProtos) == 0) )
        {
          if ( _InterlockedCompareExchange64(v62, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v62);
          KeAbPostRelease((ULONG_PTR)v62);
          v14 = v25->SpecialApcDisable++ == -1;
          if ( v14 && ($727077A9B6E167EAE1398C74674DC5A5 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
            KiCheckForKernelApcDelivery();
          v16 = SlabPage;
LABEL_216:
          v6 = 0LL;
          goto LABEL_40;
        }
        ++*(_DWORD *)(SharedProtos + 80);
        if ( _InterlockedCompareExchange64(v62, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v62);
        KeAbPostRelease((ULONG_PTR)v62);
        v14 = v25->SpecialApcDisable++ == -1;
        if ( v14 && ($727077A9B6E167EAE1398C74674DC5A5 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
          KiCheckForKernelApcDelivery();
        v26 = *(_QWORD *)(v65 + 72);
        v12 |= 8u;
        v18 = v92;
        v15 = v104;
        v106 = v26;
      }
    }
    v29 = MiStartingOffset((__int64)v15, v26, v97);
    v30 = (unsigned int)v15[11];
    v6 = 0LL;
    v31 = NextDirectFixupProto;
    v102 = v29;
    v32 = v26 + 8 * v30;
    v105 = v32;
    if ( !NextDirectFixupProto )
      goto LABEL_47;
    if ( NextDirectFixupProto < v32 )
      break;
    v16 = SlabPage;
LABEL_39:
    v25 = CurrentThread;
LABEL_40:
    if ( (v12 & 8) != 0 )
    {
      --v25->SpecialApcDisable;
      v88 = (signed __int64 *)(v107 + 40);
      v117 = v6;
      v89 = KeAbPreAcquire(v107 + 40, 0LL);
      if ( _InterlockedCompareExchange64(v88, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v88, 0, v89, (unsigned __int64)v88);
      if ( v89 )
        *((_BYTE *)v89 + 10) = 1;
      MiDereferenceSubsectionProtos(v104, v97, &v117);
      if ( _InterlockedCompareExchange64(v88, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v88);
      KeAbPostRelease((ULONG_PTR)v88);
      v14 = v25->SpecialApcDisable++ == -1;
      if ( v14 && ($727077A9B6E167EAE1398C74674DC5A5 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
        KiCheckForKernelApcDelivery();
      MiFreeSubsectionProtos(&v117);
      v12 &= ~8u;
    }
    v15 = v121;
    v18 = v92;
    v104 = v121;
LABEL_42:
    v6 = 0LL;
  }
  v106 = NextDirectFixupProto;
  v66 = NextDirectFixupProto - v26;
  v26 = NextDirectFixupProto;
  v66 >>= 3;
  v27 = (unsigned int)(v66 + v27);
  v94 = v27;
  v102 = (v66 << 12) + v29;
LABEL_47:
  v101 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_48:
      if ( v26 >= v32 )
      {
LABEL_36:
        if ( v18 )
        {
          MiUnlockProtoPoolPage(v18, v91[0], v31, v6);
          v6 = 0LL;
          v92 = 0LL;
        }
        v16 = SlabPage;
        if ( SlabPage != -1 )
        {
          MiReleaseFreshPage(48 * SlabPage - 0x220000000000LL);
          v25 = CurrentThread;
          v16 = -1LL;
          SlabPage = -1LL;
          goto LABEL_216;
        }
        goto LABEL_39;
      }
      if ( (v26 & 0xFFF) == 0 || !v18 )
      {
        if ( v18 )
          MiUnlockProtoPoolPage(v18, v91[0], v31, v6);
        if ( (v12 & 2) != 0 )
          v55 = MiLockProtoPoolPage(v26, v91);
        else
          v55 = MiCheckProtoPtePageState(v5, v26, 0LL, v91);
        v6 = 0LL;
        v92 = v55;
        v18 = v55;
        if ( !v55 )
        {
          if ( (v12 & 2) != 0 )
          {
            MmAccessFault(2uLL, v26, 0, 0LL);
            v32 = v105;
            v6 = 0LL;
            continue;
          }
          v61 = (unsigned __int64)(4096 - (unsigned int)(v26 & 0xFFF)) >> 3;
          v102 += v61 << 12;
          v27 = (unsigned int)(v61 + v27);
          v26 += 8 * v61;
          v94 = v27;
          v106 = v26;
          goto LABEL_166;
        }
        v32 = v105;
      }
      v33 = MiLockLeafPage((unsigned __int64 *)v26, 0);
      v6 = 0LL;
      v34 = v33;
      if ( v33 )
        break;
      if ( v99 )
      {
        dword_140E2D4B8 = 121;
        goto LABEL_22;
      }
      if ( (v12 & 2) != 0 )
      {
        if ( (*(_QWORD *)v26 & 0x400LL) != 0 || !(unsigned int)MiGetPagingFileOffset(*(_QWORD *)v26) )
        {
          v18 = v92;
          goto LABEL_55;
        }
        MiUnlockProtoPoolPage(v92, v91[0], v31, v6);
        v18 = 0LL;
        v92 = 0LL;
        if ( (v95 & 2) != 0 )
        {
          HasRelocations = MiPageHasRelocations(*(_QWORD *)(v108 + 32), (unsigned int)v27, 1LL);
          v6 = 0LL;
          if ( !HasRelocations )
            goto LABEL_55;
        }
        EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(
                                        CurrentThread,
                                        (unsigned int)((_DWORD)v27 << 12),
                                        v31);
        if ( EffectivePagePriorityThread > 5 )
          EffectivePagePriorityThread = 5;
        if ( v26 == v101 )
        {
          v78 = 4096;
        }
        else
        {
          v101 = v26;
          v78 = (unsigned int)((__int64)(v32 - v26) >> 3) << 12;
        }
        v79 = MiPrefetchControlArea(v5, v76, v78, EffectivePagePriorityThread, v77, v97);
        v6 = 0LL;
        if ( v79 < 0 )
        {
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
          v6 = 0LL;
        }
        v17 = 0;
      }
      else
      {
        v18 = v92;
LABEL_55:
        if ( NextDirectFixupProto == v6 )
        {
          v32 = v105;
          v26 += 8LL;
          v27 = (unsigned int)(v27 + 1);
          v106 = v26;
          v102 += 4096LL;
          v94 = v27;
        }
        else
        {
          v86 = MiGetNextDirectFixupProto(v111, (unsigned int)++v113, v31);
          NextDirectFixupProto = v86;
          v31 = v86;
          if ( !v86 )
          {
            if ( v18 )
              MiUnlockProtoPoolPage(v18, v91[0], 0LL, v6);
            goto LABEL_23;
          }
          v32 = v105;
          if ( v86 >= v105 )
            goto LABEL_36;
          v87 = (__int64)(v86 - v26) >> 3;
          v27 = (unsigned int)(v87 + v27);
          v102 += v87 << 12;
          v94 = v27;
          if ( v18 )
          {
            if ( ((v31 ^ v26) & 0xFFFFFFFFFFFFF000uLL) != 0 )
            {
              MiUnlockProtoPoolPage(v18, v91[0], v31, v6);
              v31 = NextDirectFixupProto;
              v6 = 0LL;
              v18 = 0LL;
              v92 = 0LL;
            }
          }
          v26 = v31;
          v106 = v31;
        }
      }
    }
    v35 = *(_QWORD *)v26;
    v36 = *(_QWORD *)v26;
    if ( (*(_QWORD *)v26 & 1) == 0 && qword_140E2D940 )
    {
      if ( (v35 & 0x10) != 0 )
        v36 &= ~0x10uLL;
      else
        v36 = v35 & ~qword_140E2D940;
    }
    v37 = v95;
    v38 = (v36 >> 12) & 0xFFFFFFFFFFLL;
    if ( (v95 & 1) != 0 && ((*(_QWORD *)(v33 + 40) >> 60) & 7) == 3 )
      goto LABEL_164;
    v31 = v96;
    if ( (*(_QWORD *)(v33 + 16) & 0x400LL) == 0 && (v12 & 2) == 0 && !v96 )
      goto LABEL_164;
    if ( (*(_DWORD *)(v33 + 32) & 0x40000000) != 0 && v99 )
    {
      dword_140E2D4B8 = 122;
      goto LABEL_21;
    }
    if ( (*(_BYTE *)(v33 + 35) & 0x10) != 0 )
    {
      if ( !v99 )
      {
LABEL_164:
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v18 = v92;
        LODWORD(v27) = v94;
        goto LABEL_55;
      }
      dword_140E2D4B8 = 123;
LABEL_21:
      _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_22:
      MiUnlockProtoPoolPage(v92, v91[0], v31, 0LL);
      v17 = -1073740023;
LABEL_23:
      v16 = SlabPage;
      goto LABEL_24;
    }
    if ( (v35 & 1) == 0 && (*(_BYTE *)(v33 + 34) & 0x20) != 0 )
    {
      memset_0(v126, 0, 0x98uLL);
      v6 = 0LL;
      if ( v96 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_114;
      }
      if ( (v37 & 2) != 0 && (*(_DWORD *)(v5 + 56) & 2) == 0 )
      {
        MiDeleteTransitionPte(v26, v34);
        v18 = v92;
        v6 = 0LL;
        LODWORD(v27) = v94;
        goto LABEL_55;
      }
      MiInitializePageFaultPacket(0, 0, 0, 0, 0LL, (__int64)v126);
      v109 = v80 + 1;
      MiObtainProtoReference(v92, (unsigned int)(v80 + 1));
      LOBYTE(v81) = v91[0];
      MiWaitForCollidedFaultComplete((unsigned int)v126, v34, v92, v81, (__int64)&v109);
      LODWORD(v27) = v94;
      v6 = 0LL;
      v18 = 0LL;
      v92 = 0LL;
      v17 = 0;
LABEL_166:
      v32 = v105;
      goto LABEL_48;
    }
    if ( v96 )
    {
      if ( (v35 & 1) != 0 )
        goto LABEL_164;
      v67 = *(_QWORD *)(v33 + 16);
      v31 = *(_QWORD *)(v34 + 16);
      v68 = v67 >> 11;
      v69 = v67 >> 3;
      if ( (v31 & 0x400) != 0 )
        LOBYTE(v69) = v68;
      if ( (v69 & 1) == 0 )
        goto LABEL_164;
    }
    v39 = 8;
    v110 = 8;
    if ( (v35 & 1) != 0 )
      goto LABEL_69;
    if ( (unsigned int)MiGetPfnSlabType(v34) == 9 && (*(_DWORD *)(v34 + 32) & 0x8000000) != 0 )
    {
      v39 = HIBYTE(*(_DWORD *)(v34 + 32)) & 7;
      v110 = v39;
    }
    if ( (MiUnlinkPageFromListEx(v34, 0) & 3) == 0 )
      break;
    MiDiscardTransitionPteEx(v34);
    _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v18 = v92;
    LODWORD(v27) = v94;
    v32 = v105;
    v6 = 0LL;
    if ( (v12 & 2) == 0 )
      goto LABEL_55;
  }
  v6 = 0LL;
  *(_QWORD *)(v34 + 24) &= 0xC000000000000000uLL;
LABEL_69:
  v40 = v95;
  if ( (v95 & 0x11) == 1
    && *(char *)(v34 + 35) >= 0
    && (v71 = MI_NODE_FROM_PFN(v34), (unsigned int)MiUseSlabAllocator(v116, v104, *(_QWORD *)(v34 + 16), v71, &v100))
    && v100 <= 4
    && ((unsigned int)MiGetPfnSlabType(v34) == 9 || !(unsigned int)MiCheckSlabPage(v34, v100, 4)) )
  {
    v41 = v12 | 0x10;
  }
  else
  {
    v41 = v12 & 0xFFFFFFEF;
  }
  MiAddLockedPageCharge(v34, 1, v31, v6);
  if ( v96 )
  {
    v41 &= ~0x40u;
  }
  else
  {
    if ( (v41 & 0x80u) != 0 || (HvlEnlightenments & 0x200000) == 0 )
      goto LABEL_74;
    v42 = 1LL;
    v72 = *(_QWORD *)(v34 + 16) >> 3;
    if ( (*(_QWORD *)(v34 + 16) & 0x400LL) != 0 )
      LOBYTE(v72) = *(_QWORD *)(v34 + 16) >> 11;
    if ( (v72 & 1) == 0 )
    {
LABEL_74:
      v43 = v41 & 0xFFFFFFDF;
      goto LABEL_75;
    }
  }
  v43 = v41 | 0x20;
LABEL_75:
  _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v92, v91[0], 0LL, v42);
  v92 = 0LL;
  if ( (v43 & 0x20) != 0 )
  {
    v70 = v40;
    v44 = v94;
    if ( (unsigned int)MiWalkEntireImagePageNeedsProcessing(v108, (unsigned int)v94, v70) )
    {
      if ( v96 )
      {
        MiAddPageToHeatList(P, v38, 3LL);
        v43 |= 0x40u;
      }
      else
      {
        MiWalkEntireImage(v5, v111, v95 | 0x10, v97);
        v43 |= 0x80u;
      }
    }
  }
  else
  {
    v44 = v94;
  }
  v45 = *(_QWORD *)(v34 + 40);
  if ( (v45 & 0x20000000000000LL) != 0 )
    v46 = v43 | 1;
  else
    v46 = v43 & 0xFFFFFFFE;
  if ( v96 )
  {
    v17 = 0;
    goto LABEL_87;
  }
  if ( v99 )
  {
    if ( (unsigned int)MiPageHasRelocations(*(_QWORD *)(v108 + 32), v44, 1LL) )
    {
      v24 = P;
      v58 = MiSplitDirectMapPage((_DWORD)v104, (unsigned int)&v124, v38, (_DWORD)P, (__int64)&v122);
      if ( v58 == -1 )
      {
        dword_140E2D4B8 = 120;
        v59 = MiLockPageInline(v34);
        if ( (unsigned int)MiRemoveLockedPageCharge(v34) )
          MiPfnReferenceCountIsZero(v34, v38);
        MiUnlockPage(v34, v59);
        v16 = SlabPage;
        v17 = -1073740023;
        goto LABEL_25;
      }
      v45 = 0xFFFFDE0000000000uLL;
      v34 = 48 * v58 - 0x220000000000LL;
      v38 = v58;
    }
  }
  else if ( (v95 & 2) != 0 )
  {
    if ( (MiFlags & 0x2000) != 0 && (*(_DWORD *)(v5 + 92) & 0xC0000) != 0 && ((v45 >> 60) & 7) == 3 )
    {
      v60 = VslApplySecureImageFixups(*(_QWORD *)(v108 + 64), v44, v38);
      v17 = v60;
      if ( v60 < 0 )
        KeBugCheckEx(0x1Au, 0x51511uLL, v60, v38, v5);
      goto LABEL_87;
    }
    BugCheckParameter4 = 0;
    updated = MiRelocateImagePfn(v5, v111, v44, v38);
LABEL_85:
    v17 = updated;
    if ( updated )
    {
      if ( updated == 1 )
        v17 = 0;
    }
    else
    {
      v46 |= 4u;
    }
  }
  else
  {
    if ( (v95 & 8) == 0 )
    {
      if ( (v95 & 0x20) != 0 )
      {
        BugCheckParameter4 = 1;
        MiApplyDebuggerPatches(v5, 0LL, v44, v38);
      }
      else
      {
        v17 = MiValidateImagePfn(v5, BugCheckParameter4, (v104[8] >> 1) & 0x1F, v38, 0x4000000, 0);
      }
      goto LABEL_87;
    }
    if ( (MiFlags & 0x2000) == 0 || (*(_DWORD *)(v5 + 92) & 0xC0000) == 0 || ((v45 >> 60) & 7) != 3 )
    {
      updated = MiUpdateImagePfnImportRelocations(v5, v111, v44, v38);
      goto LABEL_85;
    }
    v73 = VslApplySecureImageFixups(*(_QWORD *)(v108 + 64), v44, v38);
    v17 = v73;
    if ( v73 < 0 )
      KeBugCheckEx(0x1Au, 0x51512uLL, v73, v38, v5);
  }
LABEL_87:
  if ( v39 != 8 && !BugCheckParameter2 && (v46 & 1) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v45) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v45);
    }
    BugCheckParameter2 = (ULONG_PTR)MiCreateDecayPfn();
    if ( KiIrqlFlags )
    {
      LOBYTE(v57) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v57);
    }
    __writecr8(CurrentIrql);
  }
  if ( (v46 & 0x10) != 0 && SlabPage == -1 )
  {
    v82 = MI_PAGE_TO_FULL_COLOR(v38);
    SlabPage = MiGetSlabPage(v116, v100, v82, 0, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0);
    if ( SlabPage == -1 )
      v46 &= ~0x10u;
  }
  v48 = 0LL;
  v49 = 0LL;
  v50 = MiLockPageInline(v34);
  v52 = *(_QWORD *)(v34 + 24);
  v91[0] = v50;
  if ( (v52 & 0x4000000000000000LL) != 0 )
  {
    if ( (v46 & 0x10) != 0 )
      v46 &= ~0x10u;
  }
  else if ( (v46 & 0x40) != 0 )
  {
    MiSetActivePfnHeat(v34, 0LL);
  }
  v53 = v46 & 0xFFFFFFEF;
  if ( *(char *)(v34 + 35) >= 0 )
    v53 = v46;
  if ( ((v95 & 8) != 0 || (v95 & 0x12) == 2) && (*(_QWORD *)(v34 + 16) & 0x400LL) == 0 )
  {
    v49 = MiCaptureDirtyBitToPfn(v34);
    v48 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v34 + 40) >> 43) & 0x3FFLL));
  }
  v12 = v53;
  if ( (v53 & 0x10) != 0 && (*(_BYTE *)(v34 + 34) & 7) == 6 )
  {
    LOBYTE(v51) = v91[0];
    MiTrimSharedPage(v34, v51, 0LL);
    MiLockPageInline(v34);
    if ( (*(_QWORD *)(v34 + 24) & 0x4000000000000000LL) != 0 )
      v12 = v53 & 0xFFFFFFEF;
  }
  if ( (unsigned int)MiRemoveLockedPageCharge(v34) )
  {
    if ( (v12 & 1) == 0
      && v110 != 8
      && (*(_BYTE *)(v34 + 34) & 0x10) == 0
      && (*(_QWORD *)(v34 + 24) & 0x4000000000000000LL) == 0
      && (v12 & 0x10) == 0 )
    {
      if ( BugCheckParameter2 )
        MiInsertProtectedStandbyPage(BugCheckParameter2, v34);
      else
        MiPfnReferenceCountIsZero(v34, v38);
      MiUnlockPage(v34, v91[0]);
      v91[0] = 17;
LABEL_103:
      v16 = SlabPage;
      goto LABEL_104;
    }
    MiPfnReferenceCountIsZero(v34, v38);
  }
  if ( (v12 & 0x10) == 0
    || (unsigned __int8)((*(_BYTE *)(v34 + 34) & 7) - 2) > 1u
    || (unsigned __int16)*(_DWORD *)(v34 + 32)
    || *(char *)(v34 + 35) < 0 )
  {
    goto LABEL_103;
  }
  v16 = SlabPage;
  if ( (unsigned int)MiGetPfnSlabType(48 * SlabPage - 0x220000000000LL) != 9 )
  {
    PfnSlabType = MiGetPfnSlabType(v34);
    v85 = MiReplaceTransitionPage((__int64 *)v34, v84, PfnSlabType, 0);
    v12 ^= ((unsigned __int8)v12 ^ (unsigned __int8)(16 * v85)) & 0x10;
    if ( (v85 & 1) != 0 )
    {
      v16 = -1LL;
      *(_QWORD *)(v34 + 16) = CLFS_LSN_NULL_EXT;
      SlabPage = -1LL;
      MiSetOriginalPtePfnFromFreeList((__int64 *)(v34 + 16));
      MiReleaseFreshPageLocked(v34);
    }
  }
LABEL_104:
  if ( v91[0] != 17 )
    _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v6 = 0LL;
  if ( v49 )
  {
    MiReleasePageFileInfo(v48, v49, 1);
    v6 = 0LL;
  }
  LOBYTE(v54) = v91[0];
  if ( v91[0] != 17 )
  {
    if ( KiIrqlFlags )
    {
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v54);
      v6 = 0LL;
    }
    __writecr8(v91[0]);
    v91[0] = 17;
  }
  if ( v17 >= 0 )
  {
    v26 = v106;
    v5 = v120;
LABEL_114:
    v18 = v92;
    LODWORD(v27) = v94;
    goto LABEL_55;
  }
  dword_140E2D4B8 = (v17 != -1073741670) + 113;
LABEL_24:
  v24 = P;
LABEL_25:
  if ( BugCheckParameter2 )
    MiDecayPfnFullyInitialized(BugCheckParameter2);
  if ( (unsigned int)(v24[1] - 1) <= 0xFFFFFFFD )
    MiIssuePageHeatList(v24);
  if ( v123 )
    MiFlushFileOnlyDeleteChain(&v122);
  if ( v24 != (_DWORD *)v125 )
    ExFreePoolWithTag(v24, 0);
  if ( v16 != -1 )
    MiReleaseFreshPage(48 * v16 - 0x220000000000LL);
  return (unsigned int)v17;
}
