/*
 * XREFs of VfIoPendingUnload @ 0x1406109C0
 * Callers:
 *     VfIoPendingEntry @ 0x1406108F0 (VfIoPendingEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     PpvUtilInit @ 0x140B84C48 (PpvUtilInit.c)
 */

void VfIoPendingUnload()
{
  PpvUtilInit(0LL);
  if ( VfForcedPendingLog )
  {
    ExFreePoolWithTag(VfForcedPendingLog, 0);
    VfForcedPendingLog = 0LL;
  }
}
