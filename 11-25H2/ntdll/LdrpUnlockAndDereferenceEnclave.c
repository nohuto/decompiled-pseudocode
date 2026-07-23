/*
 * XREFs of LdrpUnlockAndDereferenceEnclave @ 0x1800D8E20
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D8840 (LdrLoadEnclaveModule.c)
 *     LdrIsEnclaveAddress @ 0x1800D8A94 (LdrIsEnclaveAddress.c)
 *     LdrInitializeEnclave @ 0x1800D8B40 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800D8C50 (LdrpIssueEnclaveCall.c)
 *     LdrDeleteEnclave @ 0x180134740 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall LdrpUnlockAndDereferenceEnclave(__int64 a1)
{
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 16));
  return LdrpDereferenceEnclave(a1);
}
