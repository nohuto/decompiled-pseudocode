/*
 * XREFs of ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x14028A750
 * Callers:
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1401AFCCC (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1401E8BB0 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1401E8E30 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1401E9770 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkQueryStatisticsInternal @ 0x1402894D0 (DxgkQueryStatisticsInternal.c)
 *     DxgkTrimProcessCommitment @ 0x1403093F0 (DxgkTrimProcessCommitment.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x140309780 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkQueryVideoMemoryInfo @ 0x140309910 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x14030A210 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryProcessOfferInfo @ 0x14030A770 (DxgkQueryProcessOfferInfo.c)
 * Callees:
 *     <none>
 */

DXGPROCESSMUTEXBYHANDLE *__fastcall DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE(
        DXGPROCESSMUTEXBYHANDLE *this,
        void *a2,
        int a3)
{
  DXGPROCESSMUTEXBYHANDLE *result; // rax

  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = 0LL;
  *((_WORD *)this + 14) = 0;
  *((_BYTE *)this + 30) = 0;
  result = this;
  *((_DWORD *)this + 6) = a3;
  return result;
}
