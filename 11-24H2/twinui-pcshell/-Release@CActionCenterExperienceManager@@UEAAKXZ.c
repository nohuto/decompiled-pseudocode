/*
 * XREFs of ?Release@CActionCenterExperienceManager@@UEAAKXZ @ 0x18021B410
 * Callers:
 *     ?Release@CActionCenterExperienceManager@@W7EAAKXZ @ 0x18036F9B0 (-Release@CActionCenterExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WBA@EAAKXZ @ 0x18036F9C0 (-Release@CActionCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WBI@EAAKXZ @ 0x18036F9D0 (-Release@CActionCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WCA@EAAKXZ @ 0x18036F9E0 (-Release@CActionCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WCI@EAAKXZ @ 0x18036F9F0 (-Release@CActionCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WDA@EAAKXZ @ 0x18036FA00 (-Release@CActionCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WDI@EAAKXZ @ 0x18036FA10 (-Release@CActionCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WEA@EAAKXZ @ 0x18036FA20 (-Release@CActionCenterExperienceManager@@WEA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WEI@EAAKXZ @ 0x18036FA30 (-Release@CActionCenterExperienceManager@@WEI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WFA@EAAKXZ @ 0x18036FA40 (-Release@CActionCenterExperienceManager@@WFA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WFI@EAAKXZ @ 0x18036FA50 (-Release@CActionCenterExperienceManager@@WFI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CActionCenterExperienceManager::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>::Release(this);
}
