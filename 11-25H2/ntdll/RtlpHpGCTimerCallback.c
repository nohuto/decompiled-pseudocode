/*
 * XREFs of RtlpHpGCTimerCallback @ 0x180143DD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18009A690 (RtlpEnumProcessHeaps.c)
 *     RtlpHpTlLogGCTimerFinished @ 0x18014E2A8 (RtlpHpTlLogGCTimerFinished.c)
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
