/*
 * XREFs of RtlpHpHeapCompact @ 0x1403C7C84
 * Callers:
 *     ExpHpCompactHeapCallback @ 0x1403C7C20 (ExpHpCompactHeapCallback.c)
 *     ExpCompactPrivatePools @ 0x140A496F8 (ExpCompactPrivatePools.c)
 * Callees:
 *     RtlpHpVsContextCompact @ 0x1403C7B4C (RtlpHpVsContextCompact.c)
 *     RtlpHpSegContextCompact @ 0x1403C7E20 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhContextCompact @ 0x1403C8290 (RtlpHpLfhContextCompact.c)
 */

__int64 __fastcall RtlpHpHeapCompact(__int64 a1)
{
  RtlpHpVsContextCompact(a1 + 704);
  RtlpHpLfhContextCompact(a1 + 832);
  RtlpHpSegContextCompact(a1 + 320);
  RtlpHpSegContextCompact(a1 + 512);
  return 0LL;
}
