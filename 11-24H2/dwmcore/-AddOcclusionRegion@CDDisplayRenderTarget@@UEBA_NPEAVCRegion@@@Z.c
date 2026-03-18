/*
 * XREFs of ?AddOcclusionRegion@CDDisplayRenderTarget@@UEBA_NPEAVCRegion@@@Z @ 0x1801728D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x1801724A0 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x180241D00 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDDisplayRenderTarget::AddOcclusionRegion(
        CDDisplayRenderTarget *this,
        const struct FastRegion::Internal::CRgnData **a2,
        double a3)
{
  unsigned int *v3; // rdi
  char v4; // bl
  unsigned int *v7; // rsi
  unsigned int *v8; // rdi
  const struct tagRECT *v9; // rax
  int v10[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (unsigned int *)((char *)this + 30632);
  v4 = 0;
  if ( *((_DWORD *)this + 7658) )
  {
    if ( !*((_BYTE *)this + 31072) )
      CMergedRectBase<8>::Optimize((char *)this + 30632);
    v7 = v3 + 1;
    gsl::details::extent_type<-1>::extent_type<-1>(v10, *v3);
    if ( *(_QWORD *)v10 == -1LL || v3 == (unsigned int *)-4LL && *(_QWORD *)v10 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v8 = &v7[4 * *(_QWORD *)v10];
    while ( v7 != v8 )
    {
      v9 = (const struct tagRECT *)PixelAlign(v10, v7, a3);
      CRegion::AddRectangle(a2, v9);
      v7 += 4;
    }
    return 1;
  }
  return v4;
}
