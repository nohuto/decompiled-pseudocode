/*
 * XREFs of VidSchiCompleteFlipEntry @ 0x14000A1C0
 * Callers:
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x140008C10 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14000C7F4 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     VidSchiExecuteMmIoFlip @ 0x14000CF44 (VidSchiExecuteMmIoFlip.c)
 *     VidSchUnwaitFlipQueue @ 0x14000EC30 (VidSchUnwaitFlipQueue.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x140027538 (VidSchiCompletePendingFlipOnPlane.c)
 *     ?VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x14002D068 (-VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14002D1F4 (-VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAU.c)
 *     VidSchiRestartQueuedFlip @ 0x14002E36C (VidSchiRestartQueuedFlip.c)
 *     VidSchiCancelIndependentFlips @ 0x14002FDF8 (VidSchiCancelIndependentFlips.c)
 *     ?VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEA_NPEAIII@Z @ 0x1400301B8 (-VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140039EF0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1400426E8 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 *     ?VidSchiSynchronouslyCancelPendingFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@I@Z @ 0x140054EE0 (-VidSchiSynchronouslyCancelPendingFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVID.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchiRetireFlipFenceForCancelledFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDMM_ALLOC@@_KIIPEA_N@Z @ 0x14000B880 (-VidSchiRetireFlipFenceForCancelledFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDMM_ALLOC@@_KIIPEA_N.c)
 *     ?VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_VIDSCH_FLIP_STATUS@@PEAVHwQueueStagingList@@@Z @ 0x14000BADC (-VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_E.c)
 *     VidSchiSignalFlipEvents @ 0x14000BD24 (VidSchiSignalFlipEvents.c)
 *     ?UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@IW4_VIDSCH_FLIP_STATUS@@@Z @ 0x14000C3A4 (-UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PE.c)
 *     ?SetIndependentFlipStage@@YAXPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE@@@Z @ 0x14000C574 (-SetIndependentFlipStage@@YAXPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_.c)
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x14000C59C (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 *     ?VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14000C610 (-VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x14000CAF4 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ?VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1400117BC (-VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1400128C0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140013A18 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x140013A64 (VidSchiPropagatePresentHistoryToken.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111111PEAX@Z @ 0x140013D14 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14001A3B0 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchiReleaseSyncObjectReference @ 0x14001AB40 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1400209D4 (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x140024394 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ?IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1400271C8 (-IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchiFlushPendingTokenList @ 0x14002906C (VidSchiFlushPendingTokenList.c)
 *     McTemplateK0pxqqpqx_EtwWriteTransfer @ 0x14004A93C (McTemplateK0pxqqpqx_EtwWriteTransfer.c)
 *     McTemplateK0qqt_EtwWriteTransfer @ 0x14004B03C (McTemplateK0qqt_EtwWriteTransfer.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x14004B230 (McTemplateK0qq_EtwWriteTransfer.c)
 *     ??0_unnamed_type_PerPlane_@_MOCKDRIVERSTATE_SET_PLANE@@QEAA@XZ @ 0x14004F234 (--0_unnamed_type_PerPlane_@_MOCKDRIVERSTATE_SET_PLANE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memset @ 0x140056780 (memset.c)
 */

