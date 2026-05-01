/*
 * XREFs of ??0?$heap_implements@V?$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1804F8360
 * Callers:
 *     ??$make@V?$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x1804F81EC (--$make@V-$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@$$V@winrt@@YA-A_PXZ.c)
 * Callees:
 *     ??0?$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@QEAA@XZ @ 0x1804F851C (--0-$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@QEAA@XZ.c)
 */

_QWORD *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>(
        _QWORD *a1)
{
  wil::details::module_count_wrapper<GamingPosturePositioner>::module_count_wrapper<GamingPosturePositioner>();
  *a1 = &winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IGamingPosturePositioner,void>'};
  a1[1] = &GamingPosturePositioner::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IBasicPositioner,void>'};
  a1[2] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IShellPositionerViewHandoff,void>'};
  a1[3] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IImmersiveMonitorNotification,void>'};
  a1[4] = &GamingPosturePositioner::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IPositionerApplicationClosePolicy,void>'};
  a1[5] = &wil::details::module_count_wrapper<GamingPosturePositioner>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IApplicationViewChangeListener,void>'};
  a1[6] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IInternalFullScreenHandler,void>'};
  a1[7] = &GamingPosturePositioner::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IWindowManagementShowMoveSizeEvents,void>'};
  a1[8] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IWindowManagementWindowGroupingEvents,void>'};
  a1[9] = &GamingPosturePositioner::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  a1[10] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  a1[11] = &GamingPosturePositioner::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  a1[13] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vftable';
  return a1;
}
