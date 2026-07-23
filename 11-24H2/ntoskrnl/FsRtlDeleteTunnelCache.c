/*
 * XREFs of FsRtlDeleteTunnelCache @ 0x140A7BBE0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1403C00D0 (ExFreeToPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlDeleteTunnelCache(TUNNEL *Cache)
{
  LIST_ENTRY *p_TimerQueue; // rbx
  TUNNEL *Flink; // rax
  TUNNEL *v3; // rdi
  LIST_ENTRY *v4; // rcx

  if ( TunnelMaxEntries )
  {
    p_TimerQueue = &Cache->TimerQueue;
    Cache->Cache = 0LL;
    Cache->NumEntries = 0;
    Flink = (TUNNEL *)Cache->TimerQueue.Flink;
    if ( Flink != (TUNNEL *)&Cache->TimerQueue )
    {
      do
      {
        v3 = *(TUNNEL **)&Flink->Mutex.Count;
        v4 = &Flink[-1].TimerQueue;
        if ( ((__int64)Flink->Mutex.Event.Header.WaitListHead.Flink & 1) != 0 )
          ExFreePoolWithTag(v4, 0);
        else
          ExFreeToPagedLookasideList(&TunnelLookasideList, v4);
        Flink = v3;
      }
      while ( v3 != (TUNNEL *)p_TimerQueue );
    }
    p_TimerQueue->Blink = p_TimerQueue;
    p_TimerQueue->Flink = p_TimerQueue;
  }
}
