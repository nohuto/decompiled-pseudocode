/*
 * XREFs of ?Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x1802045CC
 * Callers:
 *     ?InitColorKey@CColorKeyBitmap@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x1801D5CB8 (-InitColorKey@CColorKeyBitmap@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?DrawSolidColorRectangle@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z @ 0x18024FB5C (-DrawSolidColorRectangle@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2D.c)
 * Callees:
 *     ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x180204678 (-Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z.c)
 */

struct _D3DCOLORVALUE *__fastcall Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB(
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct _D3DCOLORVALUE *a2)
{
  float v4; // xmm1_4
  __m128i v5; // xmm0
  struct _D3DCOLORVALUE *result; // rax

  v4 = fmaxf(a2->a, 0.0);
  *(struct _D3DCOLORVALUE *)&retstr->r = *(const struct _D3DCOLORVALUE *)&a2->r;
  retstr->a = fminf(1.0, v4);
  retstr->r = (float)Convert_scRGB_Channel_To_sRGB_Byte(a2->r) / 255.0;
  retstr->g = (float)Convert_scRGB_Channel_To_sRGB_Byte(a2->g) / 255.0;
  v5 = _mm_cvtsi32_si128(Convert_scRGB_Channel_To_sRGB_Byte(a2->b));
  result = retstr;
  retstr->b = _mm_cvtepi32_ps(v5).m128_f32[0] / 255.0;
  return result;
}
