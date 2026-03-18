/*
 * XREFs of ??0CRedirectVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B6E8
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CVisualMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C0030544 (--0CVisualMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CRedirectVisualMarshaler *__fastcall DirectComposition::CRedirectVisualMarshaler::CRedirectVisualMarshaler(
        DirectComposition::CRedirectVisualMarshaler *this)
{
  DirectComposition::CVisualMarshaler::CVisualMarshaler((__int64)this, 141LL);
  *(_QWORD *)this = &DirectComposition::CRedirectVisualMarshaler::`vftable';
  return this;
}
