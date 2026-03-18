/*
 * XREFs of ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001CBA0
 * Callers:
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001C750 (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x140052348 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x14000FF50 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140010190 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140011180 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400118F0 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140019D10 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x14002F810 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002FA0C (VidSchiUnwaitWaitQueuePacket.c)
 *     ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400479E0 (-SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiReleasePacketToGpu(
        struct HwQueueStagingList *a1,
        LARGE_INTEGER *a2,
        struct VIDSCH_HW_QUEUE **a3,
        struct _KLOCK_QUEUE_HANDLE *a4)
{
  LARGE_INTEGER v4; // rdi
  LARGE_INTEGER *v5; // rsi
  struct _VIDSCH_QUEUE_PACKET *v10; // r8
  DWORD LowPart; // ecx
  DWORD v12; // ecx
  DWORD v13; // ecx
  DWORD v14; // ecx
  DWORD v15; // eax

  v4 = a2[12];
  v5 = a2 + 4;
  v10 = *(struct _VIDSCH_QUEUE_PACKET **)(v4.QuadPart + 208);
  if ( v10 == (struct _VIDSCH_QUEUE_PACKET *)&a2[4] )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry3)(
      4LL,
      (LARGE_INTEGER)a2[12].QuadPart,
      v10,
      v5->QuadPart);
    *(LARGE_INTEGER *)(v4.QuadPart + 208) = *v5;
    WdLogGlobalForLineNumber = 4600;
  }
  LowPart = a2[6].LowPart;
  if ( !LowPart )
  {
    SubmitRenderToHwQueue(a1, a2, a3, a4);
    return;
  }
  if ( LowPart == 5 )
  {
    if ( a2[5].QuadPart == a2[12].QuadPart + 160 )
    {
      VidSchiCompleteHwQueueSignalPacket(a1, (struct _VIDSCH_QUEUE_PACKET *)a2);
      return;
    }
LABEL_8:
    a2[10].LowPart |= 1u;
    return;
  }
  v12 = LowPart - 3;
  if ( !v12 )
  {
    VidSchiSubmitHwQueueMmIoFlipCommand(a1, (struct _VIDSCH_QUEUE_PACKET *)a2);
    return;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 3;
    if ( !v14 )
    {
      if ( a2[5].QuadPart == a2[12].QuadPart + 160 )
      {
        VidSchiCompleteHwQueuePacket((struct HwQueueStagingList ***)a1, (struct _VIDSCH_QUEUE_PACKET *)a2, 1);
        return;
      }
      goto LABEL_8;
    }
    if ( v14 == 1 )
      SubmitPagingToHwQueue(a1, (struct _VIDSCH_QUEUE_PACKET *)a2);
  }
  else
  {
    v15 = a2[94].LowPart;
    if ( (v15 & 1) == 0 )
    {
      if ( (v15 & 4) != 0 )
        VidSchiUnblockUnorderedWaitQueuePacket(a1);
      else
        VidSchiUnwaitWaitQueuePacket(a1);
    }
    WdLogSingleEntry1(4LL, a2);
    WdLogGlobalForLineNumber = 751;
    VidSchiFreeCompletedHwQueuePacket(a2);
  }
}
