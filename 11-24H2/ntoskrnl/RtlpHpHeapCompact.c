/*
 * XREFs of RtlpHpHeapCompact @ 0x14035CB34
 * Callers:
 *     ExpHpCompactHeapCallback @ 0x14035CAD0 (ExpHpCompactHeapCallback.c)
 *     ExpCompactPrivatePools @ 0x140A41B0C (ExpCompactPrivatePools.c)
 * Callees:
 *     RtlpHpVsContextCompact @ 0x14035CB7C (RtlpHpVsContextCompact.c)
 *     RtlpHpSegContextCompact @ 0x14035E4C0 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhContextCompact @ 0x140432100 (RtlpHpLfhContextCompact.c)
 */

__int64 __fastcall RtlpHpHeapCompact(__int64 a1)
{
  RtlpHpVsContextCompact(a1 + 704);
  RtlpHpLfhContextCompact(a1 + 832);
  RtlpHpSegContextCompact(a1 + 320);
  RtlpHpSegContextCompact(a1 + 512);
  return 0LL;
}
