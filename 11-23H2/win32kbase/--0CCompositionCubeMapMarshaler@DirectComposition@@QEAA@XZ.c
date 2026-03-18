/*
 * XREFs of ??0CCompositionCubeMapMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B300
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B74C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CCompositionCubeMapMarshaler *__fastcall DirectComposition::CCompositionCubeMapMarshaler::CCompositionCubeMapMarshaler(
        DirectComposition::CCompositionCubeMapMarshaler *this)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 33LL);
  *(_QWORD *)this = &DirectComposition::CCompositionCubeMapMarshaler::`vftable';
  return this;
}
