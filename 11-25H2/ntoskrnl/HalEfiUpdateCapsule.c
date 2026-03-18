/*
 * XREFs of HalEfiUpdateCapsule @ 0x14054A0A0
 * Callers:
 *     HalpUpdateCapsule @ 0x14055FF00 (HalpUpdateCapsule.c)
 * Callees:
 *     HalpEfiStartRuntimeCode @ 0x140442E24 (HalpEfiStartRuntimeCode.c)
 *     HalpConvertEfiToNtStatus @ 0x140442E7C (HalpConvertEfiToNtStatus.c)
 *     HalpEfiIncrementEfiCall @ 0x14045F424 (HalpEfiIncrementEfiCall.c)
 *     HalpEfiDecrementEfiCall @ 0x140485880 (HalpEfiDecrementEfiCall.c)
 */

__int64 HalEfiUpdateCapsule()
{
  __int64 v0; // r9
  __int64 v1; // r10
  __int64 v2; // r11
  __int64 v3; // r8

  if ( !HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[6] )
    return 3221225474LL;
  HalpEfiIncrementEfiCall(&HalpEfiCapsuleCalls);
  HalpEfiIncrementEfiCall(&HalpEfiCapsuleWrites);
  HalpEfiStartRuntimeCode(0x40u);
  ((void (__fastcall *)(__int64, __int64, __int64))HalEfiRuntimeServicesTable[6])(v2, v1, v0);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFBF);
  HalpEfiDecrementEfiCall(&HalpEfiCapsuleWrites);
  HalpEfiDecrementEfiCall(&HalpEfiCapsuleCalls);
  return HalpConvertEfiToNtStatus(v3);
}
