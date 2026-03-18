/*
 * XREFs of VidSchiRestartQueuedFlip @ 0x14002E36C
 * Callers:
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14000C7F4 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400118F0 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x14001D940 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14002D1F4 (-VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAU.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x14000A1C0 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x14000CAF4 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ?VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUEUE@@I@Z @ 0x1400540A4 (-VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUE.c)
 */

__int64 __fastcall VidSchiRestartQueuedFlip(
        struct HwQueueStagingList *a1,
        __int64 a2,
        unsigned int a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        unsigned int a5)
{
  __int64 v5; // rsi
  __int64 v7; // rbp
  unsigned int v10; // ecx
  int v12; // eax
  __int64 v13; // r10
  unsigned int v14; // [rsp+20h] [rbp-38h]

  v5 = *(_QWORD *)(a2 + 32);
  v7 = a3;
  if ( *(_BYTE *)(v5 + 59) )
    VidSchiCancelHwQueuedFlips(a1, (struct _VIDSCH_DEVICE *)a2, a3, a4, v14);
  v10 = *((_DWORD *)a4 + 16);
  if ( v10 != a5 )
  {
    v12 = VidSchiCompleteFlipEntry(a1, v5, v7, (__int64)a4, v10, ((_BYTE)a5 - 1) & 0x3F, 6u, 0LL);
    if ( v12 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 32LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(a2 + 32) + 4LL))
                      + 8 * v7
                      + 88);
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v5 + 8 * v7 + 6712) + 8LL), -v12);
      *(_DWORD *)(*(_QWORD *)(v5 + 8 * v7 + 6712) + 4LL) += v12;
      _InterlockedAdd((volatile signed __int32 *)(v13 + 8), -v12);
      *(_DWORD *)(v13 + 4) += v12;
    }
  }
  *((_DWORD *)a4 + 16) = a5;
  return VidSchiUpdateFlipQueueHistory(6, v5, v7, (__int64)a4, a5);
}
