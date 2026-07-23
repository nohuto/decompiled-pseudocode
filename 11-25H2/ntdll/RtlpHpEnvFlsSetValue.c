/*
 * XREFs of RtlpHpEnvFlsSetValue @ 0x1800F9260
 * Callers:
 *     RtlpHpEnvTlsSetValue @ 0x18000A3CC (RtlpHpEnvTlsSetValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpEnvFlsSetValue(int a1, __int64 a2)
{
  return RtlpFlsSetValue(&RtlpHpEnvFlsContext, (unsigned __int64 *)&NtCurrentTeb()->HeapFlsData, a1, a2);
}
