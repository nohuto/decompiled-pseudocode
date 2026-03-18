/*
 * XREFs of CmpFree @ 0x14087E070
 * Callers:
 *     CmpDeleteHive @ 0x1408488CC (CmpDeleteHive.c)
 *     CmpAddSubKeyToList @ 0x14087DDCC (CmpAddSubKeyToList.c)
 *     HvHiveCleanup @ 0x14087E098 (HvHiveCleanup.c)
 *     HvpFreeHiveFreeDisplay @ 0x140A2E12C (HvpFreeHiveFreeDisplay.c)
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x14087E2C0 (CmpReleaseGlobalQuota.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFree(PVOID P, unsigned int a2)
{
  CmpReleaseGlobalQuota(a2);
  ExFreePoolWithTag(P, 0);
}
