/*
 * XREFs of VidSchiRestartQueuedFlip @ 0x140031464
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1400124E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140027780 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchUnwaitFlipQueue @ 0x14002A240 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14002D1D0 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     ?VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1400310FC (-VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAU.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x14002AB90 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x14002D4D0 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ?VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUEUE@@I@Z @ 0x140053C74 (-VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUE.c)
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
  int v11; // eax
  __int64 v12; // rdx
  __int64 result; // rax
  int v14; // ecx
  unsigned int v15; // [rsp+20h] [rbp-38h]

  v5 = *(_QWORD *)(a2 + 32);
  v7 = a3;
  if ( *(_BYTE *)(v5 + 59) )
    VidSchiCancelHwQueuedFlips(a1, (struct _VIDSCH_DEVICE *)a2, a3, a4, v15);
  v10 = *((_DWORD *)a4 + 16);
  if ( v10 != a5 )
  {
    v11 = VidSchiCompleteFlipEntry(a1, v5, v7, (__int64)a4, v10, ((_BYTE)a5 - 1) & 0x3F, 6u, 0LL);
    if ( v11 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 32LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(a2 + 32) + 4LL))
                      + 8 * v7
                      + 88);
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v5 + 8 * v7 + 6712) + 8LL), -v11);
      *(_DWORD *)(*(_QWORD *)(v5 + 8 * v7 + 6712) + 4LL) += v11;
      _InterlockedAdd((volatile signed __int32 *)(v12 + 8), -v11);
      *(_DWORD *)(v12 + 4) += v11;
    }
  }
  if ( !*(_BYTE *)(v5 + 7070)
    || ((result = *((unsigned int *)a4 + 350 * a5 + 293), (unsigned int)result > 0xC)
     || (v14 = 4673, !_bittest(&v14, result)))
    && (_DWORD)result != 5
    && (_DWORD)result != 15 )
  {
    *((_DWORD *)a4 + 16) = a5;
    return VidSchiUpdateFlipQueueHistory(6, v5, v7, (__int64)a4, a5);
  }
  return result;
}
