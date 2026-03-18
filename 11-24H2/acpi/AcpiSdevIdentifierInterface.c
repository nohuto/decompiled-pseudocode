/*
 * XREFs of AcpiSdevIdentifierInterface @ 0x1400A7328
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x140043A60 (ACPIBusIrpQueryInterface.c)
 *     ACPIFilterIrpQueryInterface @ 0x1400B0590 (ACPIFilterIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 *     AcpiCheckSecureDevice @ 0x1400AE8CC (AcpiCheckSecureDevice.c)
 */

__int64 __fastcall AcpiSdevIdentifierInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // r8d
  __int64 DeviceExtension; // rax
  __int64 v6; // rdx

  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_WORD *)(a2 + 16) >= 0x28u )
  {
    if ( *(_WORD *)(a2 + 18)
      && (DeviceExtension = ACPIInternalGetDeviceExtension(a1), (unsigned __int8)AcpiCheckSecureDevice(DeviceExtension)) )
    {
      *(_WORD *)v2 = 40;
      *(_QWORD *)(v2 + 8) = *(_QWORD *)(a1 + 64);
      AcpiGetDriverProxyEndpoint((_QWORD *)(v2 + 16), (__int64)AcpiInterfaceDereference);
      AcpiGetDriverProxyEndpoint((_QWORD *)(v2 + 24), v6);
      AcpiGetDriverProxyEndpoint((_QWORD *)(v2 + 32), (__int64)AcpiSdevIdentifierInterface_GetIdentifier);
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v4;
}
