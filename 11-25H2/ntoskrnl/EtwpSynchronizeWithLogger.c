/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x1408942B8
 * Callers:
 *     EtwpTransitionToRealtime @ 0x140643468 (EtwpTransitionToRealtime.c)
 *     EtwpIncrementTraceFile @ 0x14079B570 (EtwpIncrementTraceFile.c)
 *     EtwpUpdateTrace @ 0x140893BB4 (EtwpUpdateTrace.c)
 *     EtwpFlushTrace @ 0x140894628 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x140A5E498 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140A913FC (EtwpRealtimeDisconnectConsumer.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 */

__int64 __fastcall EtwpSynchronizeWithLogger(__int64 a1, unsigned int a2)
{
  struct _KEVENT *v2; // rsi
  unsigned int v5; // ebx

  v2 = (struct _KEVENT *)(a1 + 456);
  KeResetEvent((PRKEVENT)(a1 + 456));
  _InterlockedOr((volatile signed __int32 *)(a1 + 824), a2);
  if ( ObGetCurrentIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 8u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 568), 0LL, 0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)(a1 + 480), 0, 0);
  }
  KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  v5 = *(_DWORD *)(a1 + 40);
  KeResetEvent(v2);
  *(_DWORD *)(a1 + 40) = 0;
  return v5;
}
