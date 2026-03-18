/*
 * XREFs of KiIsBranchConfusionMitigationSupported @ 0x1405BDEAC
 * Callers:
 *     KiIsSrsoMitigationDesired @ 0x1405BE028 (KiIsSrsoMitigationDesired.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405BE170 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiDetectKvaLeakage @ 0x1405C3730 (KiDetectKvaLeakage.c)
 * Callees:
 *     SpcIsHyperVCr3RspErrataPresent @ 0x1406A0A64 (SpcIsHyperVCr3RspErrataPresent.c)
 */

_BOOL8 __fastcall KiIsBranchConfusionMitigationSupported(__int64 a1, _QWORD *a2)
{
  return (*a2 & 4) != 0 && (unsigned int)SpcIsHyperVCr3RspErrataPresent() == 0;
}
