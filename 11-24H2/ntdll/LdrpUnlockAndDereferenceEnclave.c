/*
 * XREFs of LdrpUnlockAndDereferenceEnclave @ 0x1800D8E80
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D87F0 (LdrLoadEnclaveModule.c)
 *     LdrIsEnclaveAddress @ 0x1800D8AEC (LdrIsEnclaveAddress.c)
 *     LdrInitializeEnclave @ 0x1800D8BA0 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800D8CB0 (LdrpIssueEnclaveCall.c)
 *     LdrDeleteEnclave @ 0x180132C60 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall LdrpUnlockAndDereferenceEnclave(__int64 a1)
{
  RtlLeaveCriticalSection(a1 + 16);
  return LdrpDereferenceEnclave(a1);
}
