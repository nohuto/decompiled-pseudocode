/*
 * XREFs of ?ReleaseAllReferences@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C021CD8C
 * Callers:
 *     ?ReleaseAllReferences@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C021CEC0 (-ReleaseAllReferences@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplic.c)
 * Callees:
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C009E150 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 *     ?ReleaseAllReferences@CLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C021CE50 (-ReleaseAllReferences@CLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2.c)
 */

void __fastcall DirectComposition::CGradientLegacyMilBrushMarshaler::ReleaseAllReferences(
        DirectComposition::CGradientLegacyMilBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CGradientLegacyMilBrushMarshaler *)((char *)this + 104));
  DirectComposition::CLegacyMilBrushMarshaler::ReleaseAllReferences(this, a2);
}
