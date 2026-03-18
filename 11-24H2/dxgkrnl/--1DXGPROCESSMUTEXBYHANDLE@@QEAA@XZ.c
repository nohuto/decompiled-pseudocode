/*
 * XREFs of ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x140296CF8
 * Callers:
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x14018A314 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1401B227C (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1401EE5D0 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1401EE850 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1401EF060 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1401EF1F0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkQueryStatisticsInternal @ 0x140295A90 (DxgkQueryStatisticsInternal.c)
 *     DxgkQueryProcessOfferInfo @ 0x1402989F0 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1402997B0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryVideoMemoryInfo @ 0x14034FC90 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1403ECBA0 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkTrimProcessCommitment @ 0x1403ED910 (DxgkTrimProcessCommitment.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x140400F4C (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 * Callees:
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1402984DC (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE(DXGPROCESSMUTEXBYHANDLE *this)
{
  if ( *((_BYTE *)this + 28) )
    DXGPROCESSMUTEXBYHANDLE::Release(this);
}
