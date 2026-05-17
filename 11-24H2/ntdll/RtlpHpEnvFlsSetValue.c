/*
 * XREFs of RtlpHpEnvFlsSetValue @ 0x1800F7600
 * Callers:
 *     RtlpHpEnvTlsSetValue @ 0x18004EB3C (RtlpHpEnvTlsSetValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpEnvFlsSetValue(int a1, __int64 a2)
{
  return RtlpFlsSetValue((__int64)&RtlpHpEnvFlsContext, (__int64 *)&NtCurrentTeb()->HeapFlsData, a1, a2);
}
