/*
 * XREFs of ??_G?$implements@VGamingPosturePositioner@@Uimmersive_shell_component@winrt@@UIGamingPosturePositioner@@UIBasicPositioner@@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIPositionerApplicationClosePolicy@@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementWindowGroupingEvents@@Unon_agile@3@@winrt@@UEAAPEAXI@Z @ 0x1804FA0C4
 * Callers:
 *     ??_E?$implements@VGamingPosturePositioner@@Uimmersive_shell_component@winrt@@UIGamingPosturePositioner@@UIBasicPositioner@@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIPositionerApplicationClosePolicy@@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementWindowGroupingEvents@@Unon_agile@3@@winrt@@WGI@EAAPEAXI@Z @ 0x1804F9F30 (--_E-$implements@VGamingPosturePositioner@@Uimmersive_shell_component@winrt@@UIGamingPosturePosi.c)
 * Callees:
 *     ??1immersive_shell_component@winrt@@UEAA@XZ @ 0x1801CDD44 (--1immersive_shell_component@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

char *__fastcall winrt::implements<GamingPosturePositioner,winrt::immersive_shell_component,IGamingPosturePositioner,IBasicPositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IPositionerApplicationClosePolicy,IApplicationViewChangeListener,IInternalFullScreenHandler,IWindowManagementShowMoveSizeEvents,IWindowManagementWindowGroupingEvents,winrt::non_agile>::`scalar deleting destructor'(
        char *a1,
        char a2)
{
  winrt::immersive_shell_component::~immersive_shell_component((winrt::immersive_shell_component *)(a1 + 72));
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xA0);
  return a1;
}
