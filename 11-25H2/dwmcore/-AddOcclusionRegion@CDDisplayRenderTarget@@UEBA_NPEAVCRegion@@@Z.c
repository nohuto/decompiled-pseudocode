/*
 * XREFs of ?AddOcclusionRegion@CDDisplayRenderTarget@@UEBA_NPEAVCRegion@@@Z @ 0x180043C20
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x180043E30 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x180249274 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDDisplayRenderTarget::AddOcclusionRegion(CDDisplayRenderTarget *this, struct CRegion *a2)
{
  unsigned int *v2; // rdi
  char v3; // bl
  unsigned int *v6; // rsi
  unsigned int *v7; // rdi
  const struct tagRECT *v8; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (unsigned int *)((char *)this + 31016);
  v3 = 0;
  if ( *((_DWORD *)this + 7754) )
  {
    if ( !*((_BYTE *)this + 31456) )
      CMergedRectBase<8>::Optimize((char *)this + 31016);
    v6 = v2 + 1;
    gsl::details::extent_type<-1>::extent_type<-1>(v9, *v2);
    if ( v9[0] == -1LL || v2 == (unsigned int *)-4LL && v9[0] )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v7 = &v6[4 * v9[0]];
    while ( v6 != v7 )
    {
      v8 = (const struct tagRECT *)PixelAlign(v9, v6);
      CRegion::AddRectangle(a2, v8);
      v6 += 4;
    }
    return 1;
  }
  return v3;
}
