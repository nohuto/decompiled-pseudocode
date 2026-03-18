/*
 * XREFs of DbgkpWerFreePool @ 0x1406FCE70
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x14057B7B8 (DbgkCaptureLiveKernelDump.c)
 *     DbgkWerAddSecondaryData @ 0x1406FC8A0 (DbgkWerAddSecondaryData.c)
 *     DbgkpWerCleanupContext @ 0x1406FCB98 (DbgkpWerCleanupContext.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140AA4C10 (DbgkWerCaptureLiveKernelDump2.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
