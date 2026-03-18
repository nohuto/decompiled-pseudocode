/*
 * XREFs of UsbhValidateMsOs20CommonDescriptor @ 0x140042B10
 * Callers:
 *     UsbhGetNextMsOs20Descriptor @ 0x140042640 (UsbhGetNextMsOs20Descriptor.c)
 *     UsbhValidateMsOs20ConfigurationSubset @ 0x14005B350 (UsbhValidateMsOs20ConfigurationSubset.c)
 *     UsbhValidateMsOs20DescriptorSet @ 0x14005B4BC (UsbhValidateMsOs20DescriptorSet.c)
 *     UsbhValidateMsOs20FunctionSubset @ 0x14005B6D0 (UsbhValidateMsOs20FunctionSubset.c)
 * Callees:
 *     <none>
 */

bool __fastcall UsbhValidateMsOs20CommonDescriptor(unsigned __int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // rax
  bool result; // al

  result = (unsigned __int64)a2 <= a1
        && (unsigned __int64)(a2 + 2) <= a1
        && (v2 = *a2, (unsigned int)v2 >= 4)
        && (unsigned __int64)a2 + v2 <= a1;
  return result;
}
