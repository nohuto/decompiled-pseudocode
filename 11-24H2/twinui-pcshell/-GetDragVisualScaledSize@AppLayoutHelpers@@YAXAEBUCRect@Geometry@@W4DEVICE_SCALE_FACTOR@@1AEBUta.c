/*
 * XREFs of ?GetDragVisualScaledSize@AppLayoutHelpers@@YAXAEBUCRect@Geometry@@W4DEVICE_SCALE_FACTOR@@1AEBUtagSIZE@@PEAU5@@Z @ 0x1806C6C8C
 * Callers:
 *     ?GetDragOffsetAmount@CDragVisual@@UEAAHXZ @ 0x1805421E0 (-GetDragOffsetAmount@CDragVisual@@UEAAHXZ.c)
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x180542F00 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x1805459C8 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AppLayoutHelpers::GetDragVisualScaledSize(
        AppLayoutHelpers *this,
        const struct Geometry::CRect *a2,
        int a3,
        int *a4,
        const struct tagSIZE *a5)
{
  int v6; // r14d
  LONG v9; // eax
  LONG v10; // eax
  LONG v11; // eax
  LONG cy; // ecx

  v6 = (int)a2;
  v9 = MulDiv(*((_DWORD *)this + 3) - *((_DWORD *)this + 1), 40, 100);
  a5->cy = v9;
  a5->cx = MulDiv(*a4, v9, a4[1]);
  v10 = MulDiv(*((_DWORD *)this + 2) - *(_DWORD *)this, 80, 100);
  if ( a5->cx > v10 )
  {
    a5->cx = v10;
    a5->cy = MulDiv(a4[1], v10, *a4);
  }
  v11 = MulDiv(a5->cx, v6, a3);
  cy = a5->cy;
  a5->cx = v11;
  a5->cy = MulDiv(cy, v6, a3);
}
