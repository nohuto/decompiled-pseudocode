/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x14026F550
 * Callers:
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiFlushCacheForAttributeChange @ 0x14026F3B4 (MiFlushCacheForAttributeChange.c)
 *     MiReferenceIoPages @ 0x1402AD138 (MiReferenceIoPages.c)
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     MiChangePageAttributeBatch @ 0x1403B70F4 (MiChangePageAttributeBatch.c)
 *     MiValidateInPage @ 0x1403F3C40 (MiValidateInPage.c)
 *     MiRemovePhysicalMemoryBatchComplete @ 0x140662D44 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiDeleteStaleCacheMaps @ 0x140669E20 (MiDeleteStaleCacheMaps.c)
 *     MiIoPfnTreeExclusionCompatible @ 0x14066A53C (MiIoPfnTreeExclusionCompatible.c)
 *     MiMakeIoRangePermanent @ 0x14066A934 (MiMakeIoRangePermanent.c)
 *     MiCombiningInProgress @ 0x140679C0C (MiCombiningInProgress.c)
 *     MiRemovePhysicalMemory @ 0x1407D9EEC (MiRemovePhysicalMemory.c)
 *     MiValidateSectionCreate @ 0x140945124 (MiValidateSectionCreate.c)
 *     MiInitializeCacheFlushing @ 0x140C48FA8 (MiInitializeCacheFlushing.c)
 * Callees:
 *     KeFlushTb @ 0x14026F7E0 (KeFlushTb.c)
 *     HvlFlushTbAllPartitions @ 0x140270B80 (HvlFlushTbAllPartitions.c)
 */

__int64 MiFlushEntireTbDueToAttributeChange()
{
  ++dword_140E2D910;
  HvlFlushTbAllPartitions();
  return KeFlushTb(3LL);
}
