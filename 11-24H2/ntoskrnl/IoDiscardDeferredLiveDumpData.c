/*
 * XREFs of IoDiscardDeferredLiveDumpData @ 0x140597A00
 * Callers:
 *     DbgkpWerCleanupContext @ 0x140708A78 (DbgkpWerCleanupContext.c)
 * Callees:
 *     IopLiveDumpReleaseResources @ 0x14059CE5C (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x14059DB64 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14059DD4C (IopLiveDumpTraceInterfaceStart.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoDiscardDeferredLiveDumpData(PVOID P)
{
  IopLiveDumpTraceInterfaceStart(2LL);
  IopLiveDumpTraceInterfaceEnd(P, 2LL, 0LL, 0LL);
  IopLiveDumpReleaseResources(P);
  ExFreePoolWithTag(P, 0x706D644Cu);
  return 0LL;
}
