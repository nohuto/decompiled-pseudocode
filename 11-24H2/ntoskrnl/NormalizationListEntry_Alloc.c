/*
 * XREFs of NormalizationListEntry_Alloc @ 0x1405F1198
 * Callers:
 *     RtlpGetNormalization @ 0x14078D4E0 (RtlpGetNormalization.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 NormalizationListEntry_Alloc()
{
  return ExAllocatePool2(0x100uLL, 0x90uLL, 0x456C6F4Eu);
}
