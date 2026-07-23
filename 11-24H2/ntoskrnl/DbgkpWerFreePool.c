/*
 * XREFs of DbgkpWerFreePool @ 0x140706910
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x14057BF68 (DbgkCaptureLiveKernelDump.c)
 *     DbgkWerAddSecondaryData @ 0x140706340 (DbgkWerAddSecondaryData.c)
 *     DbgkpWerCleanupContext @ 0x140706638 (DbgkpWerCleanupContext.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140AA4C50 (DbgkWerCaptureLiveKernelDump2.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
