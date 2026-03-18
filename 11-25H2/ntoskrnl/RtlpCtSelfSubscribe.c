/*
 * XREFs of RtlpCtSelfSubscribe @ 0x140777FE4
 * Callers:
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x1405E3E30 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 */

__int64 __fastcall RtlpCtSelfSubscribe(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 16), 1, 0);
  return 0LL;
}
