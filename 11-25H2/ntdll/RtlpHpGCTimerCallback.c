/*
 * XREFs of RtlpHpGCTimerCallback @ 0x180143DD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18009A690 (RtlpEnumProcessHeaps.c)
 *     RtlpHpTlLogGCTimerFinished @ 0x18014E2A8 (RtlpHpTlLogGCTimerFinished.c)
 */

__int64 __fastcall RtlpHpGCTimerCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = RtlpEnumProcessHeaps(
             (__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpHpGCTimerEnumProcessHeapsCallback,
             a2,
             4);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    result = RtlpHpTlLogGCTimerFinished();
  *(_DWORD *)(a2 + 16) = 0;
  return result;
}
