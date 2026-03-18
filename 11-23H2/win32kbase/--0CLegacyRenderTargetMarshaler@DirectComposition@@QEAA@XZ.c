/*
 * XREFs of ??0CLegacyRenderTargetMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00C3ED8
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B74C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CLegacyRenderTargetMarshaler *__fastcall DirectComposition::CLegacyRenderTargetMarshaler::CLegacyRenderTargetMarshaler(
        DirectComposition::CLegacyRenderTargetMarshaler *this)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 96LL);
  *(_QWORD *)this = &DirectComposition::CLegacyRenderTargetMarshaler::`vftable';
  return this;
}
