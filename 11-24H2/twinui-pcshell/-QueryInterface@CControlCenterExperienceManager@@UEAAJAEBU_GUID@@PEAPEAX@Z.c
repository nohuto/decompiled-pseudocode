/*
 * XREFs of ?QueryInterface@CControlCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180219C10
 * Callers:
 *     ?QueryInterface@CControlCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803760B0 (-QueryInterface@CControlCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803760C0 (-QueryInterface@CControlCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803760D0 (-QueryInterface@CControlCenterExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803760E0 (-QueryInterface@CControlCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803760F0 (-QueryInterface@CControlCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180376100 (-QueryInterface@CControlCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180376110 (-QueryInterface@CControlCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180376120 (-QueryInterface@CControlCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180376130 (-QueryInterface@CControlCenterExperienceManager@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180376140 (-QueryInterface@CControlCenterExperienceManager@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CControlCenterExperienceManager::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputSwitchHost,IInputHostLayoutChanges>>(
           this,
           a2,
           a3);
}
