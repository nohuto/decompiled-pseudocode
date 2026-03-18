/*
 * XREFs of ??0CVisualGroupMarshaler@DirectComposition@@QEAA@XZ @ 0x14022CB90
 * Callers:
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x140194BEC (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x1401959BC (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073264 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LI@$0CA@$0CJD@$0CJE@@DirectComposition@@QEAA@XZ @ 0x140224990 (--0-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LI@$0CA@$0CJD@$0CJE@@Direc.c)
 */

__int64 __fastcall DirectComposition::CVisualGroupMarshaler::CVisualGroupMarshaler(
        DirectComposition::CVisualGroupMarshaler *this)
{
  _QWORD *v1; // r8
  __int64 v2; // r8

  DirectComposition::CResourceMarshaler::CResourceMarshaler((__int64)this, 187);
  *v1 = &DirectComposition::CVisualGroupMarshaler::`vftable';
  DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,184,32,659,660>::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,184,32,659,660>(v1 + 7);
  return v2;
}
