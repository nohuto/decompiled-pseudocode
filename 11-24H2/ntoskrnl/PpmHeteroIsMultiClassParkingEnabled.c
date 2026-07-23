/*
 * XREFs of PpmHeteroIsMultiClassParkingEnabled @ 0x140407990
 * Callers:
 *     PpmPerfSnapUtility @ 0x140407500 (PpmPerfSnapUtility.c)
 *     PpmParkCalculateUnparkCount @ 0x140417A80 (PpmParkCalculateUnparkCount.c)
 *     PpmCheckComputeHeteroResponse @ 0x1404E3AD0 (PpmCheckComputeHeteroResponse.c)
 *     PpmParkRegisterParking @ 0x1405D72D0 (PpmParkRegisterParking.c)
 *     PpmCheckComputeHeteroResponseEx @ 0x1405DC8E0 (PpmCheckComputeHeteroResponseEx.c)
 *     PpmParkInitParkNode @ 0x1405E0E1C (PpmParkInitParkNode.c)
 * Callees:
 *     <none>
 */

bool PpmHeteroIsMultiClassParkingEnabled()
{
  return PpmHeteroMultiClassParkingEnabled != 0;
}
