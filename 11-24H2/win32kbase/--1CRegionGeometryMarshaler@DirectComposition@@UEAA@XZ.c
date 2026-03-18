/*
 * XREFs of ??1CRegionGeometryMarshaler@DirectComposition@@UEAA@XZ @ 0x140106B08
 * Callers:
 *     ??_G?$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x140106A90 (--_G-$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@DirectCompositio.c)
 *     ??_GCRegionGeometryMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140106AD0 (--_GCRegionGeometryMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LI@$0CA@$0CJD@$0CJE@@DirectComposition@@QEAA@XZ @ 0x1402249A8 (--1-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LI@$0CA@$0CJD@$0CJE@@Direc.c)
 */

void __fastcall DirectComposition::CRegionGeometryMarshaler::~CRegionGeometryMarshaler(
        DirectComposition::CRegionGeometryMarshaler *this)
{
  DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,184,32,659,660>::~CResourceMarshalerArray<DirectComposition::CResourceMarshaler,184,32,659,660>((char *)this + 96);
  *(_QWORD *)this = &DirectComposition::CGeometryMarshaler::`vftable';
}
