/*
 * XREFs of ?CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801FF744
 * Callers:
 *     ?InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801C52D0 (-InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_.c)
 *     SnapFlyoutHost::InternalShutdownAsync$_ResumeCoro$1 @ 0x180272010 (SnapFlyoutHost--InternalShutdownAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::ShowFlyoutAsync$_ResumeCoro$1 @ 0x1802726D0 (SnapFlyoutHost--ShowFlyoutAsync$_ResumeCoro$1.c)
 *     ?OnFlyoutInstancePointerEntered@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x1805B36A0 (-OnFlyoutInstancePointerEntered@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052164 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ?SnapFlyout_CancelDismissTimer@SnapFlyoutTelemetry@@SAXXZ @ 0x1801FF78C (-SnapFlyout_CancelDismissTimer@SnapFlyoutTelemetry@@SAXXZ.c)
 */

_BYTE *__fastcall SnapFlyoutHost::CancelDismissTimer(__int64 a1)
{
  __int64 *v1; // rbx
  _BYTE *result; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (__int64 *)(a1 + 64);
  if ( *(_QWORD *)(a1 + 64) )
  {
    SnapFlyoutTelemetry::SnapFlyout_CancelDismissTimer();
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel(v1);
    result = v3;
    if ( v1 != (__int64 *)v3 )
    {
      if ( *v1 )
        result = (_BYTE *)winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v1);
      *v1 = 0LL;
    }
  }
  return result;
}
