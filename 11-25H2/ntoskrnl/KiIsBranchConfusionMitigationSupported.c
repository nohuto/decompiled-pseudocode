/*
 * XREFs of KiIsBranchConfusionMitigationSupported @ 0x1405BA060
 * Callers:
 *     KiIsSrsoMitigationDesired @ 0x1405BA1DC (KiIsSrsoMitigationDesired.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405BA330 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiDetectKvaLeakage @ 0x1405BF650 (KiDetectKvaLeakage.c)
 * Callees:
 *     SpcIsHyperVCr3RspErrataPresent @ 0x1406956C4 (SpcIsHyperVCr3RspErrataPresent.c)
 */

_BOOL8 __fastcall KiIsBranchConfusionMitigationSupported(__int64 a1, _QWORD *a2)
{
  return (*a2 & 4) != 0 && (unsigned int)SpcIsHyperVCr3RspErrataPresent() == 0;
}
