/*
 * XREFs of ?SetOrAppendGradientStops@?$CGradientLegacyMilBrushGeneratedT@VCGradientLegacyMilBrush@@VCLegacyMilBrush@@@@AEAAJAEBV?$span@$$CBUMilGradientStop@@$0?0@gsl@@_N@Z @ 0x18025B88C
 * Callers:
 *     ?SetGradientStops@?$CGradientLegacyMilBrushGeneratedT@VCGradientLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJAEBV?$span@$$CBUMilGradientStop@@$0?0@gsl@@@Z @ 0x18025BC0C (-SetGradientStops@-$CGradientLegacyMilBrushGeneratedT@VCGradientLegacyMilBrush@@VCLegacyMilBrush.c)
 *     ?AppendGradientStops@?$CGradientLegacyMilBrushGeneratedT@VCGradientLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJAEBV?$span@$$CBUMilGradientStop@@$0?0@gsl@@@Z @ 0x180280C70 (-AppendGradientStops@-$CGradientLegacyMilBrushGeneratedT@VCGradientLegacyMilBrush@@VCLegacyMilBr.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 *     ??$insert@PEBUMilGradientStop@@$0A@@?$vector@UMilGradientStop@@V?$allocator@UMilGradientStop@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMilGradientStop@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMilGradientStop@@@std@@@std@@@1@PEBUMilGradientStop@@1@Z @ 0x180230488 (--$insert@PEBUMilGradientStop@@$0A@@-$vector@UMilGradientStop@@V-$allocator@UMilGradientStop@@@s.c)
 */

__int64 __fastcall CGradientLegacyMilBrushGeneratedT<CGradientLegacyMilBrush,CLegacyMilBrush>::SetOrAppendGradientStops(
        CResource *this,
        _QWORD *a2,
        char a3)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  if ( !a3 )
  {
    v4 = *((_QWORD *)this + 15);
    if ( v4 != *((_QWORD *)this + 16) )
      *((_QWORD *)this + 16) = v4;
  }
  std::vector<MilGradientStop>::insert<MilGradientStop const *,0>(
    (_QWORD *)this + 15,
    &v6,
    *((_QWORD *)this + 16),
    a2[1],
    a2[1] + 24LL * *a2);
  CResource::OnPropertyChanged(this);
  return 0LL;
}
