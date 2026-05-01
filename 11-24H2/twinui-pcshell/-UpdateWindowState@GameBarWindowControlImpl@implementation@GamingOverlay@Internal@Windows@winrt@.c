/*
 * XREFs of ?UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@W4GameBarWindowState@3456@@Z @ 0x180228494
 * Callers:
 *     ?HideInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180225588 (-HideInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA.c)
 *     ?OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x18023FCC0 (-OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEA.c)
 *     ?OnViewDestroyed@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJXZ @ 0x180240318 (-OnViewDestroyed@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@Q.c)
 *     ?ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180364A70 (-ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$get_weak@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@?$root_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@56789@UITapInvokeSettingTester@56789@@impl@winrt@@IEAA?AU?$weak_ref@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@2@XZ @ 0x1800D3220 (--$get_weak@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@-$root_implements@UTouchKey.c)
 *     _lambda_a9532b1fa26d741b99fb0a1f5016c730_::__lambda_a9532b1fa26d741b99fb0a1f5016c730_ @ 0x1802CE2C0 (_lambda_a9532b1fa26d741b99fb0a1f5016c730_--__lambda_a9532b1fa26d741b99fb0a1f5016c730_.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c680e10b8be88f9d1d2ee302a6ab3748___ @ 0x180361924 (Windows--Internal--ComTaskPool--QueueTask__lambda_c680e10b8be88f9d1d2ee302a6ab3748___.c)
 *     _lambda_c680e10b8be88f9d1d2ee302a6ab3748_::_lambda_c680e10b8be88f9d1d2ee302a6ab3748_ @ 0x180361BF8 (_lambda_c680e10b8be88f9d1d2ee302a6ab3748_--_lambda_c680e10b8be88f9d1d2ee302a6ab3748_.c)
 */

void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::UpdateWindowState(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[24]; // [rsp+28h] [rbp-30h] BYREF
  int v10; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v10 = a3;
  if ( *(_DWORD *)(a1 + 60) != a3 )
  {
    *(_DWORD *)(a1 + 60) = a3;
    winrt::impl::root_implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>::get_weak<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>(
      a1,
      &v8);
    v4 = lambda_c680e10b8be88f9d1d2ee302a6ab3748_::_lambda_c680e10b8be88f9d1d2ee302a6ab3748_(v9, a1, &v8, &v10);
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_c680e10b8be88f9d1d2ee302a6ab3748___(
           v6,
           v5,
           *(unsigned int *)(a1 + 184),
           v4);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x388,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v7);
    lambda_a9532b1fa26d741b99fb0a1f5016c730_::__lambda_a9532b1fa26d741b99fb0a1f5016c730_(v9);
    if ( v8 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
  }
}
