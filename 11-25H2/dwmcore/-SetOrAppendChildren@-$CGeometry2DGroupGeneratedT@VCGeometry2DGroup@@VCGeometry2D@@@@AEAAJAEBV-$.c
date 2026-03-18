/*
 * XREFs of ?SetOrAppendChildren@?$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@AEAAJAEBV?$span@PEAVCGeometry2D@@$0?0@gsl@@_N@Z @ 0x1800772E8
 * Callers:
 *     ?SetChildren@?$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@QEAAJAEBV?$span@PEAVCGeometry2D@@$0?0@gsl@@@Z @ 0x18022EFFC (-SetChildren@-$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@QEAAJAEBV-$span@PEA.c)
 *     ?AppendChildren@?$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@QEAAJAEBV?$span@PEAVCGeometry2D@@$0?0@gsl@@@Z @ 0x180280C04 (-AppendChildren@-$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@QEAAJAEBV-$span@.c)
 * Callees:
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x180077040 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 *     ??$_Insert_counted_range@PEAPEAVCGeometry2D@@@?$vector@PEAVCGeometry2D@@V?$allocator@PEAVCGeometry2D@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCGeometry2D@@@std@@@std@@@1@PEAPEAVCGeometry2D@@_K@Z @ 0x1800770A0 (--$_Insert_counted_range@PEAPEAVCGeometry2D@@@-$vector@PEAVCGeometry2D@@V-$allocator@PEAVCGeomet.c)
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x180079AD0 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGeometry2DGroupGeneratedT<CGeometry2DGroup,CGeometry2D>::SetOrAppendChildren(
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x504u, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CSceneComponent>((CResource *)this, this + 11);
    std::vector<CGeometry2D *>::_Insert_counted_range<CGeometry2D * *>(
      (__int64)(this + 11),
      this[12],
      *(const void **)(a2 + 8),
      (8LL * *(_QWORD *)a2) >> 3);
    CResource::OnPropertyChanged((CResource *)this);
  }
  return v7;
}
