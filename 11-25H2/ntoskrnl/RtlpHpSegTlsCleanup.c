/*
 * XREFs of RtlpHpSegTlsCleanup @ 0x1405F9F10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpLfhContextTlsCleanup @ 0x1405FA550 (RtlpHpLfhContextTlsCleanup.c)
 */

__int64 __fastcall RtlpHpSegTlsCleanup(__int64 a1)
{
  return RtlpHpLfhContextTlsCleanup(*(_QWORD *)(a1 + 24));
}
