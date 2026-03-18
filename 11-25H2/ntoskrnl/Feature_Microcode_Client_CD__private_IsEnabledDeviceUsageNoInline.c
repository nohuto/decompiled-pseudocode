/*
 * XREFs of Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline @ 0x140657BD8
 * Callers:
 *     PrExtApplyPatch @ 0x1404D1D34 (PrExtApplyPatch.c)
 *     PrExtLogToRegistry @ 0x1404DA1F8 (PrExtLogToRegistry.c)
 *     PrExtExportRecordData @ 0x140657D54 (PrExtExportRecordData.c)
 *     PrExtGetRecord @ 0x140657EA8 (PrExtGetRecord.c)
 *     GetMicrocodePatchData @ 0x140658008 (GetMicrocodePatchData.c)
 *     MicrocodeGetRecord @ 0x140658220 (MicrocodeGetRecord.c)
 *     MicrocodeUpdate @ 0x140658658 (MicrocodeUpdate.c)
 *     AMDMicrocodeGetRecordData @ 0x140658E78 (AMDMicrocodeGetRecordData.c)
 *     AMDMicrocodeMetaDataCheck @ 0x140658F18 (AMDMicrocodeMetaDataCheck.c)
 *     AMDMicrocodeRecordSizeCheck @ 0x140659010 (AMDMicrocodeRecordSizeCheck.c)
 * Callees:
 *     Feature_Microcode_Client_CD__private_IsEnabledFallback @ 0x140657C10 (Feature_Microcode_Client_CD__private_IsEnabledFallback.c)
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
