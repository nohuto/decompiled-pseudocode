/*
 * XREFs of ?SetOrAppendGlyphRuns@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionGlyphRun@@$0?0@gsl@@_N@Z @ 0x1802791F8
 * Callers:
 *     ?AppendGlyphRuns@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV?$span@PEAVCCompositionGlyphRun@@$0?0@gsl@@@Z @ 0x1802761F0 (-AppendGlyphRuns@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV-$span@PEAVCComposit.c)
 *     ?SetGlyphRuns@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV?$span@PEAVCCompositionGlyphRun@@$0?0@gsl@@@Z @ 0x1802789D4 (-SetGlyphRuns@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV-$span@PEAVCComposition.c)
 * Callees:
 *     ??$_Insert_counted_range@PEAPEAVCBaseExpression@@@?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCBaseExpression@@@std@@@std@@@1@PEAPEAVCBaseExpression@@_K@Z @ 0x180042910 (--$_Insert_counted_range@PEAPEAVCBaseExpression@@@-$vector@PEAVCBaseExpression@@V-$allocator@PEA.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x180131E90 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x1801E0284 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 */

__int64 __fastcall CTextVisualGeneratedT<CTextVisual,CVisual>::SetOrAppendGlyphRuns(
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
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x203Bu, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CSceneComponent>((CResource *)this, this + 85);
    std::vector<CBaseExpression *>::_Insert_counted_range<CBaseExpression * *>(
      (__int64)(this + 85),
      this[86],
      *(const void **)(a2 + 8),
      (8LL * *(_QWORD *)a2) >> 3);
    CResource::NotifyOnChanged(this[32], 0LL, 0LL);
  }
  return v7;
}
