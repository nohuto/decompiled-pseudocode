/*
 * XREFs of ?AddOcclusionRegion@CLegacyRenderTarget@@UEBA_NPEAVCRegion@@@Z @ 0x180043D80
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x180043E30 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x180249274 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CLegacyRenderTarget::AddOcclusionRegion(CLegacyRenderTarget *this, struct CRegion *a2)
{
  unsigned int *v2; // rbx
  __int64 v5; // rsi
  unsigned int *v6; // rbx
  unsigned int *i; // rsi
  const struct tagRECT *v8; // rax
  char v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (unsigned int *)((char *)this + 31008);
  if ( !*((_DWORD *)this + 7752) )
    return 0;
  if ( !*((_BYTE *)this + 31448) )
    CMergedRectBase<8>::Optimize((char *)this + 31008);
  v5 = *v2;
  v6 = v2 + 1;
  if ( !v6 && v5 )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  for ( i = &v6[4 * v5]; v6 != i; v6 += 4 )
  {
    v8 = (const struct tagRECT *)PixelAlign(v9, v6);
    CRegion::AddRectangle(a2, v8);
  }
  return 1;
}
