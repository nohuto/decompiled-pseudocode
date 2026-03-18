/*
 * XREFs of CmpVolumeContextFree @ 0x1409F4DE0
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x140822324 (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextDecrementRefCount @ 0x1409F4CEC (CmpVolumeContextDecrementRefCount.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpVolumeContextCleanup @ 0x1409F4E04 (CmpVolumeContextCleanup.c)
 */

void __fastcall CmpVolumeContextFree(PPRIVILEGE_SET Privileges)
{
  CmpVolumeContextCleanup(Privileges);
  CmSiFreeMemory(Privileges);
}
