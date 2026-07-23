/*
 * XREFs of CmpFree @ 0x140882B20
 * Callers:
 *     CmpDeleteHive @ 0x140840A1C (CmpDeleteHive.c)
 *     CmpAddSubKeyToList @ 0x140882878 (CmpAddSubKeyToList.c)
 *     HvHiveCleanup @ 0x140882B48 (HvHiveCleanup.c)
 *     HvpFreeHiveFreeDisplay @ 0x140883428 (HvpFreeHiveFreeDisplay.c)
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x140882D70 (CmpReleaseGlobalQuota.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFree(PVOID P, unsigned int a2)
{
  CmpReleaseGlobalQuota(a2);
  ExFreePoolWithTag(P, 0);
}
