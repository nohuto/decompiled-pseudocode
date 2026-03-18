/*
 * XREFs of ??0CRegionGeometryMarshaler@DirectComposition@@QEAA@XZ @ 0x1400730E8
 * Callers:
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x140194BEC (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x1401959BC (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 * Callees:
 *     ??0CGeometryMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073140 (--0CGeometryMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LI@$0CA@$0CJD@$0CJE@@DirectComposition@@QEAA@XZ @ 0x140224990 (--0-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LI@$0CA@$0CJD@$0CJE@@Direc.c)
 */

__int64 __fastcall DirectComposition::CRegionGeometryMarshaler::CRegionGeometryMarshaler(
        DirectComposition::CRegionGeometryMarshaler *this)
{
  _QWORD *v1; // r10
  __int64 v2; // r10

  DirectComposition::CGeometryMarshaler::CGeometryMarshaler(this, 130LL);
  *v1 = &DirectComposition::CRegionGeometryMarshaler::`vftable';
  DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,184,32,659,660>::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,184,32,659,660>(v1 + 12);
  return v2;
}
