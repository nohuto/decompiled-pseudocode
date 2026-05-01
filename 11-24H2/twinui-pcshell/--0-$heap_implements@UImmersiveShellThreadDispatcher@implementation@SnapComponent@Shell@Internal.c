/*
 * XREFs of ??0?$heap_implements@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802C1ABC
 * Callers:
 *     ??$make@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1802C1A6C (--$make@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x180217FEC (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ??0?$producers_base@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@V?$tuple@UImmersiveShellThreadDispatcher@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x18059C4EC (--0-$producers_base@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@.c)
 */

__int64 __fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher>::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher>(
        __int64 a1)
{
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,std::tuple<winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>>::producers_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,std::tuple<winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>>(a1 + 16);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_QWORD *)a1 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher>::`vftable';
  *(_DWORD *)(a1 + 24) = SHTaskPoolGetUniqueContext();
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((_QWORD *)(a1 + 32));
  *(_QWORD *)a1 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher>::`vftable';
  return a1;
}
