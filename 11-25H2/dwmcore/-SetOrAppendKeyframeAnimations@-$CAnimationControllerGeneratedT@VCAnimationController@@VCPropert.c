/*
 * XREFs of ?SetOrAppendKeyframeAnimations@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@AEAAJAEBV?$span@PEAVCKeyframeAnimation@@$0?0@gsl@@_N@Z @ 0x180079A24
 * Callers:
 *     ?SetKeyframeAnimations@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJAEBV?$span@PEAVCKeyframeAnimation@@$0?0@gsl@@@Z @ 0x1802245E8 (-SetKeyframeAnimations@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeR.c)
 *     ?AppendKeyframeAnimations@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJAEBV?$span@PEAVCKeyframeAnimation@@$0?0@gsl@@@Z @ 0x18023284C (-AppendKeyframeAnimations@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChan.c)
 * Callees:
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x180079AD0 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ??$_Insert_counted_range@PEAPEAVCKeyframeAnimation@@@?$vector@PEAVCKeyframeAnimation@@V?$allocator@PEAVCKeyframeAnimation@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCKeyframeAnimation@@@std@@@std@@@1@PEAPEAVCKeyframeAnimation@@_K@Z @ 0x180079BC8 (--$_Insert_counted_range@PEAPEAVCKeyframeAnimation@@@-$vector@PEAVCKeyframeAnimation@@V-$allocat.c)
 *     ??$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV?$vector@PEAVCKeyframeAnimation@@V?$allocator@PEAVCKeyframeAnimation@@@std@@@std@@@Z @ 0x180079DA0 (--$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV-$vector@PEAVCKeyframeAnimation.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::SetOrAppendKeyframeAnimations(
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xA9Eu, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CKeyframeAnimation>(this);
    std::vector<CKeyframeAnimation *>::_Insert_counted_range<CKeyframeAnimation * *>(
      (char *)this + 88,
      *((_QWORD *)this + 12),
      *(_QWORD *)(a2 + 8),
      (8LL * *(_QWORD *)a2) >> 3);
    *((_BYTE *)this + 120) |= 0x13u;
  }
  return v7;
}
