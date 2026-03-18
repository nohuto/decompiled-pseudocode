/*
 * XREFs of Feature_FixDolbyVisionOnNewPath__private_IsEnabledDeviceUsageNoInline @ 0x14008DF8C
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAK2AEAV?$unique_ptr@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@U?$default_delete@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@@wistd@@@wistd@@AEAV?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@5@4@Z @ 0x14042AC60 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_M.c)
 * Callees:
 *     Feature_FixDolbyVisionOnNewPath__private_IsEnabledFallback @ 0x14008DFC4 (Feature_FixDolbyVisionOnNewPath__private_IsEnabledFallback.c)
 */

__int64 Feature_FixDolbyVisionOnNewPath__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixDolbyVisionOnNewPath__private_featureState & 0x10) != 0 )
    return Feature_FixDolbyVisionOnNewPath__private_featureState & 1;
  else
    return Feature_FixDolbyVisionOnNewPath__private_IsEnabledFallback(
             (unsigned int)Feature_FixDolbyVisionOnNewPath__private_featureState,
             3LL);
}
