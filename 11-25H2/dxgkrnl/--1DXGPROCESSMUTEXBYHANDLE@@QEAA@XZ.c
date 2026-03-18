/*
 * XREFs of ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x14028A734
 * Callers:
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x140188004 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1401AFCCC (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1401E8BB0 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1401E8E30 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1401E95E0 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1401E9770 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkQueryStatisticsInternal @ 0x1402894D0 (DxgkQueryStatisticsInternal.c)
 *     DxgkTrimProcessCommitment @ 0x1403093F0 (DxgkTrimProcessCommitment.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x140309780 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkQueryVideoMemoryInfo @ 0x140309910 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x14030A210 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryProcessOfferInfo @ 0x14030A770 (DxgkQueryProcessOfferInfo.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x140408694 (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 * Callees:
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x14033A568 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE(DXGPROCESSMUTEXBYHANDLE *this)
{
  if ( *((_BYTE *)this + 28) )
    DXGPROCESSMUTEXBYHANDLE::Release(this);
}
