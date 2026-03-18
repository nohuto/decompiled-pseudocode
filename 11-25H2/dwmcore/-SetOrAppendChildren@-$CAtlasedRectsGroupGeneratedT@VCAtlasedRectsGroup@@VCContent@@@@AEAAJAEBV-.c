/*
 * XREFs of ?SetOrAppendChildren@?$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@AEAAJAEBV?$span@PEAVCAtlasedRectsMesh@@$0?0@gsl@@_N@Z @ 0x1800791FC
 * Callers:
 *     ?SetChildren@?$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@QEAAJAEBV?$span@PEAVCAtlasedRectsMesh@@$0?0@gsl@@@Z @ 0x18021E8A0 (-SetChildren@-$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@QEAAJAEBV-$span@PE.c)
 *     ?AppendChildren@?$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@QEAAJAEBV?$span@PEAVCAtlasedRectsMesh@@$0?0@gsl@@@Z @ 0x180280BF4 (-AppendChildren@-$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@QEAAJAEBV-$span.c)
 * Callees:
 *     ??$UnRegisterNotifiers@VCAtlasedRectsMesh@@@CResource@@QEAAXPEAV?$vector@PEAVCAtlasedRectsMesh@@V?$allocator@PEAVCAtlasedRectsMesh@@@std@@@std@@@Z @ 0x180078AC4 (--$UnRegisterNotifiers@VCAtlasedRectsMesh@@@CResource@@QEAAXPEAV-$vector@PEAVCAtlasedRectsMesh@@.c)
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 *     ??$_Insert_counted_range@PEAPEAVCAtlasedRectsMesh@@@?$vector@PEAVCAtlasedRectsMesh@@V?$allocator@PEAVCAtlasedRectsMesh@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCAtlasedRectsMesh@@@std@@@std@@@1@PEAPEAVCAtlasedRectsMesh@@_K@Z @ 0x180078FD0 (--$_Insert_counted_range@PEAPEAVCAtlasedRectsMesh@@@-$vector@PEAVCAtlasedRectsMesh@@V-$allocator.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x180079AD0 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x38Eu, 0LL);
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
