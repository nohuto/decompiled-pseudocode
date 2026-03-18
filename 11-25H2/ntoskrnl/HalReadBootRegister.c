/*
 * XREFs of HalReadBootRegister @ 0x140B40A6C
 * Callers:
 *     HalpResetSBF @ 0x140B3B158 (HalpResetSBF.c)
 *     HalpSetupAcpiPhase0 @ 0x140C0276C (HalpSetupAcpiPhase0.c)
 * Callees:
 *     HalpGetCmosData @ 0x14054FF0C (HalpGetCmosData.c)
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
