/*
 * XREFs of RtlpHpGCTimerCallback @ 0x180140890
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18002A930 (RtlpEnumProcessHeaps.c)
 *     RtlpHpTlLogGCTimerFinished @ 0x18014B0C0 (RtlpHpTlLogGCTimerFinished.c)
 */

void __fastcall RtlpHpGCTimerCallback(PTP_CALLBACK_INSTANCE a1, _DWORD *a2, PTP_TIMER a3)
{
  RtlpEnumProcessHeaps(
    (__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpHpGCTimerEnumProcessHeapsCallback,
    (__int64)a2,
    4);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogGCTimerFinished();
  a2[4] = 0;
}
