/*
 * XREFs of IovUtilMarkDeviceObject @ 0x1404A7930
 * Callers:
 *     IovUtilMarkStack @ 0x1404A78B4 (IovUtilMarkStack.c)
 *     VfIoDeleteDevice @ 0x140B9422C (VfIoDeleteDevice.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140BA7BD0 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     IovpUtilMarkDeviceObject @ 0x140B94D6C (IovpUtilMarkDeviceObject.c)
 */

__int64 IovUtilMarkDeviceObject()
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return IovpUtilMarkDeviceObject();
  return result;
}
