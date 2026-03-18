/*
 * XREFs of OSOpenUnicodeHandle @ 0x1400B71E8
 * Callers:
 *     OSOpenLargestSubkey @ 0x1400A3DAC (OSOpenLargestSubkey.c)
 *     ACPIThermalGetOverrideHandle @ 0x1400B6754 (ACPIThermalGetOverrideHandle.c)
 *     OSOpenHandle @ 0x1400B7118 (OSOpenHandle.c)
 *     OSReadAcpiConfigurationData @ 0x1400C4D0C (OSReadAcpiConfigurationData.c)
 *     IrqPolicyConfigure @ 0x1400C8C5C (IrqPolicyConfigure.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1400C8D54 (IrqPolicyGetDistributionDisposition.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall OSOpenUnicodeHandle(struct _UNICODE_STRING *a1, void *a2, void **a3)
{
  NTSTATUS v3; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v3 = ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
  if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xBu,
      0xDu,
      (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
      v3);
  return (unsigned int)v3;
}
