/*
 * XREFs of CcPostWorkQueue @ 0x14027AE6C
 * Callers:
 *     CcLazyWriteScan @ 0x1402654C8 (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x140265C20 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcRepostToSynchronousLazywriter @ 0x14027B688 (CcRepostToSynchronousLazywriter.c)
 *     CcNotifyOfMappedWrite @ 0x1402EDA4C (CcNotifyOfMappedWrite.c)
 *     CcScheduleReadAheadNuma @ 0x140493C50 (CcScheduleReadAheadNuma.c)
 *     CcQueueLazyWriteScanThread @ 0x140577A50 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     CcPostWorkQueueCachemapUninit @ 0x14027973C (CcPostWorkQueueCachemapUninit.c)
 *     CcPostWorkQueueRegular @ 0x14027AE98 (CcPostWorkQueueRegular.c)
 */

void __fastcall CcPostWorkQueue(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1[19] + 120LL == a2 )
    CcPostWorkQueueCachemapUninit(a1, a2, a3, a4);
  else
    CcPostWorkQueueRegular();
}
