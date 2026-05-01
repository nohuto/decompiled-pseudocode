/*
 * XREFs of ??4?$com_ptr@VSnapFlyoutHost@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801C50EC
 * Callers:
 *     ?InitializeSnapFlyoutHost@CShellSnapComponent@@AEAAJXZ @ 0x18029DEE0 (-InitializeSnapFlyoutHost@CShellSnapComponent@@AEAAJXZ.c)
 *     ?ShutdownSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x1805A0B94 (-ShutdownSnapFlyout@CShellSnapComponent@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1801BC9A8 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 */

__int64 *__fastcall winrt::com_ptr<SnapFlyoutHost>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax

  if ( a1 != a2 )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(a1);
    v4 = *a2;
    *a2 = 0LL;
    *a1 = v4;
  }
  return a1;
}
