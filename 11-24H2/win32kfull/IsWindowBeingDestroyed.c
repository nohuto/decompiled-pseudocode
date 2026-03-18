/*
 * XREFs of IsWindowBeingDestroyed @ 0x1400911AC
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x140062E78 (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     xxxMNMouseMove @ 0x14006DA24 (xxxMNMouseMove.c)
 *     xxxSetLayeredWindow @ 0x140090DC8 (xxxSetLayeredWindow.c)
 *     xxxCreateCaret @ 0x140091710 (xxxCreateCaret.c)
 *     UserDetachQueueFromInputWindow @ 0x1400A4408 (UserDetachQueueFromInputWindow.c)
 *     ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x140148DBC (-_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z.c)
 *     zzzComposeDesktop @ 0x140168F78 (zzzComposeDesktop.c)
 *     UserRemoveWindowedSwapChain @ 0x140169910 (UserRemoveWindowedSwapChain.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14017C3F8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x140194B60 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     NtUserSetBrokeredForeground @ 0x140219E00 (NtUserSetBrokeredForeground.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1402524E0 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     NtUserDisableImmersiveOwner @ 0x140293A90 (NtUserDisableImmersiveOwner.c)
 *     NtUserRegisterErrorReportingDialog @ 0x14029B290 (NtUserRegisterErrorReportingDialog.c)
 *     NtUserSetWindowFNID @ 0x14029F190 (NtUserSetWindowFNID.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1402AD138 (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1402AD240 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z @ 0x1402AD36C (-xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1402AD4EC (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     xxxGetSystemMenu @ 0x1402C8A74 (xxxGetSystemMenu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowBeingDestroyed(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  if ( *(char *)(v1 + 19) < 0 )
    return 1;
  if ( *(char *)(v1 + 20) < 0 )
    return 1;
  if ( *(__int16 *)(v1 + 42) < 0 )
    return 1;
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 528), 0, 0) & 1) != 0 )
      return 1;
  }
  return v2;
}
