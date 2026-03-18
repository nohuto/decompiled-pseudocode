/*
 * XREFs of IopIsActivityTracingEnabled @ 0x140375090
 * Callers:
 *     IopAllocateReserveIrp @ 0x140374518 (IopAllocateReserveIrp.c)
 *     IoMakeAssociatedIrpPriv @ 0x140374CE8 (IoMakeAssociatedIrpPriv.c)
 *     IopAllocateIrpWithExtension @ 0x14037592C (IopAllocateIrpWithExtension.c)
 *     IopAllocateBackpocketIrp @ 0x140595CD8 (IopAllocateBackpocketIrp.c)
 *     IovAllocateIrp @ 0x140BA9550 (IovAllocateIrp.c)
 * Callees:
 *     <none>
 */

bool IopIsActivityTracingEnabled()
{
  return (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0;
}
