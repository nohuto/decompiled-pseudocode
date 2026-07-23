/*
 * XREFs of CmSiAllocateMemory @ 0x14048071C
 * Callers:
 *     CmpVolumeContextCreate @ 0x1407D8D60 (CmpVolumeContextCreate.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x1407E5E24 (CmpHiveCachePopulateHiveEntry.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407E5F40 (CmpHiveCachePopulateHiveEntryThread.c)
 *     CmpInitHiveFromFile @ 0x140930D5C (CmpInitHiveFromFile.c)
 *     CmpGetCompleteFileName @ 0x140932664 (CmpGetCompleteFileName.c)
 *     CmpQueryFileSecurityDescriptor @ 0x140932BA0 (CmpQueryFileSecurityDescriptor.c)
 *     HvpViewMapCreateView @ 0x14096821C (HvpViewMapCreateView.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmSiAllocateMemory(ULONG_PTR a1, ULONG a2)
{
  return ExAllocatePool2(0x100uLL, a1, a2);
}
