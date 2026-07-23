/*
 * XREFs of CmpVolumeContextFree @ 0x140A97230
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x14094F848 (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextDecrementRefCount @ 0x140964FB0 (CmpVolumeContextDecrementRefCount.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpVolumeContextCleanup @ 0x140A97254 (CmpVolumeContextCleanup.c)
 */

void __fastcall CmpVolumeContextFree(PPRIVILEGE_SET Privileges)
{
  CmpVolumeContextCleanup(Privileges);
  CmSiFreeMemory(Privileges);
}
