/*
 * XREFs of ??0CSharedSectionBaseMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C00AD7B4
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B74C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CSharedSectionBaseMarshaler::CSharedSectionBaseMarshaler(_QWORD *a1, __int64 a2)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler(a1, a2);
  *a1 = &DirectComposition::CSharedSectionBaseMarshaler::`vftable';
  return a1;
}
