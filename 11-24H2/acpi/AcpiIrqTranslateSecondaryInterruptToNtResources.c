/*
 * XREFs of AcpiIrqTranslateSecondaryInterruptToNtResources @ 0x1400566BC
 * Callers:
 *     IrqArbAddAllocation @ 0x1400A9380 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1400AA210 (IrqArbpFindSuitableRangeIsa.c)
 * Callees:
 *     AcpiExternalQueryTranslatedDescriptorForGsiv @ 0x140098A7C (AcpiExternalQueryTranslatedDescriptorForGsiv.c)
 */

__int64 AcpiIrqTranslateSecondaryInterruptToNtResources()
{
  return AcpiExternalQueryTranslatedDescriptorForGsiv();
}
