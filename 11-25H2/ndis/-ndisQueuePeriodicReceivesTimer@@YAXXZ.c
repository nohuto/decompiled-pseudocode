/*
 * XREFs of ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x140045160
 * Callers:
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x140043300 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140043970 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x140044880 (ndisQueuedMiniportDpcWorkItem.c)
 * Callees:
 *     <none>
 */

void ndisQueuePeriodicReceivesTimer(void)
{
  LARGE_INTEGER v0; // rdx
  struct _KDPC *v1; // r8

  if ( !_InterlockedExchange((volatile __int32 *)qword_140125538 + KeGetPcr()->Prcb.Number, 1) )
  {
    v0.QuadPart = -1LL;
    v1 = (struct _KDPC *)((char *)qword_140125530 + 128 * (unsigned __int64)KeGetPcr()->Prcb.Number + 64);
    if ( DueTime.QuadPart )
      v0 = DueTime;
    KeSetTimer((PKTIMER)qword_140125530 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number, v0, v1);
  }
}
