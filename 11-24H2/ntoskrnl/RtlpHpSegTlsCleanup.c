/*
 * XREFs of RtlpHpSegTlsCleanup @ 0x140606250
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpLfhContextTlsCleanup @ 0x140606890 (RtlpHpLfhContextTlsCleanup.c)
 */

__int64 __fastcall RtlpHpSegTlsCleanup(__int64 a1)
{
  return RtlpHpLfhContextTlsCleanup(*(_QWORD *)(a1 + 24));
}
