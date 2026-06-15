/*
 * XREFs of ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x18006D998
 * Callers:
 *     _CVolumeHardware::UpdateMasterVolumeLevel_::_1_::dtor$0 @ 0x180170B38 (_CVolumeHardware--UpdateMasterVolumeLevel_--_1_--dtor$0.c)
 *     _CVolumeSoftware::UpdateMasterVolumeLevel_::_1_::dtor$1 @ 0x180170B5C (_CVolumeSoftware--UpdateMasterVolumeLevel_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>(void **a1)
{
  free(*a1);
  *a1 = 0LL;
}
