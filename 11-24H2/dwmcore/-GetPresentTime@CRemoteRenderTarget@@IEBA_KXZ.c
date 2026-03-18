/*
 * XREFs of ?GetPresentTime@CRemoteRenderTarget@@IEBA_KXZ @ 0x180280180
 * Callers:
 *     ?GetStats@CRemoteRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z @ 0x1802801B0 (-GetStats@CRemoteRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510 (-GetCurrentFrameId@@YA_KXZ.c)
 */

unsigned __int64 __fastcall CRemoteRenderTarget::GetPresentTime(CRemoteRenderTarget *this)
{
  CGlobalComposition *CurrentFrameId; // rax
  __int64 v2; // rcx

  CurrentFrameId = GetCurrentFrameId();
  if ( *(CGlobalComposition **)(v2 + 2664) == CurrentFrameId )
    return *(_QWORD *)(v2 + 2656);
  else
    return 0LL;
}
