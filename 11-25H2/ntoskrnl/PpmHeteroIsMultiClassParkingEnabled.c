/*
 * XREFs of PpmHeteroIsMultiClassParkingEnabled @ 0x140409E50
 * Callers:
 *     PpmCheckComputeHeteroResponse @ 0x140408E70 (PpmCheckComputeHeteroResponse.c)
 *     PpmParkCalculateUnparkCount @ 0x140409510 (PpmParkCalculateUnparkCount.c)
 *     PpmPerfSnapUtility @ 0x140409A60 (PpmPerfSnapUtility.c)
 *     PpmParkRegisterParking @ 0x1405D55E0 (PpmParkRegisterParking.c)
 * Callees:
 *     <none>
 */

bool PpmHeteroIsMultiClassParkingEnabled()
{
  return PpmHeteroMultiClassParkingEnabled != 0;
}
