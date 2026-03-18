/*
 * XREFs of ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x140296D14
 * Callers:
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1401B227C (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1401EE5D0 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1401EE850 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1401EF1F0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkQueryStatisticsInternal @ 0x140295A90 (DxgkQueryStatisticsInternal.c)
 *     DxgkQueryProcessOfferInfo @ 0x1402989F0 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1402997B0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryVideoMemoryInfo @ 0x14034FC90 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1403ECBA0 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkTrimProcessCommitment @ 0x1403ED910 (DxgkTrimProcessCommitment.c)
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
