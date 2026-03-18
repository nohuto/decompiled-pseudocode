/*
 * XREFs of ??R?$default_delete@VCVisualTreePath@@@std@@QEBAXPEAVCVisualTreePath@@@Z @ 0x1801DED24
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x1800829B0 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::default_delete<CVisualTreePath>::operator()(__int64 a1, char **a2)
{
  char *v3; // rdi
  __int64 v4; // rax
  HANDLE ProcessHeap; // rax

  if ( a2 )
  {
    v3 = *a2;
    v4 = (a2[1] - *a2) >> 4;
    if ( v4 )
      a2[1] -= 16 * v4;
    *a2 = 0LL;
    if ( v3 == (char *)(a2 + 3) )
      v3 = 0LL;
    if ( v3 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v3);
    }
    operator delete(a2, 0x38uLL);
  }
}