__int64 __fastcall VidSchiCompleteFlipEntry(
        struct HwQueueStagingList *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        _BYTE *a8)
{
  __int64 v8; // rbx
  unsigned int v9; // edi
  _BYTE *v10; // r8
  __int64 v11; // rsi
  struct _VIDSCH_PRESENT_INFO *v13; // rdx
  __int64 v14; // r11
  __int64 v15; // rax
  unsigned __int64 v16; // r12
  __int64 v17; // r15
  int v18; // r9d
  __int64 v19; // r10
  unsigned int v20; // ecx
  unsigned int v21; // r9d
  char v22; // r13
  __int64 v23; // rax
  int v24; // ebx
  int v25; // r8d
  unsigned int v26; // ecx
  __int64 v27; // rax
  struct _VIDSCH_PRESENT_INFO *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r12
  unsigned int v31; // ebx
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **v32; // r12
  __int64 v33; // r12
  __int64 v34; // rcx
  enum _D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE v35; // edx
  void *v36; // rcx
  unsigned int v37; // r12d
  struct _VIDSCH_PRESENT_INFO *v38; // rbx
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // r13
  unsigned int v42; // ebx
  __int64 v43; // r13
  _DWORD *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // r8
  bool v48; // zf
  int v49; // eax
  __int64 v50; // r9
  char v51; // cl
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // r13
  __int64 v55; // rdx
  void *v56; // rcx
  __int64 v57; // r15
  unsigned int v58; // r8d
  unsigned int v59; // esi
  int v60; // eax
  char v61; // cl
  __int64 v62; // r10
  char v63; // bl
  __int64 v64; // r9
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  int v68; // eax
  struct _VIDSCH_PRESENT_INFO *v69; // r13
  __int64 v70; // rsi
  int v71; // r15d
  _QWORD *v72; // rbx
  int updated; // eax
  __int64 v74; // r14
  int v75; // ebx
  _QWORD **v76; // rsi
  _QWORD *v77; // rax
  _QWORD *v78; // rcx
  struct HwQueueStagingList *v79; // r9
  _QWORD **v80; // rcx
  _QWORD *v81; // rax
  _QWORD *v82; // rdx
  struct HwQueueStagingList *v83; // rax
  struct HwQueueStagingList **v84; // r8
  unsigned int v86; // eax
  unsigned int v87; // ecx
  unsigned int v88; // r11d
  bool v89; // bl
  unsigned int *v90; // r15
  unsigned int v91; // edx
  unsigned int v92; // r8d
  unsigned int v93; // edx
  int v94; // eax
  char v95; // cl
  int v96; // r10d
  int v97; // eax
  unsigned int v98; // r9d
  char v99; // cl
  unsigned int v100; // eax
  unsigned int v101; // edx
  unsigned int v102; // r8d
  unsigned int v103; // edx
  int v104; // eax
  char v105; // cl
  int v106; // eax
  unsigned int v107; // r9d
  int v108; // r10d
  char v109; // cl
  unsigned int v110; // eax
  char v111; // r8
  __int64 v112; // r13
  __int64 v113; // rcx
  void *v114; // r12
  __int64 v115; // r10
  __int64 v116; // r9
  __int64 v117; // r11
  char v118; // bl
  bool v119; // cf
  __int64 v120; // rdx
  int v121; // eax
  unsigned int v122; // ecx
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *FlipManagerAuxiliaryPresentInfo; // rax
  __int64 v124; // rcx
  __int64 v125; // r8
  int v126; // ecx
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *v127; // rax
  __int64 v128; // r8
  unsigned int v129; // eax
  __int64 v130; // rbx
  void *v131; // rcx
  unsigned int v132; // edx
  unsigned int v133; // eax
  char *v134; // rax
  unsigned __int64 v135; // rdx
  __int64 v136; // rbx
  unsigned __int64 v137; // rsi
  __int64 v138; // r12
  __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rcx
  unsigned int v142; // eax
  int v143; // r8d
  __int64 v144; // rcx
  __int64 v145; // r10
  __int64 v146; // rbx
  void *v147; // rcx
  int v148; // eax
  struct HwQueueStagingList *v149; // r15
  __int64 v150; // rbx
  unsigned __int64 *v151; // r13
  __int64 v152; // r12
  __int64 v153; // rsi
  bool *v154; // rbx
  __int64 v155; // rax
  __int64 v156; // rcx
  _MOCKDRIVERSTATE_SET_PLANE::_unnamed_type_PerPlane_ *v157; // r12
  __int64 v158; // r13
  unsigned int *v159; // rax
  unsigned int v160; // edx
  unsigned int v161; // r8d
  __int64 v162; // rdx
  int v163; // eax
  char v164; // cl
  unsigned int v165; // r11d
  unsigned int v166; // r9d
  char v167; // cl
  int v168; // eax
  unsigned int v169; // r10d
  int v170; // eax
  char v171; // cl
  __int64 v172; // r8
  int v173; // r9d
  __int64 v174; // rdx
  __int64 v175; // rcx
  char v176; // al
  __int64 v177; // rdx
  __int64 v178; // rcx
  int v179; // eax
  __int64 v180; // r9
  void (__fastcall *v181)(_QWORD, __int64, __int64, __int64, unsigned __int64 *); // rax
  unsigned __int64 *v182; // [rsp+20h] [rbp-E0h]
  struct VIDSCH_HW_QUEUE **v183; // [rsp+28h] [rbp-D8h]
  bool *v184; // [rsp+30h] [rbp-D0h]
  __int64 v185; // [rsp+38h] [rbp-C8h]
  __int64 v186; // [rsp+40h] [rbp-C0h]
  bool v187; // [rsp+60h] [rbp-A0h]
  bool v188; // [rsp+60h] [rbp-A0h]
  char v189; // [rsp+60h] [rbp-A0h]
  int v190; // [rsp+68h] [rbp-98h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v191; // [rsp+68h] [rbp-98h]
  bool v192; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v193; // [rsp+74h] [rbp-8Ch]
  unsigned int v194; // [rsp+78h] [rbp-88h]
  unsigned int v195; // [rsp+7Ch] [rbp-84h]
  bool v196[8]; // [rsp+80h] [rbp-80h]
  __int64 v197; // [rsp+88h] [rbp-78h]
  struct _VIDSCH_PRESENT_INFO *v198; // [rsp+90h] [rbp-70h]
  unsigned int v199; // [rsp+9Ch] [rbp-64h]
  __int64 v200; // [rsp+A0h] [rbp-60h]
  PKSPIN_LOCK SpinLock; // [rsp+A8h] [rbp-58h]
  __int64 v202; // [rsp+B0h] [rbp-50h]
  struct HwQueueStagingList *v203; // [rsp+B8h] [rbp-48h]
  _BYTE *v204; // [rsp+C0h] [rbp-40h]
  int v205; // [rsp+C8h] [rbp-38h]
  int v206; // [rsp+CCh] [rbp-34h]
  int v207; // [rsp+D0h] [rbp-30h]
  int v208; // [rsp+D4h] [rbp-2Ch]
  int v209; // [rsp+D8h] [rbp-28h]
  int v210; // [rsp+DCh] [rbp-24h]
  int v211; // [rsp+E0h] [rbp-20h]
  __int64 v212; // [rsp+E8h] [rbp-18h]
  int v213; // [rsp+F0h] [rbp-10h]
  int v214; // [rsp+F4h] [rbp-Ch]
  int v215; // [rsp+F8h] [rbp-8h]
  int v216; // [rsp+FCh] [rbp-4h]
  _QWORD v217[2]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v218; // [rsp+110h] [rbp+10h]
  unsigned int v219; // [rsp+114h] [rbp+14h]
  unsigned int v220; // [rsp+118h] [rbp+18h]
  unsigned int v221; // [rsp+11Ch] [rbp+1Ch]
  unsigned int v222; // [rsp+120h] [rbp+20h]
  _QWORD v223[2]; // [rsp+128h] [rbp+28h] BYREF
  unsigned int v224; // [rsp+138h] [rbp+38h]
  unsigned int v225; // [rsp+13Ch] [rbp+3Ch]
  int v226; // [rsp+140h] [rbp+40h]
  unsigned int v227; // [rsp+144h] [rbp+44h]
  unsigned int v228; // [rsp+148h] [rbp+48h]
  __int64 v229; // [rsp+150h] [rbp+50h] BYREF
  unsigned int *v230; // [rsp+158h] [rbp+58h]
  unsigned int v231; // [rsp+160h] [rbp+60h]
  unsigned int v232; // [rsp+164h] [rbp+64h]
  int v233; // [rsp+168h] [rbp+68h]
  unsigned int v234; // [rsp+16Ch] [rbp+6Ch]
  unsigned int v235; // [rsp+170h] [rbp+70h]
  _QWORD v236[2]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v237; // [rsp+188h] [rbp+88h]
  __int64 v238; // [rsp+190h] [rbp+90h]
  __int64 v239; // [rsp+198h] [rbp+98h]
  struct _KLOCK_QUEUE_HANDLE v240; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+1B8h] [rbp+B8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v242; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v243; // [rsp+1F0h] [rbp+F0h] BYREF
  int v244; // [rsp+1F4h] [rbp+F4h]
  _QWORD v245[21]; // [rsp+1F8h] [rbp+F8h] BYREF

  v8 = a3;
  v9 = 0;
  v10 = a8;
  v11 = a4;
  v212 = a4;
  v193 = v8;
  v203 = a1;
  v204 = a8;
  if ( a8 )
    *a8 = 0;
  if ( !*(_DWORD *)(a2 + 860) )
    return 0LL;
  v13 = *(struct _VIDSCH_PRESENT_INFO **)(a2 + 8 * v8 + 3432);
  v14 = v8;
  v198 = v13;
  v202 = v8;
  if ( !a4 )
    return 0LL;
  v15 = a5;
  LODWORD(v16) = 1;
  v195 = 0;
  v199 = 0;
  while ( 1 )
  {
    v17 = 1400 * v15;
    v18 = 4673;
    v239 = v15;
    v238 = 1400 * v15;
    v19 = 0LL;
    v200 = 0LL;
    v20 = *(_DWORD *)(1400 * v15 + v11 + 1172);
    if ( v20 > 0xC || !_bittest(&v18, v20) )
    {
      v19 = *(_QWORD *)(v17 + v11 + 1160);
      v200 = v19;
    }
    v21 = a7;
    v190 = v16;
    v22 = 0;
    if ( !a7 )
    {
      if ( v20 - 10 > 1 )
      {
        v16 = a7 + 1;
        goto LABEL_61;
      }
      goto LABEL_10;
    }
    if ( a7 == 9 || a7 == 6 )
    {
      v143 = 1;
      if ( v20 <= 0xC )
      {
        v148 = 4673;
        if ( _bittest(&v148, v20) )
          v143 = 0;
      }
      if ( a7 == 9 )
      {
        if ( v20 == 15 || v20 == 5 )
        {
          LODWORD(v16) = 1;
          v190 = 1;
        }
        else
        {
          LODWORD(v16) = 0;
          v190 = 0;
        }
      }
      else if ( v20 == 13 || v20 == 15 || v20 == 5 )
      {
        v143 = 0;
      }
      if ( v20 - 7 <= 1 )
      {
        if ( *(_BYTE *)(v17 + v11 + 1197) )
          ++*(_QWORD *)(v19 + 8 * v14 + 376);
        _InterlockedAdd((volatile signed __int32 *)(a2 + 864), 1u);
        _InterlockedAdd((volatile signed __int32 *)v13 + 810, 1u);
        if ( *(_DWORD *)(v17 + v11 + 1172) == 8 && !*(_BYTE *)(v17 + v11 + 1197) )
        {
          _InterlockedAdd((volatile signed __int32 *)(v19 + 4 * v14 + 1700), 1u);
          v144 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 40) + 32LL)
                                       + 8LL * *(unsigned int *)(*(_QWORD *)(v19 + 32) + 4LL))
                           + 8 * v14
                           + 88);
          _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 8 * v14 + 6712) + 8LL), 1u);
          _InterlockedAdd((volatile signed __int32 *)(v144 + 8), 1u);
          _InterlockedAdd((volatile signed __int32 *)(a2 + 792), 1u);
          IncrementNumberOfQueuedFlipPerSource((struct _VIDSCH_GLOBAL *)a2, v8);
          _InterlockedAdd((volatile signed __int32 *)(v145 + 1828), 1u);
          _InterlockedAdd((volatile signed __int32 *)(v145 + 4 * v14 + 1764), 1u);
        }
      }
      goto LABEL_192;
    }
    if ( a7 != 12 )
      goto LABEL_123;
    if ( v20 - 2 <= 1 )
    {
LABEL_183:
      v142 = *(_DWORD *)(v17 + v11 + 1272);
      v190 = 0;
      LODWORD(v16) = 0;
      v143 = (v142 >> 5) & 1;
      if ( *(_BYTE *)(a2 + 59) && (v142 & 0x102020) == 0x102020 )
        v22 = 1;
LABEL_192:
      if ( !v143 )
      {
        v10 = v204;
LABEL_123:
        v16 = 1LL;
        goto LABEL_61;
      }
LABEL_193:
      *(_DWORD *)(v11 + 64) = ((_BYTE)a5 + 1) & 0x3F;
      LODWORD(v182) = ((_BYTE)a5 + 1) & 0x3F;
      VidSchiUpdateFlipQueueHistory(6LL, a2, (unsigned int)v8, v11, v182);
      v21 = a7;
LABEL_10:
      v23 = *(_QWORD *)(a2 + 16);
      v24 = v16;
      v187 = v22;
      if ( *(_BYTE *)(v23 + 4976) )
      {
        if ( *(_DWORD *)(v23 + 296) == 1 )
        {
          v190 = v16;
          if ( *(_DWORD *)(v17 + v11 + 1172) == 11 )
          {
            v190 = v16;
            if ( (*(_DWORD *)(v17 + v11 + 1272) & 0x1000) == 0 )
            {
              v190 = v16;
              if ( !v21 )
              {
                v243 = -1;
                v244 = 0;
                memset(v245, 0, 0xA0uLL);
                v157 = (_MOCKDRIVERSTATE_SET_PLANE::_unnamed_type_PerPlane_ *)v245;
                v158 = 10LL;
                do
                {
                  _MOCKDRIVERSTATE_SET_PLANE::_unnamed_type_PerPlane_::_unnamed_type_PerPlane_(v157);
                  v157 = (_MOCKDRIVERSTATE_SET_PLANE::_unnamed_type_PerPlane_ *)((char *)v157 + 16);
                  --v158;
                }
                while ( v158 );
                v243 = v193;
                v159 = *(unsigned int **)(v17 + v11 + 1312);
                v217[0] = a2;
                v217[1] = v159;
                v160 = *v159;
                v161 = *v159 & 0x3FF;
                v218 = v161;
                if ( *(_BYTE *)(a2 + 156) )
                  v162 = (v160 >> 10) & 0x3FF;
                else
                  v162 = 0LL;
                v22 = v187;
                v48 = !_BitScanForward((unsigned int *)&v163, v161);
                v164 = -1;
                v219 = v162;
                v205 = v163;
                v165 = 0;
                if ( !v48 )
                  v164 = v163;
                v220 = 0;
                v166 = v164;
                v167 = -1;
                v48 = !_BitScanForward((unsigned int *)&v168, v162);
                v221 = v166;
                v206 = v168;
                if ( !v48 )
                  v167 = v168;
                v169 = v167;
                v222 = v167;
                while ( v161 || (_DWORD)v162 )
                {
                  if ( v166 < v169 )
                  {
                    v176 = 1;
                  }
                  else
                  {
                    v176 = 0;
                    v166 = v169;
                  }
                  v177 = 2LL * v165;
                  LODWORD(v245[v177]) = v166;
                  BYTE4(v245[v177]) = v176;
                  if ( v176 )
                    v178 = *(_QWORD *)(((unsigned __int64)v165 << 6)
                                     + *(_QWORD *)(v17 + v11 + 1312)
                                     + *(_DWORD *)(*(_QWORD *)(v17 + v11 + 1312) + 4LL)
                                     * ((8 * *(_DWORD *)(*(_QWORD *)(v17 + v11 + 1312) + 8LL) + 231) & 0xFFFFFFF8)
                                     + 24);
                  else
                    v178 = 0LL;
                  v245[2 * v165 + 1] = v178;
                  ++v244;
                  VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v217);
                  v162 = v219;
                  v161 = v218;
                  v169 = v222;
                  v166 = v221;
                  v165 = v220;
                }
                v190 = v24;
                ((void (__fastcall *)(_QWORD, __int64, unsigned int *))DxgCoreInterface[87])(
                  *(_QWORD *)(a2 + 16),
                  v162,
                  &v243);
                goto LABEL_14;
              }
            }
          }
        }
      }
      if ( v21 == 9 || (v190 = v16, v21 == 6) )
      {
        FlipManagerAuxiliaryPresentInfo = GetFlipManagerAuxiliaryPresentInfo(*(struct _D3DKMT_AUXILIARYPRESENTINFO **)(v17 + v11 + 1464));
        if ( FlipManagerAuxiliaryPresentInfo )
        {
          *((_DWORD *)FlipManagerAuxiliaryPresentInfo + 13) = 1;
          if ( (byte_140081244 & 4) != 0 )
            McTemplateK0qq_EtwWriteTransfer(
              v124,
              &EventFlipManagerIFlipPresentCancel,
              v125,
              *((unsigned int *)FlipManagerAuxiliaryPresentInfo + 2),
              *(_DWORD *)(v17 + v11 + 1176));
        }
        v126 = v190;
        if ( a7 != 9 && a7 != 12 )
          goto LABEL_14;
        goto LABEL_155;
      }
      v190 = v16;
      if ( v21 != 12 )
        goto LABEL_14;
      v127 = GetFlipManagerAuxiliaryPresentInfo(*(struct _D3DKMT_AUXILIARYPRESENTINFO **)(v17 + v11 + 1464));
      v126 = v16;
      v190 = v16;
      if ( v127 )
      {
        v190 = v16;
        if ( v22 )
        {
          *((_DWORD *)v127 + 9) = 1;
          *((_DWORD *)v127 + 14) = 1;
          if ( (byte_140081244 & 4) == 0 )
            goto LABEL_155;
          McTemplateK0qqt_EtwWriteTransfer(
            v16,
            1,
            v128,
            *((_DWORD *)v127 + 2),
            *(_DWORD *)(v17 + v11 + 1176),
            (*(_DWORD *)(v17 + v11 + 1272) & 0x100000) != 0);
        }
        else
        {
          *((_DWORD *)v127 + 13) = 1;
          if ( (byte_140081244 & 4) == 0 )
            goto LABEL_155;
          McTemplateK0qq_EtwWriteTransfer(
            (unsigned int)v16,
            &EventFlipManagerIFlipPresentCancel,
            v128,
            *((unsigned int *)v127 + 2),
            *(_DWORD *)(v17 + v11 + 1176));
        }
        v126 = v16;
        v190 = v16;
      }
