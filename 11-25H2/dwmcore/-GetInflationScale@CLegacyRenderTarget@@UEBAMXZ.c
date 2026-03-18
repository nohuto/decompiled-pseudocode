/*
 * XREFs of ?GetInflationScale@CLegacyRenderTarget@@UEBAMXZ @ 0x180099660
 * Callers:
 *     ?GetInflation@?$CTargetDirtyBase@$07@@IEBAMXZ @ 0x180082698 (-GetInflation@-$CTargetDirtyBase@$07@@IEBAMXZ.c)
 *     ?BeginPreCompute@CVisualTree@@QEAAXXZ @ 0x180097C40 (-BeginPreCompute@CVisualTree@@QEAAXXZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x180098020 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x180098EA0 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x180099E60 (-UpdateClientBounds@CVisualTree@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CLegacyRenderTarget::GetInflationScale(CLegacyRenderTarget *this)
{
  return CMonitorTransform::GetInflationScale((CLegacyRenderTarget *)((char *)this + 30800), *((_BYTE *)this + 19601));
}
