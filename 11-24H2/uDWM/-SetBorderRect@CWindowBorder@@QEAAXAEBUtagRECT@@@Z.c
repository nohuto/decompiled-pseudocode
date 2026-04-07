/*
 * XREFs of ?SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z @ 0x180027F28
 * Callers:
 *     ?UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z @ 0x1800684A8 (-UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18006C024 (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180094F50 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027EF8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z @ 0x180027FD0 (-SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z.c)
 *     ?SetSize@CVisualProxy@@QEAAJNN@Z @ 0x1800296B0 (-SetSize@CVisualProxy@@QEAAJNN@Z.c)
 */

void __fastcall CWindowBorder::SetBorderRect(CWindowBorder *this, const struct tagRECT *a2)
{
  int v3; // esi
  struct tagPOINT *v5; // rcx
  int v6; // eax
  struct tagPOINT v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *((struct tagRECT *)this + 16) = *a2;
  v5 = (struct tagPOINT *)*((_QWORD *)this + 25);
  if ( v5 )
  {
    v7.x = a2->left;
    v7.y = a2->top;
    CVisual::SetOffset(v5, &v7);
    v6 = 0;
    if ( a2->bottom - a2->top >= 0 )
      v6 = a2->bottom - a2->top;
    if ( a2->right - a2->left >= 0 )
      v3 = a2->right - a2->left;
    CVisualProxy::SetSize(*(CVisualProxy **)(*((_QWORD *)this + 25) + 16LL), (double)v3, (double)v6);
    CWindowBorder::SetClipRectangle(this, *((struct CRectangleGeometryProxy **)this + 27), a2);
  }
}
