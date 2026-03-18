/*
 * XREFs of PpmPerfUpdateMultimediaPowerModel @ 0x1404AF8FC
 * Callers:
 *     PpmEnableProfile @ 0x140763B2C (PpmEnableProfile.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AC66D0 (PpmPerfUpdateDomainPolicy.c)
 *     PpmDisableProfile @ 0x140ACB310 (PpmDisableProfile.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
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
    return ZwUpdateWnfStateData(&WNF_PO_MULTIMEDIA_POWER_MODEL, &PpmPerfMultimediaPowerModel, 4LL);
  }
  return result;
}
