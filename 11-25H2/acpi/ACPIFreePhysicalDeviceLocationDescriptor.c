/*
 * XREFs of ACPIFreePhysicalDeviceLocationDescriptor @ 0x1400AEE04
 * Callers:
 *     ACPIQueryPhysicalDeviceLocation @ 0x1400ADA38 (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1400AE930 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIFreePhysicalDeviceLocationDescriptors @ 0x1400AF514 (ACPIFreePhysicalDeviceLocationDescriptors.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIFreePhysicalDeviceLocationDescriptor(char *P)
{
  if ( *((_QWORD *)P + 16) )
    RtlFreeUnicodeString((PUNICODE_STRING)(P + 120));
  ExFreePoolWithTag(P, 0);
}
