/*
 * XREFs of KiIsTsaMitigationSupported @ 0x1405BA280
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405BA330 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiDetectKvaLeakage @ 0x1405BF650 (KiDetectKvaLeakage.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404A3870 (HviIsAnyHypervisorPresent.c)
 *     SpcIsHyperVCr3RspErrataPresent @ 0x1406956C4 (SpcIsHyperVCr3RspErrataPresent.c)
 */

_BOOL8 __fastcall KiIsTsaMitigationSupported(__int64 a1)
{
  int v2; // ebx
  _QWORD *i; // rcx

  v2 = 0;
  if ( (unsigned int)SpcIsHyperVCr3RspErrataPresent() )
    return 0LL;
  if ( _bittest64((const signed __int64 *)&KeFeatureBits2, 0x2Cu) )
    return 1LL;
  if ( HviIsAnyHypervisorPresent() )
    return 0LL;
  for ( i = &KiVerwClearErrataVersions; *(_DWORD *)i != *(_DWORD *)(a1 + 1736); i += 2 )
  {
    if ( (unsigned int)++v2 >= 0xF )
      return 0LL;
  }
  return *(_QWORD *)(a1 + 36776) >= i[1];
}
