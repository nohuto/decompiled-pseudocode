/*
 * XREFs of AcpiCheckSecureDevice @ 0x1400AE8CC
 * Callers:
 *     AcpiSdevIdentifierInterface @ 0x1400A7328 (AcpiSdevIdentifierInterface.c)
 *     PnpBiosGetDeviceResourceList @ 0x1400AD6F8 (PnpBiosGetDeviceResourceList.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1400ADF10 (ACPIBusAndFilterIrpQueryCapabilities.c)
 * Callees:
 *     AcpiIsDeviceSecure @ 0x1400AECFC (AcpiIsDeviceSecure.c)
 */

bool __fastcall AcpiCheckSecureDevice(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1120);
  if ( (v1 & 0x80000000) == 0 )
  {
    if ( (unsigned __int8)AcpiIsDeviceSecure() )
      *(_QWORD *)(a1 + 1120) |= 0x2000000000uLL;
    *(_QWORD *)(a1 + 1120) |= 0x80000000uLL;
    v1 = *(_QWORD *)(a1 + 1120);
  }
  return (v1 & 0x2000000000LL) != 0;
}
