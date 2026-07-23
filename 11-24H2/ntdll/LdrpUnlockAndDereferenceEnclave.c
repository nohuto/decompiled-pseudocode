/*
 * XREFs of LdrpUnlockAndDereferenceEnclave @ 0x1800D41F0
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D3B60 (LdrLoadEnclaveModule.c)
 *     LdrIsEnclaveAddress @ 0x1800D3E5C (LdrIsEnclaveAddress.c)
 *     LdrInitializeEnclave @ 0x1800D3F10 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800D4020 (LdrpIssueEnclaveCall.c)
 *     LdrDeleteEnclave @ 0x180130E90 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall LdrpUnlockAndDereferenceEnclave(__int64 a1)
{
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 16));
  return LdrpDereferenceEnclave(a1);
}
