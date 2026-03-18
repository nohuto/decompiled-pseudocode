/*
 * XREFs of VfUtilGetDriverFullName @ 0x140B83290
 * Callers:
 *     CarEtwWriteBugCheckEvent @ 0x140615B58 (CarEtwWriteBugCheckEvent.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140BA7E7C (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfUtilGetDriverFullName(__int64 a1)
{
  __int64 result; // rax

  result = VfTargetDriversGetVerifierData(a1);
  if ( result )
    return *(_QWORD *)(*(_QWORD *)result + 32LL);
  return result;
}
