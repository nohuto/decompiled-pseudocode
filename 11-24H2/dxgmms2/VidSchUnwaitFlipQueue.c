/*
 * XREFs of VidSchUnwaitFlipQueue @ 0x14002A240
 * Callers:
 *     VidSchiUnwaitMonitoredFences @ 0x14000E4E0 (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x140013C80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x14001F7C4 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x140026374 (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140028748 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14002A0B8 (-VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x140031EF0 (VidSchSubmitSignalToHwQueue.c)
 * Callees:
 *     ?VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14000A0EC (-VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x14001C0D8 (VidSchiCompletePendingFlipOnPlane.c)
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x1400237E0 (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x14002D4D0 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     VidSchiExecuteMmIoFlip @ 0x14002D920 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14002EEFC (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     VidSchiRestartQueuedFlip @ 0x140031464 (VidSchiRestartQueuedFlip.c)
 *     VidSchiIsWaitingOnAsyncCompletion @ 0x140034FC0 (VidSchiIsWaitingOnAsyncCompletion.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1400410E8 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 */

_QWORD *__fastcall VidSchUnwaitFlipQueue(struct HwQueueStagingList *a1, __int64 a2)
{
  _QWORD *result; // rax
  unsigned int v3; // r13d
  struct HwQueueStagingList *v5; // r12
  int v6; // r8d
  __int64 v7; // rax
  struct _VIDSCH_PRESENT_INFO *v8; // rcx
  int v9; // edx
  __int64 v10; // rax
  unsigned int *v11; // rbx
  unsigned int v12; // r14d
  unsigned int *v13; // r15
  unsigned int v14; // eax
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v15; // rdi
  int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // r12
  struct _VIDSCH_PRESENT_INFO *v19; // rdx
  int v20; // eax
  char v21; // r15
  __int64 v22; // rdx
  unsigned int v23; // ecx
  int v24; // eax
  int v25; // [rsp+48h] [rbp-9h]
  int v26; // [rsp+4Ch] [rbp-5h]
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v27; // [rsp+50h] [rbp-1h] BYREF
  struct _VIDSCH_PRESENT_INFO *v28; // [rsp+58h] [rbp+7h]
  _QWORD *v29; // [rsp+60h] [rbp+Fh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  char v32; // [rsp+C0h] [rbp+6Fh] BYREF
  char v33; // [rsp+C8h] [rbp+77h] BYREF
  unsigned int v34; // [rsp+D0h] [rbp+7Fh] BYREF

  result = &retaddr;
  v3 = 0;
  v5 = a1;
  if ( *(_DWORD *)(a2 + 40) )
  {
    v6 = 16404;
    while ( 1 )
    {
      v7 = v3 + 429LL;
      v8 = *(struct _VIDSCH_PRESENT_INFO **)(a2 + 8 * v7);
      result = (_QWORD *)(a2 + 8 * v7);
      v29 = result;
      v28 = v8;
      if ( *((_BYTE *)v8 + 78948) )
        break;
LABEL_77:
      if ( ++v3 >= *(_DWORD *)(a2 + 40) )
        return result;
    }
    v9 = -1;
    while ( 2 )
    {
      v25 = v9;
      if ( v9 == *(_DWORD *)(a2 + 152) )
        goto LABEL_77;
      v10 = *result;
      if ( v9 == -1 )
        v11 = *(unsigned int **)(v10 + 32);
      else
        v11 = *(unsigned int **)(v10 + 8LL * v9 + 40);
      if ( !v11 )
        goto LABEL_76;
      v26 = 1;
      v32 = 0;
      while ( 1 )
      {
        v34 = v11[15];
        v12 = v34;
        v13 = &v11[350 * v34];
        v14 = v13[293];
        v15 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v13 + 30);
        v27 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v13 + 30);
        if ( v14 == 1 || v14 == 16 )
          break;
        if ( v14 <= 0xE && _bittest(&v6, v14) )
        {
          v16 = *((_DWORD *)v8 + 1);
          if ( v16 == 3 )
            goto LABEL_21;
          if ( v16 == 5 && (v13[318] & 0x100) != 0 )
          {
            v17 = v11[350 * v11[17] + 293];
            if ( v17 != 5 && v17 != 15 )
            {
              v8 = v28;
LABEL_21:
              if ( v34 != v11[16] )
                goto LABEL_71;
              if ( !*(_BYTE *)(a2 + 156)
                || !VidSchiCheckPendingFlipsForThisEntry(
                      (struct _VIDSCH_GLOBAL *)a2,
                      v8,
                      (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v13 + 30),
                      (struct VIDSCH_FLIP_QUEUE *)v11) )
              {
                v33 = 0;
                v13[293] = 4;
                VidSchiExecuteMmIoFlip(v5, a2, v3, v11, v12, &v32, &v33);
                if ( v33 )
                  VidSchiExecuteMmIoFlip(v5, a2, v3, v11, v12, &v32, &v33);
              }
LABEL_70:
              v6 = 16404;
            }
          }
LABEL_71:
          v8 = v28;
          v11[15] = ((_BYTE)v12 + 1) & 0x3F;
        }
        else
        {
          if ( v14 != 3 )
            goto LABEL_73;
          v8 = v28;
          v11[15] = ((_BYTE)v34 + 1) & 0x3F;
        }
      }
      v18 = *((_QWORD *)v13 + 145);
      v33 = 1;
      if ( !(unsigned int)VidSchiIsHardwareCompletedDependingCommandForFlip((__int64)(v13 + 30)) )
      {
        VidSchiUpdateFlipQueueHistory(0LL, a2, v3, v11, v12);
        v5 = a1;
LABEL_73:
        if ( v32 )
          VidSchiCompletePendingFlipOnPlane((__int64)v5, a2, v3, (__int64)v11, 9);
        v9 = v25;
LABEL_76:
        v8 = v28;
        ++v9;
        result = v29;
        v6 = 16404;
        continue;
      }
      break;
    }
    v19 = v28;
    v20 = *((_DWORD *)v28 + 1);
    if ( v20 == 3 )
    {
      if ( v12 == v11[16]
        && (!*(_BYTE *)(a2 + 156)
         || !VidSchiCheckPendingFlipsForThisEntry(
               (struct _VIDSCH_GLOBAL *)a2,
               v28,
               (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v13 + 30),
               (struct VIDSCH_FLIP_QUEUE *)v11)) )
      {
        v13[293] = 4;
        v21 = 0;
        v33 = 0;
        VidSchiUpdateFlipQueueHistory(0LL, a2, v3, v11, v12);
        v5 = a1;
        goto LABEL_60;
      }
      v5 = a1;
      v13[293] = 2;
      if ( !*(_BYTE *)(a2 + 59) )
      {
        v15 = v27;
        v12 = v34;
        *((_QWORD *)v27 + 138) = MEMORY[0xFFFFF78000000320];
      }
LABEL_64:
      v21 = v33;
LABEL_65:
      if ( *(_BYTE *)(a2 + 59) && *((_DWORD *)v15 + 263) == 2 )
        VidSchiUpdateInterruptTargetsForAllPlanes((struct _VIDSCH_GLOBAL *)a2, v3);
      if ( v21 )
        VidSchiUpdateFlipQueueHistory(0LL, a2, v3, v11, v12);
      goto LABEL_70;
    }
    if ( v20 != 5 )
      goto LABEL_63;
    v13[293] = 2;
    if ( !v26 && !*(_BYTE *)(a2 + 59) )
      goto LABEL_63;
    v26 = 0;
    if ( v12 != v11[16] && !*((_BYTE *)v13 + 1196) )
      goto LABEL_63;
    if ( !*(_BYTE *)(a2 + 59) )
    {
      v15 = v27;
      v12 = v34;
      *((_QWORD *)v27 + 138) = MEMORY[0xFFFFF78000000320];
    }
    if ( VidSchiCheckPendingFlipsForThisEntry((struct _VIDSCH_GLOBAL *)a2, v19, v15, (struct VIDSCH_FLIP_QUEUE *)v11) )
    {
LABEL_63:
      v5 = a1;
      goto LABEL_64;
    }
    if ( *((_BYTE *)v15 + 1076) )
    {
      v22 = v18;
      v5 = a1;
      VidSchiRestartQueuedFlip(a1, v22, v3, v11, v12);
      if ( *(_BYTE *)(a2 + 7070) )
      {
        v23 = *((_DWORD *)v15 + 263);
        if ( v23 <= 0xC )
        {
          v24 = 4673;
          if ( _bittest(&v24, v23) )
            goto LABEL_73;
        }
        if ( (unsigned __int8)VidSchiIsWaitingOnAsyncCompletion() )
          goto LABEL_73;
      }
    }
    else
    {
      v5 = a1;
    }
    if ( (*((_DWORD *)v15 + 288) & 0x2000) != 0 )
    {
      if ( *(_BYTE *)(a2 + 59) )
      {
        *((_DWORD *)v15 + 263) = 4;
      }
      else
      {
        VidSchiSelectPresentAtFlip(v5, (struct _VIDSCH_GLOBAL *)a2, v3, (struct VIDSCH_FLIP_QUEUE *)v11, &v34, &v27);
        v12 = v34;
        v15 = v27;
      }
      if ( *((_DWORD *)v15 + 263) != 4 )
        goto LABEL_64;
    }
    else
    {
      if ( v11[28] )
      {
        *((_DWORD *)v15 + 263) = 3;
        goto LABEL_64;
      }
      *((_DWORD *)v15 + 263) = 4;
    }
    v21 = 0;
    v33 = 0;
    VidSchiUpdateFlipQueueHistory(0LL, a2, v3, v11, v12);
LABEL_60:
    VidSchiExecuteMmIoFlip(v5, a2, v3, v11, v12, &v32, &v33);
    if ( v33 )
      VidSchiExecuteMmIoFlip(v5, a2, v3, v11, v12, &v32, &v33);
    goto LABEL_65;
  }
  return result;
}
