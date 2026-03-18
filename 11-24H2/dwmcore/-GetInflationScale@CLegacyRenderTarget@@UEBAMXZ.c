/*
 * XREFs of ?GetInflationScale@CLegacyRenderTarget@@UEBAMXZ @ 0x18003DB30
 * Callers:
 *     ?BeginPreCompute@CVisualTree@@QEAAXXZ @ 0x18003BD60 (-BeginPreCompute@CVisualTree@@QEAAXXZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18003C140 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18003D370 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x18003E330 (-UpdateClientBounds@CVisualTree@@IEAAXXZ.c)
 *     ?GetInflation@?$CTargetDirtyBase@$07@@IEBAMXZ @ 0x1800F766C (-GetInflation@-$CTargetDirtyBase@$07@@IEBAMXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CLegacyRenderTarget::GetInflationScale(CLegacyRenderTarget *this)
{
  return CMonitorTransform::GetInflationScale((CLegacyRenderTarget *)((char *)this + 30416), *((_BYTE *)this + 19217));
}
