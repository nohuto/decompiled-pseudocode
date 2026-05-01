/*
 * XREFs of ?Release@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@QEAAIXZ @ 0x1801026C4
 * Callers:
 *     ?Release@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@UEAAKXZ @ 0x18021B090 (-Release@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManag.c)
 *     ?Release@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@UEAAKXZ @ 0x18021C440 (-Release@-$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Interna.c)
 *     ?Release@?$implements@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIImeContextMenuExperienceManager@@@winrt@@UEAAKXZ @ 0x18021E6F0 (-Release@-$implements@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@Uimmer.c)
 *     ?Release@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@UEAAKXZ @ 0x180229E60 (-Release@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmers.c)
 *     ?Release@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@UEAAKXZ @ 0x1802973C0 (-Release@-$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimm.c)
 *     ?Release@?$implements@VGamingPosturePositioner@@Uimmersive_shell_component@winrt@@UIGamingPosturePositioner@@UIBasicPositioner@@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIPositionerApplicationClosePolicy@@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementWindowGroupingEvents@@Unon_agile@3@@winrt@@UEAAKXZ @ 0x180505720 (-Release@-$implements@VGamingPosturePositioner@@Uimmersive_shell_component@winrt@@UIGamingPostur.c)
 * Callees:
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x180102C90 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned __int32 v3; // edi
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)a1 + 1);
  while ( v1 >= 0 )
  {
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64(a1 + 1, v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_4;
  }
  v3 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 24));
  if ( !v3 )
    winrt::impl::weak_ref<1,1>::Release((void *)(2 * v1));
LABEL_4:
  if ( !v3 )
  {
    *((_QWORD *)a1 + 1) = 1LL;
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int64 *))(*a1 + 8))(a1);
  }
  return v3;
}
