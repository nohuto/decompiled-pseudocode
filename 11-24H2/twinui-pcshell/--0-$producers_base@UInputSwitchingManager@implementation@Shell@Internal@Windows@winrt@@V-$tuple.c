/*
 * XREFs of ??0?$producers_base@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIInputSwitchExperienceManager@@@std@@@impl@winrt@@QEAA@XZ @ 0x180293810
 * Callers:
 *     ??0InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180149308 (--0InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$make_self@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?AU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x18029377C (--$make_self@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@$$V@winrt@@YA-A.c)
 * Callees:
 *     ??0?$producer_convert@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowFactoryInternal@345@X@impl@winrt@@QEAA@XZ @ 0x180293834 (--0-$producer_convert@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UITabP.c)
 */

_QWORD *winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager,std::tuple<IInputSwitchExperienceManager>>::producers_base<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager,std::tuple<IInputSwitchExperienceManager>>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal,void>::producer_convert<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal,void>();
  result = v0;
  *v0 = &Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *> *>::`vftable';
  return result;
}
