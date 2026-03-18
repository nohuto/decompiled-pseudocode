/*
 * XREFs of Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x140076440
 * Callers:
 *     ?IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1401E02B4 (-IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z.c)
 *     ?GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z @ 0x1403D3CF8 (-GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z.c)
 * Callees:
 *     Feature_Win32ProcessCapabilities__private_IsEnabledFallback @ 0x140076478 (Feature_Win32ProcessCapabilities__private_IsEnabledFallback.c)
 */

__int64 Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Win32ProcessCapabilities__private_featureState & 0x10) != 0 )
    return Feature_Win32ProcessCapabilities__private_featureState & 1;
  else
    return Feature_Win32ProcessCapabilities__private_IsEnabledFallback(
             (unsigned int)Feature_Win32ProcessCapabilities__private_featureState,
             3LL);
}
