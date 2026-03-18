/*
 * XREFs of PipOobeCompleteAsyncCallback @ 0x14070E190
 * Callers:
 *     <none>
 * Callees:
 *     VhdDeferredAutoAttachVirtualDisks @ 0x140696550 (VhdDeferredAutoAttachVirtualDisks.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PipOobeCompleteAsyncCallback(PVOID P)
{
  VhdDeferredAutoAttachVirtualDisks();
  ExFreePoolWithTag(P, 0);
}
