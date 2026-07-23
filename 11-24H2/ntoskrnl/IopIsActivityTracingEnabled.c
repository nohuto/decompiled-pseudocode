/*
 * XREFs of IopIsActivityTracingEnabled @ 0x14025D950
 * Callers:
 *     IopAllocateReserveIrp @ 0x14025CDD8 (IopAllocateReserveIrp.c)
 *     IoMakeAssociatedIrpPriv @ 0x14025D5A8 (IoMakeAssociatedIrpPriv.c)
 *     IopAllocateIrpWithExtension @ 0x14025E1EC (IopAllocateIrpWithExtension.c)
 *     IopAllocateBackpocketIrp @ 0x140592D08 (IopAllocateBackpocketIrp.c)
 *     IovAllocateIrp @ 0x140BAB550 (IovAllocateIrp.c)
 * Callees:
 *     <none>
 */

bool IopIsActivityTracingEnabled()
{
  return (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0;
}
