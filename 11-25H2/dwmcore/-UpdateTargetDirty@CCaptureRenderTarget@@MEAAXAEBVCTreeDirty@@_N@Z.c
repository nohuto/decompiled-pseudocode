/*
 * XREFs of ?UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1800C4140
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18006A3A0 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?AddDirtyRects@?$CTargetDirtyBase@$07@@QEAAXAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1800C3CEC (-AddDirtyRects@-$CTargetDirtyBase@$07@@QEAAXAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?GetDirtyRects@CTreeDirty@@QEBA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800C51F8 (-GetDirtyRects@CTreeDirty@@QEBA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1801FE35C (-GetRects@-$CMergedRectBase@$03@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?Reset@?$CMergedRectBase@$03@@QEAAXXZ @ 0x180208E9C (-Reset@-$CMergedRectBase@$03@@QEAAXXZ.c)
 *     ?AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ @ 0x18023F8D8 (-AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ.c)
 */

void __fastcall CCaptureRenderTarget::UpdateTargetDirty(
        CCaptureRenderTarget *this,
        const struct CTreeDirty *a2,
        char a3)
{
  char *v3; // rbp
  char v6; // si
  _DWORD *v7; // rdi
  __int64 v8; // rax
  int **v9; // rcx
  _QWORD *Rects; // rax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (char *)this + 320;
  if ( !*((_BYTE *)this + 2632) )
  {
    CTreeDirty::GetDirtyRects(a2, v11);
    CTargetDirtyBase<8>::AddDirtyRects((__int64)v3, v11);
  }
  if ( *((_BYTE *)this + 2940) && (v6 = 1, *((_DWORD *)this + 49) == 1) )
  {
    v7 = (_DWORD *)((char *)this + 336);
  }
  else
  {
    v6 = 0;
    v7 = (_DWORD *)((char *)this + 336);
    if ( !*((_DWORD *)this + 84) )
      goto LABEL_5;
  }
  if ( *((_DWORD *)this + 692) )
  {
    Rects = (_QWORD *)CMergedRectBase<4>::GetRects((char *)this + 2768, v11);
    CTargetDirtyBase<8>::AddDirtyRects((__int64)v3, Rects);
    CMergedRectBase<4>::Reset((char *)this + 2768);
  }
  if ( v6 )
    CCaptureRenderTarget::AddCursorInvalidRects(this);
LABEL_5:
  if ( a3 )
  {
    v8 = *((_QWORD *)this + 390);
    if ( v8 != *((_QWORD *)this + 391) )
      *((_QWORD *)this + 391) = v8;
    if ( *v7 )
    {
      v9 = (int **)*((_QWORD *)this + 98);
      if ( v9 )
        CRegion::GetRectangles(v9, (const void **)this + 390);
      if ( *((_DWORD *)this + 44) != 2 )
        CTargetDirtyBase<8>::SetFullDirty((__int64)v3);
    }
  }
  *((_BYTE *)this + 2940) = 0;
}
