/*
 * XREFs of HalpIsInterruptTypeSecondary @ 0x140372B20
 * Callers:
 *     HalpUnmaskInterrupt @ 0x1403724F0 (HalpUnmaskInterrupt.c)
 *     HalpCheckInterruptType @ 0x1404F800C (HalpCheckInterruptType.c)
 *     HalacpiIrqTranslateResourceRequirementsIsa @ 0x140700B80 (HalacpiIrqTranslateResourceRequirementsIsa.c)
 *     HalacpiIrqTranslateResourcesIsa @ 0x140700EE0 (HalacpiIrqTranslateResourcesIsa.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x140A9C6FC (HalpQueryPrimaryInterruptInformation.c)
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
