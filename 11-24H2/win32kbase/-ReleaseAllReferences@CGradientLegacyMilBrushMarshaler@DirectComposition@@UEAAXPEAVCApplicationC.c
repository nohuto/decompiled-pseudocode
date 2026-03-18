/*
 * XREFs of ?ReleaseAllReferences@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140229B40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LI@$0CA@$0CJD@$0CJE@@DirectComposition@@QEAA@XZ @ 0x1402249A8 (--1-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LI@$0CA@$0CJD@$0CJE@@Direc.c)
 *     ?ReleaseAllReferences@CLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140229C00 (-ReleaseAllReferences@CLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2.c)
 */

void __fastcall DirectComposition::CGradientLegacyMilBrushMarshaler::ReleaseAllReferences(
        DirectComposition::CGradientLegacyMilBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,184,32,659,660>::~CResourceMarshalerArray<DirectComposition::CResourceMarshaler,184,32,659,660>((DirectComposition::CGradientLegacyMilBrushMarshaler *)((char *)this + 104));
  DirectComposition::CLegacyMilBrushMarshaler::ReleaseAllReferences(this, a2);
}
