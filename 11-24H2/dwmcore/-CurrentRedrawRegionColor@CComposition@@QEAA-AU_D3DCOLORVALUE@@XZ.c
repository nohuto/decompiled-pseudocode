/*
 * XREFs of ?CurrentRedrawRegionColor@CComposition@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x18025A97C
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180264314 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CComposition::CurrentRedrawRegionColor(
        CComposition *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  CGlobalComposition *v2; // r8
  __int64 v3; // rax
  int *v4; // rcx
  struct _D3DCOLORVALUE *result; // rax

  v2 = g_pComposition;
  v3 = *((_QWORD *)g_pComposition + 111);
  v4 = (int *)((char *)g_pComposition + 6360);
  if ( v3 != *((_QWORD *)g_pComposition + 796) )
  {
    *((_QWORD *)g_pComposition + 796) = v3;
    *v4 = ((unsigned __int8)*v4 + 1) & 3;
  }
  result = retstr;
  *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)((char *)v2 + 16 * (unsigned int)*v4 + 6296);
  return result;
}
