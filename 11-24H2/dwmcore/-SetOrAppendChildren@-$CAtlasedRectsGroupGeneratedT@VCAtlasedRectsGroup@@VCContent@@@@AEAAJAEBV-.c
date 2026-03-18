/*
 * XREFs of ?SetOrAppendChildren@?$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@AEAAJAEBV?$span@PEAVCAtlasedRectsMesh@@$0?0@gsl@@_N@Z @ 0x180130D6C
 * Callers:
 *     ?SetChildren@?$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@QEAAJAEBV?$span@PEAVCAtlasedRectsMesh@@$0?0@gsl@@@Z @ 0x180213510 (-SetChildren@-$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@QEAAJAEBV-$span@PE.c)
 *     ?AppendChildren@?$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@QEAAJAEBV?$span@PEAVCAtlasedRectsMesh@@$0?0@gsl@@@Z @ 0x180276184 (-AppendChildren@-$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@QEAAJAEBV-$span.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$UnRegisterNotifiers@VCAtlasedRectsMesh@@@CResource@@QEAAXPEAV?$vector@PEAVCAtlasedRectsMesh@@V?$allocator@PEAVCAtlasedRectsMesh@@@std@@@std@@@Z @ 0x180130A64 (--$UnRegisterNotifiers@VCAtlasedRectsMesh@@@CResource@@QEAAXPEAV-$vector@PEAVCAtlasedRectsMesh@@.c)
 *     ??$_Insert_counted_range@PEAPEAVCAtlasedRectsMesh@@@?$vector@PEAVCAtlasedRectsMesh@@V?$allocator@PEAVCAtlasedRectsMesh@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCAtlasedRectsMesh@@@std@@@std@@@1@PEAPEAVCAtlasedRectsMesh@@_K@Z @ 0x180130AC8 (--$_Insert_counted_range@PEAPEAVCAtlasedRectsMesh@@@-$vector@PEAVCAtlasedRectsMesh@@V-$allocator.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x180131E90 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 */

__int64 __fastcall CAtlasedRectsGroupGeneratedT<CAtlasedRectsGroup,CContent>::SetOrAppendChildren(
        struct CResource ***this,
        __int64 a2,
        char a3)
{
  int v6; // eax
  unsigned int v7; // edi

  v6 = CResource::RegisterNNotifiersInternal((CResource *)this, *(struct CResource ***)(a2 + 8), *(_QWORD *)a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x38Eu, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CAtlasedRectsMesh>((CResource *)this, this + 10);
    std::vector<CAtlasedRectsMesh *>::_Insert_counted_range<CAtlasedRectsMesh * *>(
      this + 10,
      this[11],
      *(const void **)(a2 + 8),
      (8LL * *(_QWORD *)a2) >> 3);
    CResource::OnPropertyChanged((CResource *)this);
  }
  return v7;
}
