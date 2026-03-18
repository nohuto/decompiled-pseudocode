/*
 * XREFs of ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x140038420
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x140185320 (DxgkSetProcessSchedulingPriorityClass.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x14018A314 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1401B227C (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1401EE5D0 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1401EE850 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1401EF060 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1401EF1F0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkQueryProcessOfferInfo @ 0x1402989F0 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1402997B0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryVideoMemoryInfo @ 0x14034FC90 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1403ECBA0 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkTrimProcessCommitment @ 0x1403ED910 (DxgkTrimProcessCommitment.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x140400F4C (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

struct DXGPROCESS *__fastcall DXGPROCESSMUTEXBYHANDLE::GetProcess(DXGPROCESSMUTEXBYHANDLE *this)
{
  if ( !*((_BYTE *)this + 28) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1829;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_Acquired != FALSE", 1829LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_QWORD *)this + 2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1830;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pProcess != NULL", 1830LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (struct DXGPROCESS *)*((_QWORD *)this + 2);
}
