/*
 * XREFs of NormalizationListEntry_Alloc @ 0x1405F3B58
 * Callers:
 *     RtlpGetNormalization @ 0x14078D5B0 (RtlpGetNormalization.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 NormalizationListEntry_Alloc()
{
  return ExAllocatePool2(0x100uLL);
}
