/*
 * XREFs of RtlpHpSegTlsCleanup @ 0x140603890
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpLfhContextTlsCleanup @ 0x140603ED0 (RtlpHpLfhContextTlsCleanup.c)
 */

__int64 __fastcall RtlpHpSegTlsCleanup(__int64 a1)
{
  return RtlpHpLfhContextTlsCleanup(*(_QWORD *)(a1 + 24));
}
