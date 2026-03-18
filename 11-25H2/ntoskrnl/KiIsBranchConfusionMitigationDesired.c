/*
 * XREFs of KiIsBranchConfusionMitigationDesired @ 0x1405BA020
 * Callers:
 *     KiIsSrsoMitigationDesired @ 0x1405BA1DC (KiIsSrsoMitigationDesired.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405BA330 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiDetectKvaLeakage @ 0x1405BF650 (KiDetectKvaLeakage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsBranchConfusionMitigationDesired(__int64 a1, _QWORD *a2)
{
  if ( (KiFeatureSettings & 5) != 0 || *(_BYTE *)(a1 + 141) == 1 && (KiFeatureSettings & 0x40) == 0 && (*a2 & 0x10) == 0 )
    return 0LL;
  else
    return HIBYTE(KiFeatureSettings) & 1;
}
