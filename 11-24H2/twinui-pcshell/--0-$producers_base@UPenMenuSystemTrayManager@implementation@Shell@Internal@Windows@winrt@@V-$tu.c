/*
 * XREFs of ??0?$producers_base@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIPenMenuSystemTrayManager@@@std@@@impl@winrt@@QEAA@XZ @ 0x1800744C4
 * Callers:
 *     ??0SnapLayoutProvider@@QEAA@PEAUIImmersiveMonitorManager@@@Z @ 0x180074224 (--0SnapLayoutProvider@@QEAA@PEAUIImmersiveMonitorManager@@@Z.c)
 *     ??0?$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x180149F90 (--0-$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     ??$create_and_initialize@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@$$V@impl@winrt@@YAPEAVMeetAndChatIris@implementation@Shell@Internal@Windows@1@XZ @ 0x180223714 (--$create_and_initialize@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@$$V@impl@.c)
 *     ??0PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1803F0D00 (--0PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$producer_convert@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UIImeContextMenuExperienceManager@@X@impl@winrt@@QEAA@XZ @ 0x1802C9834 (--0-$producer_convert@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UIImeC.c)
 */

_QWORD *winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,std::tuple<IPenMenuSystemTrayManager>>::producers_base<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,std::tuple<IPenMenuSystemTrayManager>>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,IImeContextMenuExperienceManager,void>::producer_convert<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,IImeContextMenuExperienceManager,void>();
  result = v0;
  *v0 = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,std::tuple<IImeContextMenuExperienceManager>>::`vftable';
  return result;
}
