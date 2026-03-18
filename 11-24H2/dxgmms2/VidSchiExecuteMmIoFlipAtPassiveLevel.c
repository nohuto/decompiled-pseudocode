/*
 * XREFs of VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1400461F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1400122B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x140025E54 (VidSchiPropagatePresentHistoryToken.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x140027710 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x14002A7D4 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x14002AB90 (VidSchiCompleteFlipEntry.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x14002CD18 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     ?SetIndependentFlipStage@@YAXPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE@@@Z @ 0x14002CF50 (-SetIndependentFlipStage@@YAXPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x14002D4D0 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ?VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14002D730 (-VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x14002D850 (-NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x14002FA40 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@I_K@Z @ 0x140030570 (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEBU.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1400316A0 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ?end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ @ 0x1400358E0 (-end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ.c)
 *     ?VidSchiUpdateFlipTelemetryStats@@YAXPEAU_VIDSCH_PROCESS@@PEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAU_VIDSCH_PRESENT_INFO@@@Z @ 0x140038BD8 (-VidSchiUpdateFlipTelemetryStats@@YAXPEAU_VIDSCH_PROCESS@@PEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAU_VI.c)
 *     VidSchiComputeFlipEntryStatusAfterFlip @ 0x140039640 (VidSchiComputeFlipEntryStatusAfterFlip.c)
 *     ?VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@I@Z @ 0x140039FC4 (-VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY.c)
 *     ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x14003AC88 (-DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETVIDPNSOURC.c)
 *     ?VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14003CF7C (-VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x140046FC8 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     ?VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@@Z @ 0x140049E6C (-VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@.c)
 *     McTemplateK0pqqtq_EtwWriteTransfer @ 0x14004F318 (McTemplateK0pqqtq_EtwWriteTransfer.c)
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14005392C (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     memset @ 0x140056340 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiExecuteMmIoFlipAtPassiveLevel(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r12
  __int64 v3; // r15
  bool v4; // zf
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r14
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v8; // rbx
  int v9; // eax
  int v10; // r8d
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // edx
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int v16; // edx
  int v17; // eax
  __int64 i; // rbx
  __int64 v19; // rcx
  unsigned int v20; // eax
  AcquireSpinLock *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r9
  int v24; // r10d
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // edx
  char v28; // cl
  int v29; // eax
  int v30; // r8d
  char v31; // cl
  unsigned int v32; // edx
  unsigned int v33; // r8d
  bool v34; // al
  __int64 v35; // rcx
  int v36; // edx
  enum _D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE v37; // edx
  int v38; // eax
  int v39; // ebx
  __int64 v40; // rcx
  int v41; // eax
  char v42; // al
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v43; // rbx
  struct _VIDSCH_GLOBAL *v44; // r8
  struct _VIDSCH_GLOBAL *v45; // rdx
  __int64 v46; // rax
  struct _VIDSCH_GLOBAL *v47; // rcx
  struct _VIDSCH_GLOBAL *v48; // rax
  int v49; // eax
  __int64 v50; // rcx
  int v51; // eax
  unsigned int v52; // ecx
  unsigned int v53; // [rsp+28h] [rbp-E0h]
  char v54[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v55; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v56; // [rsp+70h] [rbp-98h] BYREF
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v57; // [rsp+78h] [rbp-90h] BYREF
  __int64 v58; // [rsp+80h] [rbp-88h] BYREF
  unsigned int *v59; // [rsp+88h] [rbp-80h] BYREF
  unsigned int **v60; // [rsp+90h] [rbp-78h]
  int v61; // [rsp+98h] [rbp-70h]
  int v62; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v63; // [rsp+A0h] [rbp-68h]
  unsigned int v64; // [rsp+A8h] [rbp-60h]
  int v65; // [rsp+ACh] [rbp-5Ch]
  struct HwQueueStagingList **v66; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v67[2]; // [rsp+B8h] [rbp-50h] BYREF
  char v68; // [rsp+C8h] [rbp-40h]
  int v69; // [rsp+CCh] [rbp-3Ch]
  __int64 v70; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v71[2]; // [rsp+D8h] [rbp-30h] BYREF
  int v72; // [rsp+E8h] [rbp-20h]
  int v73; // [rsp+ECh] [rbp-1Ch]
  __int64 v74; // [rsp+F0h] [rbp-18h]
  int v75; // [rsp+F8h] [rbp-10h]
  int v76; // [rsp+FCh] [rbp-Ch]
  __int64 v77; // [rsp+100h] [rbp-8h]
  __int64 v78; // [rsp+108h] [rbp+0h]
  __int64 v79; // [rsp+110h] [rbp+8h]
  __int64 v80; // [rsp+118h] [rbp+10h]
  __int64 v81; // [rsp+120h] [rbp+18h]
  __int64 v82[2]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v83[40]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v84[40]; // [rsp+160h] [rbp+58h] BYREF
  LARGE_INTEGER v85[270]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v86[2]; // [rsp+9F8h] [rbp+8F0h] BYREF
  __int128 v87; // [rsp+A08h] [rbp+900h]
  __int64 v88; // [rsp+A18h] [rbp+910h]
  __int64 v89[10]; // [rsp+A28h] [rbp+920h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *(unsigned int *)(a1 + 12);
  v3 = *(unsigned int *)(a1 + 8);
  v4 = *(_DWORD *)(*(_QWORD *)a1 + 3244LL) == 0;
  v54[0] = *(_BYTE *)(a1 + 24);
  if ( !v4 )
  {
    WdLogSingleEntry2(3LL, v1, (unsigned int)v2);
    WdLogGlobalForLineNumber = 4198;
    return;
  }
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(v1 + 8 * v2 + 3432);
  v7 = 1400 * v3;
  v8 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(1400 * v3 + v5 + 120);
  v57 = v8;
  memset(v85, 0, sizeof(v85));
  memset(v89, 0, sizeof(v89));
  v88 = 0LL;
  *(_OWORD *)v82 = 0LL;
  *(_OWORD *)v86 = 0LL;
  v87 = 0LL;
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v83, (unsigned __int64 *)(v1 + 1984), 1, 0);
  VidSchiSetupMmIoFlipMultiPlaneOverlay3(
    (struct _VIDSCH_GLOBAL *)v1,
    (__int64)v8,
    v2,
    (__int64)v85,
    v54[0],
    (__int64)v89,
    (__int64)v82,
    (__int64)v86);
  AcquireSpinLock::Release((AcquireSpinLock *)v83);
  v85[1].HighPart |= 8u;
  v9 = ADAPTER_DISPLAY::DdiSetVidPnSourceAddressWithMultiPlaneOverlay3(
         *(ADAPTER_DISPLAY **)(*(_QWORD *)(v85[0].QuadPart + 16) + 3120LL),
         (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v85[1]);
  if ( v9 != -1073741267 )
  {
    if ( !v9 )
    {
LABEL_29:
      AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v84, (unsigned __int64 *)(v1 + 1984), 1, 0);
      v66 = (struct HwQueueStagingList **)v1;
      v23 = 0LL;
      v69 = 2;
      v68 = 0;
      v67[1] = v67;
      v24 = 1023;
      v67[0] = v67;
      if ( (*(_DWORD *)(v7 + v5 + 1272) & 0x1000) == 0 )
      {
        v59 = *(unsigned int **)(v7 + v5 + 1312);
        v58 = v1;
        v25 = *v59;
        v26 = *v59 & 0x3FF;
        LODWORD(v60) = v26;
        if ( *(_BYTE *)(v1 + 156) )
          v27 = (v25 >> 10) & 0x3FF;
        else
          v27 = 0;
        v4 = !_BitScanForward(&v26, v26);
        v28 = -1;
        HIDWORD(v60) = v27;
        v64 = v26;
        if ( !v4 )
          v28 = v26;
        v61 = 0;
        v4 = !_BitScanForward((unsigned int *)&v29, v27);
        v30 = v28;
        v31 = -1;
        v62 = v30;
        if ( !v4 )
          v31 = v29;
        v65 = v29;
        v63 = v31;
        if ( !VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)&v58) )
        {
          while ( 1 )
          {
            if ( v33 < v32 )
              v32 = v33;
            *(_QWORD *)(304LL * v32 + *(_QWORD *)(v1 + 8 * v2 + 3432) + 392) = *(_QWORD *)(v61
                                                                                         * ((8
                                                                                           * *(_DWORD *)(*(_QWORD *)(v7 + v5 + 1312) + 8LL)
                                                                                           + 231) & 0xFFFFFFF8)
                                                                                         + *(_QWORD *)(v7 + v5 + 1312)
                                                                                         + 24LL);
            VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v58);
            v34 = VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)&v58);
            v23 = 0LL;
            if ( v34 )
              break;
            v32 = v63;
            v33 = v62;
          }
        }
      }
      if ( *(_BYTE *)(v1 + 59) != (_BYTE)v23 )
      {
        *(LARGE_INTEGER *)(v7 + v5 + 1448) = KeQueryPerformanceCounter(0LL);
        v24 = 1023;
        v23 = 0LL;
      }
      v35 = *(_QWORD *)(v7 + v5 + 1312);
      if ( (*(_DWORD *)(v7 + v5 + 1272) & 0x10) != 0 )
      {
        v36 = v24 & (*(_DWORD *)v35 | (*(_DWORD *)v35 >> 10));
      }
      else
      {
        v35 = *(unsigned int *)(v1 + 152);
        v36 = (1 << v35) - 1;
      }
      v37 = ~v36;
      *(_DWORD *)(v6 + 3252) &= v37;
      v38 = *(_DWORD *)(v7 + v5 + 1272);
      if ( (v38 & 0x20) != 0 && *(_QWORD *)(v7 + v5 + 1288) != v23 && (v38 & 0x100000) == 0 )
      {
        SetIndependentFlipStage((struct _D3DKMT_AUXILIARYPRESENTINFO **)(1400 * v3 + v5 + 120), v37);
        VidSchiPropagatePresentHistoryToken(
          v1,
          *(union _SLIST_HEADER **)(v7 + v5 + 1280),
          *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v7 + v5 + 1288),
          1,
          (*(_DWORD *)(v7 + v5 + 1272) & 0x40) != 0,
          0,
          0,
          *(_QWORD *)(v7 + v5 + 1296),
          *(_QWORD *)(v7 + v5 + 1312),
          0LL,
          (v7 + v5 + 1472) & -(__int64)(*(_QWORD *)(v7 + v5 + 1472) != 0LL),
          0);
      }
      LODWORD(v56) = 0;
      VidSchiComputeFlipEntryStatusAfterFlip(v35, (__int64)v85, &v56);
      VidSchiUpdateFlipTelemetryStats(
        *(struct _VIDSCH_PROCESS **)(*(_QWORD *)(v7 + v5 + 1160) + 40LL),
        (struct _VIDSCH_CALL_EXECUTE_FLIP *)v85,
        (struct _VIDSCH_PRESENT_INFO *)v6);
      v39 = v56;
      VidSchiLogMmIoFlipMultiPlaneOverlay3(
        v1,
        (_DWORD *)(v7 + v5 + 120),
        v85,
        v56,
        *(_DWORD *)(v7 + v5 + 1192),
        *(_QWORD *)(v7 + v5 + 1432));
      *(_DWORD *)(v7 + v5 + 1172) = v39;
      if ( v39 == 11 )
      {
        v40 = 1400LL * *(unsigned int *)(v5 + 68);
        v55 = 0;
        v41 = *(_DWORD *)(v40 + v5 + 1172);
        if ( v41 == 5 || (v4 = v41 == 15, v42 = 0, v4) )
          v42 = 1;
        if ( v42 )
        {
          LODWORD(v57) = 0;
          v70 = 0LL;
          v75 = ((_BYTE)v3 - 1) & 0x3F;
          v77 = *(_QWORD *)(v6 + 44352);
          v78 = *(_QWORD *)(v6 + 44368);
          v79 = *(_QWORD *)(v6 + 44360);
          v80 = *(_QWORD *)(v6 + 44376);
          v54[0] = 0;
          v71[1] = 0LL;
          v73 = 0;
          v76 = 0;
          v81 = 0LL;
          v71[0] = v1;
          v72 = v2;
          v74 = v5;
          VidSchiProcessVsyncCompletedFlipEntry((struct HwQueueStagingList *)&v66, v71, (__int64)&v70, &v57, &v55, v54);
        }
        v43 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v7 + v5 + 120);
        if ( *(_BYTE *)(v1 + 59) )
          VidSchiUpdateHwPresentTimeForImmediateFlip(
            (struct _VIDSCH_GLOBAL *)v1,
            (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v7 + v5 + 120),
            v2);
        v44 = *(struct _VIDSCH_GLOBAL **)(v6 + 44376);
        v45 = *(struct _VIDSCH_GLOBAL **)(v6 + 44368);
        v46 = *(_QWORD *)(v6 + 44352);
        *(_QWORD *)(v7 + v5 + 1264) = *(_QWORD *)(v6 + 44360);
        v47 = *(struct _VIDSCH_GLOBAL **)(v7 + v5 + 1440);
        *(_QWORD *)(v7 + v5 + 1248) = v46;
        v48 = v47;
        if ( !v47 )
        {
          v47 = v44;
          v48 = v45;
        }
        *(_QWORD *)(v7 + v5 + 1256) = v47;
        *(_QWORD *)(v7 + v5 + 1232) = v48;
        VidSchiUnreferenceDisplayingAllocationsForThisEntry(&v66, v45, v6, v7 + v5 + 120);
        VidSchiReferenceDisplayingAllocationsForThisEntry(&v66, v1, v6, v7 + v5 + 120);
        v49 = VidSchiCompleteFlipEntry((struct HwQueueStagingList *)&v66, v1, v2, v5, v3, v3, 0, 0LL);
        v55 += v49;
      }
      else
      {
        v43 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v7 + v5 + 120);
        VidSchiIncrementPendingFlipsForFlipEntry((struct _VIDSCH_GLOBAL *)v1, (struct _VIDSCH_PRESENT_INFO *)v6, v43);
        if ( !*(_BYTE *)(v1 + 59) )
          *(_QWORD *)(v7 + v5 + 1224) = MEMORY[0xFFFFF78000000320];
      }
      v50 = 1400LL * *(unsigned int *)(v5 + 68);
      *(_DWORD *)(v5 + 72) = v3;
      v51 = *(_DWORD *)(v50 + v5 + 1172);
      if ( v51 != 5 && v51 != 15 )
        *(_DWORD *)(v5 + 68) = v3;
      if ( *(_BYTE *)(v1 + 7071) && (v52 = *(_DWORD *)(v5 + 64), (((_BYTE)v3 - (_BYTE)v52) & 0x3Fu) >= 0x20) )
      {
        WdLogSingleEntry3(4LL, v5, v3, v52);
        WdLogGlobalForLineNumber = 4571;
      }
      else
      {
        v53 = ((_BYTE)v3 + 1) & 0x3F;
        *(_DWORD *)(v5 + 64) = v53;
        VidSchiUpdateFlipQueueHistory(6, v1, v2, v5, v53);
      }
      if ( *(_BYTE *)(v1 + 59) )
        VidSchiSetNextFlipEarliestIdealTime((struct _VIDSCH_GLOBAL *)v1, v2, (struct VIDSCH_FLIP_QUEUE *)v5, v43);
      else
        *(_DWORD *)(v5 + 112) = *(_DWORD *)(v7 + v5 + 1192);
      VIDMM_GLOBAL::NotifyOnFlip(*(VIDMM_GLOBAL **)(*(_QWORD *)(v1 + 8) + 768LL));
      --*(_DWORD *)(*(_QWORD *)(v1 + 264) + 808LL);
      VidSchiUpdateFlipQueueHistory(1, v1, v2, v5, v3);
      HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v66);
      v21 = (AcquireSpinLock *)v84;
      goto LABEL_75;
    }
LABEL_28:
    v22 = *(_QWORD *)(v1 + 16);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 11LL, v9, v85, v22);
    WdLogGlobalForLineNumber = 906;
    goto LABEL_29;
  }
  if ( ((v85[2].LowPart >> 1) & 1) == 0 )
    goto LABEL_28;
  if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
    McTemplateK0pqqtq_EtwWriteTransfer(
      (v85[2].LowPart >> 1) & 1,
      v9,
      v10,
      *(_QWORD *)(v1 + 16),
      v2,
      *(_DWORD *)(v7 + v5 + 1168),
      (v85[2].LowPart & 2) != 0,
      45);
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v71, (unsigned __int64 *)(v1 + 1984), 1, 0);
  v11 = *(_DWORD **)(v7 + v5 + 1312);
  v58 = v1;
  v60 = &v59;
  v59 = (unsigned int *)&v59;
  v12 = *(_DWORD *)(v7 + v5 + 1272);
  LOBYTE(v61) = 0;
  v62 = 2;
  if ( (v12 & 0x10) != 0 )
    v13 = ((unsigned __int16)*v11 | (unsigned __int16)(*v11 >> 10)) & 0x3FF;
  else
    v13 = (1 << *(_DWORD *)(v1 + 152)) - 1;
  *(_DWORD *)(v6 + 3252) &= ~v13;
  v14 = *(_DWORD *)(v7 + v5 + 1272) & 0xFFFEFFFF;
  *(_DWORD *)(v7 + v5 + 1172) = 14;
  v15 = v14 | ((v85[2].LowPart & 1) << 16);
  *(_DWORD *)(v7 + v5 + 1272) = v15;
  v16 = v15 & 0xFFFDFFFF | ((v85[2].LowPart & 4) << 15);
  *(_DWORD *)(v7 + v5 + 1272) = v16;
  *(_DWORD *)(v7 + v5 + 1272) = v16 & 0xFFFBFFFF | ((v85[2].LowPart & 8) << 15);
  VidSchiUpdateFlipQueueHistory(5, v1, v2, v5, v3);
  v17 = *(_DWORD *)(v7 + v5 + 1272);
  if ( (v17 & 0x20000) != 0 )
  {
    if ( (v17 & 0x40000) != 0 )
      *(_QWORD *)(v1 + 3784) = v8;
    else
      *(_QWORD *)(v6 + 120) = v8;
    if ( *(_BYTE *)(v5 + 80) )
    {
      if ( _bittest((const signed __int32 *)(v7 + v5 + 1272), 0x12u) )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v1 + 40); i = (unsigned int)(i + 1) )
        {
          v19 = *(_QWORD *)(v1 + 8 * i + 3432);
          if ( v19 && *(_DWORD *)(v19 + 3248) )
            VidSchiCancelAndRequeueIndependentFlips((struct _VIDSCH_GLOBAL *)v1, i);
        }
        v8 = v57;
      }
      else
      {
        VidSchiCancelAndRequeueIndependentFlips((struct _VIDSCH_GLOBAL *)v1, v2);
      }
    }
  }
  VidSchiKeepInterruptTargetEnabledForFlip((struct _VIDSCH_GLOBAL *)v1, v8, (struct _VIDSCH_PRESENT_INFO *)v6);
  if ( *(_BYTE *)(v1 + 7073) )
  {
    v20 = *(_DWORD *)(v5 + 64);
    if ( (_DWORD)v3 != v20 )
    {
      WdLogSingleEntry3(4LL, v5, v3, v20);
      WdLogGlobalForLineNumber = 4336;
      *(_DWORD *)(v5 + 64) = v3;
      VidSchiUpdateFlipQueueHistory(6, v1, v2, v5, v3);
    }
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v58);
  v21 = (AcquireSpinLock *)v71;
LABEL_75:
  AcquireSpinLock::Release(v21);
}
