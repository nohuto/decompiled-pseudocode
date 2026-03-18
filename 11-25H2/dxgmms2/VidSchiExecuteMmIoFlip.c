/*
 * XREFs of VidSchiExecuteMmIoFlip @ 0x14000CF44
 * Callers:
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14000C7F4 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     VidSchUnwaitFlipQueue @ 0x14000EC30 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400118F0 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x14001D940 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x140027BAC (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     ?VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14002D1F4 (-VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAU.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x140008C10 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x14000A1C0 (VidSchiCompleteFlipEntry.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x14000C354 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     ?SetIndependentFlipStage@@YAXPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE@@@Z @ 0x14000C574 (-SetIndependentFlipStage@@YAXPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x14000CAF4 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ?VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14000CD54 (-VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x14000CE74 (-NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14000E520 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140013A18 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111111PEAX@Z @ 0x140013D14 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 *     ?VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x140014AA0 (-VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH.c)
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x140014B1C (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140019050 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@I@Z @ 0x14002E804 (-VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer @ 0x140038588 (McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer.c)
 *     ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x140039E40 (-VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x14003A8E8 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     McTemplateK0pqqpxqqqq_EtwWriteTransfer @ 0x140041380 (McTemplateK0pqqpxqqqq_EtwWriteTransfer.c)
 *     ?VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@@Z @ 0x14004A75C (-VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@.c)
 *     ?VidSchiStallingFlipEntryUnblocked@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAI@Z @ 0x14004B93C (-VidSchiStallingFlipEntryUnblocked@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSC.c)
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140053D5C (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memset @ 0x140056780 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiExecuteMmIoFlip(
        struct HwQueueStagingList *a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        _BYTE *a6,
        _BYTE *a7)
{
  unsigned int v7; // edi
  unsigned int v9; // esi
  unsigned int v10; // r12d
  __int64 v11; // r13
  struct _VIDSCH_PRESENT_INFO *v12; // rbx
  __int64 v13; // r14
  char v14; // al
  enum _D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE v15; // edx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  char v22; // r8
  _BYTE *v23; // rdx
  bool v24; // cf
  unsigned int v25; // eax
  void **v26; // rbx
  __int64 v27; // rcx
  LARGE_INTEGER PerformanceCounter; // rcx
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned int v31; // eax
  int v32; // r8d
  __int64 v33; // rcx
  unsigned int v34; // r8d
  __int64 v35; // rbx
  __int64 v36; // rdi
  unsigned int v37; // edi
  __int64 v38; // r9
  int v39; // edx
  __int64 v40; // rax
  int v41; // r8d
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // rax
  void *v46; // rcx
  __int64 v47; // rdi
  unsigned int v48; // edx
  unsigned __int64 v49; // rbx
  bool v50; // zf
  int v51; // eax
  char v52; // cl
  int v53; // eax
  char v54; // cl
  unsigned __int8 v55; // dl
  int v56; // eax
  _QWORD *v57; // rdx
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int8 (__fastcall *v61)(void *); // rdx
  __int64 v62; // r9
  __int64 v63; // rcx
  int v64; // r13d
  int v65; // r8d
  int v66; // r9d
  int v67; // r10d
  __int64 v68; // rcx
  __int64 v69; // rax
  unsigned int v70; // edx
  int v71; // eax
  int v72; // ecx
  __int64 v73; // rcx
  __int64 v74; // rax
  unsigned int v75; // edx
  __int64 v76; // r8
  unsigned int v77; // r9d
  unsigned __int64 v78; // rdx
  __int64 v79; // rdx
  int v80; // ecx
  int v81; // eax
  int v82; // ecx
  int v83; // eax
  char v84; // cl
  unsigned int v85; // eax
  struct _VIDSCH_GLOBAL *v86; // rdx
  __int64 v87; // rcx
  int v88; // eax
  char v89; // al
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rax
  struct HwQueueStagingList ***v93; // rcx
  __int64 v94; // rbx
  int v95; // eax
  int v96; // r9d
  __int64 v97; // r8
  _DWORD *v98; // rax
  void *v99; // rcx
  __int64 v100; // rax
  int v101; // eax
  int v102; // eax
  unsigned int j; // ebx
  __int64 v104; // rcx
  char v105; // cl
  int v106; // eax
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // r9
  char v111; // bl
  __int64 v112; // rcx
  __int64 v113; // rdx
  int v114; // eax
  __int64 v115; // rcx
  __int64 v116; // rdx
  int v117; // eax
  int v118; // r10d
  __int64 v119; // rdx
  __int64 v120; // r9
  __int64 v121; // r8
  int v122; // eax
  __int64 v123; // rcx
  __int64 v124; // rax
  unsigned int i; // edx
  __int64 v126; // rcx
  struct _VIDSCH_PRESENT_INFO *v127; // rbx
  int v128; // ecx
  int v129; // r8d
  _BYTE *v130; // rax
  void *v131; // r10
  int v132; // [rsp+28h] [rbp-148h]
  bool v133; // [rsp+38h] [rbp-138h]
  bool v134; // [rsp+40h] [rbp-130h]
  char v135; // [rsp+F0h] [rbp-80h] BYREF
  char v136; // [rsp+F1h] [rbp-7Fh] BYREF
  char v137[2]; // [rsp+F2h] [rbp-7Eh] BYREF
  unsigned int v138; // [rsp+F4h] [rbp-7Ch] BYREF
  __int64 v139; // [rsp+F8h] [rbp-78h]
  struct _VIDSCH_PRESENT_INFO *v140; // [rsp+100h] [rbp-70h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN *v141; // [rsp+108h] [rbp-68h]
  bool v142[8]; // [rsp+110h] [rbp-60h]
  unsigned int v143; // [rsp+118h] [rbp-58h]
  unsigned int v144; // [rsp+11Ch] [rbp-54h]
  PKSPIN_LOCK SpinLock; // [rsp+120h] [rbp-50h]
  int v146; // [rsp+128h] [rbp-48h] BYREF
  void *v147; // [rsp+130h] [rbp-40h]
  struct HwQueueStagingList *v148; // [rsp+138h] [rbp-38h]
  unsigned __int64 v149; // [rsp+140h] [rbp-30h]
  int v150; // [rsp+148h] [rbp-28h]
  int v151; // [rsp+14Ch] [rbp-24h]
  unsigned int v152; // [rsp+150h] [rbp-20h]
  int v153; // [rsp+154h] [rbp-1Ch]
  int v154; // [rsp+158h] [rbp-18h]
  _BYTE *v155; // [rsp+160h] [rbp-10h]
  struct _KLOCK_QUEUE_HANDLE v156; // [rsp+168h] [rbp-8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+180h] [rbp+10h] BYREF
  __int64 v158[2]; // [rsp+1A0h] [rbp+30h] BYREF
  unsigned int v159; // [rsp+1B0h] [rbp+40h]
  int v160; // [rsp+1B4h] [rbp+44h]
  __int64 v161; // [rsp+1B8h] [rbp+48h]
  int v162; // [rsp+1C0h] [rbp+50h]
  int v163; // [rsp+1C4h] [rbp+54h]
  __int64 v164; // [rsp+1C8h] [rbp+58h]
  __int64 v165; // [rsp+1D0h] [rbp+60h]
  __int64 v166; // [rsp+1D8h] [rbp+68h]
  __int64 v167; // [rsp+1E0h] [rbp+70h]
  __int64 v168; // [rsp+1E8h] [rbp+78h]
  char v169[16]; // [rsp+1F0h] [rbp+80h] BYREF
  _QWORD v170[270]; // [rsp+200h] [rbp+90h] BYREF

  v7 = a5;
  v9 = 0;
  v10 = a3;
  v11 = (__int64)a4;
  v148 = a1;
  v12 = *(struct _VIDSCH_PRESENT_INFO **)(a2 + 8LL * a3 + 3432);
  v13 = (__int64)a4 + 1400 * a5 + 120;
  *a7 = 0;
  v147 = a4;
  *(_DWORD *)v142 = a3;
  v138 = a5;
  v149 = (unsigned __int64)a6;
  v155 = a7;
  v140 = v12;
  if ( *(_BYTE *)(a2 + 59) )
  {
    PerformanceCounter = *(LARGE_INTEGER *)(v13 + 1312);
    if ( !PerformanceCounter.QuadPart )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *(LARGE_INTEGER *)(v13 + 1312) = PerformanceCounter;
    }
    if ( (*(_DWORD *)(v13 + 1152) & 0x100) == 0 )
    {
      if ( PerformanceCounter.QuadPart <= *(_QWORD *)(v11 + 104) )
        PerformanceCounter = *(LARGE_INTEGER *)(v11 + 104);
      *(LARGE_INTEGER *)(v13 + 1312) = PerformanceCounter;
    }
  }
  if ( *((_DWORD *)v12 + 1) == 3 || (v14 = 0, (*(_DWORD *)(v13 + 1152) & 0x100) != 0) )
    v14 = 1;
  v135 = v14;
  v146 = v14 != 0 ? 11 : 5;
  memset(v170, 0, sizeof(v170));
  if ( VidSchiCheckPendingFlipsForThisEntry(
         (struct _VIDSCH_GLOBAL *)a2,
         v12,
         (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v13,
         (struct VIDSCH_FLIP_QUEUE *)v11) )
  {
    goto LABEL_30;
  }
  if ( *(_DWORD *)(a2 + 3244)
    || (v16 = *(_QWORD *)(v13 + 1040), *(_BYTE *)(v16 + 204))
    || _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 200), 0, 0) )
  {
    *(_BYTE *)v149 = 1;
LABEL_13:
    if ( *((_QWORD *)v12 + 15) == v13 )
      *((_QWORD *)v12 + 15) = 0LL;
    if ( *(_QWORD *)(a2 + 3784) == v13 )
      *(_QWORD *)(a2 + 3784) = 0LL;
    v17 = *(_DWORD *)(v13 + 1152);
    if ( (v17 & 0x20) == 0 || !*(_QWORD *)(v13 + 1168) || (v17 & 0x100000) != 0 )
      goto LABEL_18;
    SetIndependentFlipStage((struct _D3DKMT_AUXILIARYPRESENTINFO **)v13, v15);
    v23 = *(_BYTE **)(v13 + 1192);
    v24 = *(_QWORD *)(v13 + 1352) != 0LL;
    v155 = v23;
    v25 = *(_DWORD *)(v13 + 1152);
    v147 = 0LL;
    v25 >>= 6;
    v26 = (void **)((v13 + 1352) & -(__int64)v24);
    v27 = *(_QWORD *)(v13 + 1176);
    LOBYTE(v25) = v25 & 1;
    *(_DWORD *)v142 = v25;
    v141 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v13 + 1168);
    SpinLock = *(PKSPIN_LOCK *)(v13 + 1160);
    v139 = v27;
    if ( v26 )
    {
      v131 = *v26;
      if ( *v26 )
      {
        v107 = *(_QWORD *)(((v13 + 1352) & -(__int64)v24) + 0x20);
        v108 = *(unsigned int *)(((v13 + 1352) & -(__int64)v24) + 8);
        v109 = *(_QWORD *)(((v13 + 1352) & -(__int64)v24) + 0x10);
        v110 = *(_QWORD *)(((v13 + 1352) & -(__int64)v24) + 0x18);
        v111 = *(_BYTE *)(((v13 + 1352) & -(__int64)v24) + 0x28) & 1;
        LOBYTE(v132) = v111;
        v147 = v131;
        ((void (__fastcall *)(void *, __int64, __int64, __int64, __int64, int))DxgCoreInterface[76])(
          v131,
          v108,
          v109,
          v110,
          v107,
          v132);
        if ( !v111 )
        {
          if ( (MEMORY[4] & 0x10) != 0 )
            ExpInterlockedPushEntrySList(
              (PSLIST_HEADER)SpinLock + 3,
              (PSLIST_ENTRY)(&v141[-1].Token.SurfaceComplete + 131));
          goto LABEL_37;
        }
        v27 = v139;
        v23 = v155;
      }
    }
    if ( v27 )
    {
      v44 = *((_QWORD *)v23 + 25);
      if ( v44 )
      {
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v27 + 16), &LockHandle);
        _InterlockedIncrement((volatile signed __int32 *)(v44 + 12));
        v45 = v139;
        v46 = *(void **)(v139 + 8);
        if ( v46 )
        {
          CRefCountedBuffer::RefCountedBufferRelease(v46);
          v45 = v139;
        }
        *(_QWORD *)(v45 + 8) = v44;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(SpinLock, v141, 1, v142[0], 0, 0, 0, v133, v134, v147);
LABEL_37:
    v12 = v140;
LABEL_18:
    v18 = v146;
    *(_DWORD *)(v13 + 1052) = v146;
    if ( v18 == 11 )
    {
      v86 = 0LL;
      v87 = 1400LL * *(unsigned int *)(v11 + 68);
      LODWORD(v141) = 0;
      v138 = 0;
      v88 = *(_DWORD *)(v87 + v11 + 1172);
      if ( v88 == 5 || (v50 = v88 == 15, v89 = 0, v50) )
        v89 = 1;
      if ( v89 )
      {
        LODWORD(v140) = 0;
        v162 = ((_BYTE)v7 - 1) & 0x3F;
        v164 = v170[266];
        v165 = v170[267];
        v166 = v170[268];
        v167 = v170[269];
        v137[0] = 0;
        v158[1] = 0LL;
        v160 = 0;
        v163 = 0;
        v168 = 0LL;
        v158[0] = a2;
        v159 = v10;
        v161 = v11;
        VidSchiProcessVsyncCompletedFlipEntry(v148, v158, (__int64)v169, &v140, &v138, v137);
        LODWORD(v141) = v138;
      }
      if ( *(_BYTE *)(a2 + 59) )
        VidSchiUpdateHwPresentTimeForImmediateFlip(
          (struct _VIDSCH_GLOBAL *)a2,
          (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v13,
          v10);
      v50 = (*(_DWORD *)(v13 + 1152) & 0x10) == 0;
      v90 = *(_QWORD *)(v13 + 1320);
      *(_QWORD *)(v13 + 1128) = v170[266];
      if ( v50 )
      {
        v100 = v170[267];
        *(_QWORD *)(v13 + 1144) = 0LL;
        if ( v90 )
          v100 = v90;
        *(_QWORD *)(v13 + 1112) = v100;
        v92 = v90;
      }
      else
      {
        *(_QWORD *)(v13 + 1144) = v170[268];
        v91 = v170[267];
        if ( v90 )
          v91 = v90;
        *(_QWORD *)(v13 + 1112) = v91;
        v92 = v170[269];
        if ( v90 )
          v92 = v90;
      }
      v93 = (struct HwQueueStagingList ***)v148;
      *(_QWORD *)(v13 + 1136) = v92;
      VidSchiUnreferenceDisplayingAllocationsForThisEntry(v93, v86, (__int64)v12, v13);
      VidSchiReferenceDisplayingAllocationsForThisEntry(v148);
      v94 = *(_QWORD *)(v13 + 1040);
      v95 = VidSchiCompleteFlipEntry(v148, a2, v10, v11, v7, v7, 0, 0LL);
      v96 = v95 + (_DWORD)v141;
      v97 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v94 + 40) + 32LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(v94 + 32) + 4LL))
                      + 8LL * v10
                      + 88);
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 8LL * v10 + 6712) + 8LL), -(v95 + (_DWORD)v141));
      v98 = *(_DWORD **)(a2 + 8LL * v10 + 6712);
      *v98 += v96;
      _InterlockedAdd((volatile signed __int32 *)(v97 + 8), -v96);
      *(_DWORD *)v97 += v96;
    }
    else
    {
      VidSchiIncrementPendingFlipsForFlipEntry((struct _VIDSCH_GLOBAL *)a2, v12, (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v13);
    }
    if ( *(_BYTE *)(a2 + 59) )
    {
      VidSchiSetNextFlipEarliestIdealTime(
        (struct _VIDSCH_GLOBAL *)a2,
        v10,
        (struct VIDSCH_FLIP_QUEUE *)v11,
        (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v13);
    }
    else
    {
      *(_QWORD *)(v13 + 1104) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(v11 + 112) = *(_DWORD *)(v13 + 1072);
    }
    v19 = 1400LL * *(unsigned int *)(v11 + 68);
    *(_DWORD *)(v11 + 72) = v7;
    v20 = *(_DWORD *)(v19 + v11 + 1172);
    if ( v20 != 15 && v20 != 5 )
      *(_DWORD *)(v11 + 68) = v7;
    *(_DWORD *)(v11 + 64) = ((_BYTE)v7 + 1) & 0x3F;
    VIDMM_GLOBAL::NotifyOnFlip(*(VIDMM_GLOBAL **)(*(_QWORD *)(a2 + 8) + 768LL));
    goto LABEL_26;
  }
  if ( *(_BYTE *)(a2 + 156) )
  {
    VidSchiExecuteMmIoFlipMultiPlaneOverlay3(
      (struct _VIDSCH_GLOBAL *)a2,
      v10,
      (struct VIDSCH_FLIP_QUEUE *)v11,
      (struct _VIDSCH_CALL_EXECUTE_FLIP *)v170,
      (enum _VIDSCH_FLIP_STATUS *)&v146,
      a5);
    v15 = v170[265];
    goto LABEL_10;
  }
  v29 = *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(v13 + 1192);
  if ( (*(_DWORD *)(v13 + 1152) & 0x10) != 0 )
  {
    v47 = 0LL;
    v48 = *(_DWORD *)v29 & 0x3FF;
    LODWORD(v49) = (*(_DWORD *)v29 >> 10) & 0x3FF;
    v144 = v48;
    v50 = !_BitScanForward((unsigned int *)&v51, v48);
    LODWORD(SpinLock) = v49;
    v52 = -1;
    v150 = v51;
    if ( !v50 )
      v52 = v51;
    v143 = 0;
    v50 = !_BitScanForward((unsigned int *)&v53, v49);
    v10 = v52;
    v54 = -1;
    v151 = v53;
    if ( !v50 )
      v54 = v53;
    LODWORD(v11) = v54;
    while ( 1 )
    {
      LODWORD(v141) = v47;
      if ( v48 || (_DWORD)v49 )
        goto LABEL_98;
      LODWORD(v49) = *(_DWORD *)(v13 + 1088);
      v10 = *(_DWORD *)v142;
      v11 = (__int64)v147;
      v55 = 8 * *(_DWORD *)(v13 + 1152);
      v170[0] = a2;
      HIDWORD(v170[67]) = *(_DWORD *)v142;
      LODWORD(v170[265]) = -1073741823;
      v56 = (LODWORD(v170[67]) | 4) ^ ((LOBYTE(v170[67]) | 4) ^ v55) & 8;
      LODWORD(v170[1]) = v49;
      LODWORD(v170[70]) = *(_DWORD *)(v13 + 1156);
      LODWORD(v170[67]) = v56 ^ ((unsigned __int8)v56 ^ v55) & 0x10 ^ ((unsigned __int8)(v56 ^ (v56 ^ v55) & 0x10) ^ v55) & 0x20;
      if ( (_DWORD)v49 )
      {
        v57 = &v170[2];
        v58 = (unsigned int)v49;
        do
        {
          *v57 = *(_QWORD *)(*(_QWORD *)((char *)v57 + v13 - (_QWORD)&v170[2]) + 64LL);
          ++v57;
          --v58;
        }
        while ( v58 );
        LODWORD(v49) = v170[1];
      }
      v59 = *(_QWORD *)(a2 + 16);
      v135 = 0;
      if ( *(_BYTE *)(v59 + 3018) )
        break;
      if ( *(_BYTE *)(v59 + 3019) )
      {
        v49 = (unsigned int)v47;
        memset((void *)(a2 + 5008), 0, (unsigned __int64)(unsigned int)v47 << 7);
        if ( (_DWORD)v47 )
        {
          v115 = a2 + 5012;
          v116 = a2 + 3812;
          do
          {
            *(_DWORD *)(v115 - 4) = *(_DWORD *)(v116 - 4);
            v117 = *(_DWORD *)v116;
            *(_DWORD *)v115 = *(_DWORD *)v116;
            if ( v117 )
            {
              *(_DWORD *)(v115 + 4) = *(_DWORD *)(v116 + 4);
              *(_QWORD *)(v115 + 12) = *(_QWORD *)(v116 + 12);
              *(_QWORD *)(v115 + 20) = *(_QWORD *)(v116 + 20);
              *(_DWORD *)(v115 + 28) = *(_DWORD *)(v116 + 28);
              *(_OWORD *)(v115 + 32) = *(_OWORD *)(v116 + 32);
              *(_OWORD *)(v115 + 48) = *(_OWORD *)(v116 + 48);
              *(_OWORD *)(v115 + 64) = *(_OWORD *)(v116 + 64);
              *(_DWORD *)(v115 + 80) = *(_DWORD *)(v116 + 80);
              *(_DWORD *)(v115 + 84) = *(_DWORD *)(v116 + 84);
              *(_DWORD *)(v115 + 88) = 0;
              *(_QWORD *)(v115 + 92) = 0LL;
              *(_DWORD *)(v115 + 100) = *(_DWORD *)(v116 + 88);
              *(_DWORD *)(v115 + 104) = *(_DWORD *)(v116 + 92);
              *(_DWORD *)(v115 + 108) = *(_DWORD *)(v116 + 96);
              *(_DWORD *)(v115 + 112) = *(_DWORD *)(v116 + 100);
              *(_DWORD *)(v115 + 116) = *(_DWORD *)(v116 + 104);
              *(_DWORD *)(v115 + 120) = *(_DWORD *)(v116 + 108);
            }
            v116 += 120LL;
            v115 += 128LL;
            --v49;
          }
          while ( v49 );
        }
LABEL_122:
        v60 = a2 + 5008;
        goto LABEL_82;
      }
      if ( *(_BYTE *)(v59 + 3020) && *(_QWORD *)(v59 + 1000) )
      {
        memset((void *)(a2 + 5008), 0, (unsigned __int64)(unsigned int)v47 << 7);
        v118 = 0;
        if ( (_DWORD)v47 )
        {
          v119 = a2 + 5012;
          v120 = (unsigned int)v47;
          v121 = a2 + 3812;
          do
          {
            *(_DWORD *)(v119 - 4) = *(_DWORD *)(v121 - 4);
            v122 = *(_DWORD *)v121;
            *(_DWORD *)v119 = *(_DWORD *)v121;
            if ( v122 )
            {
              *(_DWORD *)(v119 + 4) = *(_DWORD *)(v121 + 4);
              *(_QWORD *)(v119 + 12) = *(_QWORD *)(v121 + 12);
              *(_QWORD *)(v119 + 20) = *(_QWORD *)(v121 + 20);
              *(_DWORD *)(v119 + 28) = *(_DWORD *)(v121 + 28);
              *(_OWORD *)(v119 + 32) = *(_OWORD *)(v121 + 32);
              *(_OWORD *)(v119 + 48) = *(_OWORD *)(v121 + 48);
              *(_OWORD *)(v119 + 64) = *(_OWORD *)(v121 + 64);
              *(_DWORD *)(v119 + 80) = *(_DWORD *)(v121 + 80);
              *(_DWORD *)(v119 + 84) = *(_DWORD *)(v121 + 84);
              *(_DWORD *)(v119 + 88) = *(_DWORD *)(v121 + 88);
              *(_DWORD *)(v119 + 96) = *(_DWORD *)(v121 + 96);
              *(_DWORD *)(v119 + 100) = *(_DWORD *)(v121 + 100);
              *(_DWORD *)(v119 + 104) = *(_DWORD *)(v121 + 104);
              *(_DWORD *)(v119 + 108) = *(_DWORD *)(v121 + 108);
              *(_DWORD *)(v119 + 112) = *(_DWORD *)(v121 + 112);
              *(_DWORD *)(v119 + 116) = 0;
              v123 = *(_QWORD *)(v13 + 1192);
              v124 = v118 * ((8 * *(_DWORD *)(v123 + 8) + 231) & 0xFFFFFFF8);
              ++v118;
              *(_DWORD *)(v119 + 92) = *(_DWORD *)(v124 + v123 + 184);
            }
            v119 += 128LL;
            v121 += 120LL;
            --v120;
          }
          while ( v120 );
        }
        for ( i = 0; i < (unsigned int)v49; ++i )
          ;
        v60 = a2 + 5008;
        v61 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2;
        goto LABEL_83;
      }
      v60 = a2 + 3808;
LABEL_82:
      v61 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR;
LABEL_83:
      v62 = *(unsigned int *)(a2 + 32);
      v63 = *(_QWORD *)(a2 + 24);
      v170[69] = v60;
      LODWORD(v170[68]) = v47;
      DpSynchronizeExecution(v63, v61, v170, v62, &v135);
      if ( bTracingEnabled && (_DWORD)v47 )
      {
        v49 = a2 + 3880;
        v64 = 0;
        do
        {
          v65 = *(_DWORD *)(v49 - 68);
          LOBYTE(v66) = 0;
          LOBYTE(v67) = 0;
          if ( v65 )
          {
            v68 = *(_QWORD *)(v13 + 1192);
            v69 = v64 * ((8 * *(_DWORD *)(v68 + 8) + 231) & 0xFFFFFFF8);
            ++v64;
            v66 = *(_DWORD *)(v69 + v68 + 184);
            v67 = *(_DWORD *)(v69 + v68 + 192);
          }
          if ( (*(_DWORD *)(v13 + 1152) & 0x10) != 0 )
            v70 = ((unsigned __int16)**(_DWORD **)(v13 + 1192) | (unsigned __int16)(**(_DWORD **)(v13 + 1192) >> 10)) & 0x3FF;
          else
            v70 = (1 << *(_DWORD *)(a2 + 152)) - 1;
          v50 = !_BitScanForward((unsigned int *)&v71, v70);
          v72 = -1;
          v154 = v71;
          if ( !v50 )
            v72 = v71;
          *(_DWORD *)&v142[4] = *(_DWORD *)(v13 + 1048);
          *(_DWORD *)v142 = (char)v72;
          if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
            McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer(
              v72,
              v70,
              v65,
              *(_QWORD *)(a2 + 16),
              v10,
              *(_DWORD *)(v49 - 72),
              v142[0],
              *(_QWORD *)(v49 - 48),
              *(_QWORD *)(v49 - 56),
              *(_DWORD *)(v49 - 64),
              *(_DWORD *)(v13 + 1056),
              *(_DWORD *)(v13 + 1080),
              *(_DWORD *)(v49 - 36),
              *(_DWORD *)(v49 - 28),
              *(_DWORD *)(v49 - 32),
              *(_DWORD *)(v49 - 24),
              *(_DWORD *)(v49 - 20),
              *(_DWORD *)(v49 - 12),
              *(_DWORD *)(v49 - 16),
              *(_DWORD *)(v49 - 8),
              *(_DWORD *)(v49 - 4),
              *(_DWORD *)(v49 + 4),
              *(_DWORD *)v49,
              *(_DWORD *)(v49 + 8),
              v66,
              5,
              v65,
              v67,
              0);
          v49 += 120LL;
          --v47;
        }
        while ( v47 );
        v11 = (__int64)v147;
      }
      v15 = v170[265];
      if ( !LODWORD(v170[265]) )
        goto LABEL_60;
      v73 = *(_QWORD *)(a2 + 16);
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 11LL, SLODWORD(v170[265]), v170, v73);
      WdLogGlobalForLineNumber = 906;
LABEL_98:
      v149 = (unsigned int)v47;
      v139 = 120LL * (unsigned int)v47;
      memset((void *)(v139 + a2 + 3816), 0, 0x70uLL);
      v74 = v139;
      if ( v10 >= (unsigned int)v11 )
      {
        v48 = v144;
        *(_DWORD *)(v139 + a2 + 3808) = v11;
        *(_DWORD *)(v74 + a2 + 3812) = 0;
        v105 = -1;
        LODWORD(v49) = ~(1 << v11) & v49;
        v50 = !_BitScanForward((unsigned int *)&v74, v49);
        LODWORD(SpinLock) = v49;
        v153 = v106;
        if ( !v50 )
          v105 = v74;
        LODWORD(v11) = v105;
      }
      else
      {
        v75 = v143;
        *(_DWORD *)(v139 + a2 + 3808) = v10;
        *(_DWORD *)(v74 + a2 + 3812) = 1;
        v47 = *(_QWORD *)(v13 + 1192);
        v49 = v75 * ((8 * *(_DWORD *)(v47 + 8) + 231) & 0xFFFFFFF8);
        VidSchiBindFlipPhysicalAddress((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)v47, v75, 0);
        v76 = v139;
        v77 = v143;
        v78 = (unsigned __int64)v143 << 6;
        *(_DWORD *)(v139 + a2 + 3816) = *(unsigned __int16 *)(v78
                                                            + *(_DWORD *)(*(_QWORD *)(v13 + 1192) + 4LL)
                                                            * ((8 * *(_DWORD *)(*(_QWORD *)(v13 + 1192) + 8LL) + 231) & 0xFFFFFFF8)
                                                            + *(_QWORD *)(v13 + 1192)
                                                            + 32);
        *(_QWORD *)(v76 + a2 + 3824) = *(_QWORD *)(v78
                                                 + *(_DWORD *)(*(_QWORD *)(v13 + 1192) + 4LL)
                                                 * ((8 * *(_DWORD *)(*(_QWORD *)(v13 + 1192) + 8LL) + 231) & 0xFFFFFFF8)
                                                 + *(_QWORD *)(v13 + 1192)
                                                 + 40);
        *(_QWORD *)(v76 + a2 + 3832) = *(_QWORD *)(v78
                                                 + *(_DWORD *)(*(_QWORD *)(v13 + 1192) + 4LL)
                                                 * ((8 * *(_DWORD *)(*(_QWORD *)(v13 + 1192) + 8LL) + 231) & 0xFFFFFFF8)
                                                 + *(_QWORD *)(v13 + 1192)
                                                 + 24);
        v79 = 120 * (v149 + 32);
        v80 = *(_DWORD *)(v79 + a2) ^ (*(_DWORD *)(v49 + v47 + 188) ^ *(_DWORD *)(v79 + a2)) & 1;
        *(_DWORD *)(v79 + a2) = v80;
        *(_DWORD *)(v79 + a2) = v80 ^ (*(_DWORD *)(v49 + v47 + 188) ^ v80) & 2;
        *(_DWORD *)(v76 + a2 + 3844) = (unsigned __int16)*(_DWORD *)(v49 + v47 + 160);
        *(_DWORD *)(v76 + a2 + 3848) = (unsigned __int16)*(_DWORD *)(v49 + v47 + 164);
        *(_DWORD *)(v76 + a2 + 3852) = *(unsigned __int16 *)(v49 + v47 + 162);
        *(_DWORD *)(v76 + a2 + 3856) = *(unsigned __int16 *)(v49 + v47 + 166);
        *(_DWORD *)(v76 + a2 + 3860) = *(__int16 *)(v49 + v47 + 168);
        *(_DWORD *)(v76 + a2 + 3864) = *(__int16 *)(v49 + v47 + 172);
        *(_DWORD *)(v76 + a2 + 3868) = *(unsigned __int16 *)(v49 + v47 + 170);
        *(_DWORD *)(v76 + a2 + 3872) = *(unsigned __int16 *)(v49 + v47 + 174);
        *(_DWORD *)(v76 + a2 + 3876) = (unsigned __int16)*(_DWORD *)(v49 + v47 + 176);
        *(_DWORD *)(v76 + a2 + 3880) = (unsigned __int16)*(_DWORD *)(v49 + v47 + 180);
        *(_DWORD *)(v76 + a2 + 3884) = *(unsigned __int16 *)(v49 + v47 + 178);
        *(_DWORD *)(v76 + a2 + 3888) = *(unsigned __int16 *)(v49 + v47 + 182);
        v81 = (*(_DWORD *)(v49 + v47 + 188) >> 3) & 3;
        v143 = v77 + 1;
        *(_DWORD *)(v76 + a2 + 3892) = v81 + 1;
        *(_DWORD *)(v76 + a2 + 3896) ^= ((unsigned __int8)*(_DWORD *)(v76 + a2 + 3896) ^ (unsigned __int8)(*(_DWORD *)(v49 + v47 + 188) >> 2)) & 1;
        *(_DWORD *)(v76 + a2 + 3900) = (*(_DWORD *)(v49 + v47 + 188) >> 5) & 3;
        v82 = *(_DWORD *)(v76 + a2 + 3904) ^ ((unsigned __int8)*(_DWORD *)(v76 + a2 + 3904) ^ (unsigned __int8)(*(_DWORD *)(v49 + v47 + 188) >> 7)) & 1;
        *(_DWORD *)(v76 + a2 + 3904) = v82;
        LODWORD(v79) = v82 ^ ((unsigned __int8)v82 ^ (unsigned __int8)(*(_DWORD *)(v49 + v47 + 188) >> 7)) & 2;
        *(_DWORD *)(v76 + a2 + 3904) = v79;
        v83 = v79 ^ ((unsigned __int8)v79 ^ (unsigned __int8)(*(_DWORD *)(v49 + v47 + 188) >> 7)) & 4;
        LODWORD(v79) = v144;
        *(_DWORD *)(v76 + a2 + 3904) = v83;
        *(_DWORD *)(v76 + a2 + 3908) = (*(_DWORD *)(v49 + v47 + 188) >> 10) & 7;
        *(_DWORD *)(v76 + a2 + 3912) = (*(_DWORD *)(v49 + v47 + 188) >> 13) & 1;
        *(_DWORD *)(v76 + a2 + 3916) = (*(_DWORD *)(v49 + v47 + 188) >> 14) & 1;
        v85 = *(_DWORD *)(v49 + v47 + 188);
        LODWORD(v47) = (_DWORD)v141;
        LODWORD(v49) = (_DWORD)SpinLock;
        *(_DWORD *)(v76 + a2 + 3920) = (v85 >> 15) & 3;
        v84 = -1;
        v48 = ~(1 << v10) & v79;
        v50 = !_BitScanForward(&v85, v48);
        v144 = v48;
        v152 = v85;
        if ( !v50 )
          v84 = v85;
        v10 = v84;
      }
      v47 = (unsigned int)(v47 + 1);
    }
    v49 = (unsigned int)v47;
    memset((void *)(a2 + 5008), 0, 112LL * (unsigned int)v47);
    if ( (_DWORD)v47 )
    {
      v112 = a2 + 5012;
      v113 = a2 + 3812;
      do
      {
        *(_DWORD *)(v112 - 4) = *(_DWORD *)(v113 - 4);
        v114 = *(_DWORD *)v113;
        *(_DWORD *)v112 = *(_DWORD *)v113;
        if ( v114 )
        {
          *(_DWORD *)(v112 + 4) = *(_DWORD *)(v113 + 4);
          *(_QWORD *)(v112 + 12) = *(_QWORD *)(v113 + 12);
          *(_QWORD *)(v112 + 20) = *(_QWORD *)(v113 + 20);
          *(_DWORD *)(v112 + 28) = *(_DWORD *)(v113 + 28);
          *(_OWORD *)(v112 + 32) = *(_OWORD *)(v113 + 32);
          *(_OWORD *)(v112 + 48) = *(_OWORD *)(v113 + 48);
          *(_DWORD *)(v112 + 64) = *(_DWORD *)(v113 + 80);
          *(_DWORD *)(v112 + 68) = *(_DWORD *)(v113 + 84);
          *(_DWORD *)(v112 + 72) = 0;
          *(_QWORD *)(v112 + 76) = 0LL;
          *(_DWORD *)(v112 + 84) = *(_DWORD *)(v113 + 88);
          *(_DWORD *)(v112 + 88) = *(_DWORD *)(v113 + 92);
          *(_DWORD *)(v112 + 92) = *(_DWORD *)(v113 + 96);
          *(_DWORD *)(v112 + 96) = *(_DWORD *)(v113 + 100);
          *(_DWORD *)(v112 + 100) = *(_DWORD *)(v113 + 104);
          *(_DWORD *)(v112 + 104) = *(_DWORD *)(v113 + 108);
        }
        v113 += 120LL;
        v112 += 112LL;
        --v49;
      }
      while ( v49 );
    }
    goto LABEL_122;
  }
  v170[0] = a2;
  LODWORD(v170[1]) = v10;
  VidSchiBindFlipPhysicalAddress(v29, 0, 0);
  v30 = *(_QWORD *)(v13 + 1192);
  HIDWORD(v170[1]) = *(unsigned __int16 *)(*(_DWORD *)(v30 + 4) * ((8 * *(_DWORD *)(v30 + 8) + 231) & 0xFFFFFFF8)
                                         + v30
                                         + 32);
  v170[2] = *(_QWORD *)(*(_DWORD *)(v30 + 4) * ((8 * *(_DWORD *)(v30 + 8) + 231) & 0xFFFFFFF8) + v30 + 40);
  v31 = *(_DWORD *)(v13 + 1156);
  v170[3] = *(_QWORD *)(*(_DWORD *)(v30 + 4) * ((8 * *(_DWORD *)(v30 + 8) + 231) & 0xFFFFFFF8) + v30 + 24);
  LODWORD(v33) = *(_DWORD *)(v13 + 1152);
  v32 = v33 & 0xF;
  LODWORD(v33) = v33 & 0x20;
  LODWORD(v170[265]) = -1073741823;
  v34 = v170[70] & 0xFFFFFF07 | (4 * (v33 | (2 * v32)));
  v170[70] = __PAIR64__(v31, v34);
  v35 = *(_QWORD *)(v30 + 200);
  if ( v35 )
  {
    LODWORD(v170[263]) = *(_DWORD *)(v35 + 8);
    v170[264] = v35 + 16;
  }
  v36 = *(_QWORD *)(v13 + 1176);
  if ( v36 )
  {
    memset(&v156, 0, sizeof(v156));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v36 + 16), &v156);
    if ( v35 )
      _InterlockedIncrement((volatile signed __int32 *)(v35 + 12));
    v99 = *(void **)(v36 + 8);
    if ( v99 )
      CRefCountedBuffer::RefCountedBufferRelease(v99);
    *(_QWORD *)(v36 + 8) = v35;
    KeReleaseInStackQueuedSpinLock(&v156);
    v34 = v170[70];
  }
  v37 = 0;
  LODWORD(v170[4]) = *(_DWORD *)(v13 + 1088);
  if ( LODWORD(v170[4]) )
  {
    v38 = *(_QWORD *)(v13 + 1192);
    do
    {
      v39 = *(_DWORD *)(v38 + 4);
      LODWORD(v33) = v37;
      v40 = v39 * ((8 * *(_DWORD *)(v38 + 8) + 231) & 0xFFFFFFF8);
      v30 = (unsigned __int64)(v37 * v39) << 6;
      v170[v37 + 5] = *(_QWORD *)(v30 + v38 + v40 + 16);
      if ( v37 )
      {
        v170[3 * v37 + 68] = *(_QWORD *)(((unsigned __int64)(v37 * *(_DWORD *)(v38 + 4)) << 6)
                                       + v38
                                       + *(_DWORD *)(v38 + 4) * ((8 * *(_DWORD *)(v38 + 8) + 231) & 0xFFFFFFF8)
                                       + 24);
        VidSchiBindFlipPhysicalAddress((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)v38, 0, v37);
        v38 = *(_QWORD *)(v13 + 1192);
        LOWORD(v170[3 * v37 + 69]) = *(_WORD *)(((unsigned __int64)(v37 * *(_DWORD *)(v38 + 4)) << 6)
                                              + v38
                                              + *(_DWORD *)(v38 + 4) * ((8 * *(_DWORD *)(v38 + 8) + 231) & 0xFFFFFFF8)
                                              + 32);
        v33 = *(_QWORD *)(((unsigned __int64)(v37 * *(_DWORD *)(v38 + 4)) << 6)
                        + v38
                        + *(_DWORD *)(v38 + 4) * ((8 * *(_DWORD *)(v38 + 8) + 231) & 0xFFFFFFF8)
                        + 40);
        v170[3 * v37 + 70] = v33;
      }
      ++v37;
    }
    while ( v37 < *(_DWORD *)(v13 + 1088) );
    v34 = v170[70];
  }
  if ( v135 )
    v41 = v34 | 2;
  else
    v41 = v34 | 4;
  LODWORD(v170[70]) = v41;
  if ( bTracingEnabled && Microsoft_Windows_DxgKrnlEnableBits < 0 )
    McTemplateK0pqqpxqqqq_EtwWriteTransfer(
      v33,
      v30,
      v41,
      *(_QWORD *)(a2 + 16),
      v10,
      *(_DWORD *)(v13 + 1048),
      v170[3],
      v170[2],
      SBYTE4(v170[1]),
      *(_DWORD *)(v13 + 1056),
      *(_DWORD *)(v13 + 1080),
      v41);
  v42 = *(unsigned int *)(a2 + 32);
  v43 = *(_QWORD *)(a2 + 24);
  v136 = 0;
  DpSynchronizeExecution(v43, VidSchiExecuteMmIoFlipAtISR, v170, v42, &v136);
  v15 = v170[265];
LABEL_60:
  v7 = v138;
LABEL_10:
  if ( v15 >= D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE_FLIP_SUBMITTED )
  {
    v12 = v140;
    goto LABEL_13;
  }
  if ( v15 != -1073741811 )
  {
    v22 = v170[2];
    if ( v15 == -2147483631 )
      goto LABEL_129;
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 3049LL) && v15 == -1073741267 )
    {
      if ( (v170[2] & 2) == 0 )
      {
        *(_DWORD *)(v13 + 1152) |= 0x10000u;
        v9 = 259;
        *(_DWORD *)(v13 + 1052) = 13;
LABEL_26:
        VidSchiUpdateFlipQueueHistory(1, a2, v10, v11, v7);
        return v9;
      }
LABEL_129:
      v101 = *(_DWORD *)(v13 + 1152);
      *(_DWORD *)(v13 + 1052) = 14;
      *(_DWORD *)(v13 + 1152) = v101 & 0xFFF8FFFF | ((v22 & 0xC | (2 * (v22 & 1))) << 15);
      VidSchiUpdateFlipQueueHistory(5, a2, v10, v11, v7);
      v102 = *(_DWORD *)(v13 + 1152);
      if ( (v102 & 0x20000) != 0 )
      {
        if ( *(_BYTE *)(v11 + 80) )
        {
          if ( (v102 & 0x40000) != 0 )
          {
            for ( j = 0; j < *(_DWORD *)(a2 + 40); ++j )
            {
              v104 = *(_QWORD *)(a2 + 8LL * j + 3432);
              if ( v104 && *(_DWORD *)(v104 + 3248) )
                VidSchiCancelAndRequeueIndependentFlips((struct _VIDSCH_GLOBAL *)a2, j);
            }
          }
          else
          {
            VidSchiCancelAndRequeueIndependentFlips((struct _VIDSCH_GLOBAL *)a2, v10);
          }
          v127 = v140;
          if ( VidSchiStallingFlipEntryUnblocked(
                 (struct _VIDSCH_GLOBAL *)a2,
                 v140,
                 (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v13,
                 0LL) )
          {
            v130 = v155;
            *(_DWORD *)(v13 + 1052) = 4;
            *v130 = 1;
            if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
              McTemplateK0pqq_EtwWriteTransfer(
                v128,
                (unsigned int)&MmIoFlipResubmit,
                v129,
                *(_QWORD *)(a2 + 16),
                v10,
                *(_DWORD *)(v13 + 1048));
            goto LABEL_180;
          }
        }
        else
        {
          v127 = v140;
        }
        if ( (*(_DWORD *)(v13 + 1152) & 0x40000) != 0 )
          *(_QWORD *)(a2 + 3784) = v13;
        else
          *((_QWORD *)v127 + 15) = v13;
      }
      else
      {
        v127 = v140;
      }
LABEL_180:
      VidSchiKeepInterruptTargetEnabledForFlip(
        (struct _VIDSCH_GLOBAL *)a2,
        (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v13,
        v127);
      return 3221226029LL;
    }
LABEL_30:
    VidSchiUpdateFlipQueueHistory(2, a2, v10, v11, v7);
    return 259LL;
  }
  if ( (*(_DWORD *)(v13 + 1152) & 0x10) != 0 || (v170[70] & 0x40) == 0 )
  {
    WdLogSingleEntry0(1LL);
    v126 = 22411LL;
    WdLogGlobalForLineNumber = 22411;
  }
  else
  {
    WdLogSingleEntry2(
      1LL,
      *(_QWORD *)(*(_DWORD *)(*(_QWORD *)(v13 + 1192) + 4LL)
                * ((8 * *(_DWORD *)(*(_QWORD *)(v13 + 1192) + 8LL) + 231) & 0xFFFFFFF8)
                + *(_QWORD *)(v13 + 1192)
                + 24LL),
      v10);
    v126 = *(_QWORD *)(v13 + 1192);
    WdLogGlobalForLineNumber = 22407;
  }
  DxgkLogInternalTriageEvent(v126, 0x40000LL);
  VidSchiUpdateFlipQueueHistory(2, a2, v10, v11, v7);
  return 3221225485LL;
}
