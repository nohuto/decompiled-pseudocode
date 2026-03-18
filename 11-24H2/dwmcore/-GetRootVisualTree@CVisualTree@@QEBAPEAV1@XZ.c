/*
 * XREFs of ?GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ @ 0x18017C4C0
 * Callers:
 *     ?AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ @ 0x1802360E4 (-AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1802364E0 (-RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     <none>
 */

struct CVisualTree *__fastcall CVisualTree::GetRootVisualTree(CVisualTree *this)
{
  __int64 v1; // rax
  CVisualTree *i; // r10
  _DWORD *v3; // r9
  __int64 v4; // rcx
  _BYTE *v5; // r8
  __int64 j; // rdx
  CVisualTree **v7; // rcx
  CVisualTree *v8; // rcx

  v1 = *((_QWORD *)this + 9);
  for ( i = this; v1; v1 = *(_QWORD *)(v1 + 88) )
  {
    v3 = *(_DWORD **)(v1 + 232);
    if ( (*v3 & 0x8000000) != 0 )
    {
      v4 = (unsigned int)v3[1];
      v5 = v3 + 2;
      for ( j = 0LL; (unsigned int)j < (unsigned int)v4; ++v5 )
      {
        if ( *v5 == 5 )
          break;
        j = (unsigned int)(j + 1);
      }
      if ( (unsigned int)j >= (unsigned int)v4 )
        v7 = 0LL;
      else
        v7 = (CVisualTree **)((char *)v3 + 8 * j - (((_BYTE)v4 + 15) & 7) + v4 + 15);
      v8 = *v7;
      if ( v8 )
        i = v8;
    }
  }
  return i;
}
