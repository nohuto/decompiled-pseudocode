/*
 * XREFs of ExpCancelTimer @ 0x140333A40
 * Callers:
 *     ExTimerRundown @ 0x14024D3F4 (ExTimerRundown.c)
 *     NtCancelTimer @ 0x1403320A0 (NtCancelTimer.c)
 * Callees:
 *     KeRemoveQueueApc @ 0x140205700 (KeRemoveQueueApc.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     KeRemoveQueueDpcEx @ 0x140464090 (KeRemoveQueueDpcEx.c)
 */

__int64 __fastcall ExpCancelTimer(PKTIMER a1)
{
  unsigned int v1; // edi
  __int64 result; // rax
  struct _LIST_ENTRY *Blink; // rsi
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *v6; // rdx

  v1 = 0;
  if ( ((__int64)a1[4].Dpc & 1) != 0 )
  {
    Blink = a1[1].Header.WaitListHead.Blink;
    KxAcquireSpinLock((PKSPIN_LOCK)&Blink[79]);
    Flink = a1[3].TimerListEntry.Flink;
    if ( Flink->Blink != &a1[3].TimerListEntry || (v6 = a1[3].TimerListEntry.Blink, v6->Flink != &a1[3].TimerListEntry) )
      __fastfail(3u);
    v6->Flink = Flink;
    Flink->Blink = v6;
    KxReleaseSpinLock((volatile signed __int64 *)&Blink[79]);
    LOBYTE(a1[4].Dpc) &= ~1u;
    if ( ((__int64)a1[4].Dpc & 2) != 0 && LOBYTE(a1[3].Processor)
      || KeCancelTimer(a1)
      || (unsigned __int8)KeRemoveQueueDpcEx(&a1[2].TimerListEntry, 0LL) )
    {
      v1 = 1;
    }
    if ( KeRemoveQueueApc((__int64)&a1[1].Header.WaitListHead) )
      ++v1;
  }
  else
  {
    KeCancelTimer(a1);
  }
  result = v1;
  LOBYTE(a1[3].Processor) = 0;
  return result;
}
