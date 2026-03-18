/*
 * XREFs of ?CurrentRedrawRegionColor@CComposition@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x1802658FC
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180270324 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
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
  v4 = (int *)((char *)g_pComposition + 6384);
  if ( v3 != *((_QWORD *)g_pComposition + 799) )
  {
    *((_QWORD *)g_pComposition + 799) = v3;
    *v4 = ((unsigned __int8)*v4 + 1) & 3;
  }
  result = retstr;
  *(struct _D3DCOLORVALUE *)&retstr->r = *((struct _D3DCOLORVALUE *)v2 + (unsigned int)*v4 + 395);
  return result;
}
