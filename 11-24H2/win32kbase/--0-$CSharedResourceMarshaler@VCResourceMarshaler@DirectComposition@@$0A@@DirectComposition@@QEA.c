/*
 * XREFs of ??0?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400737EC
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073264 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,0>::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,0>(
        __int64 a1,
        __int64 a2,
        int a3)
{
  _QWORD *v3; // rcx
  __int64 v4; // r9

  DirectComposition::CResourceMarshaler::CResourceMarshaler(a1, a3);
  v3[7] = v4;
  *v3 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,0>::`vftable';
  return v3;
}
