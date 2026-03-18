/*
 * XREFs of ??1CTextVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x14022CC48
 * Callers:
 *     ??_ECTextVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14022CFC0 (--_ECTextVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1400EF080 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LI@$0CA@$0CJD@$0CJE@@DirectComposition@@QEAA@XZ @ 0x1402249A8 (--1-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LI@$0CA@$0CJD@$0CJE@@Direc.c)
 */

void __fastcall DirectComposition::CTextVisualMarshaler::~CTextVisualMarshaler(
        DirectComposition::CTextVisualMarshaler *this)
{
  DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,184,32,659,660>::~CResourceMarshalerArray<DirectComposition::CResourceMarshaler,184,32,659,660>((DirectComposition::CTextVisualMarshaler *)((char *)this + 424));
  DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,184,32,659,660>::~CResourceMarshalerArray<DirectComposition::CResourceMarshaler,184,32,659,660>((DirectComposition::CTextVisualMarshaler *)((char *)this + 400));
  DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,184,32,659,660>::~CResourceMarshalerArray<DirectComposition::CResourceMarshaler,184,32,659,660>((DirectComposition::CTextVisualMarshaler *)((char *)this + 376));
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
}
