/*
 * XREFs of CmpFree @ 0x14087EC70
 * Callers:
 *     CmpDeleteHive @ 0x14084475C (CmpDeleteHive.c)
 *     CmpAddSubKeyToList @ 0x14087E9C8 (CmpAddSubKeyToList.c)
 *     HvHiveCleanup @ 0x14087EC98 (HvHiveCleanup.c)
 *     HvpFreeHiveFreeDisplay @ 0x14087F578 (HvpFreeHiveFreeDisplay.c)
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x14087EEC0 (CmpReleaseGlobalQuota.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFree(PVOID P, unsigned int a2)
{
  CmpReleaseGlobalQuota(a2);
  ExFreePoolWithTag(P, 0);
}
