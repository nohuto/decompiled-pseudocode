/*
 * XREFs of ??0CMatrixTransformMarshaler@DirectComposition@@QEAA@XZ @ 0x140071398
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140076C18 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x1401959BC (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 * Callees:
 *     ??0CTransformMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073070 (--0CTransformMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CMatrixTransformMarshaler::CMatrixTransformMarshaler(
        DirectComposition::CMatrixTransformMarshaler *this)
{
  _QWORD *v1; // rcx

  DirectComposition::CTransformMarshaler::CTransformMarshaler(this, 109LL);
  *v1 = &DirectComposition::CMatrixTransformMarshaler::`vftable';
  return v1;
}
