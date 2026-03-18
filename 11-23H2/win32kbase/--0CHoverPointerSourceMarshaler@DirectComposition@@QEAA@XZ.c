/*
 * XREFs of ??0CHoverPointerSourceMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00C2110
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B74C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CHoverPointerSourceMarshaler *__fastcall DirectComposition::CHoverPointerSourceMarshaler::CHoverPointerSourceMarshaler(
        DirectComposition::CHoverPointerSourceMarshaler *this)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 82LL);
  *(_QWORD *)this = &DirectComposition::CHoverPointerSourceMarshaler::`vftable';
  return this;
}
