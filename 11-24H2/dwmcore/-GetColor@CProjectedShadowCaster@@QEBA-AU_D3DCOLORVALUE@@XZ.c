/*
 * XREFs of ?GetColor@CProjectedShadowCaster@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x1801D3130
 * Callers:
 *     ?ComputeShadowColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x1801D2F10 (-ComputeShadowColor@CProjectedShadow@@AEBA-AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CProjectedShadowCaster::GetColor(
        CProjectedShadowCaster *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)(v2 + 104);
  }
  else
  {
    *(_QWORD *)&retstr->r = 0LL;
    retstr->b = 0.0;
    retstr->a = 1.0;
  }
  return retstr;
}
