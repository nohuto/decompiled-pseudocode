/*
 * XREFs of ??0SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180299638
 * Callers:
 *     ??$make_self@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?AU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@0@XZ @ 0x180221E9C (--$make_self@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@.c)
 * Callees:
 *     ??0?$producers_base@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@V?$tuple@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@UIControlWindow@23456@@std@@@impl@winrt@@QEAA@XZ @ 0x180299778 (--0-$producers_base@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winr.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::SnapFlyoutInstance(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9

  winrt::impl::producers_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,std::tuple<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>>::producers_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,std::tuple<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>>(
    (char *)this + 16,
    a2,
    a3,
    this);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v3 + 8) = 1LL;
  *(_QWORD *)v3 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::`vftable';
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 56) = 0LL;
  *(_QWORD *)(v3 + 64) = 0LL;
  *(_QWORD *)(v3 + 72) = 0LL;
  *(_QWORD *)(v3 + 80) = 0LL;
  *(_QWORD *)(v3 + 88) = 0LL;
  *(_QWORD *)(v3 + 96) = 0LL;
  *(_QWORD *)(v3 + 104) = 0LL;
  *(_QWORD *)(v3 + 112) = 0LL;
  *(_QWORD *)(v3 + 120) = 0LL;
  *(_QWORD *)(v3 + 128) = 0LL;
  *(_QWORD *)(v3 + 136) = 0LL;
  *(_QWORD *)(v3 + 144) = 0LL;
  *(_QWORD *)(v3 + 152) = 0LL;
  *(_QWORD *)(v3 + 160) = 0LL;
  *(_QWORD *)(v3 + 168) = 0LL;
  *(_QWORD *)(v3 + 176) = 0LL;
  *(_QWORD *)(v3 + 184) = 0LL;
  *(_QWORD *)(v3 + 192) = 0LL;
  *(_QWORD *)(v3 + 200) = 0LL;
  *(_QWORD *)(v3 + 208) = 0LL;
  *(_QWORD *)(v3 + 216) = 0LL;
  *(_QWORD *)(v3 + 224) = 0LL;
  *(_QWORD *)(v3 + 232) = 0LL;
  *(_QWORD *)(v3 + 240) = 0LL;
  *(_QWORD *)(v3 + 248) = 0LL;
  *(_QWORD *)(v3 + 256) = 0LL;
  *(_QWORD *)(v3 + 264) = 0LL;
  *(_QWORD *)(v3 + 272) = 0LL;
  *(_QWORD *)(v3 + 280) = 0LL;
  *(_QWORD *)(v3 + 288) = 0LL;
  *(_QWORD *)(v3 + 296) = 0LL;
  *(_QWORD *)(v3 + 304) = 0LL;
  *(_QWORD *)(v3 + 312) = 0LL;
  *(_DWORD *)(v3 + 320) = 0;
  *(_QWORD *)(v3 + 328) = 0LL;
  *(_QWORD *)(v3 + 336) = 0LL;
  *(_OWORD *)(v3 + 344) = 0LL;
  *(_QWORD *)(v3 + 360) = 0LL;
  *(_QWORD *)(v3 + 368) = 0LL;
  return v3;
}
