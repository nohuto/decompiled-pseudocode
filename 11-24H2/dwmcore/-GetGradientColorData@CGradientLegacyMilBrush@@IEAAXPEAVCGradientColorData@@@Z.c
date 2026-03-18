/*
 * XREFs of ?GetGradientColorData@CGradientLegacyMilBrush@@IEAAXPEAVCGradientColorData@@@Z @ 0x1801DD4DC
 * Callers:
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2D_RECT_F@@@Z @ 0x1801DD054 (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2.c)
 * Callees:
 *     ?Clear@CGradientColorData@@QEAAXXZ @ 0x1801DD824 (-Clear@CGradientColorData@@QEAAXXZ.c)
 *     ?GetOpacity@CLegacyMilBrush@@KAMMPEAVCFloatResource@@@Z @ 0x1801DD848 (-GetOpacity@CLegacyMilBrush@@KAMMPEAVCFloatResource@@@Z.c)
 *     ?AddColorWithPosition@CGradientColorData@@QEAAXPEBU_D3DCOLORVALUE@@M@Z @ 0x1801DD874 (-AddColorWithPosition@CGradientColorData@@QEAAXPEBU_D3DCOLORVALUE@@M@Z.c)
 */

void __fastcall CGradientLegacyMilBrush::GetGradientColorData(
        CGradientLegacyMilBrush *this,
        struct CGradientColorData *a2)
{
  __int64 v4; // rbp
  __int64 i; // rbx
  float Opacity; // xmm0_4

  CGradientColorData::Clear(a2);
  v4 = *((_QWORD *)this + 16);
  for ( i = *((_QWORD *)this + 15); i != v4; i += 24LL )
    CGradientColorData::AddColorWithPosition(a2, (const struct _D3DCOLORVALUE *)(i + 8), *(double *)i);
  Opacity = CLegacyMilBrush::GetOpacity(*((float *)this + 18), *((struct CFloatResource **)this + 10));
  CGradientColorData::ApplyOpacity(a2, Opacity);
}
