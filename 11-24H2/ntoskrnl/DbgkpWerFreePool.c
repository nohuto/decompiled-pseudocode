/*
 * XREFs of DbgkpWerFreePool @ 0x140708D50
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x14057EAD8 (DbgkCaptureLiveKernelDump.c)
 *     DbgkWerAddSecondaryData @ 0x140708780 (DbgkWerAddSecondaryData.c)
 *     DbgkpWerCleanupContext @ 0x140708A78 (DbgkpWerCleanupContext.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140AA9BA0 (DbgkWerCaptureLiveKernelDump2.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
