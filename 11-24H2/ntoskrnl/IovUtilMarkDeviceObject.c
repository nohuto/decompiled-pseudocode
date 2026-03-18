/*
 * XREFs of IovUtilMarkDeviceObject @ 0x1404AD250
 * Callers:
 *     IovUtilMarkStack @ 0x1404AD1D4 (IovUtilMarkStack.c)
 *     VfIoDeleteDevice @ 0x140B9222C (VfIoDeleteDevice.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140BA5BD0 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     IovpUtilMarkDeviceObject @ 0x140B92D6C (IovpUtilMarkDeviceObject.c)
 */

__int64 IovUtilMarkDeviceObject()
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return IovpUtilMarkDeviceObject();
  return result;
}
