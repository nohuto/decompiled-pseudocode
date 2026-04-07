/*
 * XREFs of sRGBColorToscRGBColor @ 0x18002C940
 * Callers:
 *     ?GetColor_scRGB@CGlassColorizationParameters@@QEBAXPEAU_D3DCOLORVALUE@@@Z @ 0x18002C110 (-GetColor_scRGB@CGlassColorizationParameters@@QEBAXPEAU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     floorf @ 0x18009C474 (floorf.c)
 */

__int64 __fastcall sRGBColorToscRGBColor(__int64 a1, __int64 a2)
{
  float v2; // xmm0_4
  __int64 result; // rax

  v2 = *(float *)a1;
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
  *(float *)a2 = flt_180105840[(unsigned __int8)(int)fminf(floorf((float)(v2 * 255.0) + 0.5), 255.0)] / 255.0;
  *(float *)(a2 + 4) = flt_180105840[(unsigned __int8)(int)fminf(
                                                             floorf((float)(*(float *)(a1 + 4) * 255.0) + 0.5),
                                                             255.0)]
                     / 255.0;
  result = (unsigned int)(int)fminf(floorf((float)(*(float *)(a1 + 8) * 255.0) + 0.5), 255.0);
  *(float *)(a2 + 8) = flt_180105840[(unsigned __int8)result] / 255.0;
  return result;
}