LABEL_155:
      if ( v126 )
      {
        v28 = v198;
        v129 = VidSchiDecrementPendingFlipsForFlipEntry(
                 (struct _VIDSCH_GLOBAL *)a2,
                 v198,
                 (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v17 + v11 + 120));
        v26 = a7;
        v194 = v129;
        v27 = v17 + v11 + 1312;
        *(_QWORD *)v196 = v27;
        goto LABEL_17;
      }
LABEL_14:
      if ( (*(_DWORD *)(v17 + v11 + 1272) & 0x10) != 0 )
        v25 = ((unsigned __int16)**(_DWORD **)(v17 + v11 + 1312) | (unsigned __int16)(**(_DWORD **)(v17 + v11 + 1312) >> 10)) & 0x3FF;
      else
        v25 = (1 << *(_DWORD *)(a2 + 152)) - 1;
      v26 = a7;
      v27 = v17 + v11 + 1312;
      v28 = v198;
      v194 = v25;
      *(_QWORD *)v196 = v27;
      if ( a7 == 9 )
      {
        v48 = *(_DWORD *)(v17 + v11 + 1172) == 13;
        *(_QWORD *)v196 = v17 + v11 + 1312;
        if ( v48 )
        {
          *(_QWORD *)v196 = v17 + v11 + 1312;
          *((_DWORD *)v198 + 813) &= ~v25;
          v27 = v17 + v11 + 1312;
        }
      }
