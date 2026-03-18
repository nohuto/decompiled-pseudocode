/*
 * XREFs of VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140039EF0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x140008C10 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x14000A1C0 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x14000BF58 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     ?SetIndependentFlipStage@@YAXPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE@@@Z @ 0x14000C574 (-SetIndependentFlipStage@@YAXPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x14000CAF4 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ?VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14000CD54 (-VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x14000CE74 (-NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1400128C0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x140013A64 (VidSchiPropagatePresentHistoryToken.c)
 *     ?VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x140014AA0 (-VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1400150F0 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@I_K@Z @ 0x140015C20 (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEBU.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D740 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14002C1B0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@I@Z @ 0x14002E804 (-VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY.c)
 *     ?VidSchiUpdateFlipTelemetryStats@@YAXPEAU_VIDSCH_PROCESS@@PEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAU_VIDSCH_PRESENT_INFO@@@Z @ 0x14003A858 (-VidSchiUpdateFlipTelemetryStats@@YAXPEAU_VIDSCH_PROCESS@@PEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAU_VI.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x14003A8E8 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     ?VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@@Z @ 0x14004A75C (-VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@.c)
 *     McTemplateK0pqqtq_EtwWriteTransfer @ 0x14004FA30 (McTemplateK0pqqtq_EtwWriteTransfer.c)
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140053D5C (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memset @ 0x140056780 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiExecuteMmIoFlipAtPassiveLevel(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r13
  __int64 v3; // r12
  unsigned __int8 v4; // r14
  bool v5; // zf
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rbx
  int v9; // eax
  int v10; // r8d
  _DWORD *v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // r8d
  unsigned int v14; // edx
  int v15; // eax
  char v16; // cl
  int v17; // r14d
  unsigned int v18; // r9d
  char v19; // cl
  int v20; // eax
  unsigned int v21; // r10d
  int v22; // edx
  enum _D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE v23; // edx
  int v24; // eax
  __int64 v25; // rdx
  int v26; // r13d
  __int64 v27; // rax
  _DWORD *v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  AcquireSpinLock *v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rcx
  int v34; // eax
  char v35; // al
  __int64 v36; // rcx
  struct _VIDSCH_GLOBAL *v37; // r8
  struct _VIDSCH_GLOBAL *v38; // rdx
  struct _VIDSCH_GLOBAL *v39; // rcx
  struct _VIDSCH_GLOBAL *v40; // rax
  int v41; // eax
  __int16 v42; // r9
  _DWORD *v43; // rcx
  int v44; // eax
  int v45; // edx
  unsigned int v46; // eax
  int v47; // ecx
  unsigned int v48; // edx
  int v49; // eax
  unsigned int i; // r15d
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v53; // [rsp+68h] [rbp-A0h] BYREF
  int v54; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v55; // [rsp+70h] [rbp-98h] BYREF
  __int64 v56; // [rsp+78h] [rbp-90h] BYREF
  _DWORD *v57; // [rsp+80h] [rbp-88h] BYREF
  _QWORD *v58; // [rsp+88h] [rbp-80h]
  int v59; // [rsp+90h] [rbp-78h]
  int v60; // [rsp+94h] [rbp-74h]
  unsigned int v61; // [rsp+98h] [rbp-70h]
  int v62; // [rsp+A0h] [rbp-68h] BYREF
  struct HwQueueStagingList **v63; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v64[2]; // [rsp+B0h] [rbp-58h] BYREF
  char v65; // [rsp+C0h] [rbp-48h]
  int v66; // [rsp+C4h] [rbp-44h]
  __int64 v67[2]; // [rsp+C8h] [rbp-40h] BYREF
  int v68; // [rsp+D8h] [rbp-30h]
  int v69; // [rsp+DCh] [rbp-2Ch]
  __int64 v70; // [rsp+E0h] [rbp-28h]
  int v71; // [rsp+E8h] [rbp-20h]
  int v72; // [rsp+ECh] [rbp-1Ch]
  __int64 v73; // [rsp+F0h] [rbp-18h]
  __int64 v74; // [rsp+F8h] [rbp-10h]
  __int64 v75; // [rsp+100h] [rbp-8h]
  __int64 v76; // [rsp+108h] [rbp+0h]
  __int64 v77; // [rsp+110h] [rbp+8h]
  __int64 v78[2]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v79[4]; // [rsp+128h] [rbp+20h] BYREF
  __int16 v80; // [rsp+148h] [rbp+40h]
  LARGE_INTEGER v81[270]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v82[2]; // [rsp+9C8h] [rbp+8C0h] BYREF
  __int128 v83; // [rsp+9D8h] [rbp+8D0h]
  __int64 v84; // [rsp+9E8h] [rbp+8E0h]
  __int64 v85[10]; // [rsp+9F8h] [rbp+8F0h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *(unsigned int *)(a1 + 8);
  v3 = *(unsigned int *)(a1 + 12);
  v4 = *(_BYTE *)(a1 + 24);
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 3244LL) == 0;
  LODWORD(v55) = *(_DWORD *)(a1 + 8);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD *)(v1 + 8 * v3 + 3432);
    v8 = 1400 * v2 + v6 + 120;
    memset(v81, 0, sizeof(v81));
    memset(v85, 0, sizeof(v85));
    LOWORD(v61) = 0;
    v84 = 0LL;
    v56 = v1 + 1984;
    *(_OWORD *)v78 = 0LL;
    *(_OWORD *)v82 = 0LL;
    v83 = 0LL;
    AcquireSpinLock::Acquire((Acquire *)&v56);
    VidSchiSetupMmIoFlipMultiPlaneOverlay3(
      (struct _VIDSCH_GLOBAL *)v1,
      v8,
      v3,
      (__int64)v81,
      v4,
      (__int64)v85,
      (__int64)v78,
      (__int64)v82);
    AcquireSpinLock::Release((AcquireSpinLock *)&v56);
    v81[1].HighPart |= 8u;
    v9 = ((__int64 (__fastcall *)(_QWORD, LARGE_INTEGER *))DxgCoreInterface[66])(
           *(_QWORD *)(*(_QWORD *)(v81[0].QuadPart + 16) + 3120LL),
           &v81[1]);
    if ( v9 == -1073741267 )
    {
      if ( ((v81[2].LowPart >> 1) & 1) != 0 )
      {
        if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
          McTemplateK0pqqtq_EtwWriteTransfer(
            (v81[2].LowPart >> 1) & 1,
            v9,
            v10,
            *(_QWORD *)(v1 + 16),
            v3,
            *(_DWORD *)(v8 + 1048),
            (v81[2].LowPart & 2) != 0,
            45);
        LOWORD(v71) = 0;
        v67[0] = v1 + 1984;
        AcquireSpinLock::Acquire((Acquire *)v67);
        v43 = *(_DWORD **)(v8 + 1192);
        v56 = v1;
        v58 = &v57;
        v57 = &v57;
        v44 = *(_DWORD *)(v8 + 1152);
        LOBYTE(v59) = 0;
        v60 = 2;
        if ( (v44 & 0x10) != 0 )
          v45 = (*v43 | (*v43 >> 10)) & 0x3FF;
        else
          v45 = (1 << *(_DWORD *)(v1 + 152)) - 1;
        *(_DWORD *)(v7 + 3252) &= ~v45;
        v46 = *(_DWORD *)(v8 + 1152) & 0xFFFEFFFF;
        *(_DWORD *)(v8 + 1052) = 14;
        v47 = v46 | ((v81[2].LowPart & 1) << 16);
        *(_DWORD *)(v8 + 1152) = v47;
        v48 = v47 & 0xFFFDFFFF | ((v81[2].LowPart & 4) << 15);
        *(_DWORD *)(v8 + 1152) = v48;
        *(_DWORD *)(v8 + 1152) = v48 & 0xFFFBFFFF | ((v81[2].LowPart & 8) << 15);
        VidSchiUpdateFlipQueueHistory(5, v1, v3, v6, v2);
        v49 = *(_DWORD *)(v8 + 1152);
        if ( (v49 & 0x20000) != 0 )
        {
          if ( (v49 & 0x40000) != 0 )
            *(_QWORD *)(v1 + 3784) = v8;
          else
            *(_QWORD *)(v7 + 120) = v8;
          if ( *(_BYTE *)(v6 + 80) )
          {
            if ( _bittest((const signed __int32 *)(v8 + 1152), 0x12u) )
            {
              for ( i = 0; i < *(_DWORD *)(v1 + 40); ++i )
              {
                v51 = *(_QWORD *)(v1 + 8LL * i + 3432);
                if ( v51 && *(_DWORD *)(v51 + 3248) )
                  VidSchiCancelAndRequeueIndependentFlips((struct _VIDSCH_GLOBAL *)v1, i);
              }
            }
            else
            {
              VidSchiCancelAndRequeueIndependentFlips((struct _VIDSCH_GLOBAL *)v1, v3);
            }
          }
        }
        VidSchiKeepInterruptTargetEnabledForFlip(
          (struct _VIDSCH_GLOBAL *)v1,
          (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v8,
          (struct _VIDSCH_PRESENT_INFO *)v7);
        if ( !(_BYTE)v59 && v60 )
          HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v56, 0LL);
        v31 = (AcquireSpinLock *)v67;
        goto LABEL_37;
      }
    }
    else
    {
      LODWORD(v2) = 0;
      if ( !v9 )
      {
        v80 = 0;
        v79[0] = v1 + 1984;
        AcquireSpinLock::Acquire((Acquire *)v79);
        v63 = (struct HwQueueStagingList **)v1;
        v65 = 0;
        v64[1] = v64;
        v66 = 2;
        v64[0] = v64;
        if ( (*(_DWORD *)(v8 + 1152) & 0x1000) == 0 )
        {
          v11 = *(_DWORD **)(v8 + 1192);
          v56 = v1;
          v57 = v11;
          v12 = *v11;
          v13 = *v11 & 0x3FF;
          LODWORD(v58) = v13;
          if ( *(_BYTE *)(v1 + 156) )
            v14 = (v12 >> 10) & 0x3FF;
          else
            v14 = 0;
          v5 = !_BitScanForward((unsigned int *)&v15, v13);
          v16 = -1;
          v54 = 0;
          HIDWORD(v58) = v14;
          v17 = 0;
          if ( !v5 )
            v16 = v15;
          v59 = 0;
          v18 = v16;
          v19 = -1;
          v5 = !_BitScanForward((unsigned int *)&v20, v14);
          v60 = v18;
          v54 = 0;
          if ( !v5 )
            v19 = v20;
          v21 = v19;
          v61 = v19;
          while ( v13 || v14 )
          {
            if ( v18 < v21 )
              v21 = v18;
            *(_QWORD *)(304LL * v21 + *(_QWORD *)(v1 + 8 * v3 + 3432) + 392) = *(_QWORD *)(v17
                                                                                         * ((8
                                                                                           * *(_DWORD *)(*(_QWORD *)(v8 + 1192) + 8LL)
                                                                                           + 231) & 0xFFFFFFF8)
                                                                                         + *(_QWORD *)(v8 + 1192)
                                                                                         + 24LL);
            VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v56);
            v14 = HIDWORD(v58);
            v13 = (unsigned int)v58;
            v21 = v61;
            v18 = v60;
            v17 = v59;
          }
        }
        if ( *(_BYTE *)(v1 + 59) )
          *(LARGE_INTEGER *)(v8 + 1328) = KeQueryPerformanceCounter(0LL);
        if ( (*(_DWORD *)(v8 + 1152) & 0x10) != 0 )
          v22 = (**(_DWORD **)(v8 + 1192) | (**(_DWORD **)(v8 + 1192) >> 10)) & 0x3FF;
        else
          v22 = (1 << *(_DWORD *)(v1 + 152)) - 1;
        v23 = ~v22;
        *(_DWORD *)(v7 + 3252) &= v23;
        v24 = *(_DWORD *)(v8 + 1152);
        if ( (v24 & 0x20) != 0 && *(_QWORD *)(v8 + 1168) && (v24 & 0x100000) == 0 )
        {
          SetIndependentFlipStage((struct _D3DKMT_AUXILIARYPRESENTINFO **)v8, v23);
          VidSchiPropagatePresentHistoryToken(
            v1,
            *(union _SLIST_HEADER **)(v8 + 1160),
            *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v8 + 1168),
            1,
            (*(_DWORD *)(v8 + 1152) & 0x40) != 0,
            0,
            0,
            *(_QWORD *)(v8 + 1176),
            *(_QWORD *)(v8 + 1192),
            0LL,
            (v8 + 1352) & -(__int64)(*(_QWORD *)(v8 + 1352) != 0LL),
            0);
        }
        v25 = 0LL;
        v26 = 11;
        while ( (unsigned int)v25 < v81[2].HighPart )
        {
          v27 = *(_QWORD *)(v81[3].QuadPart + 8 * v25);
          v28 = (_DWORD *)(v27 + 20);
          if ( (*(_DWORD *)(v27 + 16) & 4) != 0 && (*v28 & 1) == 0 )
          {
            v26 = 5;
            break;
          }
          if ( (*(_BYTE *)v28 & 4) != 0 )
            v26 = 15;
          v25 = (unsigned int)(v25 + 1);
        }
        VidSchiUpdateFlipTelemetryStats(
          *(struct _VIDSCH_PROCESS **)(*(_QWORD *)(v8 + 1040) + 40LL),
          (struct _VIDSCH_CALL_EXECUTE_FLIP *)v81,
          (struct _VIDSCH_PRESENT_INFO *)v7);
        VidSchiLogMmIoFlipMultiPlaneOverlay3(v1, (_DWORD *)v8, v81, v26, *(_DWORD *)(v8 + 1072), *(_QWORD *)(v8 + 1312));
        *(_DWORD *)(v8 + 1052) = v26;
        if ( v26 != 11 )
        {
          VidSchiIncrementPendingFlipsForFlipEntry(
            (struct _VIDSCH_GLOBAL *)v1,
            (struct _VIDSCH_PRESENT_INFO *)v7,
            (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v8);
          if ( !*(_BYTE *)(v1 + 59) )
            *(_QWORD *)(v8 + 1104) = MEMORY[0xFFFFF78000000320];
          LODWORD(v2) = v55;
LABEL_28:
          v29 = 1400LL * *(unsigned int *)(v6 + 68);
          *(_DWORD *)(v6 + 72) = v2;
          v30 = *(_DWORD *)(v29 + v6 + 1172);
          if ( v30 != 15 && v30 != 5 )
            *(_DWORD *)(v6 + 68) = v2;
          *(_DWORD *)(v6 + 64) = ((_BYTE)v2 + 1) & 0x3F;
          VidSchiUpdateFlipQueueHistory(6, v1, v3, v6, ((_BYTE)v2 + 1) & 0x3F);
          if ( *(_BYTE *)(v1 + 59) )
            VidSchiSetNextFlipEarliestIdealTime(
              (struct _VIDSCH_GLOBAL *)v1,
              v3,
              (struct VIDSCH_FLIP_QUEUE *)v6,
              (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v8);
          else
            *(_DWORD *)(v6 + 112) = *(_DWORD *)(v8 + 1072);
          VIDMM_GLOBAL::NotifyOnFlip(*(VIDMM_GLOBAL **)(*(_QWORD *)(v1 + 8) + 768LL));
          --*(_DWORD *)(*(_QWORD *)(v1 + 264) + 808LL);
          VidSchiUpdateFlipQueueHistory(1, v1, v3, v6, v2);
          if ( !v65 )
          {
            if ( v66 )
              HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v63, 0LL);
          }
          v31 = (AcquireSpinLock *)v79;
LABEL_37:
          AcquireSpinLock::Release(v31);
          return;
        }
        v32 = 0LL;
        v33 = 1400LL * *(unsigned int *)(v6 + 68);
        v62 = 0;
        v34 = *(_DWORD *)(v33 + v6 + 1172);
        if ( v34 == 5 || (v5 = v34 == 15, v35 = 0, v5) )
          v35 = 1;
        LODWORD(v2) = v55;
        if ( !v35 )
        {
LABEL_44:
          if ( *(_BYTE *)(v1 + 59) )
            VidSchiUpdateHwPresentTimeForImmediateFlip(
              (struct _VIDSCH_GLOBAL *)v1,
              (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v8,
              v3);
          v36 = *(_QWORD *)(v7 + 44360);
          v37 = *(struct _VIDSCH_GLOBAL **)(v7 + 44376);
          v38 = *(struct _VIDSCH_GLOBAL **)(v7 + 44368);
          *(_QWORD *)(v8 + 1128) = *(_QWORD *)(v7 + 44352);
          *(_QWORD *)(v8 + 1144) = v36;
          v39 = *(struct _VIDSCH_GLOBAL **)(v8 + 1320);
          v40 = v39;
          if ( !v39 )
          {
            v40 = v38;
            v39 = v37;
          }
          *(_QWORD *)(v8 + 1112) = v40;
          v41 = *(_DWORD *)(v8 + 1152);
          *(_QWORD *)(v8 + 1136) = v39;
          if ( (v41 & 0x10) != 0 )
            v42 = *(_WORD *)(v7 + 44296) & (**(_WORD **)(v8 + 1192) | (**(_DWORD **)(v8 + 1192) >> 10)) & 0x3FF;
          else
            v42 = *(_WORD *)(v7 + 44296);
          VidSchiUnreferenceDisplayingAllocations(&v63, v38, (struct _VIDSCH_PRESENT_INFO *)v7, v42);
          VidSchiReferenceDisplayingAllocationsForThisEntry((struct HwQueueStagingList *)&v63);
          VidSchiCompleteFlipEntry((struct HwQueueStagingList *)&v63, v1, v3, v6, v2, v2, 0, 0LL);
          goto LABEL_28;
        }
LABEL_87:
        v54 = v32;
        LOBYTE(v53) = v32;
        v71 = ((_BYTE)v2 - 1) & 0x3F;
        v73 = *(_QWORD *)(v7 + 44352);
        v74 = *(_QWORD *)(v7 + 44368);
        v75 = *(_QWORD *)(v7 + 44360);
        v76 = *(_QWORD *)(v7 + 44376);
        v67[1] = v32;
        v69 = v32;
        v72 = v32;
        v77 = v32;
        v67[0] = v1;
        v68 = v3;
        v70 = v6;
        VidSchiProcessVsyncCompletedFlipEntry((struct HwQueueStagingList *)&v63, v67, (__int64)&v55, &v54, &v62, &v53);
        goto LABEL_44;
      }
    }
    v52 = *(_QWORD *)(v1 + 16);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 11LL, v9, v81, v52);
    WdLogGlobalForLineNumber = 906;
    goto LABEL_87;
  }
  WdLogSingleEntry2(3LL, v1, v3);
  WdLogGlobalForLineNumber = 4201;
}
