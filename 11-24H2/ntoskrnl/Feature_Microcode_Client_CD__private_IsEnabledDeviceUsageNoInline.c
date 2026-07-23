/*
 * XREFs of Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline @ 0x140662788
 * Callers:
 *     PrExtApplyPatch @ 0x1404CAD34 (PrExtApplyPatch.c)
 *     PrExtLogToRegistry @ 0x1404D25F8 (PrExtLogToRegistry.c)
 *     PrExtExportRecordData @ 0x140662904 (PrExtExportRecordData.c)
 *     PrExtGetRecord @ 0x140662A58 (PrExtGetRecord.c)
 *     GetMicrocodePatchData @ 0x140662BB8 (GetMicrocodePatchData.c)
 *     MicrocodeGetRecord @ 0x140662DD0 (MicrocodeGetRecord.c)
 *     MicrocodeUpdate @ 0x140663208 (MicrocodeUpdate.c)
 *     AMDMicrocodeGetRecordData @ 0x140663A28 (AMDMicrocodeGetRecordData.c)
 *     AMDMicrocodeMetaDataCheck @ 0x140663AC8 (AMDMicrocodeMetaDataCheck.c)
 *     AMDMicrocodeRecordSizeCheck @ 0x140663BC0 (AMDMicrocodeRecordSizeCheck.c)
 * Callees:
 *     Feature_Microcode_Client_CD__private_IsEnabledFallback @ 0x1406627C0 (Feature_Microcode_Client_CD__private_IsEnabledFallback.c)
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
