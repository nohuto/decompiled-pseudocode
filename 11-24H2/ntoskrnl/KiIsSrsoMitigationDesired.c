/*
 * XREFs of KiIsSrsoMitigationDesired @ 0x1405BE028
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405BE170 (KiOptimizeSpecCtrlSettingsWorker.c)
 * Callees:
 *     KiIsBranchConfusionMitigationDesired @ 0x1405BDE6C (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x1405BDEAC (KiIsBranchConfusionMitigationSupported.c)
 *     KiIsBranchConfusionPresent @ 0x1405BDED8 (KiIsBranchConfusionPresent.c)
 */

__int64 __fastcall KiIsSrsoMitigationDesired(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx

  if ( (KiFeatureSettings & 5) != 0 || *(_BYTE *)(a1 + 141) == 1 && (KiFeatureSettings & 0x40) == 0 && (*a2 & 0x10) == 0 )
    return 0LL;
  if ( (unsigned int)KiIsBranchConfusionPresent(a1)
    && KiIsBranchConfusionMitigationSupported(v4, a2)
    && (unsigned int)KiIsBranchConfusionMitigationDesired(a1, a2) )
  {
    return 1LL;
  }
  return ((unsigned int)KiFeatureSettings >> 26) & 1;
}
