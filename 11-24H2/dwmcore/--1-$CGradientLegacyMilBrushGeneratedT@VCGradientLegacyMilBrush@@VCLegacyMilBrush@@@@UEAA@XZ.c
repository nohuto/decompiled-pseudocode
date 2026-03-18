/*
 * XREFs of ??1?$CGradientLegacyMilBrushGeneratedT@VCGradientLegacyMilBrush@@VCLegacyMilBrush@@@@UEAA@XZ @ 0x1802214C0
 * Callers:
 *     ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x1801E8CCC (--1CLinearGradientLegacyMilBrush@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CGradientLegacyMilBrushGeneratedT<CGradientLegacyMilBrush,CLegacyMilBrush>::~CGradientLegacyMilBrushGeneratedT<CGradientLegacyMilBrush,CLegacyMilBrush>(
        CResource *this)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 8 * ((__int64)(*((_QWORD *)this + 17) - (_QWORD)v2) >> 3));
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
  }
  CLegacyMilBrushGeneratedT<CLegacyMilBrush,CResource>::~CLegacyMilBrushGeneratedT<CLegacyMilBrush,CResource>((struct CResource **)this);
}
