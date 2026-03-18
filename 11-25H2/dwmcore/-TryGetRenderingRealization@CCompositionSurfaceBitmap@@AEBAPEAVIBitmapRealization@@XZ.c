/*
 * XREFs of ?TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x18014A4E0
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1801462F0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180148520 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18014A270 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18014A370 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IBitmapRealization *__fastcall CCompositionSurfaceBitmap::TryGetRenderingRealization(
        CCompositionSurfaceBitmap *this)
{
  _QWORD *v1; // rcx
  struct IBitmapRealization *(__fastcall *v2)(CGlobalCompositionSurfaceInfo *__hidden); // rax
  __int64 v3; // rax
  __int64 v4; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 12);
  if ( !v1 )
    return 0LL;
  v2 = *(struct IBitmapRealization *(__fastcall **)(CGlobalCompositionSurfaceInfo *__hidden))(*v1 + 56LL);
  if ( v2 != CGlobalCompositionSurfaceInfo::TryGetRenderingRealization )
    return (struct IBitmapRealization *)((__int64 (__fastcall *)(_QWORD *, struct IBitmapRealization *(__fastcall *)(CGlobalCompositionSurfaceInfo *__hidden), _QWORD))v2)(
                                          v1,
                                          CGlobalCompositionSurfaceInfo::TryGetRenderingRealization,
                                          0LL);
  v3 = v1[26];
  v4 = v3 + 8;
  if ( !v3 )
    return 0LL;
  return (struct IBitmapRealization *)v4;
}
