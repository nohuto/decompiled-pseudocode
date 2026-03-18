/*
 * XREFs of ACPIEcConnectGpeVector @ 0x14009C7D8
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x14005F83C (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcConnectInterrupt @ 0x14009C90C (ACPIEcConnectInterrupt.c)
 * Callees:
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 *     ACPIVectorConnect @ 0x140069660 (ACPIVectorConnect.c)
 */

__int64 ACPIEcConnectGpeVector()
{
  __int64 v0; // r10
  __int64 v2; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  AcpiGetDriverProxyEndpoint(&v2, (__int64)ACPIEcGpeServiceRoutine);
  return ACPIVectorConnect(0LL, *(_DWORD *)(v0 + 48), 1, 0, v2, v0, (char **)(v0 + 72));
}
