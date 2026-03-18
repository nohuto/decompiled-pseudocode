/*
 * XREFs of HalpIsInterruptTypeSecondary @ 0x140445FC0
 * Callers:
 *     HalpUnmaskInterrupt @ 0x140445980 (HalpUnmaskInterrupt.c)
 *     HalpCheckInterruptType @ 0x1404F824C (HalpCheckInterruptType.c)
 *     HalacpiIrqTranslateResourceRequirementsIsa @ 0x1406F7150 (HalacpiIrqTranslateResourceRequirementsIsa.c)
 *     HalacpiIrqTranslateResourcesIsa @ 0x1406F74B0 (HalacpiIrqTranslateResourcesIsa.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x140A9BADC (HalpQueryPrimaryInterruptInformation.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIsInterruptTypeSecondary(int a1, unsigned int a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a1 && a2 >= SecondaryGsivRangeStart )
    return a2 < SecondaryGsivRangeSize + SecondaryGsivRangeStart;
  return v2;
}
