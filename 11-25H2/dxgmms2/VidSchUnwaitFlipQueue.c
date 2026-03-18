/*
 * XREFs of VidSchUnwaitFlipQueue @ 0x14000EC30
 * Callers:
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14000EA9C (-VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x14000FF50 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x140012DDC (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     VidSchiUnwaitMonitoredFences @ 0x140019940 (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14001F0E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x14002B914 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     VidSchSubmitSignalToHwQueue @ 0x140030520 (VidSchSubmitSignalToHwQueue.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x14000A1C0 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x14000CAF4 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     VidSchiExecuteMmIoFlip @ 0x14000CF44 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14000E520 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x14000F680 (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x140027538 (VidSchiCompletePendingFlipOnPlane.c)
 *     ?VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14002CB0C (-VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1400426E8 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 *     ?VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUEUE@@I@Z @ 0x1400540A4 (-VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUE.c)
 *     memset @ 0x140056780 (memset.c)
 */

unsigned __int64 __fastcall VidSchUnwaitFlipQueue(struct HwQueueStagingList *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  struct HwQueueStagingList *v3; // r10
  __int64 v5; // rcx
  int v6; // r8d
  struct _VIDSCH_PRESENT_INFO *v7; // rdx
  int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rsi
  int v11; // r12d
  unsigned int v12; // r15d
  __int64 v13; // rdi
  unsigned int v14; // eax
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v15; // r13
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r12
  void *v19; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  struct _VIDSCH_PRESENT_INFO *v21; // rdx
  int v22; // eax
  char v23; // cl
  struct _VIDSCH_DEVICE *v24; // rdi
  unsigned int v25; // ecx
  struct _VIDSCH_DEVICE *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rdx
  struct _VIDSCH_DEVICE *v30; // rdx
  void *v31; // rcx
  __int64 v32; // rdi
  LARGE_INTEGER v33; // rax
  struct _VIDSCH_DEVICE *v34; // rcx
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v35; // rdx
  char v36; // di
  __int64 v37; // rdx
  __int64 v38; // r13
  void *v39; // rcx
  __int64 v40; // rdi
  char *v41; // rax
  int v42; // eax
  int v43; // eax
  char v44; // al
  int v45; // eax
  struct _VIDSCH_DEVICE *v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  unsigned int v49; // [rsp+28h] [rbp-39h]
  unsigned int v50; // [rsp+48h] [rbp-19h]
  char v51; // [rsp+4Ch] [rbp-15h] BYREF
  char v52; // [rsp+4Dh] [rbp-14h] BYREF
  _BYTE v53[2]; // [rsp+4Eh] [rbp-13h] BYREF
  unsigned int v54; // [rsp+50h] [rbp-11h] BYREF
  struct _VIDSCH_PRESENT_INFO *v55; // [rsp+58h] [rbp-9h]
  struct _VIDSCH_DEVICE *v56; // [rsp+60h] [rbp-1h]
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v57; // [rsp+68h] [rbp+7h] BYREF
  __int64 v58; // [rsp+70h] [rbp+Fh]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF
  __int64 v61; // [rsp+D0h] [rbp+6Fh]
  char v62; // [rsp+D8h] [rbp+77h] BYREF
  char v63; // [rsp+E0h] [rbp+7Fh] BYREF

  result = (unsigned __int64)&retaddr;
  v3 = a1;
  v5 = 0LL;
  v50 = 0;
  if ( *(_DWORD *)(a2 + 40) )
  {
    v6 = 16404;
    while ( 1 )
    {
      v7 = *(struct _VIDSCH_PRESENT_INFO **)(a2 + 8 * v5 + 3432);
      result = (unsigned int)v5;
      v58 = (unsigned int)v5;
      v55 = v7;
      if ( *((_BYTE *)v7 + 78948) )
        break;
LABEL_19:
      v5 = (unsigned int)(v5 + 1);
      v50 = v5;
      if ( (unsigned int)v5 >= *(_DWORD *)(a2 + 40) )
        return result;
    }
    v8 = -1;
    while ( 2 )
    {
      if ( v8 == *(_DWORD *)(a2 + 152) )
        goto LABEL_19;
      v9 = *(_QWORD *)(a2 + 8 * result + 3432);
      if ( v8 == -1 )
        v10 = *(_QWORD *)(v9 + 32);
      else
        v10 = *(_QWORD *)(v9 + 8LL * v8 + 40);
      if ( !v10 )
        goto LABEL_9;
      v11 = 1;
      v62 = 0;
      while ( 1 )
      {
        v54 = *(_DWORD *)(v10 + 60);
        v12 = v54;
        v13 = v10 + 1400LL * v54;
        v14 = *(_DWORD *)(v13 + 1172);
        v15 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v13 + 120);
        v57 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v13 + 120);
        if ( v14 == 1 || v14 == 16 )
          break;
        if ( v14 <= 0xE && _bittest(&v6, v14) )
        {
          v42 = *((_DWORD *)v7 + 1);
          if ( v42 == 3
            || v42 == 5
            && (*(_DWORD *)(v13 + 1272) & 0x100) != 0
            && (v43 = *(_DWORD *)(1400LL * *(unsigned int *)(v10 + 68) + v10 + 1172), v43 != 15)
            && v43 != 5 )
          {
            if ( v54 == *(_DWORD *)(v10 + 64) )
            {
              if ( !*(_BYTE *)(a2 + 156)
                || (v44 = VidSchiCheckPendingFlipsForThisEntry(
                            (struct _VIDSCH_GLOBAL *)a2,
                            v7,
                            (unsigned int **)(v13 + 120),
                            (struct VIDSCH_FLIP_QUEUE *)v10),
                    v3 = a1,
                    !v44) )
              {
                v63 = 0;
                *(_DWORD *)(v13 + 1172) = 4;
                VidSchiExecuteMmIoFlip(v3, a2, v50, (void *)v10, v12, &v62, &v63);
                if ( v63 )
                  VidSchiExecuteMmIoFlip(a1, a2, v50, (void *)v10, v12, &v62, &v63);
                goto LABEL_50;
              }
              goto LABEL_51;
            }
          }
        }
        else if ( v14 != 3 )
        {
          goto LABEL_16;
        }
LABEL_52:
        *(_DWORD *)(v10 + 60) = ((_BYTE)v12 + 1) & 0x3F;
      }
      v56 = *(struct _VIDSCH_DEVICE **)(v13 + 1160);
      if ( !(unsigned int)VidSchiIsHardwareCompletedDependingCommandForFlip(v13 + 120, v7, 16404LL) )
      {
        v16 = *(_QWORD *)(a2 + 8 * v58 + 3432);
        v17 = *(unsigned int *)(v16 + 144);
        v18 = *(_QWORD *)(v16 + 136) + 112 * v17;
        *(_DWORD *)(v16 + 144) = (v17 + 1) & (*(_DWORD *)(v16 + 128) - 1);
        v19 = *(void **)(v18 + 72);
        if ( v19 )
          memset(v19, 0, 8LL * *(unsigned int *)(a2 + 152));
        *(_DWORD *)v18 = 0;
        *(_DWORD *)(v18 + 16) = **(_DWORD **)(v13 + 1312) & 0x3FF;
        *(_DWORD *)(v18 + 20) = (**(_DWORD **)(v13 + 1312) >> 10) & 0x3FF;
        *(_BYTE *)(v18 + 24) = *(_BYTE *)(v10 + 80);
        *(_DWORD *)(v18 + 28) = v12;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v7 = v55;
        v6 = 16404;
        v3 = a1;
        *(LARGE_INTEGER *)(v18 + 8) = PerformanceCounter;
        *(_BYTE *)(v18 + 36) = (*(_DWORD *)(v13 + 1272) & 0x20) != 0;
        *(_DWORD *)(v18 + 40) = *(_DWORD *)(v13 + 1172);
        *(_DWORD *)(v18 + 32) = *(_DWORD *)(v13 + 1176);
        *(_DWORD *)(v18 + 44) = *(_DWORD *)(v13 + 1276);
        *(_DWORD *)(v18 + 48) = *(_DWORD *)(v16 + 3192);
        *(_QWORD *)(v18 + 56) = *(_QWORD *)(v13 + 1432);
        *(_QWORD *)(v18 + 64) = *(_QWORD *)(v13 + 1440);
        *(_DWORD *)(v18 + 84) = *(_DWORD *)(v16 + 3252);
        *(_DWORD *)(v18 + 80) = *(_DWORD *)(v16 + 3248);
        *(_DWORD *)(v18 + 88) = *(_DWORD *)(v10 + 56);
        *(_DWORD *)(v18 + 92) = *(_DWORD *)(v10 + 60);
        *(_DWORD *)(v18 + 96) = *(_DWORD *)(v10 + 64);
        *(_DWORD *)(v18 + 100) = *(_DWORD *)(v10 + 68);
        *(_DWORD *)(v18 + 104) = *(_DWORD *)(v10 + 72);
        *(_DWORD *)(v18 + 108) = *(_DWORD *)(v10 + 76);
LABEL_16:
        if ( v62 )
        {
          VidSchiCompletePendingFlipOnPlane((_DWORD)v3, a2, v50, v10, 9);
          v7 = v55;
          v6 = 16404;
          v3 = a1;
        }
        LODWORD(v5) = v50;
LABEL_9:
        ++v8;
        result = (unsigned int)v5;
        continue;
      }
      break;
    }
    v21 = v55;
    v22 = *((_DWORD *)v55 + 1);
    if ( v22 == 3 )
    {
      if ( v12 == *(_DWORD *)(v10 + 64)
        && (!*(_BYTE *)(a2 + 156)
         || !VidSchiCheckPendingFlipsForThisEntry(
               (struct _VIDSCH_GLOBAL *)a2,
               v55,
               (unsigned int **)(v13 + 120),
               (struct VIDSCH_FLIP_QUEUE *)v10)) )
      {
        *(_DWORD *)(v13 + 1172) = 4;
        v51 = 0;
        v36 = 0;
        VidSchiUpdateFlipQueueHistory(0, a2, v50, v10, v12);
        VidSchiExecuteMmIoFlip(a1, a2, v50, (void *)v10, v12, &v62, &v51);
        if ( !v51 )
          goto LABEL_45;
        v41 = &v51;
        goto LABEL_65;
      }
      v36 = 1;
      *((_DWORD *)v15 + 263) = 2;
      if ( *(_BYTE *)(a2 + 59) )
      {
LABEL_54:
        if ( *((_DWORD *)v15 + 263) == 2 )
          VidSchiUpdateInterruptTargetsForAllPlanes((struct _VIDSCH_GLOBAL *)a2, v50);
LABEL_46:
        if ( v36 )
        {
          v61 = *(_QWORD *)(a2 + 8 * v58 + 3432);
          v37 = *(unsigned int *)(v61 + 144);
          v38 = *(_QWORD *)(v61 + 136) + 112 * v37;
          *(_DWORD *)(v61 + 144) = (v37 + 1) & (*(_DWORD *)(v61 + 128) - 1);
          v39 = *(void **)(v38 + 72);
          if ( v39 )
            memset(v39, 0, 8LL * *(unsigned int *)(a2 + 152));
          *(_DWORD *)v38 = 0;
          v40 = v10 + 1400LL * v12;
          *(_DWORD *)(v38 + 16) = **(_DWORD **)(v40 + 1312) & 0x3FF;
          *(_DWORD *)(v38 + 20) = (**(_DWORD **)(v40 + 1312) >> 10) & 0x3FF;
          *(_BYTE *)(v38 + 24) = *(_BYTE *)(v10 + 80);
          *(_DWORD *)(v38 + 28) = v12;
          *(LARGE_INTEGER *)(v38 + 8) = KeQueryPerformanceCounter(0LL);
          *(_BYTE *)(v38 + 36) = (*(_DWORD *)(v40 + 1272) & 0x20) != 0;
          *(_DWORD *)(v38 + 40) = *(_DWORD *)(v40 + 1172);
          *(_DWORD *)(v38 + 32) = *(_DWORD *)(v40 + 1176);
          *(_DWORD *)(v38 + 44) = *(_DWORD *)(v40 + 1276);
          *(_DWORD *)(v38 + 48) = *(_DWORD *)(v61 + 3192);
          *(_QWORD *)(v38 + 56) = *(_QWORD *)(v40 + 1432);
          *(_QWORD *)(v38 + 64) = *(_QWORD *)(v40 + 1440);
          *(_DWORD *)(v38 + 84) = *(_DWORD *)(v61 + 3252);
          *(_DWORD *)(v38 + 80) = *(_DWORD *)(v61 + 3248);
          *(_DWORD *)(v38 + 88) = *(_DWORD *)(v10 + 56);
          *(_DWORD *)(v38 + 92) = *(_DWORD *)(v10 + 60);
          *(_DWORD *)(v38 + 96) = *(_DWORD *)(v10 + 64);
          *(_DWORD *)(v38 + 100) = *(_DWORD *)(v10 + 68);
          *(_DWORD *)(v38 + 104) = *(_DWORD *)(v10 + 72);
          *(_DWORD *)(v38 + 108) = *(_DWORD *)(v10 + 76);
        }
LABEL_50:
        v3 = a1;
LABEL_51:
        v7 = v55;
        v6 = 16404;
        goto LABEL_52;
      }
      v15 = v57;
      v12 = v54;
      *((_QWORD *)v57 + 138) = MEMORY[0xFFFFF78000000320];
    }
    else
    {
      if ( v22 != 5 )
        goto LABEL_59;
      *(_DWORD *)(v13 + 1172) = 2;
      v23 = *(_BYTE *)(a2 + 59);
      if ( !v11 && !*(_BYTE *)(a2 + 59) )
        goto LABEL_59;
      v11 = 0;
      if ( v12 != *(_DWORD *)(v10 + 64) )
      {
        if ( !*(_BYTE *)(v13 + 1196) )
          goto LABEL_59;
        v23 = *(_BYTE *)(a2 + 59);
      }
      if ( !v23 )
      {
        v15 = v57;
        v12 = v54;
        *((_QWORD *)v57 + 138) = MEMORY[0xFFFFF78000000320];
      }
      if ( VidSchiCheckPendingFlipsForThisEntry(
             (struct _VIDSCH_GLOBAL *)a2,
             v21,
             (unsigned int **)v15,
             (struct VIDSCH_FLIP_QUEUE *)v10) )
      {
        goto LABEL_59;
      }
      if ( *((_BYTE *)v15 + 1076) )
      {
        v24 = v56;
        v56 = (struct _VIDSCH_DEVICE *)*((_QWORD *)v56 + 4);
        if ( *((_BYTE *)v56 + 59) )
          VidSchiCancelHwQueuedFlips(a1, v24, v50, (struct VIDSCH_FLIP_QUEUE *)v10, v49);
        v25 = *(_DWORD *)(v10 + 64);
        if ( v25 != v12 )
        {
          v45 = VidSchiCompleteFlipEntry(a1, (__int64)v56, v50, v10, v25, ((_BYTE)v12 - 1) & 0x3F, 6u, 0LL);
          if ( v45 )
          {
            v46 = v56;
            v47 = v58;
            v48 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v24 + 5) + 32LL)
                                        + 8LL * *(unsigned int *)(*((_QWORD *)v24 + 4) + 4LL))
                            + 8 * v58
                            + 88);
            _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v56 + v58 + 839) + 8LL), -v45);
            *(_DWORD *)(*((_QWORD *)v46 + v47 + 839) + 4LL) += v45;
            _InterlockedAdd((volatile signed __int32 *)(v48 + 8), -v45);
            *(_DWORD *)(v48 + 4) += v45;
            v12 = v54;
            v15 = v57;
          }
        }
        v26 = v56;
        *(_DWORD *)(v10 + 64) = v12;
        VidSchiUpdateFlipQueueHistory(6, (__int64)v26, v50, v10, v12);
      }
      if ( (*((_DWORD *)v15 + 288) & 0x2000) == 0 )
      {
        if ( !*(_DWORD *)(v10 + 112) )
        {
          v27 = v58;
          *((_DWORD *)v15 + 263) = 4;
          v53[0] = 0;
          v28 = *(_QWORD *)(a2 + 8 * v27 + 3432);
          v57 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v28;
          v29 = *(unsigned int *)(v28 + 144);
          *(_DWORD *)(v28 + 144) = (v29 + 1) & (*(_DWORD *)(v28 + 128) - 1);
          v30 = (struct _VIDSCH_DEVICE *)(*(_QWORD *)(v28 + 136) + 112 * v29);
          v56 = v30;
          v31 = (void *)*((_QWORD *)v30 + 9);
          if ( v31 )
          {
            memset(v31, 0, 8LL * *(unsigned int *)(a2 + 152));
            v30 = v56;
          }
          *(_DWORD *)v30 = 0;
          v32 = v10 + 1400LL * v12;
          *((_DWORD *)v30 + 4) = **(_DWORD **)(v32 + 1312) & 0x3FF;
          *((_DWORD *)v30 + 5) = (**(_DWORD **)(v32 + 1312) >> 10) & 0x3FF;
          *((_BYTE *)v30 + 24) = *(_BYTE *)(v10 + 80);
          *((_DWORD *)v30 + 7) = v12;
          v33 = KeQueryPerformanceCounter(0LL);
          v34 = v56;
          v35 = v57;
          *((LARGE_INTEGER *)v56 + 1) = v33;
          *((_BYTE *)v34 + 36) = (*(_DWORD *)(v32 + 1272) & 0x20) != 0;
          *((_DWORD *)v34 + 10) = *(_DWORD *)(v32 + 1172);
          *((_DWORD *)v34 + 8) = *(_DWORD *)(v32 + 1176);
          *((_DWORD *)v34 + 11) = *(_DWORD *)(v32 + 1276);
          *((_DWORD *)v34 + 12) = *((_DWORD *)v35 + 798);
          *((_QWORD *)v34 + 7) = *(_QWORD *)(v32 + 1432);
          *((_QWORD *)v34 + 8) = *(_QWORD *)(v32 + 1440);
          *((_DWORD *)v34 + 21) = *((_DWORD *)v35 + 813);
          *((_DWORD *)v34 + 20) = *((_DWORD *)v35 + 812);
          *((_DWORD *)v34 + 22) = *(_DWORD *)(v10 + 56);
          *((_DWORD *)v34 + 23) = *(_DWORD *)(v10 + 60);
          *((_DWORD *)v34 + 24) = *(_DWORD *)(v10 + 64);
          *((_DWORD *)v34 + 25) = *(_DWORD *)(v10 + 68);
          *((_DWORD *)v34 + 26) = *(_DWORD *)(v10 + 72);
          *((_DWORD *)v34 + 27) = *(_DWORD *)(v10 + 76);
          VidSchiExecuteMmIoFlip(a1, a2, v50, (void *)v10, v12, &v62, v53);
          if ( v53[0] )
            VidSchiExecuteMmIoFlip(a1, a2, v50, (void *)v10, v12, &v62, v53);
          v36 = 0;
          goto LABEL_45;
        }
        *((_DWORD *)v15 + 263) = 3;
LABEL_59:
        v36 = 1;
        goto LABEL_45;
      }
      if ( *(_BYTE *)(a2 + 59) )
      {
        *((_DWORD *)v15 + 263) = 4;
      }
      else
      {
        VidSchiSelectPresentAtFlip(a1, (struct _VIDSCH_GLOBAL *)a2, v50, (struct VIDSCH_FLIP_QUEUE *)v10, &v54, &v57);
        v12 = v54;
        v15 = v57;
      }
      if ( *((_DWORD *)v15 + 263) != 4 )
        goto LABEL_59;
      v52 = 0;
      v36 = 0;
      VidSchiUpdateFlipQueueHistory(0, a2, v50, v10, v12);
      VidSchiExecuteMmIoFlip(a1, a2, v50, (void *)v10, v12, &v62, &v52);
      if ( v52 )
      {
        v41 = &v52;
LABEL_65:
        VidSchiExecuteMmIoFlip(a1, a2, v50, (void *)v10, v12, &v62, v41);
      }
    }
LABEL_45:
    if ( !*(_BYTE *)(a2 + 59) )
      goto LABEL_46;
    goto LABEL_54;
  }
  return result;
}
