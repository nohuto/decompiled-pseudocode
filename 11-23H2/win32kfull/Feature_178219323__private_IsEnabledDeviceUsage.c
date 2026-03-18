/*
 * XREFs of Feature_178219323__private_IsEnabledDeviceUsage @ 0x1C0140350
 * Callers:
 *     ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C02F071C (--0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEBU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C02F0AB0 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z.c)
 * Callees:
 *     Feature_178219323__private_IsEnabledFallback @ 0x1C0140388 (Feature_178219323__private_IsEnabledFallback.c)
 */

__int64 Feature_178219323__private_IsEnabledDeviceUsage()
{
  if ( (Feature_178219323__private_featureState & 0x10) != 0 )
    return Feature_178219323__private_featureState & 1;
  else
    return Feature_178219323__private_IsEnabledFallback((unsigned int)Feature_178219323__private_featureState, 3LL);
}
