/*
 * XREFs of IoDiscardDeferredLiveDumpData @ 0x14059497C
 * Callers:
 *     DbgkpWerCleanupContext @ 0x140706638 (DbgkpWerCleanupContext.c)
 * Callees:
 *     IopLiveDumpReleaseResources @ 0x140599DDC (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x14059AAE4 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14059ACCC (IopLiveDumpTraceInterfaceStart.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoDiscardDeferredLiveDumpData(PVOID P)
{
  IopLiveDumpTraceInterfaceStart(2LL);
  IopLiveDumpTraceInterfaceEnd(P, 2LL, 0LL, 0LL);
  IopLiveDumpReleaseResources(P);
  ExFreePoolWithTag(P, 0x706D644Cu);
  return 0LL;
}
