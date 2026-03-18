/*
 * XREFs of ??0CGenericInkMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B3FC
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CContentMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C00B0674 (--0CContentMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CGenericInkMarshaler *__fastcall DirectComposition::CGenericInkMarshaler::CGenericInkMarshaler(
        DirectComposition::CGenericInkMarshaler *this)
{
  DirectComposition::CGenericInkMarshaler *result; // rax

  DirectComposition::CContentMarshaler::CContentMarshaler(this, 66LL);
  *(_QWORD *)this = &DirectComposition::CGenericInkMarshaler::`vftable';
  *((_BYTE *)this + 64) = 1;
  *((_QWORD *)this + 11) = 1LL;
  *((_BYTE *)this + 104) = 1;
  *((_QWORD *)this + 16) = 1LL;
  result = this;
  *((_BYTE *)this + 180) = 0;
  return result;
}
