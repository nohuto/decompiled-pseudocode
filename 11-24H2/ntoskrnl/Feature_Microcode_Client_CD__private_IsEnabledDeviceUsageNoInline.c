/*
 * XREFs of Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline @ 0x140663E98
 * Callers:
 *     PrExtApplyPatch @ 0x1404D1CF4 (PrExtApplyPatch.c)
 *     PrExtLogToRegistry @ 0x1404D91A8 (PrExtLogToRegistry.c)
 *     PrExtExportRecordData @ 0x140664014 (PrExtExportRecordData.c)
 *     PrExtGetRecord @ 0x140664168 (PrExtGetRecord.c)
 *     GetMicrocodePatchData @ 0x1406642C8 (GetMicrocodePatchData.c)
 *     MicrocodeGetRecord @ 0x1406644E0 (MicrocodeGetRecord.c)
 *     MicrocodeUpdate @ 0x140664918 (MicrocodeUpdate.c)
 *     AMDMicrocodeGetRecordData @ 0x140665138 (AMDMicrocodeGetRecordData.c)
 *     AMDMicrocodeMetaDataCheck @ 0x1406651D8 (AMDMicrocodeMetaDataCheck.c)
 *     AMDMicrocodeRecordSizeCheck @ 0x1406652D0 (AMDMicrocodeRecordSizeCheck.c)
 * Callees:
 *     Feature_Microcode_Client_CD__private_IsEnabledFallback @ 0x140663ED0 (Feature_Microcode_Client_CD__private_IsEnabledFallback.c)
 */

__int64 Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Microcode_Client_CD__private_featureState & 0x10) != 0 )
    return Feature_Microcode_Client_CD__private_featureState & 1;
  else
    return Feature_Microcode_Client_CD__private_IsEnabledFallback(
             (unsigned int)Feature_Microcode_Client_CD__private_featureState,
             3LL);
}
