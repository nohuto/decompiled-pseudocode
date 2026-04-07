/*
 * XREFs of ??0CVisual@@IEAA@XZ @ 0x180039B40
 * Callers:
 *     ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180002070 (-CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x180005AD8 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x18000687C (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     ??0CDCompositionInteropVisual@@IEAA@XZ @ 0x18002C11C (--0CDCompositionInteropVisual@@IEAA@XZ.c)
 *     ??0CSpriteVisual@@QEAA@XZ @ 0x180031D30 (--0CSpriteVisual@@QEAA@XZ.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x18003251C (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x180035AB0 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x180035BF4 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CWindowBackgroundTreatmentVisual@@SAJPEAPEAV1@@Z @ 0x1800361FC (-Create@CWindowBackgroundTreatmentVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CButton@@IEAA@XZ @ 0x180036890 (--0CButton@@IEAA@XZ.c)
 *     ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x180036950 (-Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180036E6C (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x18004EA2C (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x18004F93C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CWindowTarget@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x18010D5D0 (-Create@CWindowTarget@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ?CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z @ 0x18010D6C4 (-CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CVisual *__fastcall CVisual::CVisual(CVisual *this)
{
  CVisual *result; // rax

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CVisual::`vftable';
  *((_QWORD *)this + 4) = &VisualCollection::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 23) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 22) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 24) = 0x3FF0000000000000LL;
  result = this;
  *((_DWORD *)this + 50) = -2;
  *((_QWORD *)this + 5) = this;
  *((_DWORD *)this + 34) = 0x7FFFFFFF;
  *((_DWORD *)this + 36) = 0x7FFFFFFF;
  *((_DWORD *)this + 35) = 0x7FFFFFFF;
  *((_DWORD *)this + 37) = 0x7FFFFFFF;
  return result;
}
