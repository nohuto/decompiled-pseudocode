/*
 * XREFs of ?ComputeVertexColor@CDrawListEntry@@QEBA?AU_D3DCOLORVALUE@@M@Z @ 0x180062BE0
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180052D80 (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z @ 0x18006238C (-EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CDrawListEntry::ComputeVertexColor(
        CDrawListEntry *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        float a3)
{
  char v3; // r8
  __int64 v4; // rax
  __m128 v6; // xmm3
  float v7; // xmm2_4
  D3DVALUE v8; // xmm1_4
  D3DVALUE v9; // xmm0_4

  v3 = *(_BYTE *)(*((_QWORD *)this + 2) + 81LL);
  *(struct _D3DCOLORVALUE *)&retstr->r = *((struct _D3DCOLORVALUE *)this + 3);
  if ( a3 != 1.0 )
  {
    if ( !v3 )
    {
      v8 = a3 * retstr->g;
      retstr->r = a3 * retstr->r;
      v9 = a3 * retstr->b;
      retstr->g = v8;
      retstr->b = v9;
    }
    retstr->a = a3 * retstr->a;
  }
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    v6 = *(__m128 *)(v4 + 72);
    v7 = _mm_shuffle_ps(v6, v6, 255).m128_f32[0];
    retstr->r = (float)(v6.m128_f32[0] * v7) * retstr->r;
    retstr->g = (float)(_mm_shuffle_ps(v6, v6, 85).m128_f32[0] * v7) * retstr->g;
    retstr->b = (float)(_mm_shuffle_ps(v6, v6, 170).m128_f32[0] * v7) * retstr->b;
    retstr->a = v7 * retstr->a;
  }
  return retstr;
}
