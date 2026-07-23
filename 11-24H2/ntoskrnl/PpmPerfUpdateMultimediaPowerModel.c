/*
 * XREFs of PpmPerfUpdateMultimediaPowerModel @ 0x1404AA2EC
 * Callers:
 *     PpmEnableProfile @ 0x1407634F0 (PpmEnableProfile.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AC40C8 (PpmPerfUpdateDomainPolicy.c)
 *     PpmDisableProfile @ 0x140AC8F20 (PpmDisableProfile.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS PpmPerfUpdateMultimediaPowerModel()
{
  NTSTATUS result; // eax

  if ( PpmPerfMultimediaQosSupported )
    result = 2;
  else
    result = PpmLowPowerProfile != 0;
  if ( result != PpmPerfMultimediaPowerModel )
  {
    PpmPerfMultimediaPowerModel = result;
    return ZwUpdateWnfStateData(&WNF_PO_MULTIMEDIA_POWER_MODEL, &PpmPerfMultimediaPowerModel, 4u, 0LL, 0LL, 0, 0);
  }
  return result;
}
