/*
 * XREFs of ?SetInsets@CNineGridBrush@@QEAAXMMMM@Z @ 0x1802AB000
 * Callers:
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x180298BE8 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV-$TM.c)
 * Callees:
 *     <none>
 */

void __fastcall CNineGridBrush::SetInsets(CNineGridBrush *this, float a2, float a3, float a4, float a5)
{
  __int64 v5; // rax
  void (__fastcall *v6)(CNineGridBrush *, __int64, CNineGridBrush *); // rax

  v5 = *(_QWORD *)this;
  *((float *)this + 28) = a2;
  *((float *)this + 29) = a4;
  *((float *)this + 30) = a3;
  v6 = *(void (__fastcall **)(CNineGridBrush *, __int64, CNineGridBrush *))(v5 + 80);
  *((float *)this + 31) = a5;
  *((float *)this + 32) = a2;
  *((float *)this + 33) = a4;
  *((float *)this + 34) = a3;
  *((float *)this + 35) = a5;
  v6(this, 6LL, this);
}
