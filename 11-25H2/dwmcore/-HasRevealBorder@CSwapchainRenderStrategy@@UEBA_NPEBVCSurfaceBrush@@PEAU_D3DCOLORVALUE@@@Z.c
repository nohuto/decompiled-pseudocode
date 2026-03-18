/*
 * XREFs of ?HasRevealBorder@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAU_D3DCOLORVALUE@@@Z @ 0x1801E3070
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x180074330 (-GetBorderColor@CCompositionSurfaceBitmap@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x1800A2540 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?HasSwapChainAttributes@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x1801E3454 (-HasSwapChainAttributes@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 */

char __fastcall CSwapchainRenderStrategy::HasRevealBorder(
        CSwapchainRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct _D3DCOLORVALUE *a3)
{
  CCompositionSurfaceBitmap *v4; // rdi
  struct _D3DCOLORVALUE v6; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)a2 + 30) == 1 )
    return 0;
  v4 = (CCompositionSurfaceBitmap *)*((_QWORD *)a2 + 16);
  if ( !CCompositionSurfaceBitmap::HasSwapChainAttributes(v4) )
    return 0;
  if ( !(unsigned int)CCompositionSurfaceBitmap::GetSizePreference((__int64)v4) )
    return 0;
  CCompositionSurfaceBitmap::GetBorderColor(v4, &v6);
  if ( COERCE_FLOAT(LODWORD(v6.a) & _xmm) < 0.0000011920929 )
    return 0;
  if ( a3 )
    *(struct _D3DCOLORVALUE *)&a3->r = *(struct _D3DCOLORVALUE *)&v6.r;
  return 1;
}
