/*
 * XREFs of PpmPerfUpdateMultimediaPowerModel @ 0x1404AEA5C
 * Callers:
 *     PpmEnableProfile @ 0x14075406C (PpmEnableProfile.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140A69270 (PpmPerfUpdateDomainPolicy.c)
 *     PpmDisableProfile @ 0x140AC4518 (PpmDisableProfile.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
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
