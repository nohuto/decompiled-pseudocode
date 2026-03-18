/*
 * XREFs of ?IsEmptyDrawing@CRedirectedVisualContent@@UEBA_NXZ @ 0x180209070
 * Callers:
 *     ?HasNonEmptyContent@CRedirectVisual@@UEBA_NXZ @ 0x180209020 (-HasNonEmptyContent@CRedirectVisual@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRedirectedVisualContent::IsEmptyDrawing(CRedirectedVisualContent *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 9) + 96LL) & 0x100) == 0;
}
