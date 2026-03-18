/*
 * XREFs of VfIoPendingUnload @ 0x140612400
 * Callers:
 *     VfIoPendingEntry @ 0x140612330 (VfIoPendingEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     PpvUtilInit @ 0x140B82C48 (PpvUtilInit.c)
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
