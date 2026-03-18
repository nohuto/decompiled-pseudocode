/*
 * XREFs of VidSchiSubmitPresentHistoryToken @ 0x140014038
 * Callers:
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140010190 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x140019940 (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14001F0E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1400287EC (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x14002AEC0 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     VidSchiFlushQueuePacket @ 0x140045638 (VidSchiFlushQueuePacket.c)
 * Callees:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1400142E0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1400147C0 (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1400148EC (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DE.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x14002A1D8 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 */

void __fastcall VidSchiSubmitPresentHistoryToken(
        struct HwQueueStagingList *a1,
        _QWORD *a2,
        _QWORD *a3,
        union _ULARGE_INTEGER a4,
        __int64 a5)
{
  bool v5; // di
  struct _VIDSCH_CONTEXT *v8; // r13
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned int i; // edx
  __int64 v16; // r8
  __int64 v17; // rcx
  char v18; // r8
  bool v19; // zf
  unsigned int v20; // ecx
  char v21; // al
  char v22; // cl
  __int64 v23; // rdx
  __int64 v24; // r14
  int v25; // eax
  bool v26; // al
  unsigned int v27; // [rsp+50h] [rbp-48h]
  unsigned int v28; // [rsp+54h] [rbp-44h]

  v5 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( a2 )
  {
    v11 = a2[11];
    a3 = a2 + 94;
    a4 = (union _ULARGE_INTEGER)a2[14];
    if ( v11 )
    {
      v10 = *(_QWORD *)(v11 + 104);
      v8 = (struct _VIDSCH_CONTEXT *)a2[11];
    }
    else
    {
      v9 = a2[12];
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 8LL);
    }
    v12 = *(_QWORD *)(v10 + 32);
  }
  else
  {
    v12 = a5;
  }
  v13 = *((unsigned int *)a3 + 29);
  v28 = *((_DWORD *)a3 + 29);
  if ( (*(_DWORD *)a3 & 0x1000000) == 0 )
  {
    if ( *(_QWORD *)((char *)a3 + 156) )
    {
      if ( (_DWORD)v13 != -1 )
      {
        v14 = (unsigned int)v13;
        if ( *(_QWORD *)(v12 + 8 * v13 + 3432) )
        {
          for ( i = 0; i < *(_DWORD *)(v12 + 152); ++i )
          {
            v16 = *(int *)(304LL * i + *(_QWORD *)(v12 + 8 * v14 + 3432) + 188);
            if ( (int)v16 > -1 )
            {
              v17 = *(_QWORD *)(v12 + 3560) + 160 * v16;
              if ( v17 )
              {
                if ( *((_DWORD *)a3 + 39) == *(_DWORD *)v17
                  && *((_DWORD *)a3 + 40) == *(_DWORD *)(v17 + 4)
                  && a3[21] == *(_QWORD *)(v17 + 8)
                  && *(_DWORD *)(v17 + 112) == 3 )
                {
                  goto LABEL_40;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_23;
  }
  v18 = -1;
  v19 = !_BitScanForward(&v20, a3[75] & 0x3FF);
  v21 = v20;
  v22 = 0;
  if ( !v19 )
    v18 = v21;
  if ( v18 != -1 )
    v22 = v18;
  v27 = v22;
  v23 = *(int *)(*(_QWORD *)(v12 + 8 * v13 + 3432) + 304LL * (unsigned int)v22 + 188);
  if ( (int)v23 <= -1 )
    goto LABEL_23;
  v24 = *(_QWORD *)(v12 + 3560) + 160 * v23;
  if ( !v24 )
    goto LABEL_23;
  if ( *(_QWORD *)(v24 + 120) == v24 + 120 )
  {
    v25 = *(_DWORD *)(v24 + 112);
    if ( v25 == 3 )
    {
      if ( *((_DWORD *)a3 + 39) == *(_DWORD *)v24
        && *((_DWORD *)a3 + 40) == *(_DWORD *)(v24 + 4)
        && a3[21] == *(_QWORD *)(v24 + 8) )
      {
LABEL_40:
        v26 = 1;
        goto LABEL_24;
      }
      goto LABEL_23;
    }
    if ( v25 != 1
      || !VidSchiCheckTokenIndependentFlipCondition(
            (struct _VIDSCH_GLOBAL *)v12,
            (const struct VIDSCH_SUBMIT_DATA2 *)a3) )
    {
      goto LABEL_23;
    }
    if ( !*(_BYTE *)(v24 + 97) )
    {
      v26 = 0;
      v5 = 1;
      *(_BYTE *)(v24 + 97) = 1;
      goto LABEL_24;
    }
    if ( VidSchiCheckPlaneIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v12, v28, v27) )
    {
LABEL_23:
      v26 = 0;
LABEL_24:
      VidSchiProcessPresentHistoryToken(
        (struct _VIDSCH_GLOBAL *)v12,
        a1,
        v8,
        (struct VIDSCH_HW_QUEUE *)v9,
        (struct _VIDSCH_DEVICE *)v10,
        (struct VIDSCH_SUBMIT_DATA2 *)a3,
        a4,
        v5,
        v26);
      return;
    }
  }
  VidSchiPostponePresentHistoryToken(
    v8,
    (struct VIDSCH_HW_QUEUE *)v9,
    (struct _VIDSCH_DEVICE *)v10,
    (struct VIDSCH_SUBMIT_DATA2 *)a3,
    a4,
    (struct _VIDSCH_GLOBAL *)v12);
}
