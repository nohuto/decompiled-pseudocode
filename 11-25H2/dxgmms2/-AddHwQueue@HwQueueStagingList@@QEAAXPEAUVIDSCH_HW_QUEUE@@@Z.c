/*
 * XREFs of ?AddHwQueue@HwQueueStagingList@@QEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1400378BC
 * Callers:
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001C750 (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002FA0C (VidSchiUnwaitWaitQueuePacket.c)
 * Callees:
 *     <none>
 */

void __fastcall HwQueueStagingList::AddHwQueue(HwQueueStagingList *this, struct VIDSCH_HW_QUEUE *a2)
{
  HwQueueStagingList *v2; // rdx
  HwQueueStagingList **v3; // r8

  v2 = (struct VIDSCH_HW_QUEUE *)((char *)a2 + 176);
  if ( !*(_QWORD *)v2 )
  {
    v3 = (HwQueueStagingList **)*((_QWORD *)this + 2);
    if ( *v3 != (HwQueueStagingList *)((char *)this + 8) )
      __fastfail(3u);
    *(_QWORD *)v2 = (char *)this + 8;
    *((_QWORD *)v2 + 1) = v3;
    *v3 = v2;
    *((_QWORD *)this + 2) = v2;
    *((_BYTE *)this + 24) = 0;
  }
}
