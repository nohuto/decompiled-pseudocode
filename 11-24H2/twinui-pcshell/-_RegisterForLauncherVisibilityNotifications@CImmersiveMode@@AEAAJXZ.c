/*
 * XREFs of ?_RegisterForLauncherVisibilityNotifications@CImmersiveMode@@AEAAJXZ @ 0x18008BBB0
 * Callers:
 *     ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x18008D060 (-CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@.c)
 * Callees:
 *     ?ResultFromWin32FromStatus@@YAJJ@Z @ 0x18008A0D4 (-ResultFromWin32FromStatus@@YAJJ@Z.c)
 */

signed int __fastcall CImmersiveMode::_RegisterForLauncherVisibilityNotifications(CImmersiveMode *this)
{
  NTSTATUS v2; // eax
  unsigned int v4; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  v2 = RtlQueryWnfStateData(&v4, WNF_IMSN_LAUNCHERVISIBILITY, CImmersiveMode::ImmersiveLauncherWNFCallback, this, 0LL);
  if ( v2 >= 0 )
    v2 = RtlSubscribeWnfStateChangeNotification(
           (char *)this + 360,
           WNF_IMSN_LAUNCHERVISIBILITY,
           v4,
           CImmersiveMode::ImmersiveLauncherWNFCallback,
           this,
           0LL,
           0,
           1);
  return ResultFromWin32FromStatus(v2);
}
