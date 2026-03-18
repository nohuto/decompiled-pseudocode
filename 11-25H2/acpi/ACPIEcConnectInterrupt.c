/*
 * XREFs of ACPIEcConnectInterrupt @ 0x14009C90C
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x14005FD10 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     ACPIEcConnectGpeVector @ 0x14009C7D8 (ACPIEcConnectGpeVector.c)
 *     ACPIEcConnectGpioInterrupt @ 0x14009C82C (ACPIEcConnectGpioInterrupt.c)
 */

NTSTATUS __fastcall ACPIEcConnectInterrupt(char *a1)
{
  if ( a1[2213] )
    return ACPIEcConnectGpioInterrupt(a1);
  else
    return ACPIEcConnectGpeVector();
}
