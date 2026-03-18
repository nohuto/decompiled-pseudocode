/*
 * XREFs of NormalizationListEntry_Alloc @ 0x1405E7810
 * Callers:
 *     RtlpGetNormalization @ 0x14077E2FC (RtlpGetNormalization.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 NormalizationListEntry_Alloc()
{
  return ExAllocatePool2(0x100uLL);
}
