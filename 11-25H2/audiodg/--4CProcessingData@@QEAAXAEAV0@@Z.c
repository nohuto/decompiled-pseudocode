/*
 * XREFs of ??4CProcessingData@@QEAAXAEAV0@@Z @ 0x14003611C
 * Callers:
 *     ?NonRTGrabSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ @ 0x140035FBC (-NonRTGrabSafePointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ.c)
 *     ?NonRTCancelSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAXXZ @ 0x140081560 (-NonRTCancelSafePointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAXXZ.c)
 * Callees:
 *     ?CopyAPOList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z @ 0x14000B2DC (-CopyAPOList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z.c)
 *     ?CopyEndpointList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEBV23@@Z @ 0x14000CAE8 (-CopyEndpointList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTrai.c)
 */

void __fastcall CProcessingData::operator=(__int64 a1, __int64 a2)
{
  __int64 *v4; // rcx
  __int64 *v5; // rcx

  CProcessingData::CopyAPOList((__int64 *)a1, (__int64 **)a1, a2);
  CProcessingData::CopyEndpointList(v4, (__int64 **)(a1 + 48), a2 + 48);
  CProcessingData::CopyEndpointList(v5, (__int64 **)(a1 + 96), a2 + 96);
}
