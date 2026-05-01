/*
 * XREFs of ??0?$producer_convert@Uimmersive_shell_component@winrt@@UIImmersiveShellComponent@@X@impl@winrt@@QEAA@XZ @ 0x18029FA54
 * Callers:
 *     ??0?$producers_base@Uimmersive_shell_component@winrt@@V?$tuple@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x18014A398 (--0-$producers_base@Uimmersive_shell_component@winrt@@V-$tuple@UIObjectWithSite@@UIServiceProvid.c)
 *     ??0?$producers_base@VTouchEdgeGestureManager@@V?$tuple@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@std@@@impl@winrt@@QEAA@XZ @ 0x18029FA10 (--0-$producers_base@VTouchEdgeGestureManager@@V-$tuple@UIInspectable@Foundation@Windows@winrt@@U.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1804179B4 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00U-$IObservableVector@UDisplayRe.c)
 *     ??0?$SimpleKeyValuePair@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U23456@$00@Internal@Collections@Foundation@Windows@@QEAA@Upermission@01234@@Z @ 0x18056BBE8 (--0-$SimpleKeyValuePair@PEAUHSTRING__@@PEAU1@U-$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@C.c)
 * Callees:
 *     ??0?$producer@Uimmersive_shell_component@winrt@@UIImmersiveShellComponent@@X@impl@winrt@@QEAA@XZ @ 0x18029FA78 (--0-$producer@Uimmersive_shell_component@winrt@@UIImmersiveShellComponent@@X@impl@winrt@@QEAA@XZ.c)
 */

_QWORD *__fastcall winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>(
        __int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  winrt::impl::producer<winrt::immersive_shell_component,IImmersiveShellComponent,void>::producer<winrt::immersive_shell_component,IImmersiveShellComponent,void>(a1);
  result = v1;
  *v1 = &TwinUI::Cortana::ISearchAppDesktopNotifications::`vftable';
  return result;
}
