/*
 * XREFs of ??0CCaptureRenderTargetMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B2D0
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B74C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CCaptureRenderTargetMarshaler *__fastcall DirectComposition::CCaptureRenderTargetMarshaler::CCaptureRenderTargetMarshaler(
        DirectComposition::CCaptureRenderTargetMarshaler *this)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 20LL);
  *(_QWORD *)this = &DirectComposition::CCaptureRenderTargetMarshaler::`vftable';
  return this;
}
