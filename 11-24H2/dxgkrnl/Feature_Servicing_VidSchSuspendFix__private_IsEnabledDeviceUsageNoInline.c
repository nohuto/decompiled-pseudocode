/*
 * XREFs of Feature_Servicing_VidSchSuspendFix__private_IsEnabledDeviceUsageNoInline @ 0x140067AEC
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x14028FB10 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     Feature_Servicing_VidSchSuspendFix__private_IsEnabledFallback @ 0x140067B24 (Feature_Servicing_VidSchSuspendFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_VidSchSuspendFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_VidSchSuspendFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_VidSchSuspendFix__private_featureState & 1;
  else
    return Feature_Servicing_VidSchSuspendFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_VidSchSuspendFix__private_featureState,
             3LL);
}
