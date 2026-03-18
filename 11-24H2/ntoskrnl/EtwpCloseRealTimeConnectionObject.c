/*
 * XREFs of EtwpCloseRealTimeConnectionObject @ 0x1407B16E0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpRealtimeDisconnectConsumer @ 0x140A86A08 (EtwpRealtimeDisconnectConsumer.c)
 */

__int64 __fastcall EtwpCloseRealTimeConnectionObject(__int64 a1, __int64 a2)
{
  return EtwpRealtimeDisconnectConsumer(a2);
}
