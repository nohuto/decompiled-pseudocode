/*
 * XREFs of ?SetOrAppendChildren@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV?$span@PEAVCTransform@@$0?0@gsl@@_N@Z @ 0x1801DFFD0
 * Callers:
 *     ?SetChildren@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@QEAAJAEBV?$span@PEAVCTransform@@$0?0@gsl@@@Z @ 0x1802249F0 (-SetChildren@-$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@QEAAJAEBV-$span@PEAVCT.c)
 *     ?AppendChildren@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@QEAAJAEBV?$span@PEAVCTransform@@$0?0@gsl@@@Z @ 0x1802761C4 (-AppendChildren@-$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@QEAAJAEBV-$span@PEA.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x180131E90 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ??$_Insert_counted_range@PEAPEAVCTransform@@@?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCTransform@@@std@@@std@@@1@PEAPEAVCTransform@@_K@Z @ 0x1801E0088 (--$_Insert_counted_range@PEAPEAVCTransform@@@-$vector@PEAVCTransform@@V-$allocator@PEAVCTransfor.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x1801E0284 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 */

__int64 __fastcall CTransformGroupGeneratedT<CTransformGroup,CTransform>::SetOrAppendChildren(
        CResource *this,
        __int64 a2,
        char a3)
{
  int v6; // eax
  unsigned int v7; // edi

  v6 = CResource::RegisterNNotifiersInternal(this, *(struct CResource ***)(a2 + 8), *(_QWORD *)a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x1D71u, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CSceneComponent>(this);
    std::vector<CTransform *>::_Insert_counted_range<CTransform * *>(
      (char *)this + 160,
      *((_QWORD *)this + 21),
      *(_QWORD *)(a2 + 8),
      (8LL * *(_QWORD *)a2) >> 3);
    CResource::OnPropertyChanged(this);
  }
  return v7;
}
