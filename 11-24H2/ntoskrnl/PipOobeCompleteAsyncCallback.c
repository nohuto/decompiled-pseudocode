/*
 * XREFs of PipOobeCompleteAsyncCallback @ 0x140717E20
 * Callers:
 *     <none>
 * Callees:
 *     VhdDeferredAutoAttachVirtualDisks @ 0x1406A2788 (VhdDeferredAutoAttachVirtualDisks.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PipOobeCompleteAsyncCallback(PVOID P)
{
  VhdDeferredAutoAttachVirtualDisks();
  ExFreePoolWithTag(P, 0);
}
