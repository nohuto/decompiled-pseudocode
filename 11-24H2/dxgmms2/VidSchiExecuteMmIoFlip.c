/*
 * XREFs of VidSchiExecuteMmIoFlip @ 0x14002D920
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1400124E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x14001C74C (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140027780 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchUnwaitFlipQueue @ 0x14002A240 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14002D1D0 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     ?VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1400310FC (-VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAU.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000DBE8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111111PEAX@Z @ 0x140026104 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140026328 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x14002A7D4 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x14002AB90 (VidSchiCompleteFlipEntry.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x14002CD18 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     ?SetIndependentFlipStage@@YAXPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE@@@Z @ 0x14002CF50 (-SetIndependentFlipStage@@YAXPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x14002D4D0 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ?VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14002D730 (-VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x14002D850 (-NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14002EEFC (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x14002F478 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer @ 0x140030DB8 (McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer.c)
 *     ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x140038B10 (-VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z.c)
 *     ?VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@I@Z @ 0x140039FC4 (-VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY.c)
 *     ?VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14003CF7C (-VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH.c)
 *     McTemplateK0pqqpxqqqq_EtwWriteTransfer @ 0x14003FD80 (McTemplateK0pqqpxqqqq_EtwWriteTransfer.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x140046FC8 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     ?VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@@Z @ 0x140049E6C (-VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@.c)
 *     ?VidSchiStallingFlipEntryUnblocked@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAI@Z @ 0x14004B04C (-VidSchiStallingFlipEntryUnblocked@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSC.c)
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14005392C (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     memset @ 0x140056340 (memset.c)
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
  __int64 v23; // r8
  _BYTE *v24; // rdx
  bool v25; // cf
  unsigned int v26; // eax
  void **v27; // rbx
  __int64 v28; // rcx
  LARGE_INTEGER PerformanceCounter; // rcx
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned int v32; // eax
  int v33; // r8d
  __int64 v34; // rcx
  unsigned int v35; // r8d
  __int64 v36; // rbx
  __int64 v37; // rdi
  unsigned int v38; // edi
  __int64 v39; // r9
  int v40; // edx
  __int64 v41; // rax
  int v42; // r8d
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // rax
  void *v47; // rcx
  __int64 v48; // rdi
  unsigned int v49; // edx
  unsigned __int64 v50; // rbx
  bool v51; // zf
  int v52; // eax
  char v53; // cl
  int v54; // eax
  char v55; // cl
  unsigned __int8 v56; // dl
  int v57; // eax
  _QWORD *v58; // rdx
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // rax
  unsigned __int8 (__fastcall *v62)(void *); // rdx
  __int64 v63; // r9
  __int64 v64; // rcx
  int v65; // r13d
  int v66; // r8d
  int v67; // r9d
  int v68; // r10d
  __int64 v69; // rcx
  __int64 v70; // rax
  unsigned int v71; // edx
  int v72; // eax
  int v73; // ecx
  __int64 v74; // rcx
  __int64 v75; // rax
  unsigned int v76; // edx
  __int64 v77; // r8
  unsigned int v78; // r9d
  unsigned __int64 v79; // rdx
  __int64 v80; // rdx
  int v81; // ecx
  int v82; // eax
  int v83; // ecx
  int v84; // eax
  char v85; // cl
  unsigned int v86; // eax
  struct _VIDSCH_GLOBAL *v87; // rdx
  __int64 v88; // rcx
  int v89; // eax
  char v90; // al
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rax
  struct HwQueueStagingList ***v94; // rcx
  __int64 v95; // rbx
  int v96; // eax
  int v97; // r9d
  __int64 v98; // r8
  _DWORD *v99; // rax
  void *v100; // rcx
  __int64 v101; // rax
  int v102; // eax
  int v103; // eax
  unsigned int j; // ebx
  __int64 v105; // rcx
  char v106; // cl
  int v107; // eax
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // r8
  __int64 v111; // r9
  char v112; // bl
  __int64 v113; // rcx
  __int64 v114; // rdx
  int v115; // eax
  __int64 v116; // rcx
  __int64 v117; // rdx
  int v118; // eax
  int v119; // r10d
  __int64 v120; // rdx
  __int64 v121; // r9
  __int64 v122; // r8
  int v123; // eax
  __int64 v124; // rcx
  __int64 v125; // rax
  unsigned int i; // edx
  __int64 v127; // rcx
  struct _VIDSCH_PRESENT_INFO *v128; // rbx
  _BYTE *v129; // rax
  void *v130; // r10
  int v131; // [rsp+28h] [rbp-148h]
  char v132; // [rsp+F0h] [rbp-80h] BYREF
  char v133; // [rsp+F1h] [rbp-7Fh] BYREF
  char v134[2]; // [rsp+F2h] [rbp-7Eh] BYREF
  unsigned int v135; // [rsp+F4h] [rbp-7Ch] BYREF
  __int64 v136; // [rsp+F8h] [rbp-78h]
  struct _VIDSCH_PRESENT_INFO *v137; // [rsp+100h] [rbp-70h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN *v138; // [rsp+108h] [rbp-68h]
  bool v139[8]; // [rsp+110h] [rbp-60h]
  unsigned int v140; // [rsp+118h] [rbp-58h]
  unsigned int v141; // [rsp+11Ch] [rbp-54h]
  PKSPIN_LOCK SpinLock; // [rsp+120h] [rbp-50h]
  int v143; // [rsp+128h] [rbp-48h] BYREF
  void *v144; // [rsp+130h] [rbp-40h]
  struct HwQueueStagingList *v145; // [rsp+138h] [rbp-38h]
  unsigned __int64 v146; // [rsp+140h] [rbp-30h]
  int v147; // [rsp+148h] [rbp-28h]
  int v148; // [rsp+14Ch] [rbp-24h]
  unsigned int v149; // [rsp+150h] [rbp-20h]
  int v150; // [rsp+154h] [rbp-1Ch]
  int v151; // [rsp+158h] [rbp-18h]
  _BYTE *v152; // [rsp+160h] [rbp-10h]
  struct _KLOCK_QUEUE_HANDLE v153; // [rsp+168h] [rbp-8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+180h] [rbp+10h] BYREF
  __int64 v155[2]; // [rsp+1A0h] [rbp+30h] BYREF
  unsigned int v156; // [rsp+1B0h] [rbp+40h]
  int v157; // [rsp+1B4h] [rbp+44h]
  __int64 v158; // [rsp+1B8h] [rbp+48h]
  int v159; // [rsp+1C0h] [rbp+50h]
  int v160; // [rsp+1C4h] [rbp+54h]
  __int64 v161; // [rsp+1C8h] [rbp+58h]
  __int64 v162; // [rsp+1D0h] [rbp+60h]
  __int64 v163; // [rsp+1D8h] [rbp+68h]
  __int64 v164; // [rsp+1E0h] [rbp+70h]
  __int64 v165; // [rsp+1E8h] [rbp+78h]
  char v166[16]; // [rsp+1F0h] [rbp+80h] BYREF
  _QWORD v167[270]; // [rsp+200h] [rbp+90h] BYREF

  v7 = a5;
  v9 = 0;
  v10 = a3;
  v11 = (__int64)a4;
  v145 = a1;
  v12 = *(struct _VIDSCH_PRESENT_INFO **)(a2 + 8LL * a3 + 3432);
  v13 = (__int64)a4 + 1400 * a5 + 120;
  *a7 = 0;
  v144 = a4;
  *(_DWORD *)v139 = a3;
  v135 = a5;
  v146 = (unsigned __int64)a6;
  v152 = a7;
  v137 = v12;
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
  v132 = v14;
  v143 = v14 != 0 ? 11 : 5;
  memset(v167, 0, sizeof(v167));
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
    *(_BYTE *)v146 = 1;
LABEL_13:
    if ( *((_QWORD *)v12 + 15) == v13 )
      *((_QWORD *)v12 + 15) = 0LL;
    if ( *(_QWORD *)(a2 + 3784) == v13 )
      *(_QWORD *)(a2 + 3784) = 0LL;
    v17 = *(_DWORD *)(v13 + 1152);
    if ( (v17 & 0x20) == 0 || !*(_QWORD *)(v13 + 1168) || (v17 & 0x100000) != 0 )
      goto LABEL_18;
    SetIndependentFlipStage((struct _D3DKMT_AUXILIARYPRESENTINFO **)v13, v15);
    v24 = *(_BYTE **)(v13 + 1192);
    v25 = *(_QWORD *)(v13 + 1352) != 0LL;
    v152 = v24;
    v26 = *(_DWORD *)(v13 + 1152);
    v144 = 0LL;
    v26 >>= 6;
    v27 = (void **)((v13 + 1352) & -(__int64)v25);
    v28 = *(_QWORD *)(v13 + 1176);
    LOBYTE(v26) = v26 & 1;
    *(_DWORD *)v139 = v26;
    v138 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v13 + 1168);
    SpinLock = *(PKSPIN_LOCK *)(v13 + 1160);
    v136 = v28;
    if ( v27 )
    {
      v130 = *v27;
      if ( *v27 )
      {
        v108 = *(_QWORD *)(((v13 + 1352) & -(__int64)v25) + 0x20);
        v109 = *(unsigned int *)(((v13 + 1352) & -(__int64)v25) + 8);
        v110 = *(_QWORD *)(((v13 + 1352) & -(__int64)v25) + 0x10);
        v111 = *(_QWORD *)(((v13 + 1352) & -(__int64)v25) + 0x18);
        v112 = *(_BYTE *)(((v13 + 1352) & -(__int64)v25) + 0x28) & 1;
        LOBYTE(v131) = v112;
        v144 = v130;
        ((void (__fastcall *)(void *, __int64, __int64, __int64, __int64, int))DxgCoreInterface[76])(
          v130,
          v109,
          v110,
          v111,
          v108,
          v131);
        if ( !v112 )
        {
          if ( (MEMORY[4] & 0x10) != 0 )
            ExpInterlockedPushEntrySList(
              (PSLIST_HEADER)SpinLock + 3,
              (PSLIST_ENTRY)(&v138[-1].Token.SurfaceComplete + 131));
          goto LABEL_37;
        }
        v28 = v136;
        v24 = v152;
      }
    }
    if ( v28 )
    {
      v45 = *((_QWORD *)v24 + 25);
      if ( v45 )
      {
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v28 + 16), &LockHandle);
        _InterlockedIncrement((volatile signed __int32 *)(v45 + 12));
        v46 = v136;
        v47 = *(void **)(v136 + 8);
        if ( v47 )
        {
          CRefCountedBuffer::RefCountedBufferRelease(v47);
          v46 = v136;
        }
        *(_QWORD *)(v46 + 8) = v45;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    LOBYTE(v23) = 1;
    DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(SpinLock, v138, v23, v139[0], 0, 0, 0);
LABEL_37:
    v12 = v137;
LABEL_18:
    v18 = v143;
    *(_DWORD *)(v13 + 1052) = v143;
    if ( v18 == 11 )
    {
      v87 = 0LL;
      v88 = 1400LL * *(unsigned int *)(v11 + 68);
      LODWORD(v138) = 0;
      v135 = 0;
      v89 = *(_DWORD *)(v88 + v11 + 1172);
      if ( v89 == 5 || (v51 = v89 == 15, v90 = 0, v51) )
        v90 = 1;
      if ( v90 )
      {
        LODWORD(v137) = 0;
        v159 = ((_BYTE)v7 - 1) & 0x3F;
        v161 = v167[266];
        v162 = v167[267];
        v163 = v167[268];
        v164 = v167[269];
        v134[0] = 0;
        v155[1] = 0LL;
        v157 = 0;
        v160 = 0;
        v165 = 0LL;
        v155[0] = a2;
        v156 = v10;
        v158 = v11;
        VidSchiProcessVsyncCompletedFlipEntry(v145, v155, (__int64)v166, &v137, &v135, v134);
        LODWORD(v138) = v135;
      }
      if ( *(_BYTE *)(a2 + 59) )
        VidSchiUpdateHwPresentTimeForImmediateFlip(
          (struct _VIDSCH_GLOBAL *)a2,
          (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v13,
          v10);
      v51 = (*(_DWORD *)(v13 + 1152) & 0x10) == 0;
      v91 = *(_QWORD *)(v13 + 1320);
      *(_QWORD *)(v13 + 1128) = v167[266];
      if ( v51 )
      {
        v101 = v167[267];
        *(_QWORD *)(v13 + 1144) = 0LL;
        if ( v91 )
          v101 = v91;
        *(_QWORD *)(v13 + 1112) = v101;
        v93 = v91;
      }
      else
      {
        *(_QWORD *)(v13 + 1144) = v167[268];
        v92 = v167[267];
        if ( v91 )
          v92 = v91;
        *(_QWORD *)(v13 + 1112) = v92;
        v93 = v167[269];
        if ( v91 )
          v93 = v91;
      }
      v94 = (struct HwQueueStagingList ***)v145;
      *(_QWORD *)(v13 + 1136) = v93;
      VidSchiUnreferenceDisplayingAllocationsForThisEntry(v94, v87, (__int64)v12, v13);
      VidSchiReferenceDisplayingAllocationsForThisEntry(v145, a2, v12, v13);
      v95 = *(_QWORD *)(v13 + 1040);
      v96 = VidSchiCompleteFlipEntry(v145, a2, v10, v11, v7, v7, 0, 0LL);
      v97 = v96 + (_DWORD)v138;
      v98 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v95 + 40) + 32LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(v95 + 32) + 4LL))
                      + 8LL * v10
                      + 88);
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 8LL * v10 + 6712) + 8LL), -(v96 + (_DWORD)v138));
      v99 = *(_DWORD **)(a2 + 8LL * v10 + 6712);
      *v99 += v97;
      _InterlockedAdd((volatile signed __int32 *)(v98 + 8), -v97);
      *(_DWORD *)v98 += v97;
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
      (struct _VIDSCH_CALL_EXECUTE_FLIP *)v167,
      (enum _VIDSCH_FLIP_STATUS *)&v143,
      a5);
    v15 = v167[265];
    goto LABEL_10;
  }
  v30 = *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(v13 + 1192);
  if ( (*(_DWORD *)(v13 + 1152) & 0x10) != 0 )
  {
    v48 = 0LL;
    v49 = *(_DWORD *)v30 & 0x3FF;
    LODWORD(v50) = (*(_DWORD *)v30 >> 10) & 0x3FF;
    v141 = v49;
    v51 = !_BitScanForward((unsigned int *)&v52, v49);
    LODWORD(SpinLock) = v50;
    v53 = -1;
    v147 = v52;
    if ( !v51 )
      v53 = v52;
    v140 = 0;
    v51 = !_BitScanForward((unsigned int *)&v54, v50);
    v10 = v53;
    v55 = -1;
    v148 = v54;
    if ( !v51 )
      v55 = v54;
    LODWORD(v11) = v55;
    while ( 1 )
    {
      LODWORD(v138) = v48;
      if ( v49 || (_DWORD)v50 )
        goto LABEL_98;
      LODWORD(v50) = *(_DWORD *)(v13 + 1088);
      v10 = *(_DWORD *)v139;
      v11 = (__int64)v144;
      v56 = 8 * *(_DWORD *)(v13 + 1152);
      v167[0] = a2;
      HIDWORD(v167[67]) = *(_DWORD *)v139;
      LODWORD(v167[265]) = -1073741823;
      v57 = (LODWORD(v167[67]) | 4) ^ ((LOBYTE(v167[67]) | 4) ^ v56) & 8;
      LODWORD(v167[1]) = v50;
      LODWORD(v167[70]) = *(_DWORD *)(v13 + 1156);
      LODWORD(v167[67]) = v57 ^ ((unsigned __int8)v57 ^ v56) & 0x10 ^ ((unsigned __int8)(v57 ^ (v57 ^ v56) & 0x10) ^ v56) & 0x20;
      if ( (_DWORD)v50 )
      {
        v58 = &v167[2];
        v59 = (unsigned int)v50;
        do
        {
          *v58 = *(_QWORD *)(*(_QWORD *)((char *)v58 + v13 - (_QWORD)&v167[2]) + 64LL);
          ++v58;
          --v59;
        }
        while ( v59 );
        LODWORD(v50) = v167[1];
      }
      v60 = *(_QWORD *)(a2 + 16);
      v132 = 0;
      if ( *(_BYTE *)(v60 + 3018) )
        break;
      if ( *(_BYTE *)(v60 + 3019) )
      {
        v50 = (unsigned int)v48;
        memset((void *)(a2 + 5008), 0, (unsigned __int64)(unsigned int)v48 << 7);
        if ( (_DWORD)v48 )
        {
          v116 = a2 + 5012;
          v117 = a2 + 3812;
          do
          {
            *(_DWORD *)(v116 - 4) = *(_DWORD *)(v117 - 4);
            v118 = *(_DWORD *)v117;
            *(_DWORD *)v116 = *(_DWORD *)v117;
            if ( v118 )
            {
              *(_DWORD *)(v116 + 4) = *(_DWORD *)(v117 + 4);
              *(_QWORD *)(v116 + 12) = *(_QWORD *)(v117 + 12);
              *(_QWORD *)(v116 + 20) = *(_QWORD *)(v117 + 20);
              *(_DWORD *)(v116 + 28) = *(_DWORD *)(v117 + 28);
              *(_OWORD *)(v116 + 32) = *(_OWORD *)(v117 + 32);
              *(_OWORD *)(v116 + 48) = *(_OWORD *)(v117 + 48);
              *(_OWORD *)(v116 + 64) = *(_OWORD *)(v117 + 64);
              *(_DWORD *)(v116 + 80) = *(_DWORD *)(v117 + 80);
              *(_DWORD *)(v116 + 84) = *(_DWORD *)(v117 + 84);
              *(_DWORD *)(v116 + 88) = 0;
              *(_QWORD *)(v116 + 92) = 0LL;
              *(_DWORD *)(v116 + 100) = *(_DWORD *)(v117 + 88);
              *(_DWORD *)(v116 + 104) = *(_DWORD *)(v117 + 92);
              *(_DWORD *)(v116 + 108) = *(_DWORD *)(v117 + 96);
              *(_DWORD *)(v116 + 112) = *(_DWORD *)(v117 + 100);
              *(_DWORD *)(v116 + 116) = *(_DWORD *)(v117 + 104);
              *(_DWORD *)(v116 + 120) = *(_DWORD *)(v117 + 108);
            }
            v117 += 120LL;
            v116 += 128LL;
            --v50;
          }
          while ( v50 );
        }
LABEL_122:
        v61 = a2 + 5008;
        goto LABEL_82;
      }
      if ( *(_BYTE *)(v60 + 3020) && *(_QWORD *)(v60 + 1000) )
      {
        memset((void *)(a2 + 5008), 0, (unsigned __int64)(unsigned int)v48 << 7);
        v119 = 0;
        if ( (_DWORD)v48 )
        {
          v120 = a2 + 5012;
          v121 = (unsigned int)v48;
          v122 = a2 + 3812;
          do
          {
            *(_DWORD *)(v120 - 4) = *(_DWORD *)(v122 - 4);
            v123 = *(_DWORD *)v122;
            *(_DWORD *)v120 = *(_DWORD *)v122;
            if ( v123 )
            {
              *(_DWORD *)(v120 + 4) = *(_DWORD *)(v122 + 4);
              *(_QWORD *)(v120 + 12) = *(_QWORD *)(v122 + 12);
              *(_QWORD *)(v120 + 20) = *(_QWORD *)(v122 + 20);
              *(_DWORD *)(v120 + 28) = *(_DWORD *)(v122 + 28);
              *(_OWORD *)(v120 + 32) = *(_OWORD *)(v122 + 32);
              *(_OWORD *)(v120 + 48) = *(_OWORD *)(v122 + 48);
              *(_OWORD *)(v120 + 64) = *(_OWORD *)(v122 + 64);
              *(_DWORD *)(v120 + 80) = *(_DWORD *)(v122 + 80);
              *(_DWORD *)(v120 + 84) = *(_DWORD *)(v122 + 84);
              *(_DWORD *)(v120 + 88) = *(_DWORD *)(v122 + 88);
              *(_DWORD *)(v120 + 96) = *(_DWORD *)(v122 + 96);
              *(_DWORD *)(v120 + 100) = *(_DWORD *)(v122 + 100);
              *(_DWORD *)(v120 + 104) = *(_DWORD *)(v122 + 104);
              *(_DWORD *)(v120 + 108) = *(_DWORD *)(v122 + 108);
              *(_DWORD *)(v120 + 112) = *(_DWORD *)(v122 + 112);
              *(_DWORD *)(v120 + 116) = 0;
              v124 = *(_QWORD *)(v13 + 1192);
              v125 = v119 * ((8 * *(_DWORD *)(v124 + 8) + 231) & 0xFFFFFFF8);
              ++v119;
              *(_DWORD *)(v120 + 92) = *(_DWORD *)(v125 + v124 + 184);
            }
            v120 += 128LL;
            v122 += 120LL;
            --v121;
          }
          while ( v121 );
        }
        for ( i = 0; i < (unsigned int)v50; ++i )
          ;
        v61 = a2 + 5008;
        v62 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2;
        goto LABEL_83;
      }
      v61 = a2 + 3808;
LABEL_82:
      v62 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR;
LABEL_83:
      v63 = *(unsigned int *)(a2 + 32);
      v64 = *(_QWORD *)(a2 + 24);
      v167[69] = v61;
      LODWORD(v167[68]) = v48;
      DpSynchronizeExecution(v64, v62, v167, v63, &v132);
      if ( bTracingEnabled && (_DWORD)v48 )
      {
        v50 = a2 + 3880;
        v65 = 0;
        do
        {
          v66 = *(_DWORD *)(v50 - 68);
          LOBYTE(v67) = 0;
          LOBYTE(v68) = 0;
          if ( v66 )
          {
            v69 = *(_QWORD *)(v13 + 1192);
            v70 = v65 * ((8 * *(_DWORD *)(v69 + 8) + 231) & 0xFFFFFFF8);
            ++v65;
            v67 = *(_DWORD *)(v70 + v69 + 184);
            v68 = *(_DWORD *)(v70 + v69 + 192);
          }
          if ( (*(_DWORD *)(v13 + 1152) & 0x10) != 0 )
            v71 = ((unsigned __int16)**(_DWORD **)(v13 + 1192) | (unsigned __int16)(**(_DWORD **)(v13 + 1192) >> 10)) & 0x3FF;
          else
            v71 = (1 << *(_DWORD *)(a2 + 152)) - 1;
          v51 = !_BitScanForward((unsigned int *)&v72, v71);
          v73 = -1;
          v151 = v72;
          if ( !v51 )
            v73 = v72;
          *(_DWORD *)&v139[4] = *(_DWORD *)(v13 + 1048);
          *(_DWORD *)v139 = (char)v73;
          if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
            McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer(
              v73,
              v71,
              v66,
              *(_QWORD *)(a2 + 16),
              v10,
              *(_DWORD *)(v50 - 72),
              v139[0],
              *(_QWORD *)(v50 - 48),
              *(_QWORD *)(v50 - 56),
              *(_DWORD *)(v50 - 64),
              *(_DWORD *)(v13 + 1056),
              *(_DWORD *)(v13 + 1080),
              *(_DWORD *)(v50 - 36),
              *(_DWORD *)(v50 - 28),
              *(_DWORD *)(v50 - 32),
              *(_DWORD *)(v50 - 24),
              *(_DWORD *)(v50 - 20),
              *(_DWORD *)(v50 - 12),
              *(_DWORD *)(v50 - 16),
              *(_DWORD *)(v50 - 8),
              *(_DWORD *)(v50 - 4),
              *(_DWORD *)(v50 + 4),
              *(_DWORD *)v50,
              *(_DWORD *)(v50 + 8),
              v67,
              5,
              v66,
              v68,
              0);
          v50 += 120LL;
          --v48;
        }
        while ( v48 );
        v11 = (__int64)v144;
      }
      v15 = v167[265];
      if ( !LODWORD(v167[265]) )
        goto LABEL_60;
      v74 = *(_QWORD *)(a2 + 16);
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 11LL, SLODWORD(v167[265]), v167, v74);
      WdLogGlobalForLineNumber = 906;
LABEL_98:
      v146 = (unsigned int)v48;
      v136 = 120LL * (unsigned int)v48;
      memset((void *)(v136 + a2 + 3816), 0, 0x70uLL);
      v75 = v136;
      if ( v10 >= (unsigned int)v11 )
      {
        v49 = v141;
        *(_DWORD *)(v136 + a2 + 3808) = v11;
        *(_DWORD *)(v75 + a2 + 3812) = 0;
        v106 = -1;
        LODWORD(v50) = ~(1 << v11) & v50;
        v51 = !_BitScanForward((unsigned int *)&v75, v50);
        LODWORD(SpinLock) = v50;
        v150 = v107;
        if ( !v51 )
          v106 = v75;
        LODWORD(v11) = v106;
      }
      else
      {
        v76 = v140;
        *(_DWORD *)(v136 + a2 + 3808) = v10;
        *(_DWORD *)(v75 + a2 + 3812) = 1;
        v48 = *(_QWORD *)(v13 + 1192);
        v50 = v76 * ((8 * *(_DWORD *)(v48 + 8) + 231) & 0xFFFFFFF8);
        VidSchiBindFlipPhysicalAddress((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)v48, v76, 0);
        v77 = v136;
        v78 = v140;
        v79 = (unsigned __int64)v140 << 6;
        *(_DWORD *)(v136 + a2 + 3816) = *(unsigned __int16 *)(v79
                                                            + *(_DWORD *)(*(_QWORD *)(v13 + 1192) + 4LL)
                                                            * ((8 * *(_DWORD *)(*(_QWORD *)(v13 + 1192) + 8LL) + 231) & 0xFFFFFFF8)
                                                            + *(_QWORD *)(v13 + 1192)
                                                            + 32);
        *(_QWORD *)(v77 + a2 + 3824) = *(_QWORD *)(v79
                                                 + *(_DWORD *)(*(_QWORD *)(v13 + 1192) + 4LL)
                                                 * ((8 * *(_DWORD *)(*(_QWORD *)(v13 + 1192) + 8LL) + 231) & 0xFFFFFFF8)
                                                 + *(_QWORD *)(v13 + 1192)
                                                 + 40);
        *(_QWORD *)(v77 + a2 + 3832) = *(_QWORD *)(v79
                                                 + *(_DWORD *)(*(_QWORD *)(v13 + 1192) + 4LL)
                                                 * ((8 * *(_DWORD *)(*(_QWORD *)(v13 + 1192) + 8LL) + 231) & 0xFFFFFFF8)
                                                 + *(_QWORD *)(v13 + 1192)
                                                 + 24);
        v80 = 120 * (v146 + 32);
        v81 = *(_DWORD *)(v80 + a2) ^ (*(_DWORD *)(v50 + v48 + 188) ^ *(_DWORD *)(v80 + a2)) & 1;
        *(_DWORD *)(v80 + a2) = v81;
        *(_DWORD *)(v80 + a2) = v81 ^ (*(_DWORD *)(v50 + v48 + 188) ^ v81) & 2;
        *(_DWORD *)(v77 + a2 + 3844) = (unsigned __int16)*(_DWORD *)(v50 + v48 + 160);
        *(_DWORD *)(v77 + a2 + 3848) = (unsigned __int16)*(_DWORD *)(v50 + v48 + 164);
        *(_DWORD *)(v77 + a2 + 3852) = *(unsigned __int16 *)(v50 + v48 + 162);
        *(_DWORD *)(v77 + a2 + 3856) = *(unsigned __int16 *)(v50 + v48 + 166);
        *(_DWORD *)(v77 + a2 + 3860) = *(__int16 *)(v50 + v48 + 168);
        *(_DWORD *)(v77 + a2 + 3864) = *(__int16 *)(v50 + v48 + 172);
        *(_DWORD *)(v77 + a2 + 3868) = *(unsigned __int16 *)(v50 + v48 + 170);
        *(_DWORD *)(v77 + a2 + 3872) = *(unsigned __int16 *)(v50 + v48 + 174);
        *(_DWORD *)(v77 + a2 + 3876) = (unsigned __int16)*(_DWORD *)(v50 + v48 + 176);
        *(_DWORD *)(v77 + a2 + 3880) = (unsigned __int16)*(_DWORD *)(v50 + v48 + 180);
        *(_DWORD *)(v77 + a2 + 3884) = *(unsigned __int16 *)(v50 + v48 + 178);
        *(_DWORD *)(v77 + a2 + 3888) = *(unsigned __int16 *)(v50 + v48 + 182);
        v82 = (*(_DWORD *)(v50 + v48 + 188) >> 3) & 3;
        v140 = v78 + 1;
        *(_DWORD *)(v77 + a2 + 3892) = v82 + 1;
        *(_DWORD *)(v77 + a2 + 3896) ^= ((unsigned __int8)*(_DWORD *)(v77 + a2 + 3896) ^ (unsigned __int8)(*(_DWORD *)(v50 + v48 + 188) >> 2)) & 1;
        *(_DWORD *)(v77 + a2 + 3900) = (*(_DWORD *)(v50 + v48 + 188) >> 5) & 3;
        v83 = *(_DWORD *)(v77 + a2 + 3904) ^ ((unsigned __int8)*(_DWORD *)(v77 + a2 + 3904) ^ (unsigned __int8)(*(_DWORD *)(v50 + v48 + 188) >> 7)) & 1;
        *(_DWORD *)(v77 + a2 + 3904) = v83;
        LODWORD(v80) = v83 ^ ((unsigned __int8)v83 ^ (unsigned __int8)(*(_DWORD *)(v50 + v48 + 188) >> 7)) & 2;
        *(_DWORD *)(v77 + a2 + 3904) = v80;
        v84 = v80 ^ ((unsigned __int8)v80 ^ (unsigned __int8)(*(_DWORD *)(v50 + v48 + 188) >> 7)) & 4;
        LODWORD(v80) = v141;
        *(_DWORD *)(v77 + a2 + 3904) = v84;
        *(_DWORD *)(v77 + a2 + 3908) = (*(_DWORD *)(v50 + v48 + 188) >> 10) & 7;
        *(_DWORD *)(v77 + a2 + 3912) = (*(_DWORD *)(v50 + v48 + 188) >> 13) & 1;
        *(_DWORD *)(v77 + a2 + 3916) = (*(_DWORD *)(v50 + v48 + 188) >> 14) & 1;
        v86 = *(_DWORD *)(v50 + v48 + 188);
        LODWORD(v48) = (_DWORD)v138;
        LODWORD(v50) = (_DWORD)SpinLock;
        *(_DWORD *)(v77 + a2 + 3920) = (v86 >> 15) & 3;
        v85 = -1;
        v49 = ~(1 << v10) & v80;
        v51 = !_BitScanForward(&v86, v49);
        v141 = v49;
        v149 = v86;
        if ( !v51 )
          v85 = v86;
        v10 = v85;
      }
      v48 = (unsigned int)(v48 + 1);
    }
    v50 = (unsigned int)v48;
    memset((void *)(a2 + 5008), 0, 112LL * (unsigned int)v48);
    if ( (_DWORD)v48 )
    {
      v113 = a2 + 5012;
      v114 = a2 + 3812;
      do
      {
        *(_DWORD *)(v113 - 4) = *(_DWORD *)(v114 - 4);
        v115 = *(_DWORD *)v114;
        *(_DWORD *)v113 = *(_DWORD *)v114;
        if ( v115 )
        {
          *(_DWORD *)(v113 + 4) = *(_DWORD *)(v114 + 4);
          *(_QWORD *)(v113 + 12) = *(_QWORD *)(v114 + 12);
          *(_QWORD *)(v113 + 20) = *(_QWORD *)(v114 + 20);
          *(_DWORD *)(v113 + 28) = *(_DWORD *)(v114 + 28);
          *(_OWORD *)(v113 + 32) = *(_OWORD *)(v114 + 32);
          *(_OWORD *)(v113 + 48) = *(_OWORD *)(v114 + 48);
          *(_DWORD *)(v113 + 64) = *(_DWORD *)(v114 + 80);
          *(_DWORD *)(v113 + 68) = *(_DWORD *)(v114 + 84);
          *(_DWORD *)(v113 + 72) = 0;
          *(_QWORD *)(v113 + 76) = 0LL;
          *(_DWORD *)(v113 + 84) = *(_DWORD *)(v114 + 88);
          *(_DWORD *)(v113 + 88) = *(_DWORD *)(v114 + 92);
          *(_DWORD *)(v113 + 92) = *(_DWORD *)(v114 + 96);
          *(_DWORD *)(v113 + 96) = *(_DWORD *)(v114 + 100);
          *(_DWORD *)(v113 + 100) = *(_DWORD *)(v114 + 104);
          *(_DWORD *)(v113 + 104) = *(_DWORD *)(v114 + 108);
        }
        v114 += 120LL;
        v113 += 112LL;
        --v50;
      }
      while ( v50 );
    }
    goto LABEL_122;
  }
  v167[0] = a2;
  LODWORD(v167[1]) = v10;
  VidSchiBindFlipPhysicalAddress(v30, 0, 0);
  v31 = *(_QWORD *)(v13 + 1192);
  HIDWORD(v167[1]) = *(unsigned __int16 *)(*(_DWORD *)(v31 + 4) * ((8 * *(_DWORD *)(v31 + 8) + 231) & 0xFFFFFFF8)
                                         + v31
                                         + 32);
  v167[2] = *(_QWORD *)(*(_DWORD *)(v31 + 4) * ((8 * *(_DWORD *)(v31 + 8) + 231) & 0xFFFFFFF8) + v31 + 40);
  v32 = *(_DWORD *)(v13 + 1156);
  v167[3] = *(_QWORD *)(*(_DWORD *)(v31 + 4) * ((8 * *(_DWORD *)(v31 + 8) + 231) & 0xFFFFFFF8) + v31 + 24);
  LODWORD(v34) = *(_DWORD *)(v13 + 1152);
  v33 = v34 & 0xF;
  LODWORD(v34) = v34 & 0x20;
  LODWORD(v167[265]) = -1073741823;
  v35 = v167[70] & 0xFFFFFF07 | (4 * (v34 | (2 * v33)));
  v167[70] = __PAIR64__(v32, v35);
  v36 = *(_QWORD *)(v31 + 200);
  if ( v36 )
  {
    LODWORD(v167[263]) = *(_DWORD *)(v36 + 8);
    v167[264] = v36 + 16;
  }
  v37 = *(_QWORD *)(v13 + 1176);
  if ( v37 )
  {
    memset(&v153, 0, sizeof(v153));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v37 + 16), &v153);
    if ( v36 )
      _InterlockedIncrement((volatile signed __int32 *)(v36 + 12));
    v100 = *(void **)(v37 + 8);
    if ( v100 )
      CRefCountedBuffer::RefCountedBufferRelease(v100);
    *(_QWORD *)(v37 + 8) = v36;
    KeReleaseInStackQueuedSpinLock(&v153);
    v35 = v167[70];
  }
  v38 = 0;
  LODWORD(v167[4]) = *(_DWORD *)(v13 + 1088);
  if ( LODWORD(v167[4]) )
  {
    v39 = *(_QWORD *)(v13 + 1192);
    do
    {
      v40 = *(_DWORD *)(v39 + 4);
      LODWORD(v34) = v38;
      v41 = v40 * ((8 * *(_DWORD *)(v39 + 8) + 231) & 0xFFFFFFF8);
      v31 = (unsigned __int64)(v38 * v40) << 6;
      v167[v38 + 5] = *(_QWORD *)(v31 + v39 + v41 + 16);
      if ( v38 )
      {
        v167[3 * v38 + 68] = *(_QWORD *)(((unsigned __int64)(v38 * *(_DWORD *)(v39 + 4)) << 6)
                                       + v39
                                       + *(_DWORD *)(v39 + 4) * ((8 * *(_DWORD *)(v39 + 8) + 231) & 0xFFFFFFF8)
                                       + 24);
        VidSchiBindFlipPhysicalAddress((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)v39, 0, v38);
        v39 = *(_QWORD *)(v13 + 1192);
        LOWORD(v167[3 * v38 + 69]) = *(_WORD *)(((unsigned __int64)(v38 * *(_DWORD *)(v39 + 4)) << 6)
                                              + v39
                                              + *(_DWORD *)(v39 + 4) * ((8 * *(_DWORD *)(v39 + 8) + 231) & 0xFFFFFFF8)
                                              + 32);
        v34 = *(_QWORD *)(((unsigned __int64)(v38 * *(_DWORD *)(v39 + 4)) << 6)
                        + v39
                        + *(_DWORD *)(v39 + 4) * ((8 * *(_DWORD *)(v39 + 8) + 231) & 0xFFFFFFF8)
                        + 40);
        v167[3 * v38 + 70] = v34;
      }
      ++v38;
    }
    while ( v38 < *(_DWORD *)(v13 + 1088) );
    v35 = v167[70];
  }
  if ( v132 )
    v42 = v35 | 2;
  else
    v42 = v35 | 4;
  LODWORD(v167[70]) = v42;
  if ( bTracingEnabled && Microsoft_Windows_DxgKrnlEnableBits < 0 )
    McTemplateK0pqqpxqqqq_EtwWriteTransfer(
      v34,
      v31,
      v42,
      *(_QWORD *)(a2 + 16),
      v10,
      *(_DWORD *)(v13 + 1048),
      v167[3],
      v167[2],
      SBYTE4(v167[1]),
      *(_DWORD *)(v13 + 1056),
      *(_DWORD *)(v13 + 1080),
      v42);
  v43 = *(unsigned int *)(a2 + 32);
  v44 = *(_QWORD *)(a2 + 24);
  v133 = 0;
  DpSynchronizeExecution(v44, VidSchiExecuteMmIoFlipAtISR, v167, v43, &v133);
  v15 = v167[265];
LABEL_60:
  v7 = v135;
LABEL_10:
  if ( v15 >= D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE_FLIP_SUBMITTED )
  {
    v12 = v137;
    goto LABEL_13;
  }
  if ( v15 != -1073741811 )
  {
    v22 = v167[2];
    if ( v15 == -2147483631 )
      goto LABEL_129;
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 3049LL) && v15 == -1073741267 )
    {
      if ( (v167[2] & 2) == 0 )
      {
        *(_DWORD *)(v13 + 1152) |= 0x10000u;
        v9 = 259;
        *(_DWORD *)(v13 + 1052) = 13;
LABEL_26:
        VidSchiUpdateFlipQueueHistory(1, a2, v10, v11, v7);
        return v9;
      }
LABEL_129:
      v102 = *(_DWORD *)(v13 + 1152);
      *(_DWORD *)(v13 + 1052) = 14;
      *(_DWORD *)(v13 + 1152) = v102 & 0xFFF8FFFF | ((v22 & 0xC | (2 * (v22 & 1))) << 15);
      VidSchiUpdateFlipQueueHistory(5, a2, v10, v11, v7);
      v103 = *(_DWORD *)(v13 + 1152);
      if ( (v103 & 0x20000) != 0 )
      {
        if ( *(_BYTE *)(v11 + 80) )
        {
          if ( (v103 & 0x40000) != 0 )
          {
            for ( j = 0; j < *(_DWORD *)(a2 + 40); ++j )
            {
              v105 = *(_QWORD *)(a2 + 8LL * j + 3432);
              if ( v105 && *(_DWORD *)(v105 + 3248) )
                VidSchiCancelAndRequeueIndependentFlips((struct _VIDSCH_GLOBAL *)a2, j);
            }
          }
          else
          {
            VidSchiCancelAndRequeueIndependentFlips((struct _VIDSCH_GLOBAL *)a2, v10);
          }
          v128 = v137;
          if ( VidSchiStallingFlipEntryUnblocked(
                 (struct _VIDSCH_GLOBAL *)a2,
                 v137,
                 (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v13,
                 0LL) )
          {
            v129 = v152;
            *(_DWORD *)(v13 + 1052) = 4;
            *v129 = 1;
            if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
              McTemplateK0pqq_EtwWriteTransfer();
            goto LABEL_180;
          }
        }
        else
        {
          v128 = v137;
        }
        if ( (*(_DWORD *)(v13 + 1152) & 0x40000) != 0 )
          *(_QWORD *)(a2 + 3784) = v13;
        else
          *((_QWORD *)v128 + 15) = v13;
      }
      else
      {
        v128 = v137;
      }
LABEL_180:
      VidSchiKeepInterruptTargetEnabledForFlip(
        (struct _VIDSCH_GLOBAL *)a2,
        (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v13,
        v128);
      return 3221226029LL;
    }
LABEL_30:
    VidSchiUpdateFlipQueueHistory(2, a2, v10, v11, v7);
    return 259LL;
  }
  if ( (*(_DWORD *)(v13 + 1152) & 0x10) != 0 || (v167[70] & 0x40) == 0 )
  {
    WdLogSingleEntry0(1LL);
    v127 = 22491LL;
    WdLogGlobalForLineNumber = 22491;
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
    v127 = *(_QWORD *)(v13 + 1192);
    WdLogGlobalForLineNumber = 22487;
  }
  DxgkLogInternalTriageEvent(v127, 0x40000LL);
  VidSchiUpdateFlipQueueHistory(2, a2, v10, v11, v7);
  return 3221225485LL;
}
