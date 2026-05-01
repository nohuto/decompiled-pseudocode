/*
 * XREFs of ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x1801786A0
 * Callers:
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805F5FBC (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1805F886C (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1805FAAD8 (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x1805FB960 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 * Callees:
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x18017872C (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ?IncrementImpl@TraceLoggingCorrelationVector@@AEAA_KXZ @ 0x1801789A8 (-IncrementImpl@TraceLoggingCorrelationVector@@AEAA_KXZ.c)
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x180178A84 (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

TraceLoggingCorrelationVector **__fastcall CorrelationVector::Increment(TraceLoggingCorrelationVector **this)
{
  TraceLoggingCorrelationVector *v1; // rbx
  unsigned __int64 v3; // rax
  struct TraceLoggingCorrelationVector *v4; // rax
  TraceLoggingCorrelationVector *v5; // rcx
  char Str[144]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = *this;
  v3 = TraceLoggingCorrelationVector::IncrementImpl(*this);
  TraceLoggingCorrelationVector::ToStringImpl(v1, v3, Str);
  v4 = TraceLoggingCorrelationVector::Set(Str, 0);
  v5 = *this;
  *this = v4;
  if ( v5 )
    operator delete(v5, (const struct std::nothrow_t *)0x90);
  return this;
}
