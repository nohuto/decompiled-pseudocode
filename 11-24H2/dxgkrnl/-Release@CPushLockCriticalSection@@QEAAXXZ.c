/*
 * XREFs of ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x14002F0F0
 * Callers:
 *     ?DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ @ 0x14002EC40 (-DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ.c)
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x14002ED7C (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?ResetAdapterCollection@CTokenManager@@UEAAXXZ @ 0x140064D50 (-ResetAdapterCollection@CTokenManager@@UEAAXXZ.c)
 *     ?DestroySyncContextForFlipManager@CAdapterCollection@@QEAAXAEAU_LUID@@PEAUFlipManagerObject@@PEA_N@Z @ 0x14009A6BC (-DestroySyncContextForFlipManager@CAdapterCollection@@QEAAXAEAU_LUID@@PEAUFlipManagerObject@@PEA.c)
 *     ?FreeFlipAwayFence@CAdapterCollection@@QEAAX_K@Z @ 0x14009A7B0 (-FreeFlipAwayFence@CAdapterCollection@@QEAAX_K@Z.c)
 *     ?IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVENT@@_K@Z @ 0x14009A868 (-IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVE.c)
 *     ?IssueFlipManagerWaitForFlipAway@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@_K@Z @ 0x14009A998 (-IssueFlipManagerWaitForFlipAway@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSIT.c)
 *     ?IssueFlipManagerWaitForFrameRenderingComplete@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@_KAEBU_LUID@@@Z @ 0x14009AA5C (-IssueFlipManagerWaitForFrameRenderingComplete@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@_.c)
 *     ?PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x14009AB20 (-PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPushLockCriticalSection::Release(CPushLockCriticalSection *this)
{
  if ( *((_BYTE *)this + 8) )
    ExReleasePushLockExclusiveEx(this, 0LL);
  else
    ExReleasePushLockSharedEx(this, 0LL);
}
