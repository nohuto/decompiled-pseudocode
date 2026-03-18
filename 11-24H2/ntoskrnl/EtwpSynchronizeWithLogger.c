/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x14083381C
 * Callers:
 *     EtwpTransitionToRealtime @ 0x14064F408 (EtwpTransitionToRealtime.c)
 *     EtwpIncrementTraceFile @ 0x1407AA940 (EtwpIncrementTraceFile.c)
 *     EtwpUpdateTrace @ 0x14083311C (EtwpUpdateTrace.c)
 *     EtwpFlushTrace @ 0x140833B94 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x140A5EC30 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140A86A08 (EtwpRealtimeDisconnectConsumer.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 */

__int64 __fastcall EtwpSynchronizeWithLogger(__int64 a1, unsigned int a2)
{
  struct _KEVENT *v2; // rsi
  unsigned int v5; // ebx

  v2 = (struct _KEVENT *)(a1 + 456);
  KeResetEvent((PRKEVENT)(a1 + 456));
  _InterlockedOr((volatile signed __int32 *)(a1 + 824), a2);
  if ( KeGetEffectiveIrql() > 2u )
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
