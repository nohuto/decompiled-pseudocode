/*
 * XREFs of CmSiAllocateMemory @ 0x140484F40
 * Callers:
 *     CmpVolumeContextCreate @ 0x1407C9020 (CmpVolumeContextCreate.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x1407D59E0 (CmpHiveCachePopulateHiveEntry.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407D5AF0 (CmpHiveCachePopulateHiveEntryThread.c)
 *     HvpViewMapCreateView @ 0x140884E10 (HvpViewMapCreateView.c)
 *     CmpInitHiveFromFile @ 0x14090E4F0 (CmpInitHiveFromFile.c)
 *     CmpGetCompleteFileName @ 0x14090FF8C (CmpGetCompleteFileName.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1409104C8 (CmpQueryFileSecurityDescriptor.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 CmSiAllocateMemory()
{
  return ExAllocatePool2(0x100uLL);
}
