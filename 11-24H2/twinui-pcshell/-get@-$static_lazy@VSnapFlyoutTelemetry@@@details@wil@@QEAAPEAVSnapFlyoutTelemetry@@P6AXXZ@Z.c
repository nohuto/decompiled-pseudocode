/*
 * XREFs of ?get@?$static_lazy@VSnapFlyoutTelemetry@@@details@wil@@QEAAPEAVSnapFlyoutTelemetry@@P6AXXZ@Z @ 0x1802B1960
 * Callers:
 *     ?InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801C52D0 (-InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_.c)
 *     ?IsEnabled@SnapFlyoutTelemetry@@SA_NE_K@Z @ 0x1802B1920 (-IsEnabled@SnapFlyoutTelemetry@@SA_NE_K@Z.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync$_ResumeCoro$1 @ 0x1805C0130 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_1805C0130.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync$_ResumeCoro$1 @ 0x1805C1340 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_1805C1340.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x180224BF4 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<SnapFlyoutTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(&`SnapFlyoutTelemetry::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8) && v6 )
  {
    qword_1808CC528 = 0LL;
    dword_1808CC534 = 0;
    v8 = &qword_1808CC520;
    qword_1808CC520 = (__int64)&IamTraceLogging::`vftable';
    v4 = &`SnapFlyoutTelemetry::Instance'::`2'::wrapper;
    byte_1808CC530 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v8;
}
