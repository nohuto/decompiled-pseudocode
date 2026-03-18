/*
 * XREFs of ACPIEcInstallOpRegionHandler @ 0x14009CB10
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x14005FD10 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     RegisterOperationRegionHandler @ 0x1400BFA6C (RegisterOperationRegionHandler.c)
 */

__int64 __fastcall ACPIEcInstallOpRegionHandler(__int64 a1)
{
  return RegisterOperationRegionHandler(*(_QWORD *)(a1 + 56), 2, 3, (unsigned int)ACPIEcOpRegionHandler, a1, a1 + 80);
}
