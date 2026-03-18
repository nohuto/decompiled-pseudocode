/*
 * XREFs of PpmHeteroIsMultiClassParkingEnabled @ 0x140417BE0
 * Callers:
 *     PpmPerfSnapUtility @ 0x140417750 (PpmPerfSnapUtility.c)
 *     PpmParkCalculateUnparkCount @ 0x140423BD0 (PpmParkCalculateUnparkCount.c)
 *     PpmCheckComputeHeteroResponse @ 0x1404EC390 (PpmCheckComputeHeteroResponse.c)
 *     PpmParkRegisterParking @ 0x1405D9FB4 (PpmParkRegisterParking.c)
 *     PpmCheckComputeHeteroResponseEx @ 0x1405DF774 (PpmCheckComputeHeteroResponseEx.c)
 *     PpmParkInitParkNode @ 0x1405E3894 (PpmParkInitParkNode.c)
 * Callees:
 *     <none>
 */

bool PpmHeteroIsMultiClassParkingEnabled()
{
  return PpmHeteroMultiClassParkingEnabled != 0;
}
