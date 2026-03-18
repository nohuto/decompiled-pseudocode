/*
 * XREFs of CmSiAllocateMemory @ 0x140485138
 * Callers:
 *     CmpVolumeContextCreate @ 0x1407D8810 (CmpVolumeContextCreate.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x1407E5854 (CmpHiveCachePopulateHiveEntry.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407E5970 (CmpHiveCachePopulateHiveEntryThread.c)
 *     CmpInitHiveFromFile @ 0x14092EC1C (CmpInitHiveFromFile.c)
 *     CmpGetCompleteFileName @ 0x140930524 (CmpGetCompleteFileName.c)
 *     CmpQueryFileSecurityDescriptor @ 0x140930A60 (CmpQueryFileSecurityDescriptor.c)
 *     HvpViewMapCreateView @ 0x14097FA0C (HvpViewMapCreateView.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 CmSiAllocateMemory()
{
  return ExAllocatePool2(0x100uLL);
}
