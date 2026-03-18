/*
 * XREFs of PipOobeCompleteAsyncCallback @ 0x14071A290
 * Callers:
 *     <none>
 * Callees:
 *     VhdDeferredAutoAttachVirtualDisks @ 0x1406A1730 (VhdDeferredAutoAttachVirtualDisks.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PipOobeCompleteAsyncCallback(PVOID P)
{
  VhdDeferredAutoAttachVirtualDisks();
  ExFreePoolWithTag(P, 0);
}