LABEL_17:
      v29 = v17 + v11 + 120;
      if ( *((_QWORD *)v28 + 15) == v29 )
        *((_QWORD *)v28 + 15) = 0LL;
      if ( *(_QWORD *)(a2 + 3784) == v29 )
        *(_QWORD *)(a2 + 3784) = 0LL;
      v30 = *(_QWORD *)(v17 + v11 + 1296);
      *(_DWORD *)(v17 + v11 + 1172) = v26;
      if ( v30 )
      {
        v130 = *(_QWORD *)(*(_QWORD *)v27 + 200LL);
        if ( v130 )
        {
          memset(&v240, 0, sizeof(v240));
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v30 + 16), &v240);
          _InterlockedIncrement((volatile signed __int32 *)(v130 + 12));
          v131 = *(void **)(v30 + 8);
          if ( v131 )
            CRefCountedBuffer::RefCountedBufferRelease(v131);
          *(_QWORD *)(v30 + 8) = v130;
          KeReleaseInStackQueuedSpinLock(&v240);
          v26 = a7;
          v29 = v17 + v11 + 120;
        }
        *(_QWORD *)(v17 + v11 + 1296) = 0LL;
      }
      VidSchiSignalRuntimeFenceForCompletedFlipEntry(a2, v29, v26, v203);
      v31 = 0;
      v32 = *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 ***)v196;
      if ( *(_DWORD *)(a2 + 152) )
      {
        v33 = **(_QWORD **)v196;
        do
        {
          v197 = v31 * ((8 * *(_DWORD *)(v33 + 8) + 231) & 0xFFFFFFF8);
          v34 = *(_QWORD *)(v197 + v33 + 200);
          if ( v34 )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v34 + 12), 0xFFFFFFFF) == 1 )
            {
              if ( *(_QWORD *)v34 )
                ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v34, (PVOID)v34);
              else
                ExFreePoolWithTag((PVOID)v34, 0);
            }
            *(_QWORD *)(v197 + v33 + 200) = 0LL;
          }
          ++v31;
        }
        while ( v31 < *(_DWORD *)(a2 + 152) );
        v32 = *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 ***)v196;
      }
      VidSchiReleaseFlipFencesReference((struct _VIDSCH_GLOBAL *)a2, *v32);
      v36 = *(void **)(v17 + v11 + 1304);
      if ( v36 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v36);
        *(_QWORD *)(v17 + v11 + 1304) = 0LL;
      }
      v37 = a7;
      if ( a7 )
      {
        v38 = v198;
      }
      else
      {
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a2 + 1992), &LockHandle);
        v38 = v198;
        *((_DWORD *)v198 + 11100) = *(_DWORD *)(v17 + v11 + 1176);
        if ( (*(_DWORD *)(v17 + v11 + 1272) & 0x20) == 0 )
        {
          v39 = v202;
          *(_DWORD *)(*((_QWORD *)v38 + 2) + 4 * v202 + 508) = *(_DWORD *)(v17 + v11 + 1176);
          *(_QWORD *)(*((_QWORD *)v38 + 2) + 8 * v39 + 576) = *(_QWORD *)(v17 + v11 + 1248);
          *(_QWORD *)(*((_QWORD *)v38 + 2) + 8 * v39 + 704) = *(_QWORD *)(v17 + v11 + 1232);
          *(_QWORD *)(*((_QWORD *)v38 + 2) + 8 * v39 + 832) = *(_QWORD *)(v17 + v11 + 1264);
          *(_QWORD *)(*((_QWORD *)v38 + 2) + 8 * v39 + 960) = *(_QWORD *)(v17 + v11 + 1256);
          *(_QWORD *)(*((_QWORD *)v38 + 2) + 8 * v39 + 1088) = *(_QWORD *)(v17 + v11 + 1240);
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
      v40 = *(_DWORD *)(v17 + v11 + 1272);
      if ( (v40 & 0x20) == 0 || !*(_QWORD *)(v17 + v11 + 1288) )
        goto LABEL_36;
      v189 = 1;
      if ( a7 )
      {
        if ( a7 == 9 )
        {
          v189 = v190 != 0;
          if ( !v190 )
          {
            v111 = 0;
            goto LABEL_142;
          }
        }
        else
        {
          if ( a7 != 6 )
          {
            if ( !v22 )
            {
              v111 = 0;
              v189 = 0;
              goto LABEL_142;
            }
            goto LABEL_141;
          }
          if ( (v40 & 0x100000) == 0 )
          {
            SetIndependentFlipStage((struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v17 + v11 + 120), v35);
            LOBYTE(v180) = 1;
            v186 = *(_QWORD *)(v17 + v11 + 1312);
            v185 = *(_QWORD *)(v17 + v11 + 1296);
            LOBYTE(v184) = 0;
            LOBYTE(v183) = 0;
            LOBYTE(v182) = (*(_DWORD *)(v17 + v11 + 1272) & 0x40) != 0;
            VidSchiPropagatePresentHistoryToken(
              a2,
              *(_QWORD *)(v17 + v11 + 1280),
              *(_QWORD *)(v17 + v11 + 1288),
              v180,
              v182,
              v183,
              v184);
          }
        }
      }
      if ( !v22 )
      {
        LODWORD(v182) = a7;
        UpdateFlipManagerStatsOnFlipCompletion(a2, v17 + v11 + 120, v38, v193, v182, v183);
      }
LABEL_141:
      v111 = v189;
LABEL_142:
      v112 = *(_QWORD *)(v17 + v11 + 1296);
      v113 = v17 + v11 + 1472;
      v114 = 0LL;
      v115 = 0LL;
      v116 = 0LL;
      v117 = 0LL;
      v118 = 0;
      v119 = *(_QWORD *)v113 != 0LL;
      v197 = *(_QWORD *)(v17 + v11 + 1312);
      v120 = v113 & -(__int64)v119;
      v121 = *(_DWORD *)(v17 + v11 + 1272) >> 6;
      v122 = 0;
      LOBYTE(v121) = (*(_DWORD *)(v17 + v11 + 1272) & 0x40) != 0;
      *(_DWORD *)v196 = v121;
      v191 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v17 + v11 + 1288);
      SpinLock = *(PKSPIN_LOCK *)(v17 + v11 + 1280);
      if ( v120 && *(_QWORD *)v120 )
      {
        v114 = *(void **)v120;
        v122 = *(_DWORD *)(v120 + 8);
        v118 = *(_BYTE *)(v120 + 40) & 1;
        v115 = *(_QWORD *)(v120 + 16);
        v116 = *(_QWORD *)(v120 + 24);
        v117 = *(_QWORD *)(v120 + 32);
      }
      if ( v111 )
      {
        v114 = 0LL;
      }
      else if ( v114 )
      {
        LOBYTE(v183) = v118;
        ((void (__fastcall *)(void *, _QWORD, __int64, __int64, __int64, struct VIDSCH_HW_QUEUE **, bool *))DxgCoreInterface[76])(
          v114,
          v122,
          v115,
          v116,
          v117,
          v183,
          v184);
        if ( !v118 )
        {
          if ( (MEMORY[4] & 0x10) != 0 )
            ExpInterlockedPushEntrySList(
              (PSLIST_HEADER)SpinLock + 3,
              (PSLIST_ENTRY)(&v191[-1].Token.SurfaceComplete + 131));
LABEL_147:
          v37 = a7;
LABEL_36:
          v41 = v200;
          if ( bTracingEnabled && v37 )
          {
            v48 = !_BitScanForward((unsigned int *)&v170, v194);
            v171 = -1;
            v207 = v170;
            if ( !v48 )
              v171 = v170;
            v215 = v171;
            v216 = *(_DWORD *)(v17 + v11 + 1168);
            if ( (byte_140081241 & 1) != 0 )
            {
              if ( v200 )
              {
                v172 = *(_QWORD *)(v200 + 8);
                v173 = *(_DWORD *)(a2 + 2800);
                if ( !v172 )
                  LODWORD(v172) = v200;
              }
              else
              {
                LODWORD(v172) = 0;
                LOBYTE(v173) = 0;
              }
              v174 = *(_QWORD *)(v17 + v11 + 1312);
              v175 = *(_DWORD *)(v174 + 4) * ((8 * *(_DWORD *)(v174 + 8) + 231) & 0xFFFFFFF8);
              McTemplateK0pxqqpqx_EtwWriteTransfer(
                v175,
                v174,
                v172,
                *(_QWORD *)(a2 + 16),
                *(_QWORD *)(v175 + v174 + 40),
                v193,
                *(_DWORD *)(v17 + v11 + 1176),
                v172,
                v173,
                v215);
            }
          }
          v197 = *(_QWORD *)(v17 + v11 + 1312);
          if ( (*(_DWORD *)v197 & 0x3FF) != 0 )
          {
            v86 = *(_DWORD *)(v17 + v11 + 1200);
            v87 = *(_DWORD *)(v17 + v11 + 1204);
            v88 = 0;
            v89 = v37 != 0;
            *(_DWORD *)v196 = v87;
            v188 = v37 != 0;
            v194 = v86;
            if ( v86 )
            {
              v90 = (unsigned int *)v197;
              do
              {
                if ( (v86 & 1) != 0 )
                {
                  if ( (v87 & 1) != 0 )
                  {
                    v91 = *v90;
                    v92 = *v90 & 0x3FF;
                    v223[0] = a2;
                    v223[1] = v90;
                    v224 = v92;
                    if ( *(_BYTE *)(a2 + 156) )
                      v93 = (v91 >> 10) & 0x3FF;
                    else
                      v93 = 0;
                    v48 = !_BitScanForward((unsigned int *)&v94, v92);
                    v95 = -1;
                    v225 = v93;
                    v208 = v94;
                    v96 = 0;
                    if ( !v48 )
                      v95 = v94;
                    v226 = 0;
                    v48 = !_BitScanForward((unsigned int *)&v97, v93);
                    v98 = v95;
                    v99 = -1;
                    v209 = v97;
                    if ( !v48 )
                      v99 = v97;
                    v227 = v98;
                    v100 = v99;
                    v228 = v99;
                    while ( v92 || v93 )
                    {
                      if ( v98 < v100 )
                      {
                        v132 = v90[1];
                        v133 = v90[2];
                        v192 = v89;
                        v134 = (char *)v90 + v132 * ((8 * v133 + 231) & 0xFFFFFFF8);
                        v135 = (unsigned __int64)(v96 + v88 * v132) << 6;
                        v136 = *(_QWORD *)&v134[v135 + 48];
                        v137 = *(_QWORD *)&v134[v135 + 72];
                        v138 = *(_QWORD *)&v134[v135 + 64];
                        v237 = v136;
                        VidSchiRetireFlipFenceForCancelledFlipEntry(
                          (struct _VIDSCH_GLOBAL *)a2,
                          v193,
                          (struct VIDMM_ALLOC *)v136,
                          v137,
                          v98,
                          v88,
                          &v192);
                        v139 = *(_QWORD *)(v136 + 96);
                        v140 = *(_QWORD *)(v139 + 32);
                        _InterlockedDecrement((volatile signed __int32 *)(v136 + 104));
                        v141 = *(_QWORD *)(v139 + 24);
                        if ( v141 )
                          _InterlockedDecrement((volatile signed __int32 *)(v141 + 8));
                        if ( v192 && v140 )
                        {
                          v149 = v203;
                          v150 = 2LL;
                          v236[0] = v138;
                          v151 = 0LL;
                          v236[1] = v137;
                          v152 = 0LL;
                          v153 = v237;
                          SpinLock = (PKSPIN_LOCK)2;
                          do
                          {
                            if ( v236[v152]
                              && (int)VidSchiSignalSyncObjectsFromCpu(
                                        v149,
                                        1u,
                                        (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*(_QWORD *)(v153 + 96) + 32LL)
                                                                      + 8LL * (_QWORD)v151),
                                        0,
                                        &v236[(_QWORD)v151],
                                        0LL) < 0 )
                            {
                              v154 = (bool *)v236[v152];
                              WdLogSingleEntry3(
                                1LL,
                                v151,
                                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v153 + 96) + 32LL) + v152 * 8),
                                v154);
                              v155 = *(_QWORD *)(v153 + 96);
                              WdLogGlobalForLineNumber = 30229;
                              LOBYTE(v185) = 0;
                              v184 = v154;
                              v183 = *(struct VIDSCH_HW_QUEUE ***)(*(_QWORD *)(v155 + 32) + v152 * 8);
                              v182 = v151;
                              DxgkLogInternalTriageEvent(v156, 0x40000LL);
                              v150 = (__int64)SpinLock;
                            }
                            v151 = (unsigned __int64 *)((char *)v151 + 1);
                            ++v152;
                            SpinLock = (PKSPIN_LOCK)--v150;
                          }
                          while ( v150 );
                          v90 = (unsigned int *)v197;
                        }
                        v89 = v188;
                      }
                      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v223);
                      v100 = v228;
                      v93 = v225;
                      v92 = v224;
                      v98 = v227;
                      v96 = v226;
                    }
                    v86 = v194;
                    v87 = *(_DWORD *)v196;
                  }
                  ++v88;
                }
                v86 >>= 1;
                v87 >>= 1;
                v194 = v86;
                *(_DWORD *)v196 = v87;
              }
              while ( v86 );
              v11 = v212;
              v17 = v238;
              v41 = v200;
            }
            if ( v41 )
              VidSchiCheckPendingDeviceCommand(v41, 1LL);
          }
          v42 = 0;
          if ( *(_DWORD *)(v17 + v11 + 1212) )
          {
            v43 = v17 + v11;
            do
            {
              v44 = *(_DWORD **)(v43 + 8LL * v42 + 120);
              if ( (*(_DWORD *)(v17 + v11 + 1272) & 0x4000) != 0 )
              {
                if ( v44 )
                {
                  VidSchiReleaseSyncObjectReference(v44);
                  *(_QWORD *)(v43 + 8LL * v42 + 120) = 0LL;
                }
              }
              else if ( v44 )
              {
                --v44[198];
              }
              ++v42;
            }
            while ( v42 < *(_DWORD *)(v17 + v11 + 1212) );
            v41 = v200;
          }
          ++v195;
          v45 = a2;
          _InterlockedDecrement((volatile signed __int32 *)(v41 + 1828));
          v46 = v202;
          if ( *(_BYTE *)(a2 + 2468) )
            v45 = a2 + 4 * v202;
          _InterlockedDecrement((volatile signed __int32 *)(v45 + 796));
          _InterlockedDecrement((volatile signed __int32 *)(a2 + 792));
          _InterlockedDecrement((volatile signed __int32 *)(v41 + 4 * v46 + 1764));
          if ( (*(_DWORD *)(v17 + v11 + 1272) & 0x10) != 0 )
            v47 = ((unsigned __int16)**(_DWORD **)(v17 + v11 + 1312) | (unsigned __int16)(**(_DWORD **)(v17 + v11 + 1312) >> 10)) & 0x3FF;
          else
            v47 = (unsigned int)((1 << *(_DWORD *)(a2 + 152)) - 1);
          v48 = !_BitScanForward((unsigned int *)&v49, v47);
          v50 = (unsigned int)v47;
          v214 = v49;
          v51 = -1;
          if ( !v48 )
            v51 = v49;
          if ( (_DWORD)v47 )
          {
            do
            {
              --*(_DWORD *)(304LL * v51 + *(_QWORD *)(a2 + 8 * v46 + 3432) + 196);
              v52 = 1 << v51;
              v51 = -1;
              v50 = ~v52 & (unsigned int)v50;
              v48 = !_BitScanForward((unsigned int *)&v52, v50);
              v213 = v52;
              if ( !v48 )
                v51 = v52;
            }
            while ( (_DWORD)v50 );
          }
          v199 |= v47;
          _InterlockedDecrement((volatile signed __int32 *)(v41 + 4 * v46 + 1700));
          --*(_DWORD *)(v41 + 1832);
          v53 = *(unsigned int *)(*(_QWORD *)(a2 + 8 * v46 + 3432) + 44488LL);
          if ( (_DWORD)v53 != -1 )
          {
            v181 = *(void (__fastcall **)(_QWORD, __int64, __int64, __int64, unsigned __int64 *))(a2 + 3304);
            if ( v181 )
              v181(*(_QWORD *)(a2 + 3352), v53, v47, v50, v182);
          }
          *(_DWORD *)(v11 + 76) = a5;
          v54 = *(_QWORD *)(a2 + 8 * v46 + 3432);
          v55 = *(unsigned int *)(v54 + 144);
          v8 = *(_QWORD *)(v54 + 136) + 112 * v55;
          *(_DWORD *)(v54 + 144) = (v55 + 1) & (*(_DWORD *)(v54 + 128) - 1);
          v56 = *(void **)(v8 + 72);
          if ( v56 )
            memset(v56, 0, 8LL * *(unsigned int *)(a2 + 152));
          v57 = 1400 * v239;
          *(_DWORD *)v8 = (a7 != 0) + 3;
          *(_DWORD *)(v8 + 16) = **(_DWORD **)(v57 + v11 + 1312) & 0x3FF;
          *(_DWORD *)(v8 + 20) = (**(_DWORD **)(v57 + v11 + 1312) >> 10) & 0x3FF;
          *(_BYTE *)(v8 + 24) = *(_BYTE *)(v11 + 80);
          *(_DWORD *)(v8 + 28) = a5;
          *(LARGE_INTEGER *)(v8 + 8) = KeQueryPerformanceCounter(0LL);
          v16 = 1LL;
          *(_BYTE *)(v8 + 36) = (*(_DWORD *)(v57 + v11 + 1272) & 0x20) != 0;
          *(_DWORD *)(v8 + 40) = *(_DWORD *)(v57 + v11 + 1172);
          *(_DWORD *)(v8 + 32) = *(_DWORD *)(v57 + v11 + 1176);
          *(_DWORD *)(v8 + 44) = *(_DWORD *)(v57 + v11 + 1276);
          *(_DWORD *)(v8 + 48) = *(_DWORD *)(v54 + 3192);
          *(_QWORD *)(v8 + 56) = *(_QWORD *)(v57 + v11 + 1432);
          *(_QWORD *)(v8 + 64) = *(_QWORD *)(v57 + v11 + 1440);
          if ( *(_QWORD *)(v8 + 72) && !a7 )
          {
            v230 = *(unsigned int **)(v57 + v11 + 1312);
            v229 = a2;
            v101 = *v230;
            v102 = *v230 & 0x3FF;
            v231 = v102;
            if ( *(_BYTE *)(a2 + 156) )
              v103 = (v101 >> 10) & 0x3FF;
            else
              v103 = 0;
            v48 = !_BitScanForward((unsigned int *)&v104, v102);
            v232 = v103;
            v211 = v104;
            v105 = -1;
            if ( !v48 )
              v105 = v104;
            v233 = 0;
            v48 = !_BitScanForward((unsigned int *)&v106, v103);
            v107 = v105;
            v108 = 0;
            v109 = -1;
            v210 = v106;
            if ( !v48 )
              v109 = v106;
            v234 = v107;
            v110 = v109;
            v235 = v109;
            while ( v102 || v103 )
            {
              if ( v107 < v110 )
                *(_QWORD *)(*(_QWORD *)(v8 + 72) + 8LL * v107) = *(_QWORD *)(v108
                                                                           * ((8
                                                                             * *(_DWORD *)(*(_QWORD *)(v57 + v11 + 1312)
                                                                                         + 8LL)
                                                                             + 231) & 0xFFFFFFF8)
                                                                           + *(_QWORD *)(v57 + v11 + 1312)
                                                                           + 24LL);
              VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(&v229);
              v110 = v235;
              v103 = v232;
              v102 = v231;
              v107 = v234;
              v108 = v233;
            }
          }
          v14 = v202;
          v10 = v204;
          *(_DWORD *)(v8 + 84) = *(_DWORD *)(v54 + 3252);
          *(_DWORD *)(v8 + 80) = *(_DWORD *)(v54 + 3248);
          *(_DWORD *)(v8 + 88) = *(_DWORD *)(v11 + 56);
          *(_DWORD *)(v8 + 92) = *(_DWORD *)(v11 + 60);
          *(_DWORD *)(v8 + 96) = *(_DWORD *)(v11 + 64);
          *(_DWORD *)(v8 + 100) = *(_DWORD *)(v11 + 68);
          *(_DWORD *)(v8 + 104) = *(_DWORD *)(v11 + 72);
          *(_DWORD *)(v8 + 108) = *(_DWORD *)(v11 + 76);
          LODWORD(v8) = v14;
          goto LABEL_61;
        }
      }
      if ( v112 )
      {
        v146 = *(_QWORD *)(v197 + 200);
        if ( v146 )
        {
          memset(&v242, 0, sizeof(v242));
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v112 + 16), &v242);
          _InterlockedIncrement((volatile signed __int32 *)(v146 + 12));
          v147 = *(void **)(v112 + 8);
          if ( v147 )
            CRefCountedBuffer::RefCountedBufferRelease(v147);
          *(_QWORD *)(v112 + 8) = v146;
          KeReleaseInStackQueuedSpinLock(&v242);
        }
      }
      DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
        SpinLock,
        v191,
        v189,
        v196[0],
        0,
        0,
        0,
        v185,
        v186,
        v114);
      goto LABEL_147;
    }
    if ( v20 != 15 )
    {
      if ( v20 == 14 )
        goto LABEL_183;
      if ( v20 != 5 )
        goto LABEL_169;
    }
    v179 = *(_DWORD *)(v17 + v11 + 1272);
    if ( (v179 & 0x20) == 0 )
    {
LABEL_169:
      v16 = 1LL;
      goto LABEL_61;
    }
    if ( (v179 & 0x2000) != 0 && *(_BYTE *)(a2 + 59) )
    {
      v22 = 1;
      goto LABEL_193;
    }
    v16 = 1LL;
    if ( v10 )
      *v10 = 1;
