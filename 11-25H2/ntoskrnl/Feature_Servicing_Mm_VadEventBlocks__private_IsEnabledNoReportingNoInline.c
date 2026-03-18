/*
 * XREFs of Feature_Servicing_Mm_VadEventBlocks__private_IsEnabledNoReportingNoInline @ 0x14065BEC0
 * Callers:
 *     CmInitBootFeatureConfigurations @ 0x140C33BDC (CmInitBootFeatureConfigurations.c)
 * Callees:
 *     Feature_Servicing_Mm_VadEventBlocks__private_IsEnabledFallback @ 0x14065BEA4 (Feature_Servicing_Mm_VadEventBlocks__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Mm_VadEventBlocks__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_Mm_VadEventBlocks__private_featureState & 2) != 0 )
    return Feature_Servicing_Mm_VadEventBlocks__private_featureState & 1;
  else
    return Feature_Servicing_Mm_VadEventBlocks__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Mm_VadEventBlocks__private_featureState,
             0);
}
