/*
 * XREFs of ?InternalShutdownAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801F9D4C
 * Callers:
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x180271B00 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 *     ?DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z @ 0x1805B2C60 (-DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z.c)
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_89d43c20f0f7bb0e860cd8602b20fbb7___::Invoke @ 0x1805B35A0 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_89d43c20f0f.c)
 *     ?OnForegroundChange@SnapFlyoutHost@@QEAAXXZ @ 0x1805B38C0 (-OnForegroundChange@SnapFlyoutHost@@QEAAXXZ.c)
 * Callees:
 *     SnapFlyoutHost::InternalShutdownAsync$_InitCoro$2 @ 0x180271FB4 (SnapFlyoutHost--InternalShutdownAsync$_InitCoro$2.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall SnapFlyoutHost::InternalShutdownAsync(__int64 a1, __int64 a2, __int64 a3)
{
  void *v6; // rax
  int v8; // [rsp+108h] [rbp+10h] BYREF

  v6 = operator new(0xC0uLL);
  v8 = 0;
  SnapFlyoutHost::InternalShutdownAsync__InitCoro_2(&v8, v6, a2, a3, a1);
  return a2;
}
