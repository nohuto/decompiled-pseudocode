/*
 * XREFs of HalpIsInterruptTypeSecondary @ 0x1403BA150
 * Callers:
 *     HalpUnmaskInterrupt @ 0x1403B9B20 (HalpUnmaskInterrupt.c)
 *     HalpCheckInterruptType @ 0x1404FA72C (HalpCheckInterruptType.c)
 *     HalacpiIrqTranslateResourceRequirementsIsa @ 0x140702F40 (HalacpiIrqTranslateResourceRequirementsIsa.c)
 *     HalacpiIrqTranslateResourcesIsa @ 0x1407032A0 (HalacpiIrqTranslateResourcesIsa.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x140AA136C (HalpQueryPrimaryInterruptInformation.c)
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
