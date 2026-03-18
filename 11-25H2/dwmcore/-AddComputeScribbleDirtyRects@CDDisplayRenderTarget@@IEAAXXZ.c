/*
 * XREFs of ?AddComputeScribbleDirtyRects@CDDisplayRenderTarget@@IEAAXXZ @ 0x1802073AC
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C7630 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AddDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C3E90 (-AddDirtyRect@-$CTargetDirtyBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     ?GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCMergedRect@@@Z @ 0x180173810 (-GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRec.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1801FE35C (-GetRects@-$CMergedRectBase@$03@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ??0?$CMergedRectBase@$03@@QEAA@_N@Z @ 0x18020762C (--0-$CMergedRectBase@$03@@QEAA@_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180236804 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CDDisplayRenderTarget::AddComputeScribbleDirtyRects(CDDisplayRenderTarget *this)
{
  int ComputeScribbleInvalidRects; // eax
  float *v3; // rdi
  __int64 v4; // rsi
  __int128 v5; // [rsp+28h] [rbp-79h] BYREF
  unsigned int v6[44]; // [rsp+38h] [rbp-69h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  if ( *((_BYTE *)this + 19697) )
  {
    *((_QWORD *)&v5 + 1) = *((_QWORD *)this + 3867);
    *(_QWORD *)&v5 = 0LL;
  }
  else
  {
    v5 = *(_OWORD *)((char *)this + 30920);
  }
  CMergedRectBase<4>::CMergedRectBase<4>(v6, 0LL);
  ComputeScribbleInvalidRects = CScribbleSwapChain::GetComputeScribbleInvalidRects(
                                  *((_QWORD *)this + 26) + 256LL,
                                  (__int64)this + 31016,
                                  (int *)&v5,
                                  (__int64)v6);
  if ( ComputeScribbleInvalidRects < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x55A,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\ddisplayrendertarget.cpp",
      (const char *)(unsigned int)ComputeScribbleInvalidRects,
      v5);
  if ( v6[0] )
  {
    CMergedRectBase<4>::GetRects(v6, &v5);
    v3 = (float *)*((_QWORD *)&v5 + 1);
    v4 = *((_QWORD *)&v5 + 1) + 16 * v5;
    while ( v3 != (float *)v4 )
    {
      CTargetDirtyBase<8>::AddDirtyRect((__int64)this + 31160, v3);
      v3 += 4;
    }
  }
}
