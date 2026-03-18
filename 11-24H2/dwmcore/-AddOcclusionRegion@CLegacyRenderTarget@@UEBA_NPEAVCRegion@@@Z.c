/*
 * XREFs of ?AddOcclusionRegion@CLegacyRenderTarget@@UEBA_NPEAVCRegion@@@Z @ 0x1801723F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x1801724A0 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x180241D00 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CLegacyRenderTarget::AddOcclusionRegion(CLegacyRenderTarget *this, struct CRegion *a2, double a3)
{
  unsigned int *v3; // rbx
  __int64 v6; // rsi
  unsigned int *v7; // rbx
  unsigned int *i; // rsi
  const struct tagRECT *v9; // rax
  int v10[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (unsigned int *)((char *)this + 30624);
  if ( !*((_DWORD *)this + 7656) )
    return 0;
  if ( !*((_BYTE *)this + 31064) )
    CMergedRectBase<8>::Optimize((char *)this + 30624);
  v6 = *v3;
  v7 = v3 + 1;
  if ( !v7 && v6 )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  for ( i = &v7[4 * v6]; v7 != i; v7 += 4 )
  {
    v9 = (const struct tagRECT *)PixelAlign(v10, v7, a3);
    CRegion::AddRectangle(a2, v9);
  }
  return 1;
}
