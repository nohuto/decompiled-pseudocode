/*
 * XREFs of ??0CDataSourceReaderMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B390
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B74C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CDataSourceReaderMarshaler *__fastcall DirectComposition::CDataSourceReaderMarshaler::CDataSourceReaderMarshaler(
        DirectComposition::CDataSourceReaderMarshaler *this)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 51LL);
  *(_QWORD *)this = &DirectComposition::CDataSourceReaderMarshaler::`vftable';
  return this;
}