LABEL_61:
    if ( a5 == a6 )
      break;
    v13 = v198;
    v15 = ((_BYTE)a5 + 1) & 0x3F;
    a5 = ((_BYTE)a5 + 1) & 0x3F;
  }
  v58 = v195;
  if ( v195 )
  {
    v59 = v199;
    v48 = !_BitScanForward((unsigned int *)&v60, v199);
    v61 = -1;
    LODWORD(v212) = v60;
    if ( !v48 )
      v61 = v60;
    if ( v199 )
    {
      do
      {
        v62 = *(_QWORD *)(a2 + 8 * v14 + 3432);
        v63 = v61;
        v64 = (unsigned int)v61;
        v65 = *(int *)(304 * v64 + v62 + 188);
        if ( (int)v65 > -1 )
        {
          v66 = *(_QWORD *)(a2 + 3560);
          if ( *(_DWORD *)(v66 + 160 * v65 + 112) == (_DWORD)v16 && v193 != -1 )
          {
            v67 = v66 + 160 * v65;
            if ( !v67
              || *(_BYTE *)(v67 + 98)
              && !*(_DWORD *)(304 * v64 + v62 + 192)
              && *(_BYTE *)(v67 + 96)
              && !*(_DWORD *)(304 * v64 + v62 + 196) )
            {
              VidSchiFlushPendingTokenList(v203, (struct _VIDSCH_GLOBAL *)a2);
              v14 = v202;
            }
          }
        }
        v61 = -1;
        v59 &= ~((_DWORD)v16 << v63);
        v48 = !_BitScanForward((unsigned int *)&v68, v59);
        LODWORD(v204) = v68;
        if ( !v48 )
          v61 = v68;
      }
      while ( v59 );
      v58 = v195;
    }
  }
  *(_DWORD *)(a2 + 860) -= v58;
  v69 = v198;
  *((_DWORD *)v198 + 809) -= v58;
  _InterlockedAdd((volatile signed __int32 *)(a2 + 864), -v58);
  _InterlockedAdd((volatile signed __int32 *)v69 + 810, -v58);
  if ( !a7
    && _InterlockedCompareExchange((volatile signed __int32 *)v69 + 19736, 3, 2) == 2
    && !_InterlockedExchange((volatile __int32 *)(a2 + 2712), v16) )
  {
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a2 + 16) + 24LL), v16);
    *(_QWORD *)(a2 + 2672) = -1LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 2680), CriticalWorkQueue);
  }
  v70 = *((_QWORD *)v69 + 2);
  if ( v70 )
  {
    v71 = 0;
    v72 = *(_QWORD **)(v70 + 72);
    while ( v72 != (_QWORD *)(v70 + 72) )
    {
      updated = VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v72 - 3));
      v72 = (_QWORD *)*v72;
      v71 |= updated;
    }
    v74 = *(_QWORD *)(v70 + 32);
    v75 = 0;
    v76 = (_QWORD **)(v74 + 3752);
    while ( 1 )
    {
      v77 = *v76;
      if ( *v76 == v76 )
        break;
      if ( (_QWORD **)v77[1] != v76 || (v78 = (_QWORD *)*v77, *(_QWORD **)(*v77 + 8LL) != v77) )
LABEL_95:
        __fastfail(3u);
      *v76 = v78;
      v78[1] = v76;
      v77[1] = 0LL;
      *v77 = 0LL;
      v75 |= VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v77 - 5));
    }
    v79 = v203;
    v80 = (_QWORD **)(v74 + 3768);
    while ( 1 )
    {
      v81 = *v80;
      if ( *v80 == v80 )
        break;
      if ( (_QWORD **)v81[1] != v80 )
        goto LABEL_95;
      v82 = (_QWORD *)*v81;
      if ( *(_QWORD **)(*v81 + 8LL) != v81 )
        goto LABEL_95;
      *v80 = v82;
      v82[1] = v80;
      *v81 = 0LL;
      v81[1] = 0LL;
      v83 = (struct HwQueueStagingList *)(v81 + 19);
      if ( !*(_QWORD *)v83 )
      {
        v84 = (struct HwQueueStagingList **)*((_QWORD *)v79 + 2);
        if ( *v84 != (struct HwQueueStagingList *)((char *)v79 + 8) )
          goto LABEL_95;
        *(_QWORD *)v83 = (char *)v79 + 8;
        *((_QWORD *)v83 + 1) = v84;
        *v84 = v83;
        *((_QWORD *)v79 + 2) = v83;
        *((_BYTE *)v79 + 24) = 0;
      }
    }
    v9 = v71 | v75;
  }
  VidSchiSignalFlipEvents(v69, v9, 0LL);
  return v195;
}
