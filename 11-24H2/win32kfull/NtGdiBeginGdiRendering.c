/*
 * XREFs of NtGdiBeginGdiRendering @ 0x140028220
 * Callers:
 *     <none>
 * Callees:
 *     GreBeginGdiRenderingToDxSurface @ 0x140028238 (GreBeginGdiRenderingToDxSurface.c)
 */

__int64 __fastcall NtGdiBeginGdiRendering(HSURF a1)
{
  return GreBeginGdiRenderingToDxSurface(a1);
}
