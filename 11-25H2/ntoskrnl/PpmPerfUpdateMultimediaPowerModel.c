/*
 * XREFs of PpmPerfUpdateMultimediaPowerModel @ 0x1404AEA5C
 * Callers:
 *     PpmEnableProfile @ 0x14075406C (PpmEnableProfile.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140A69270 (PpmPerfUpdateDomainPolicy.c)
 *     PpmDisableProfile @ 0x140AC4518 (PpmDisableProfile.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 */

__int64 PpmPerfUpdateMultimediaPowerModel()
{
  __int64 result; // rax

  if ( PpmPerfMultimediaQosSupported )
    result = 2LL;
  else
    result = PpmLowPowerProfile != 0;
  if ( (_DWORD)result != PpmPerfMultimediaPowerModel )
  {
    PpmPerfMultimediaPowerModel = result;
    return ZwUpdateWnfStateData(&WNF_PO_MULTIMEDIA_POWER_MODEL, &PpmPerfMultimediaPowerModel, 4LL, 0LL, 0LL, 0, 0);
  }
  return result;
}
