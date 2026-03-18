/*
 * XREFs of ??0CInkMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B574
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CContentMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C00B0674 (--0CContentMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CInkMarshaler *__fastcall DirectComposition::CInkMarshaler::CInkMarshaler(
        DirectComposition::CInkMarshaler *this)
{
  DirectComposition::CInkMarshaler *result; // rax

  DirectComposition::CContentMarshaler::CContentMarshaler(this, 88LL);
  *(_QWORD *)this = &DirectComposition::CInkMarshaler::`vftable';
  result = this;
  *((_BYTE *)this + 120) = 1;
  *((_QWORD *)this + 18) = 36LL;
  return result;
}
