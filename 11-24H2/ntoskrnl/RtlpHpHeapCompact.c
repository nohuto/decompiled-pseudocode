/*
 * XREFs of RtlpHpHeapCompact @ 0x1402B39E4
 * Callers:
 *     ExpHpCompactHeapCallback @ 0x1402B3980 (ExpHpCompactHeapCallback.c)
 *     ExpCompactPrivatePools @ 0x140A4AE8C (ExpCompactPrivatePools.c)
 * Callees:
 *     RtlpHpVsContextCompact @ 0x1402B3A2C (RtlpHpVsContextCompact.c)
 *     RtlpHpSegContextCompact @ 0x1402B4260 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhContextCompact @ 0x1402B445C (RtlpHpLfhContextCompact.c)
 */

__int64 __fastcall RtlpHpHeapCompact(__int64 a1)
{
  RtlpHpVsContextCompact(a1 + 704);
  RtlpHpLfhContextCompact(a1 + 832);
  RtlpHpSegContextCompact(a1 + 320);
  RtlpHpSegContextCompact(a1 + 512);
  return 0LL;
}
