/*
 * XREFs of Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledDeviceUsage @ 0x1C013C83C
 * Callers:
 *     SfnINLPCREATESTRUCT @ 0x1C00E75C0 (SfnINLPCREATESTRUCT.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1C013C550 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z.c)
 * Callees:
 *     Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledFallback @ 0x1C013C874 (Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_featureState & 0x10) != 0 )
    return Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_featureState & 1;
  else
    return Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_featureState,
             3LL);
}
