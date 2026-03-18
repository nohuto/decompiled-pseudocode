/*
 * XREFs of ?reset@?$unique_ptr@VCVisualTreePath@@U?$default_delete@VCVisualTreePath@@@std@@@std@@QEAAXPEAVCVisualTreePath@@@Z @ 0x1801D87A0
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x1800829B0 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<CVisualTreePath>::reset(void **a1, void *a2)
{
  char **v2; // rbx
  char *v3; // rcx
  char *v4; // rdi
  __int64 v5; // rax
  HANDLE ProcessHeap; // rax

  v2 = (char **)*a1;
  *a1 = a2;
  if ( v2 )
  {
    v3 = v2[1];
    v4 = *v2;
    v5 = (v3 - *v2) >> 4;
    if ( v5 )
      v2[1] = &v3[-16 * v5];
    *v2 = 0LL;
    if ( v4 != (char *)(v2 + 3) )
    {
      if ( v4 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v4);
      }
    }
    operator delete(v2, 0x38uLL);
  }
}
