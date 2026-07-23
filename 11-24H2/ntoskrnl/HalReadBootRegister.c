/*
 * XREFs of HalReadBootRegister @ 0x140B52ABC
 * Callers:
 *     HalpResetSBF @ 0x140B4D058 (HalpResetSBF.c)
 *     HalpSetupAcpiPhase0 @ 0x140C157FC (HalpSetupAcpiPhase0.c)
 * Callees:
 *     HalpGetCmosData @ 0x14055014C (HalpGetCmosData.c)
 */

__int64 __fastcall HalReadBootRegister(_BYTE *a1)
{
  if ( !HalpSimpleBootFlagTable )
    return 3221225486LL;
  if ( !a1 )
    return 3221225485LL;
  HalpGetCmosData((__int64)a1, *(unsigned __int8 *)(HalpSimpleBootFlagTable + 36), a1, 1);
  return 0LL;
}
