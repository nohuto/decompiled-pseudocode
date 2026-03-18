/*
 * XREFs of ??1?$unique_ptr@VCVisualTreePath@@U?$default_delete@VCVisualTreePath@@@std@@@std@@QEAA@XZ @ 0x180139948
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800D5FC8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800F8AFC (--1COcclusionContext@@QEAA@XZ.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18013984C (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<CVisualTreePath>::~unique_ptr<CVisualTreePath>(void **a1)
{
  char **v1; // rbx
  char *v2; // rdi
  __int64 v3; // rax
  HANDLE ProcessHeap; // rax

  v1 = (char **)*a1;
  if ( *a1 )
  {
    v2 = *v1;
    v3 = (v1[1] - *v1) >> 4;
    if ( v3 )
      v1[1] -= 16 * v3;
    *v1 = 0LL;
    if ( v2 == (char *)(v1 + 3) )
      v2 = 0LL;
    if ( v2 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v2);
    }
    operator delete(v1, 0x38uLL);
  }
}
