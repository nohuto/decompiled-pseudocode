/*
 * XREFs of Feature_Servicing_KiSaveProcessorState_ExtendedState_Fix__private_IsEnabledNoReportingNoInline @ 0x1405B5D3C
 * Callers:
 *     KiEnableXSave @ 0x140B4D11C (KiEnableXSave.c)
 *     KiInitializePrcbContext @ 0x140B58980 (KiInitializePrcbContext.c)
 * Callees:
 *     Feature_Servicing_KiSaveProcessorState_ExtendedState_Fix__private_IsEnabledFallback @ 0x1405B5D20 (Feature_Servicing_KiSaveProcessorState_ExtendedState_Fix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_KiSaveProcessorState_ExtendedState_Fix__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_KiSaveProcessorState_ExtendedState_Fix__private_featureState & 2) != 0 )
    return Feature_Servicing_KiSaveProcessorState_ExtendedState_Fix__private_featureState & 1;
  else
    return Feature_Servicing_KiSaveProcessorState_ExtendedState_Fix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_KiSaveProcessorState_ExtendedState_Fix__private_featureState,
             0);
}
