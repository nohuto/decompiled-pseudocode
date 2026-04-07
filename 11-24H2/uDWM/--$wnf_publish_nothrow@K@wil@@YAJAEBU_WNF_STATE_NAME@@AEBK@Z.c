/*
 * XREFs of ??$wnf_publish_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@AEBK@Z @ 0x18008361C
 * Callers:
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18003F738 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?OnAnimationComplete@CLoginTransition@@UEAAJI@Z @ 0x1800833E0 (-OnAnimationComplete@CLoginTransition@@UEAAJI@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::wnf_publish_nothrow<unsigned long>(__int64 a1, __int64 a2)
{
  return RtlPublishWnfStateData(WNF_IMSN_LOGIN_TRANSITION, 0LL, a2, 4LL) | 0x10000000;
}
