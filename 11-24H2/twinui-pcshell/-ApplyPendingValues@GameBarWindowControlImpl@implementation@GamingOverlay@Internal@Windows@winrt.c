/*
 * XREFs of ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1803620B0
 * Callers:
 *     ?OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x18023FCC0 (-OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEA.c)
 *     ?ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180364A70 (-ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ?value@?$optional@I@std@@QEGAAAEAIXZ @ 0x18021E950 (-value@-$optional@I@std@@QEGAAAEAIXZ.c)
 *     ?SetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBURect@Foundation@56@@Z @ 0x1802292BC (-SetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUw.c)
 *     ?SetIsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEB_N@Z @ 0x1802A37BC (-SetIsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 *     ?value@?$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ @ 0x1802BB330 (-value@-$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1802BB350 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?value@?$optional@_N@std@@QEGAAAEA_NXZ @ 0x1802CECD4 (-value@-$optional@_N@std@@QEGAAAEA_NXZ.c)
 *     ?SetAllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEB_N@Z @ 0x1803642D0 (-SetAllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Window.c)
 *     ?SetIsResizingEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEB_N@Z @ 0x180364554 (-SetIsResizingEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 *     ?SetMaximumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBUSize@Foundation@56@@Z @ 0x180364670 (-SetMaximumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AE.c)
 *     ?SetMinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBUSize@Foundation@56@@Z @ 0x1803647B4 (-SetMinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AE.c)
 *     ?SetWindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBI@Z @ 0x1803648F8 (-SetWindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEA.c)
 */

void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::ApplyPendingValues(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  _BYTE *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx

  if ( *(_BYTE *)(a1 + 155) )
  {
    v3 = std::optional<bool>::value(a1 + 154);
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetIsResizingEnabled(a1, v4, v3);
  }
  if ( *(_BYTE *)(a1 + 157) )
  {
    v5 = (_BYTE *)std::optional<bool>::value(a1 + 156);
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetIsTitleBarEnabled(a1, v6, v5);
  }
  if ( *(_BYTE *)(a1 + 136) )
  {
    v7 = std::optional<winrt::hstring>::value(a1 + 128);
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetMinimumSize(a1, v8, v7);
  }
  if ( *(_BYTE *)(a1 + 148) )
  {
    v9 = std::optional<winrt::hstring>::value(a1 + 140);
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetMaximumSize(a1, v10, v9);
  }
  if ( *(_BYTE *)(a1 + 124) )
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetBounds(
      a1,
      a2,
      (float *)(a1 + 108));
  if ( *(_BYTE *)(a1 + 153) )
  {
    v11 = std::optional<bool>::value(a1 + 152);
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetAllowPointerActivation(
      a1,
      v12,
      v11);
  }
  if ( *(_BYTE *)(a1 + 164) )
  {
    v13 = std::optional<unsigned int>::value(a1 + 160);
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetWindowBand(a1, v14, v13);
  }
}
