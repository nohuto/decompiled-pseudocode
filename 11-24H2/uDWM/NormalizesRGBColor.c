/*
 * XREFs of NormalizesRGBColor @ 0x18002C8A0
 * Callers:
 *     ?GetColor_scRGB@CGlassColorizationParameters@@QEBAXPEAU_D3DCOLORVALUE@@@Z @ 0x18002C110 (-GetColor_scRGB@CGlassColorizationParameters@@QEBAXPEAU_D3DCOLORVALUE@@@Z.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18002C1C0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NormalizesRGBColor(unsigned __int8 *a1, float *a2)
{
  int v2; // eax
  float v3; // xmm0_4
  __int64 result; // rax
  float v5; // xmm1_4

  v2 = a1[2];
  a2[3] = (float)a1[3] / 255.0;
  v3 = (float)v2;
  result = *a1;
  v5 = (float)a1[1];
  *a2 = v3 / 255.0;
  a2[1] = v5 / 255.0;
  a2[2] = (float)(int)result / 255.0;
  return result;
}
