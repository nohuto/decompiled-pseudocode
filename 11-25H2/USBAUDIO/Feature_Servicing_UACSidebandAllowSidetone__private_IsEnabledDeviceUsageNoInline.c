/*
 * XREFs of Feature_Servicing_UACSidebandAllowSidetone__private_IsEnabledDeviceUsageNoInline @ 0x140014C88
 * Callers:
 *     ?IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z @ 0x140012E4C (-IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z.c)
 * Callees:
 *     Feature_Servicing_UACSidebandAllowSidetone__private_IsEnabledFallback @ 0x140014CC0 (Feature_Servicing_UACSidebandAllowSidetone__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_UACSidebandAllowSidetone__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_UACSidebandAllowSidetone__private_featureState & 0x10) != 0 )
    return Feature_Servicing_UACSidebandAllowSidetone__private_featureState & 1;
  else
    return Feature_Servicing_UACSidebandAllowSidetone__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_UACSidebandAllowSidetone__private_featureState,
             3LL);
}
