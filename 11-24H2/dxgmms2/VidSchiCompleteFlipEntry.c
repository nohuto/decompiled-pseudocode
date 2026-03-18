/*
 * XREFs of VidSchiCompleteFlipEntry @ 0x14002AB90
 * Callers:
 *     VidSchiCompletePendingFlipOnPlane @ 0x14001C0D8 (VidSchiCompletePendingFlipOnPlane.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x14002A7D4 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14002D1D0 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     VidSchiExecuteMmIoFlip @ 0x14002D920 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1400310FC (-VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAU.c)
 *     VidSchiRestartQueuedFlip @ 0x140031464 (VidSchiRestartQueuedFlip.c)
 *     VidSchiCancelIndependentFlips @ 0x14003FA48 (VidSchiCancelIndependentFlips.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1400410E8 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 *     ?VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEA_NPEAIII@Z @ 0x140041F6C (-VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1400461F0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ?VidSchiSynchronouslyCancelPendingFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@I@Z @ 0x140054AA8 (-VidSchiSynchronouslyCancelPendingFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVID.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14000EF50 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchiReleaseSyncObjectReference @ 0x14000F6E0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x140015574 (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x140018F34 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ?IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14001BD68 (-IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchiFlushPendingTokenList @ 0x14001DA00 (VidSchiFlushPendingTokenList.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x140025E54 (VidSchiPropagatePresentHistoryToken.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111111PEAX@Z @ 0x140026104 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140026328 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x140027710 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x140029FAC (-VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     ?VidSchiRetireFlipFenceForCancelledFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDMM_ALLOC@@_KIIPEA_N@Z @ 0x14002C250 (-VidSchiRetireFlipFenceForCancelledFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDMM_ALLOC@@_KIIPEA_N.c)
 *     ?VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_VIDSCH_FLIP_STATUS@@PEAVHwQueueStagingList@@@Z @ 0x14002C4AC (-VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_E.c)
 *     VidSchiSignalFlipEvents @ 0x14002C6E8 (VidSchiSignalFlipEvents.c)
 *     ?UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@IW4_VIDSCH_FLIP_STATUS@@@Z @ 0x14002CD68 (-UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PE.c)
 *     ?SetIndependentFlipStage@@YAXPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE@@@Z @ 0x14002CF50 (-SetIndependentFlipStage@@YAXPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_.c)
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x14002CF78 (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 *     ?VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14002CFEC (-VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x14002D4D0 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     McTemplateK0pxqqpqx_EtwWriteTransfer @ 0x14004A04C (McTemplateK0pxqqpqx_EtwWriteTransfer.c)
 *     McTemplateK0qqt_EtwWriteTransfer @ 0x14004A74C (McTemplateK0qqt_EtwWriteTransfer.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x14004A940 (McTemplateK0qq_EtwWriteTransfer.c)
 *     ??0_unnamed_type_PerPlane_@_MOCKDRIVERSTATE_SET_PLANE@@QEAA@XZ @ 0x14004EBC4 (--0_unnamed_type_PerPlane_@_MOCKDRIVERSTATE_SET_PLANE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     memset @ 0x140056340 (memset.c)
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
  __int64 v36; // r8
  void *v37; // rcx
  unsigned int v38; // r12d
  struct _VIDSCH_PRESENT_INFO *v39; // rbx
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r13
  unsigned int v44; // ebx
  __int64 v45; // r13
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // r8
  bool v50; // zf
  int v51; // eax
  __int64 v52; // r9
  char v53; // cl
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // r13
  __int64 v57; // rdx
  void *v58; // rcx
  __int64 v59; // r15
  unsigned int v60; // r8d
  unsigned int v61; // esi
  int v62; // eax
  char v63; // cl
  __int64 v64; // r10
  unsigned int v65; // ebx
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  int v70; // eax
  struct _VIDSCH_PRESENT_INFO *v71; // r13
  __int64 v72; // rsi
  int v73; // r15d
  _QWORD *v74; // rbx
  int updated; // eax
  __int64 v76; // r14
  int v77; // ebx
  _QWORD **v78; // rsi
  _QWORD *v79; // rax
  _QWORD *v80; // rcx
  struct HwQueueStagingList *v81; // r9
  _QWORD **v82; // rcx
  _QWORD *v83; // rax
  _QWORD *v84; // rdx
  struct HwQueueStagingList *v85; // rax
  struct HwQueueStagingList **v86; // r8
  unsigned int v88; // eax
  unsigned int v89; // ecx
  unsigned int v90; // r11d
  bool v91; // bl
  unsigned int *v92; // r15
  unsigned int v93; // edx
  unsigned int v94; // r8d
  unsigned int v95; // edx
  int v96; // eax
  char v97; // cl
  int v98; // r10d
  int v99; // eax
  unsigned int v100; // r9d
  char v101; // cl
  unsigned int v102; // eax
  unsigned int v103; // edx
  unsigned int v104; // r8d
  unsigned int v105; // edx
  int v106; // eax
  char v107; // cl
  int v108; // eax
  unsigned int v109; // r9d
  int v110; // r10d
  char v111; // cl
  unsigned int v112; // eax
  bool v113; // r8
  __int64 v114; // r13
  __int64 v115; // rcx
  __int64 v116; // r12
  __int64 v117; // r10
  __int64 v118; // r9
  __int64 v119; // r11
  char v120; // bl
  bool v121; // cf
  __int64 v122; // rdx
  int v123; // eax
  unsigned int v124; // ecx
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *FlipManagerAuxiliaryPresentInfo; // rax
  __int64 v126; // rcx
  __int64 v127; // r8
  int v128; // ecx
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *v129; // rax
  __int64 v130; // r8
  unsigned int v131; // eax
  __int64 v132; // rbx
  void *v133; // rcx
  unsigned int v134; // edx
  unsigned int v135; // eax
  char *v136; // rax
  unsigned __int64 v137; // rdx
  __int64 v138; // rbx
  unsigned __int64 v139; // rsi
  __int64 v140; // r12
  __int64 v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rcx
  unsigned int v144; // eax
  int v145; // r8d
  __int64 v146; // rcx
  __int64 v147; // r10
  __int64 v148; // rbx
  void *v149; // rcx
  int v150; // eax
  struct HwQueueStagingList *v151; // r15
  __int64 v152; // rbx
  __int64 v153; // r13
  __int64 v154; // r12
  __int64 v155; // rsi
  __int64 v156; // rax
  __int64 v157; // rcx
  _MOCKDRIVERSTATE_SET_PLANE::_unnamed_type_PerPlane_ *v158; // r12
  __int64 v159; // r13
  unsigned int *v160; // rax
  unsigned int v161; // edx
  unsigned int v162; // r8d
  __int64 v163; // rdx
  int v164; // eax
  char v165; // cl
  unsigned int v166; // r11d
  unsigned int v167; // r9d
  char v168; // cl
  int v169; // eax
  unsigned int v170; // r10d
  int v171; // eax
  char v172; // cl
  __int64 v173; // r8
  int v174; // r9d
  __int64 v175; // rdx
  __int64 v176; // rcx
  char v177; // al
  __int64 v178; // rdx
  __int64 v179; // rcx
  int v180; // eax
  void (__fastcall *v181)(_QWORD, __int64, __int64, __int64); // rax
  struct VIDSCH_HW_QUEUE **v182; // [rsp+28h] [rbp-D8h]
  bool v183; // [rsp+60h] [rbp-A0h]
  bool v184; // [rsp+60h] [rbp-A0h]
  bool v185; // [rsp+60h] [rbp-A0h]
  int v186; // [rsp+68h] [rbp-98h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v187; // [rsp+68h] [rbp-98h]
  bool v188; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v189; // [rsp+74h] [rbp-8Ch]
  unsigned int v190; // [rsp+78h] [rbp-88h]
  unsigned int v191; // [rsp+7Ch] [rbp-84h]
  bool v192[8]; // [rsp+80h] [rbp-80h]
  __int64 v193; // [rsp+88h] [rbp-78h]
  struct _VIDSCH_PRESENT_INFO *v194; // [rsp+90h] [rbp-70h]
  unsigned int v195; // [rsp+9Ch] [rbp-64h]
  __int64 v196; // [rsp+A0h] [rbp-60h]
  PKSPIN_LOCK SpinLock; // [rsp+A8h] [rbp-58h]
  __int64 v198; // [rsp+B0h] [rbp-50h]
  struct HwQueueStagingList *v199; // [rsp+B8h] [rbp-48h]
  _BYTE *v200; // [rsp+C0h] [rbp-40h]
  int v201; // [rsp+C8h] [rbp-38h]
  int v202; // [rsp+CCh] [rbp-34h]
  int v203; // [rsp+D0h] [rbp-30h]
  int v204; // [rsp+D4h] [rbp-2Ch]
  int v205; // [rsp+D8h] [rbp-28h]
  int v206; // [rsp+DCh] [rbp-24h]
  int v207; // [rsp+E0h] [rbp-20h]
  __int64 v208; // [rsp+E8h] [rbp-18h]
  int v209; // [rsp+F0h] [rbp-10h]
  int v210; // [rsp+F4h] [rbp-Ch]
  int v211; // [rsp+F8h] [rbp-8h]
  int v212; // [rsp+FCh] [rbp-4h]
  _QWORD v213[2]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v214; // [rsp+110h] [rbp+10h]
  unsigned int v215; // [rsp+114h] [rbp+14h]
  unsigned int v216; // [rsp+118h] [rbp+18h]
  unsigned int v217; // [rsp+11Ch] [rbp+1Ch]
  unsigned int v218; // [rsp+120h] [rbp+20h]
  _QWORD v219[2]; // [rsp+128h] [rbp+28h] BYREF
  unsigned int v220; // [rsp+138h] [rbp+38h]
  unsigned int v221; // [rsp+13Ch] [rbp+3Ch]
  int v222; // [rsp+140h] [rbp+40h]
  unsigned int v223; // [rsp+144h] [rbp+44h]
  unsigned int v224; // [rsp+148h] [rbp+48h]
  __int64 v225; // [rsp+150h] [rbp+50h] BYREF
  unsigned int *v226; // [rsp+158h] [rbp+58h]
  unsigned int v227; // [rsp+160h] [rbp+60h]
  unsigned int v228; // [rsp+164h] [rbp+64h]
  int v229; // [rsp+168h] [rbp+68h]
  unsigned int v230; // [rsp+16Ch] [rbp+6Ch]
  unsigned int v231; // [rsp+170h] [rbp+70h]
  _QWORD v232[2]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v233; // [rsp+188h] [rbp+88h]
  __int64 v234; // [rsp+190h] [rbp+90h]
  __int64 v235; // [rsp+198h] [rbp+98h]
  struct _KLOCK_QUEUE_HANDLE v236; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+1B8h] [rbp+B8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v238; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v239; // [rsp+1F0h] [rbp+F0h] BYREF
  int v240; // [rsp+1F4h] [rbp+F4h]
  _QWORD v241[21]; // [rsp+1F8h] [rbp+F8h] BYREF

  v8 = a3;
  v9 = 0;
  v10 = a8;
  v11 = a4;
  v208 = a4;
  v189 = v8;
  v199 = a1;
  v200 = a8;
  if ( a8 )
    *a8 = 0;
  if ( !*(_DWORD *)(a2 + 860) )
    return 0LL;
  v13 = *(struct _VIDSCH_PRESENT_INFO **)(a2 + 8 * v8 + 3432);
  v14 = v8;
  v194 = v13;
  v198 = v8;
  if ( !a4 )
    return 0LL;
  v15 = a5;
  LODWORD(v16) = 1;
  v191 = 0;
  v195 = 0;
  while ( 1 )
  {
    v17 = 1400 * v15;
    v18 = 4673;
    v235 = v15;
    v234 = 1400 * v15;
    v19 = 0LL;
    v196 = 0LL;
    v20 = *(_DWORD *)(1400 * v15 + v11 + 1172);
    if ( v20 > 0xC || !_bittest(&v18, v20) )
    {
      v19 = *(_QWORD *)(v17 + v11 + 1160);
      v196 = v19;
    }
    v21 = a7;
    v186 = v16;
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
      v145 = 1;
      if ( v20 <= 0xC )
      {
        v150 = 4673;
        if ( _bittest(&v150, v20) )
          v145 = 0;
      }
      if ( a7 == 9 )
      {
        if ( v20 == 15 || v20 == 5 )
        {
          LODWORD(v16) = 1;
          v186 = 1;
        }
        else
        {
          LODWORD(v16) = 0;
          v186 = 0;
        }
      }
      else if ( v20 == 13 || v20 == 15 || v20 == 5 )
      {
        v145 = 0;
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
          v146 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 40) + 32LL)
                                       + 8LL * *(unsigned int *)(*(_QWORD *)(v19 + 32) + 4LL))
                           + 8 * v14
                           + 88);
          _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 8 * v14 + 6712) + 8LL), 1u);
          _InterlockedAdd((volatile signed __int32 *)(v146 + 8), 1u);
          _InterlockedAdd((volatile signed __int32 *)(a2 + 792), 1u);
          IncrementNumberOfQueuedFlipPerSource((struct _VIDSCH_GLOBAL *)a2, v8);
          _InterlockedAdd((volatile signed __int32 *)(v147 + 1828), 1u);
          _InterlockedAdd((volatile signed __int32 *)(v147 + 4 * v14 + 1764), 1u);
        }
      }
      goto LABEL_192;
    }
    if ( a7 != 12 )
      goto LABEL_123;
    if ( v20 - 2 <= 1 )
    {
LABEL_183:
      v144 = *(_DWORD *)(v17 + v11 + 1272);
      v186 = 0;
      LODWORD(v16) = 0;
      v145 = (v144 >> 5) & 1;
      if ( *(_BYTE *)(a2 + 59) && (v144 & 0x102020) == 0x102020 )
        v22 = 1;
LABEL_192:
      if ( !v145 )
      {
        v10 = v200;
LABEL_123:
        v16 = 1LL;
        goto LABEL_61;
      }
LABEL_193:
      *(_DWORD *)(v11 + 64) = ((_BYTE)a5 + 1) & 0x3F;
      VidSchiUpdateFlipQueueHistory(6LL, a2, (unsigned int)v8, v11, ((_BYTE)a5 + 1) & 0x3F);
      v21 = a7;
LABEL_10:
      v23 = *(_QWORD *)(a2 + 16);
      v24 = v16;
      v183 = v22;
      if ( *(_BYTE *)(v23 + 4976) )
      {
        if ( *(_DWORD *)(v23 + 296) == 1 )
        {
          v186 = v16;
          if ( *(_DWORD *)(v17 + v11 + 1172) == 11 )
          {
            v186 = v16;
            if ( (*(_DWORD *)(v17 + v11 + 1272) & 0x1000) == 0 )
            {
              v186 = v16;
              if ( !v21 )
              {
                v239 = -1;
                v240 = 0;
                memset(v241, 0, 0xA0uLL);
                v158 = (_MOCKDRIVERSTATE_SET_PLANE::_unnamed_type_PerPlane_ *)v241;
                v159 = 10LL;
                do
                {
                  _MOCKDRIVERSTATE_SET_PLANE::_unnamed_type_PerPlane_::_unnamed_type_PerPlane_(v158);
                  v158 = (_MOCKDRIVERSTATE_SET_PLANE::_unnamed_type_PerPlane_ *)((char *)v158 + 16);
                  --v159;
                }
                while ( v159 );
                v239 = v189;
                v160 = *(unsigned int **)(v17 + v11 + 1312);
                v213[0] = a2;
                v213[1] = v160;
                v161 = *v160;
                v162 = *v160 & 0x3FF;
                v214 = v162;
                if ( *(_BYTE *)(a2 + 156) )
                  v163 = (v161 >> 10) & 0x3FF;
                else
                  v163 = 0LL;
                v22 = v183;
                v50 = !_BitScanForward((unsigned int *)&v164, v162);
                v165 = -1;
                v215 = v163;
                v201 = v164;
                v166 = 0;
                if ( !v50 )
                  v165 = v164;
                v216 = 0;
                v167 = v165;
                v168 = -1;
                v50 = !_BitScanForward((unsigned int *)&v169, v163);
                v217 = v167;
                v202 = v169;
                if ( !v50 )
                  v168 = v169;
                v170 = v168;
                v218 = v168;
                while ( v162 || (_DWORD)v163 )
                {
                  if ( v167 < v170 )
                  {
                    v177 = 1;
                  }
                  else
                  {
                    v177 = 0;
                    v167 = v170;
                  }
                  v178 = 2LL * v166;
                  LODWORD(v241[v178]) = v167;
                  BYTE4(v241[v178]) = v177;
                  if ( v177 )
                    v179 = *(_QWORD *)(((unsigned __int64)v166 << 6)
                                     + *(_QWORD *)(v17 + v11 + 1312)
                                     + *(_DWORD *)(*(_QWORD *)(v17 + v11 + 1312) + 4LL)
                                     * ((8 * *(_DWORD *)(*(_QWORD *)(v17 + v11 + 1312) + 8LL) + 231) & 0xFFFFFFF8)
                                     + 24);
                  else
                    v179 = 0LL;
                  v241[2 * v166 + 1] = v179;
                  ++v240;
                  VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)v213);
                  v163 = v215;
                  v162 = v214;
                  v170 = v218;
                  v167 = v217;
                  v166 = v216;
                }
                v186 = v24;
                ((void (__fastcall *)(_QWORD, __int64, unsigned int *))DxgCoreInterface[87])(
                  *(_QWORD *)(a2 + 16),
                  v163,
                  &v239);
                goto LABEL_14;
              }
            }
          }
        }
      }
      if ( v21 == 9 || (v186 = v16, v21 == 6) )
      {
        FlipManagerAuxiliaryPresentInfo = GetFlipManagerAuxiliaryPresentInfo(*(struct _D3DKMT_AUXILIARYPRESENTINFO **)(v17 + v11 + 1464));
        if ( FlipManagerAuxiliaryPresentInfo )
        {
          *((_DWORD *)FlipManagerAuxiliaryPresentInfo + 13) = 1;
          if ( (byte_140081244 & 4) != 0 )
            McTemplateK0qq_EtwWriteTransfer(
              v126,
              &EventFlipManagerIFlipPresentCancel,
              v127,
              *((unsigned int *)FlipManagerAuxiliaryPresentInfo + 2),
              *(_DWORD *)(v17 + v11 + 1176));
        }
        v128 = v186;
        if ( a7 != 9 && a7 != 12 )
          goto LABEL_14;
        goto LABEL_155;
      }
      v186 = v16;
      if ( v21 != 12 )
        goto LABEL_14;
      v129 = GetFlipManagerAuxiliaryPresentInfo(*(struct _D3DKMT_AUXILIARYPRESENTINFO **)(v17 + v11 + 1464));
      v128 = v16;
      v186 = v16;
      if ( v129 )
      {
        v186 = v16;
        if ( v22 )
        {
          *((_DWORD *)v129 + 9) = 1;
          *((_DWORD *)v129 + 14) = 1;
          if ( (byte_140081244 & 4) == 0 )
            goto LABEL_155;
          McTemplateK0qqt_EtwWriteTransfer(
            v16,
            1,
            v130,
            *((_DWORD *)v129 + 2),
            *(_DWORD *)(v17 + v11 + 1176),
            (*(_DWORD *)(v17 + v11 + 1272) & 0x100000) != 0);
        }
        else
        {
          *((_DWORD *)v129 + 13) = 1;
          if ( (byte_140081244 & 4) == 0 )
            goto LABEL_155;
          McTemplateK0qq_EtwWriteTransfer(
            (unsigned int)v16,
            &EventFlipManagerIFlipPresentCancel,
            v130,
            *((unsigned int *)v129 + 2),
            *(_DWORD *)(v17 + v11 + 1176));
        }
        v128 = v16;
        v186 = v16;
      }
LABEL_155:
      if ( v128 )
      {
        v28 = v194;
        v131 = VidSchiDecrementPendingFlipsForFlipEntry(
                 (struct _VIDSCH_GLOBAL *)a2,
                 v194,
                 (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v17 + v11 + 120));
        v26 = a7;
        v190 = v131;
        v27 = v17 + v11 + 1312;
        *(_QWORD *)v192 = v27;
        goto LABEL_17;
      }
LABEL_14:
      if ( (*(_DWORD *)(v17 + v11 + 1272) & 0x10) != 0 )
        v25 = ((unsigned __int16)**(_DWORD **)(v17 + v11 + 1312) | (unsigned __int16)(**(_DWORD **)(v17 + v11 + 1312) >> 10)) & 0x3FF;
      else
        v25 = (1 << *(_DWORD *)(a2 + 152)) - 1;
      v26 = a7;
      v27 = v17 + v11 + 1312;
      v28 = v194;
      v190 = v25;
      *(_QWORD *)v192 = v27;
      if ( a7 == 9 )
      {
        v50 = *(_DWORD *)(v17 + v11 + 1172) == 13;
        *(_QWORD *)v192 = v17 + v11 + 1312;
        if ( v50 )
        {
          *(_QWORD *)v192 = v17 + v11 + 1312;
          *((_DWORD *)v194 + 813) &= ~v25;
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
        v132 = *(_QWORD *)(*(_QWORD *)v27 + 200LL);
        if ( v132 )
        {
          memset(&v236, 0, sizeof(v236));
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v30 + 16), &v236);
          _InterlockedIncrement((volatile signed __int32 *)(v132 + 12));
          v133 = *(void **)(v30 + 8);
          if ( v133 )
            CRefCountedBuffer::RefCountedBufferRelease(v133);
          *(_QWORD *)(v30 + 8) = v132;
          KeReleaseInStackQueuedSpinLock(&v236);
          v26 = a7;
          v29 = v17 + v11 + 120;
        }
        *(_QWORD *)(v17 + v11 + 1296) = 0LL;
      }
      VidSchiSignalRuntimeFenceForCompletedFlipEntry(a2, v29, v26, v199);
      v31 = 0;
      v32 = *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 ***)v192;
      if ( *(_DWORD *)(a2 + 152) )
      {
        v33 = **(_QWORD **)v192;
        do
        {
          v193 = v31 * ((8 * *(_DWORD *)(v33 + 8) + 231) & 0xFFFFFFF8);
          v34 = *(_QWORD *)(v193 + v33 + 200);
          if ( v34 )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v34 + 12), 0xFFFFFFFF) == 1 )
            {
              if ( *(_QWORD *)v34 )
                ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v34, (PVOID)v34);
              else
                ExFreePoolWithTag((PVOID)v34, 0);
            }
            *(_QWORD *)(v193 + v33 + 200) = 0LL;
          }
          ++v31;
        }
        while ( v31 < *(_DWORD *)(a2 + 152) );
        v32 = *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 ***)v192;
      }
      VidSchiReleaseFlipFencesReference((struct _VIDSCH_GLOBAL *)a2, *v32);
      v37 = *(void **)(v17 + v11 + 1304);
      if ( v37 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v37);
        *(_QWORD *)(v17 + v11 + 1304) = 0LL;
      }
      v38 = a7;
      if ( a7 )
      {
        v39 = v194;
      }
      else
      {
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a2 + 1992), &LockHandle);
        v39 = v194;
        *((_DWORD *)v194 + 11100) = *(_DWORD *)(v17 + v11 + 1176);
        if ( (*(_DWORD *)(v17 + v11 + 1272) & 0x20) == 0 )
        {
          v40 = v198;
          *(_DWORD *)(*((_QWORD *)v39 + 2) + 4 * v198 + 508) = *(_DWORD *)(v17 + v11 + 1176);
          *(_QWORD *)(*((_QWORD *)v39 + 2) + 8 * v40 + 576) = *(_QWORD *)(v17 + v11 + 1248);
          *(_QWORD *)(*((_QWORD *)v39 + 2) + 8 * v40 + 704) = *(_QWORD *)(v17 + v11 + 1232);
          *(_QWORD *)(*((_QWORD *)v39 + 2) + 8 * v40 + 832) = *(_QWORD *)(v17 + v11 + 1264);
          *(_QWORD *)(*((_QWORD *)v39 + 2) + 8 * v40 + 960) = *(_QWORD *)(v17 + v11 + 1256);
          *(_QWORD *)(*((_QWORD *)v39 + 2) + 8 * v40 + 1088) = *(_QWORD *)(v17 + v11 + 1240);
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
      v41 = *(_DWORD *)(v17 + v11 + 1272);
      if ( (v41 & 0x20) == 0 || !*(_QWORD *)(v17 + v11 + 1288) )
        goto LABEL_36;
      v185 = 1;
      switch ( a7 )
      {
        case 0u:
          break;
        case 9u:
          v185 = v186 != 0;
          if ( !v186 )
          {
            v113 = 0;
            goto LABEL_142;
          }
          break;
        case 6u:
          if ( (v41 & 0x100000) == 0 )
          {
            SetIndependentFlipStage((struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v17 + v11 + 120), v35);
            VidSchiPropagatePresentHistoryToken(
              a2,
              *(union _SLIST_HEADER **)(v17 + v11 + 1280),
              *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v17 + v11 + 1288),
              1,
              (*(_DWORD *)(v17 + v11 + 1272) & 0x40) != 0,
              0,
              0,
              *(_QWORD *)(v17 + v11 + 1296),
              *(_QWORD *)(v17 + v11 + 1312),
              0LL,
              (v17 + v11 + 1472) & -(__int64)(*(_QWORD *)(v17 + v11 + 1472) != 0LL),
              1);
          }
          break;
        default:
          if ( v22 )
          {
LABEL_141:
            v113 = v185;
            goto LABEL_142;
          }
          v113 = 0;
          v185 = 0;
LABEL_142:
          v114 = *(_QWORD *)(v17 + v11 + 1296);
          v115 = v17 + v11 + 1472;
          v116 = 0LL;
          v117 = 0LL;
          v118 = 0LL;
          v119 = 0LL;
          v120 = 0;
          v121 = *(_QWORD *)v115 != 0LL;
          v193 = *(_QWORD *)(v17 + v11 + 1312);
          v122 = v115 & -(__int64)v121;
          v123 = *(_DWORD *)(v17 + v11 + 1272) >> 6;
          v124 = 0;
          LOBYTE(v123) = (*(_DWORD *)(v17 + v11 + 1272) & 0x40) != 0;
          *(_DWORD *)v192 = v123;
          v187 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v17 + v11 + 1288);
          SpinLock = *(PKSPIN_LOCK *)(v17 + v11 + 1280);
          if ( v122 && *(_QWORD *)v122 )
          {
            v116 = *(_QWORD *)v122;
            v124 = *(_DWORD *)(v122 + 8);
            v120 = *(_BYTE *)(v122 + 40) & 1;
            v117 = *(_QWORD *)(v122 + 16);
            v118 = *(_QWORD *)(v122 + 24);
            v119 = *(_QWORD *)(v122 + 32);
          }
          if ( v113
            || !v116
            || (LOBYTE(v182) = v120,
                ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, _DWORD))DxgCoreInterface[76])(
                  v116,
                  v124,
                  v117,
                  v118,
                  v119,
                  (_DWORD)v182),
                v120) )
          {
            if ( v114 )
            {
              v148 = *(_QWORD *)(v193 + 200);
              if ( v148 )
              {
                memset(&v238, 0, sizeof(v238));
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v114 + 16), &v238);
                _InterlockedIncrement((volatile signed __int32 *)(v148 + 12));
                v149 = *(void **)(v114 + 8);
                if ( v149 )
                  CRefCountedBuffer::RefCountedBufferRelease(v149);
                *(_QWORD *)(v114 + 8) = v148;
                KeReleaseInStackQueuedSpinLock(&v238);
              }
            }
            LOBYTE(v36) = v185;
            DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(SpinLock, v187, v36, v192[0], 0, 0, 0);
          }
          else if ( (MEMORY[4] & 0x10) != 0 )
          {
            ExpInterlockedPushEntrySList(
              (PSLIST_HEADER)SpinLock + 3,
              (PSLIST_ENTRY)(&v187[-1].Token.SurfaceComplete + 131));
          }
          v38 = a7;
LABEL_36:
          v42 = 1LL;
          v43 = v196;
          if ( bTracingEnabled && v38 )
          {
            v50 = !_BitScanForward((unsigned int *)&v171, v190);
            v172 = -1;
            v203 = v171;
            if ( !v50 )
              v172 = v171;
            v211 = v172;
            v212 = *(_DWORD *)(v17 + v11 + 1168);
            if ( (byte_140081241 & 1) != 0 )
            {
              if ( v196 )
              {
                v173 = *(_QWORD *)(v196 + 8);
                v174 = *(_DWORD *)(a2 + 2800);
                if ( !v173 )
                  LODWORD(v173) = v196;
              }
              else
              {
                LODWORD(v173) = 0;
                LOBYTE(v174) = 0;
              }
              v175 = *(_QWORD *)(v17 + v11 + 1312);
              v176 = *(_DWORD *)(v175 + 4) * ((8 * *(_DWORD *)(v175 + 8) + 231) & 0xFFFFFFF8);
              McTemplateK0pxqqpqx_EtwWriteTransfer(
                v176,
                v175,
                v173,
                *(_QWORD *)(a2 + 16),
                *(_QWORD *)(v176 + v175 + 40),
                v189,
                *(_DWORD *)(v17 + v11 + 1176),
                v173,
                v174,
                v211);
              v42 = 1LL;
            }
          }
          v193 = *(_QWORD *)(v17 + v11 + 1312);
          if ( (*(_DWORD *)v193 & 0x3FF) != 0 )
          {
            v88 = *(_DWORD *)(v17 + v11 + 1200);
            v89 = *(_DWORD *)(v17 + v11 + 1204);
            v90 = 0;
            v91 = v38 != 0;
            *(_DWORD *)v192 = v89;
            v184 = v38 != 0;
            v190 = v88;
            if ( v88 )
            {
              v92 = (unsigned int *)v193;
              do
              {
                if ( (v88 & 1) != 0 )
                {
                  if ( (v89 & 1) != 0 )
                  {
                    v93 = *v92;
                    v94 = *v92 & 0x3FF;
                    v219[0] = a2;
                    v219[1] = v92;
                    v220 = v94;
                    if ( *(_BYTE *)(a2 + 156) )
                      v95 = (v93 >> 10) & 0x3FF;
                    else
                      v95 = 0;
                    v50 = !_BitScanForward((unsigned int *)&v96, v94);
                    v97 = -1;
                    v221 = v95;
                    v204 = v96;
                    v98 = 0;
                    if ( !v50 )
                      v97 = v96;
                    v222 = 0;
                    v50 = !_BitScanForward((unsigned int *)&v99, v95);
                    v100 = v97;
                    v101 = -1;
                    v205 = v99;
                    if ( !v50 )
                      v101 = v99;
                    v223 = v100;
                    v102 = v101;
                    v224 = v101;
                    while ( v94 || v95 )
                    {
                      if ( v100 < v102 )
                      {
                        v134 = v92[1];
                        v135 = v92[2];
                        v188 = v91;
                        v136 = (char *)v92 + v134 * ((8 * v135 + 231) & 0xFFFFFFF8);
                        v137 = (unsigned __int64)(v98 + v90 * v134) << 6;
                        v138 = *(_QWORD *)&v136[v137 + 48];
                        v139 = *(_QWORD *)&v136[v137 + 72];
                        v140 = *(_QWORD *)&v136[v137 + 64];
                        v233 = v138;
                        VidSchiRetireFlipFenceForCancelledFlipEntry(
                          (struct _VIDSCH_GLOBAL *)a2,
                          v189,
                          (struct VIDMM_ALLOC *)v138,
                          v139,
                          v100,
                          v90,
                          &v188);
                        v141 = *(_QWORD *)(v138 + 96);
                        v142 = *(_QWORD *)(v141 + 32);
                        _InterlockedDecrement((volatile signed __int32 *)(v138 + 104));
                        v143 = *(_QWORD *)(v141 + 24);
                        if ( v143 )
                          _InterlockedDecrement((volatile signed __int32 *)(v143 + 8));
                        if ( v188 && v142 )
                        {
                          v151 = v199;
                          v152 = 2LL;
                          v232[0] = v140;
                          v153 = 0LL;
                          v232[1] = v139;
                          v154 = 0LL;
                          v155 = v233;
                          SpinLock = (PKSPIN_LOCK)2;
                          do
                          {
                            if ( v232[v154]
                              && (int)VidSchiSignalSyncObjectsFromCpu(
                                        v151,
                                        1u,
                                        (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*(_QWORD *)(v155 + 96) + 32LL)
                                                                      + 8 * v153),
                                        0,
                                        (char *)&v232[v153],
                                        0LL) < 0 )
                            {
                              WdLogSingleEntry3(
                                1LL,
                                v153,
                                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v155 + 96) + 32LL) + v154 * 8),
                                v232[v154]);
                              v156 = *(_QWORD *)(v155 + 96);
                              WdLogGlobalForLineNumber = 30621;
                              v182 = *(struct VIDSCH_HW_QUEUE ***)(*(_QWORD *)(v156 + 32) + v154 * 8);
                              DxgkLogInternalTriageEvent(v157, 0x40000LL);
                              v152 = (__int64)SpinLock;
                            }
                            ++v153;
                            ++v154;
                            SpinLock = (PKSPIN_LOCK)--v152;
                          }
                          while ( v152 );
                          v92 = (unsigned int *)v193;
                        }
                        v91 = v184;
                      }
                      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)v219);
                      v102 = v224;
                      v95 = v221;
                      v94 = v220;
                      v100 = v223;
                      v98 = v222;
                    }
                    v88 = v190;
                    v42 = 1LL;
                    v89 = *(_DWORD *)v192;
                  }
                  ++v90;
                }
                v88 >>= 1;
                v89 >>= 1;
                v190 = v88;
                *(_DWORD *)v192 = v89;
              }
              while ( v88 );
              v11 = v208;
              v17 = v234;
              v43 = v196;
            }
            if ( v43 )
              VidSchiCheckPendingDeviceCommand((_QWORD *)v43);
          }
          v44 = 0;
          if ( *(_DWORD *)(v17 + v11 + 1212) )
          {
            v45 = v17 + v11;
            do
            {
              v46 = *(_QWORD *)(v45 + 8LL * v44 + 120);
              if ( (*(_DWORD *)(v17 + v11 + 1272) & 0x4000) != 0 )
              {
                if ( v46 )
                {
                  VidSchiReleaseSyncObjectReference((char *)v46, v42);
                  *(_QWORD *)(v45 + 8LL * v44 + 120) = 0LL;
                }
              }
              else if ( v46 )
              {
                --*(_DWORD *)(v46 + 792);
              }
              ++v44;
            }
            while ( v44 < *(_DWORD *)(v17 + v11 + 1212) );
            v43 = v196;
          }
          ++v191;
          v47 = a2;
          _InterlockedDecrement((volatile signed __int32 *)(v43 + 1828));
          v48 = v198;
          if ( *(_BYTE *)(a2 + 2468) )
            v47 = a2 + 4 * v198;
          _InterlockedDecrement((volatile signed __int32 *)(v47 + 796));
          _InterlockedDecrement((volatile signed __int32 *)(a2 + 792));
          _InterlockedDecrement((volatile signed __int32 *)(v43 + 4 * v48 + 1764));
          if ( (*(_DWORD *)(v17 + v11 + 1272) & 0x10) != 0 )
            v49 = ((unsigned __int16)**(_DWORD **)(v17 + v11 + 1312) | (unsigned __int16)(**(_DWORD **)(v17 + v11 + 1312) >> 10)) & 0x3FF;
          else
            v49 = (unsigned int)((1 << *(_DWORD *)(a2 + 152)) - 1);
          v50 = !_BitScanForward((unsigned int *)&v51, v49);
          v52 = (unsigned int)v49;
          v210 = v51;
          v53 = -1;
          if ( !v50 )
            v53 = v51;
          if ( (_DWORD)v49 )
          {
            do
            {
              --*(_DWORD *)(304LL * v53 + *(_QWORD *)(a2 + 8 * v48 + 3432) + 196);
              v54 = 1 << v53;
              v53 = -1;
              v52 = ~v54 & (unsigned int)v52;
              v50 = !_BitScanForward((unsigned int *)&v54, v52);
              v209 = v54;
              if ( !v50 )
                v53 = v54;
            }
            while ( (_DWORD)v52 );
          }
          v195 |= v49;
          _InterlockedDecrement((volatile signed __int32 *)(v43 + 4 * v48 + 1700));
          --*(_DWORD *)(v43 + 1832);
          v55 = *(unsigned int *)(*(_QWORD *)(a2 + 8 * v48 + 3432) + 44488LL);
          if ( (_DWORD)v55 != -1 )
          {
            v181 = *(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(a2 + 3304);
            if ( v181 )
              v181(*(_QWORD *)(a2 + 3352), v55, v49, v52);
          }
          *(_DWORD *)(v11 + 76) = a5;
          v56 = *(_QWORD *)(a2 + 8 * v48 + 3432);
          v57 = *(unsigned int *)(v56 + 144);
          v8 = *(_QWORD *)(v56 + 136) + 112 * v57;
          *(_DWORD *)(v56 + 144) = (v57 + 1) & (*(_DWORD *)(v56 + 128) - 1);
          v58 = *(void **)(v8 + 72);
          if ( v58 )
            memset(v58, 0, 8LL * *(unsigned int *)(a2 + 152));
          v59 = 1400 * v235;
          *(_DWORD *)v8 = (a7 != 0) + 3;
          *(_DWORD *)(v8 + 16) = **(_DWORD **)(v59 + v11 + 1312) & 0x3FF;
          *(_DWORD *)(v8 + 20) = (**(_DWORD **)(v59 + v11 + 1312) >> 10) & 0x3FF;
          *(_BYTE *)(v8 + 24) = *(_BYTE *)(v11 + 80);
          *(_DWORD *)(v8 + 28) = a5;
          *(LARGE_INTEGER *)(v8 + 8) = KeQueryPerformanceCounter(0LL);
          v16 = 1LL;
          *(_BYTE *)(v8 + 36) = (*(_DWORD *)(v59 + v11 + 1272) & 0x20) != 0;
          *(_DWORD *)(v8 + 40) = *(_DWORD *)(v59 + v11 + 1172);
          *(_DWORD *)(v8 + 32) = *(_DWORD *)(v59 + v11 + 1176);
          *(_DWORD *)(v8 + 44) = *(_DWORD *)(v59 + v11 + 1276);
          *(_DWORD *)(v8 + 48) = *(_DWORD *)(v56 + 3192);
          *(_QWORD *)(v8 + 56) = *(_QWORD *)(v59 + v11 + 1432);
          *(_QWORD *)(v8 + 64) = *(_QWORD *)(v59 + v11 + 1440);
          if ( *(_QWORD *)(v8 + 72) && !a7 )
          {
            v226 = *(unsigned int **)(v59 + v11 + 1312);
            v225 = a2;
            v103 = *v226;
            v104 = *v226 & 0x3FF;
            v227 = v104;
            if ( *(_BYTE *)(a2 + 156) )
              v105 = (v103 >> 10) & 0x3FF;
            else
              v105 = 0;
            v50 = !_BitScanForward((unsigned int *)&v106, v104);
            v228 = v105;
            v207 = v106;
            v107 = -1;
            if ( !v50 )
              v107 = v106;
            v229 = 0;
            v50 = !_BitScanForward((unsigned int *)&v108, v105);
            v109 = v107;
            v110 = 0;
            v111 = -1;
            v206 = v108;
            if ( !v50 )
              v111 = v108;
            v230 = v109;
            v112 = v111;
            v231 = v111;
            while ( v104 || v105 )
            {
              if ( v109 < v112 )
                *(_QWORD *)(*(_QWORD *)(v8 + 72) + 8LL * v109) = *(_QWORD *)(v110
                                                                           * ((8
                                                                             * *(_DWORD *)(*(_QWORD *)(v59 + v11 + 1312)
                                                                                         + 8LL)
                                                                             + 231) & 0xFFFFFFF8)
                                                                           + *(_QWORD *)(v59 + v11 + 1312)
                                                                           + 24LL);
              VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v225);
              v112 = v231;
              v105 = v228;
              v104 = v227;
              v109 = v230;
              v110 = v229;
            }
          }
          v14 = v198;
          v10 = v200;
          *(_DWORD *)(v8 + 84) = *(_DWORD *)(v56 + 3252);
          *(_DWORD *)(v8 + 80) = *(_DWORD *)(v56 + 3248);
          *(_DWORD *)(v8 + 88) = *(_DWORD *)(v11 + 56);
          *(_DWORD *)(v8 + 92) = *(_DWORD *)(v11 + 60);
          *(_DWORD *)(v8 + 96) = *(_DWORD *)(v11 + 64);
          *(_DWORD *)(v8 + 100) = *(_DWORD *)(v11 + 68);
          *(_DWORD *)(v8 + 104) = *(_DWORD *)(v11 + 72);
          *(_DWORD *)(v8 + 108) = *(_DWORD *)(v11 + 76);
          LODWORD(v8) = v14;
          goto LABEL_61;
      }
      if ( !v22 )
        UpdateFlipManagerStatsOnFlipCompletion(a2, v17 + v11 + 120, v39, v189, a7);
      goto LABEL_141;
    }
    if ( v20 != 15 )
    {
      if ( v20 == 14 )
        goto LABEL_183;
      if ( v20 != 5 )
        goto LABEL_169;
    }
    v180 = *(_DWORD *)(v17 + v11 + 1272);
    if ( (v180 & 0x20) == 0 )
    {
LABEL_169:
      v16 = 1LL;
      goto LABEL_61;
    }
    if ( (v180 & 0x2000) != 0 && *(_BYTE *)(a2 + 59) )
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
    v13 = v194;
    v15 = ((_BYTE)a5 + 1) & 0x3F;
    a5 = ((_BYTE)a5 + 1) & 0x3F;
  }
  v60 = v191;
  if ( v191 )
  {
    v61 = v195;
    v50 = !_BitScanForward((unsigned int *)&v62, v195);
    v63 = -1;
    LODWORD(v208) = v62;
    if ( !v50 )
      v63 = v62;
    if ( v195 )
    {
      do
      {
        v64 = *(_QWORD *)(a2 + 8 * v14 + 3432);
        v65 = v63;
        v66 = (unsigned int)v63;
        v67 = *(int *)(304 * v66 + v64 + 188);
        if ( (int)v67 > -1 )
        {
          v68 = *(_QWORD *)(a2 + 3560);
          if ( *(_DWORD *)(v68 + 160 * v67 + 112) == (_DWORD)v16 && v189 != -1 )
          {
            v69 = v68 + 160 * v67;
            if ( !v69
              || *(_BYTE *)(v69 + 98)
              && !*(_DWORD *)(304 * v66 + v64 + 192)
              && *(_BYTE *)(v69 + 96)
              && !*(_DWORD *)(304 * v66 + v64 + 196) )
            {
              VidSchiFlushPendingTokenList(v199, (struct _VIDSCH_GLOBAL *)a2, v189, v65);
              v14 = v198;
            }
          }
        }
        v63 = -1;
        v61 &= ~((_DWORD)v16 << v65);
        v50 = !_BitScanForward((unsigned int *)&v70, v61);
        LODWORD(v200) = v70;
        if ( !v50 )
          v63 = v70;
      }
      while ( v61 );
      v60 = v191;
    }
  }
  *(_DWORD *)(a2 + 860) -= v60;
  v71 = v194;
  *((_DWORD *)v194 + 809) -= v60;
  _InterlockedAdd((volatile signed __int32 *)(a2 + 864), -v60);
  _InterlockedAdd((volatile signed __int32 *)v71 + 810, -v60);
  if ( !a7
    && _InterlockedCompareExchange((volatile signed __int32 *)v71 + 19736, 3, 2) == 2
    && !_InterlockedExchange((volatile __int32 *)(a2 + 2712), v16) )
  {
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a2 + 16) + 24LL), v16);
    *(_QWORD *)(a2 + 2672) = -1LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 2680), CriticalWorkQueue);
  }
  v72 = *((_QWORD *)v71 + 2);
  if ( v72 )
  {
    v73 = 0;
    v74 = *(_QWORD **)(v72 + 72);
    while ( v74 != (_QWORD *)(v72 + 72) )
    {
      updated = VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v74 - 3));
      v74 = (_QWORD *)*v74;
      v73 |= updated;
    }
    v76 = *(_QWORD *)(v72 + 32);
    v77 = 0;
    v78 = (_QWORD **)(v76 + 3752);
    while ( 1 )
    {
      v79 = *v78;
      if ( *v78 == v78 )
        break;
      if ( (_QWORD **)v79[1] != v78 || (v80 = (_QWORD *)*v79, *(_QWORD **)(*v79 + 8LL) != v79) )
LABEL_95:
        __fastfail(3u);
      *v78 = v80;
      v80[1] = v78;
      v79[1] = 0LL;
      *v79 = 0LL;
      v77 |= VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v79 - 5));
    }
    v81 = v199;
    v82 = (_QWORD **)(v76 + 3768);
    while ( 1 )
    {
      v83 = *v82;
      if ( *v82 == v82 )
        break;
      if ( (_QWORD **)v83[1] != v82 )
        goto LABEL_95;
      v84 = (_QWORD *)*v83;
      if ( *(_QWORD **)(*v83 + 8LL) != v83 )
        goto LABEL_95;
      *v82 = v84;
      v84[1] = v82;
      *v83 = 0LL;
      v83[1] = 0LL;
      v85 = (struct HwQueueStagingList *)(v83 + 19);
      if ( !*(_QWORD *)v85 )
      {
        v86 = (struct HwQueueStagingList **)*((_QWORD *)v81 + 2);
        if ( *v86 != (struct HwQueueStagingList *)((char *)v81 + 8) )
          goto LABEL_95;
        *(_QWORD *)v85 = (char *)v81 + 8;
        *((_QWORD *)v85 + 1) = v86;
        *v86 = v85;
        *((_QWORD *)v81 + 2) = v85;
        *((_BYTE *)v81 + 24) = 0;
      }
    }
    v9 = v73 | v77;
  }
  VidSchiSignalFlipEvents(v71, v9, 0LL);
  return v191;
}
