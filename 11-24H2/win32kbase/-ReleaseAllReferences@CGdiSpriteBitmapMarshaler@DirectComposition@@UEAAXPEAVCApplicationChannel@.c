/*
 * XREFs of ?ReleaseAllReferences@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140126A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LI@$0CA@$0CJD@$0CJE@@DirectComposition@@QEAA@XZ @ 0x1402249A8 (--1-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LI@$0CA@$0CJD@$0CJE@@Direc.c)
 */

void __fastcall DirectComposition::CGdiSpriteBitmapMarshaler::ReleaseAllReferences(
        DirectComposition::CGdiSpriteBitmapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,184,32,659,660>::~CResourceMarshalerArray<DirectComposition::CResourceMarshaler,184,32,659,660>((char *)this + 56);
}
