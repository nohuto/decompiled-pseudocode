/*
 * XREFs of ACPIQueryDeviceBiosNameEx @ 0x1400396E8
 * Callers:
 *     ACPIIoctlQueryDeviceBiosNameEx @ 0x140062684 (ACPIIoctlQueryDeviceBiosNameEx.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1400979F0 (ACPIIoctlQueryDeviceBiosName.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1400AC190 (ACPIBusIrpDeviceEnumerated.c)
 *     PnpBiosGetDeviceResourceList @ 0x1400AD6F8 (PnpBiosGetDeviceResourceList.c)
 *     AcpiIsDeviceSecure @ 0x1400AECFC (AcpiIsDeviceSecure.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1400BDE58 (ACPIInternalNotifyAvailableDeviceObject.c)
 *     ACPIQueryDeviceBiosName @ 0x1400BEA94 (ACPIQueryDeviceBiosName.c)
 *     ACPIIsDebuggingDevice @ 0x1400C0B9C (ACPIIsDebuggingDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIAmliBuildObjectPathname @ 0x140039780 (ACPIAmliBuildObjectPathname.c)
 *     ACPIInitUnicodeString @ 0x1400BC644 (ACPIInitUnicodeString.c)
 */

__int64 __fastcall ACPIQueryDeviceBiosNameEx(ULONG_PTR a1, __int64 a2, struct _UNICODE_STRING *a3)
{
  __int64 v4; // rcx
  int v5; // ebx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  P = 0LL;
  v4 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 760);
  if ( v4 )
  {
    v5 = ACPIAmliBuildObjectPathname(v4, &P);
    if ( v5 >= 0 )
    {
      v5 = ACPIInitUnicodeString(a3);
      if ( v5 >= 0 )
        v5 = 0;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return (unsigned int)v5;
}
