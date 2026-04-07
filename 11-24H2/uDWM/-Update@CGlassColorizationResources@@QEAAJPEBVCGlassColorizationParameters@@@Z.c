/*
 * XREFs of ?Update@CGlassColorizationResources@@QEAAJPEBVCGlassColorizationParameters@@@Z @ 0x18002C0C0
 * Callers:
 *     ?SetGlassColorizationColorResource@CDesktopManager@@QEAAJPEAVCGlassColorizationResources@@U?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@M@Z @ 0x18002C030 (-SetGlassColorizationColorResource@CDesktopManager@@QEAAJPEAVCGlassColorizationResources@@U-$TMI.c)
 * Callees:
 *     ?GetColor_scRGB@CGlassColorizationParameters@@QEBAXPEAU_D3DCOLORVALUE@@@Z @ 0x18002C110 (-GetColor_scRGB@CGlassColorizationParameters@@QEBAXPEAU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CGlassColorizationResources::Update(
        struct _D3DCOLORVALUE *this,
        const struct CGlassColorizationParameters *a2)
{
  __int64 result; // rax

  CGlassColorizationParameters::GetColor_scRGB(a2, this + 1);
  result = 0LL;
  this[2].r = (float)*((int *)a2 + 2) / 100.0;
  return result;
}
