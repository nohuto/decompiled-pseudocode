/*
 * XREFs of IoDiscardDeferredLiveDumpData @ 0x1405942F0
 * Callers:
 *     DbgkpWerCleanupContext @ 0x1406FCB98 (DbgkpWerCleanupContext.c)
 * Callees:
 *     IopLiveDumpReleaseResources @ 0x14059974C (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x14059A454 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14059A63C (IopLiveDumpTraceInterfaceStart.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoDiscardDeferredLiveDumpData(PVOID P)
{
  IopLiveDumpTraceInterfaceStart(2LL);
  IopLiveDumpTraceInterfaceEnd(P, 2LL, 0LL, 0LL);
  IopLiveDumpReleaseResources(P);
  ExFreePoolWithTag(P, 0x706D644Cu);
  return 0LL;
}
