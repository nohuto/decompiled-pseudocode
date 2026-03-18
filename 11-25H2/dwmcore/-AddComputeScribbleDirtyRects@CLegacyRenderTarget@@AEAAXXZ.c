/*
 * XREFs of ?AddComputeScribbleDirtyRects@CLegacyRenderTarget@@AEAAXXZ @ 0x1802074B8
 * Callers:
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C81C0 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?AddDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C3E90 (-AddDirtyRect@-$CTargetDirtyBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     ??0?$CMergedRectBase@$03@@QEAA@_N@Z @ 0x18020762C (--0-$CMergedRectBase@$03@@QEAA@_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180236804 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?Optimize@?$CMergedRectBase@$03@@AEAAXXZ @ 0x1802899A8 (-Optimize@-$CMergedRectBase@$03@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRenderTarget::AddComputeScribbleDirtyRects(CLegacyRenderTarget *this)
{
  int v2; // eax
  unsigned int v3; // eax
  float *v4; // rsi
  float *v5; // rdi
  int v6; // [rsp+28h] [rbp-E0h]
  __int64 v7; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v8; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v9; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v10[10]; // [rsp+5Ch] [rbp-ACh] BYREF
  char v11; // [rsp+100h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+18h]

  if ( *((_BYTE *)this + 19689) )
  {
    *((_QWORD *)&v8 + 1) = *((_QWORD *)this + 3866);
    *(_QWORD *)&v8 = 0LL;
  }
  else
  {
    v8 = *((_OWORD *)this + 1932);
  }
  CMergedRectBase<4>::CMergedRectBase<4>(&v9, 0LL);
  v2 = (*(__int64 (__fastcall **)(__int64, char *, __int128 *, unsigned int *))(*(_QWORD *)(*((_QWORD *)this + 25)
                                                                                          + 256LL)
                                                                              + 88LL))(
         *((_QWORD *)this + 25) + 256LL,
         (char *)this + 31008,
         &v8,
         &v9);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x504,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\legacyrendertarget.cpp",
      (const char *)(unsigned int)v2,
      v6);
  v3 = v9;
  if ( v9 )
  {
    if ( !v11 )
    {
      CMergedRectBase<4>::Optimize(&v9);
      v3 = v9;
    }
    gsl::details::extent_type<-1>::extent_type<-1>(&v7, v3);
    if ( v7 == -1 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v4 = (float *)&v10[v7];
    v5 = (float *)v10;
    if ( v10 != (_OWORD *)v4 )
    {
      do
      {
        CTargetDirtyBase<8>::AddDirtyRect((__int64)this + 31152, v5);
        v5 += 4;
      }
      while ( v5 != v4 );
    }
  }
}
