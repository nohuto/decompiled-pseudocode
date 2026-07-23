/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x1409D2650
 * Callers:
 *     EtwpTransitionToRealtime @ 0x14064DB08 (EtwpTransitionToRealtime.c)
 *     EtwpFlushTrace @ 0x1409D2420 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x140A56DA8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140A814E0 (EtwpRealtimeDisconnectConsumer.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 *     EtwpUpdateTrace @ 0x140ADA038 (EtwpUpdateTrace.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 */

__int64 __fastcall EtwpSynchronizeWithLogger(__int64 a1, unsigned int a2)
{
  struct _KEVENT *v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx

  v2 = (struct _KEVENT *)(a1 + 456);
  KeResetEvent((PRKEVENT)(a1 + 456));
  _InterlockedOr((volatile signed __int32 *)(a1 + 824), a2);
  if ( KeGetEffectiveIrql(v6, v5) > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 8u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 568), 0LL, 0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)(a1 + 480), 0, 0);
  }
  KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  v7 = *(_DWORD *)(a1 + 40);
  KeResetEvent(v2);
  *(_DWORD *)(a1 + 40) = 0;
  return v7;
}
