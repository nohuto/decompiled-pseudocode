/*
 * XREFs of RtlpCtSelfSubscribe @ 0x140787234
 * Callers:
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x1405F0140 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 */

__int64 __fastcall RtlpCtSelfSubscribe(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 16), 1, 0);
  return 0LL;
}
