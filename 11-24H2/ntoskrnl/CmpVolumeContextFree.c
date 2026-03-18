/*
 * XREFs of CmpVolumeContextFree @ 0x140A9BCC0
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x140966DB8 (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14097C7A0 (CmpVolumeContextDecrementRefCount.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     CmpVolumeContextCleanup @ 0x140A9BCE4 (CmpVolumeContextCleanup.c)
 */

void __fastcall CmpVolumeContextFree(PPRIVILEGE_SET Privileges)
{
  CmpVolumeContextCleanup(Privileges);
  CmSiFreeMemory(Privileges);
}
