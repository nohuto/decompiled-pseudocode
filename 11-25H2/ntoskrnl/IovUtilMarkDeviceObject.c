/*
 * XREFs of IovUtilMarkDeviceObject @ 0x1404ABE50
 * Callers:
 *     IovUtilMarkStack @ 0x1404ABDD4 (IovUtilMarkStack.c)
 *     VfIoDeleteDevice @ 0x140B8224C (VfIoDeleteDevice.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140B95BF0 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     IovpUtilMarkDeviceObject @ 0x140B82D8C (IovpUtilMarkDeviceObject.c)
 */

__int64 IovUtilMarkDeviceObject()
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return IovpUtilMarkDeviceObject();
  return result;
}
