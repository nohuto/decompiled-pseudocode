/*
 * XREFs of ??0CManipulationTransformMarshaler@DirectComposition@@QEAA@XZ @ 0x140072F1C
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140076C18 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x1401959BC (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 * Callees:
 *     ??0CTransformMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073070 (--0CTransformMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CManipulationTransformMarshaler::CManipulationTransformMarshaler(
        DirectComposition::CManipulationTransformMarshaler *this)
{
  _QWORD *v1; // rcx

  DirectComposition::CTransformMarshaler::CTransformMarshaler(this, 106LL);
  *v1 = &DirectComposition::CManipulationTransformMarshaler::`vftable';
  return v1;
}
