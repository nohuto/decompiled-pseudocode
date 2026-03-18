/*
 * XREFs of ACPIEcDisconnectInterrupt @ 0x14009C9B0
 * Callers:
 *     ACPIEcStopRemoveDeviceCommon @ 0x14005FF00 (ACPIEcStopRemoveDeviceCommon.c)
 * Callees:
 *     ACPIEcDisconnectGpeVector @ 0x14009C934 (ACPIEcDisconnectGpeVector.c)
 *     ACPIEcDisconnectGpioInterrupt @ 0x14009C964 (ACPIEcDisconnectGpioInterrupt.c)
 */

__int64 __fastcall ACPIEcDisconnectInterrupt(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 2213) )
    return ACPIEcDisconnectGpioInterrupt(a1);
  else
    return ACPIEcDisconnectGpeVector(a1);
}
