/*
 * XREFs of CcPostWorkQueue @ 0x1402A7488
 * Callers:
 *     CcRepostToSynchronousLazywriter @ 0x1402A93E4 (CcRepostToSynchronousLazywriter.c)
 *     CcNotifyOfMappedWrite @ 0x14036BCAC (CcNotifyOfMappedWrite.c)
 *     CcLazyWriteScan @ 0x14043BAE8 (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x14043C240 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcScheduleReadAheadNuma @ 0x1404992C0 (CcScheduleReadAheadNuma.c)
 *     CcQueueLazyWriteScanThread @ 0x14057A5C0 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     CcPostWorkQueueRegular @ 0x1402A74B4 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x1402A7944 (CcPostWorkQueueCachemapUninit.c)
 */

__int64 __fastcall CcPostWorkQueue(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 152) + 120LL == a2 )
    return CcPostWorkQueueCachemapUninit();
  else
    return CcPostWorkQueueRegular();
}
