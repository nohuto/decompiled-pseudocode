/*
 * XREFs of KiIsTsaMitigationDesired @ 0x1405BA264
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405BA330 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiDetectKvaLeakage @ 0x1405BF650 (KiDetectKvaLeakage.c)
 * Callees:
 *     <none>
 */

__int64 KiIsTsaMitigationDesired()
{
  if ( (KiFeatureSettings & 5) != 0 )
    return 0LL;
  else
    return ((unsigned int)KiFeatureSettings >> 30) & 1;
}
