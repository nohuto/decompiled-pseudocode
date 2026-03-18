/*
 * XREFs of CcPostWorkQueue @ 0x1403ABCB8
 * Callers:
 *     CcQueueLazyWriteScanThreadForVolume @ 0x1403A9EE0 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcRepostToSynchronousLazywriter @ 0x1403AAF90 (CcRepostToSynchronousLazywriter.c)
 *     CcNotifyOfMappedWrite @ 0x14040ECD8 (CcNotifyOfMappedWrite.c)
 *     CcScheduleReadAheadNuma @ 0x140499150 (CcScheduleReadAheadNuma.c)
 *     CcLazyWriteScan @ 0x1404BE770 (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThread @ 0x1405772C0 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     CcPostWorkQueueRegular @ 0x1403ABCE4 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x1403AC174 (CcPostWorkQueueCachemapUninit.c)
 */

__int64 __fastcall CcPostWorkQueue(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 152) + 120LL == a2 )
    return CcPostWorkQueueCachemapUninit();
  else
    return CcPostWorkQueueRegular();
}
