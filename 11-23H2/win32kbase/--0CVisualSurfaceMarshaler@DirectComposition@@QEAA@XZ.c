/*
 * XREFs of ??0CVisualSurfaceMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0094624
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x1C0092E6C (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B74C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CVisualSurfaceMarshaler *__fastcall DirectComposition::CVisualSurfaceMarshaler::CVisualSurfaceMarshaler(
        DirectComposition::CVisualSurfaceMarshaler *this)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 202LL);
  *(_QWORD *)this = &DirectComposition::CVisualSurfaceMarshaler::`vftable';
  return this;
}
