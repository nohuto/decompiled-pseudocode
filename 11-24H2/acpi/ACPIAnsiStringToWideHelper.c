/*
 * XREFs of ACPIAnsiStringToWideHelper @ 0x14003F928
 * Callers:
 *     ACPIGetConvertToInstanceIDWide @ 0x14003EC14 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x14003EE60 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x14003F258 (ACPIGetConvertToStringWideWithPrepend.c)
 *     ACPIGetConvertToPnpIDWide @ 0x14003F6EC (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x14004C2E8 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetProcessorIDWide @ 0x14004D5C8 (ACPIGetProcessorIDWide.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x14004DEF0 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetConvertToStringWide @ 0x14004F820 (ACPIGetConvertToStringWide.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x140061370 (ACPIDeviceIdMutiStringMatchCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIAnsiStringToWideHelper(_WORD *a1, unsigned __int64 a2)
{
  unsigned __int64 i; // rdx
  __int64 result; // rax

  if ( a1 && a2 > 2 )
  {
    for ( i = a2 >> 1; --i; a1[i] = *((char *)a1 + i) )
      ;
    result = (unsigned int)*(char *)a1;
    *a1 = *(char *)a1;
  }
  return result;
}
