/*
 * XREFs of ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1805F83B4
 * Callers:
 *     ?LaunchAppWithProgIdAndUriWithOpenWithSuppressed@ProtocolLauncher@Utils@@CAXPEBG0AEBVCorrelationVector@@@Z @ 0x1805F86CC (-LaunchAppWithProgIdAndUriWithOpenWithSuppressed@ProtocolLauncher@Utils@@CAXPEBG0AEBVCorrelation.c)
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1805F886C (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 *     ??0WindowRegistration@@QEAA@PEAUHWND__@@AEBVCorrelationVector@@@Z @ 0x1805FA770 (--0WindowRegistration@@QEAA@PEAUHWND__@@AEBVCorrelationVector@@@Z.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1805FAAD8 (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x1805FB960 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 * Callees:
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x180178A84 (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 *     ?reset@?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAXPEAVTraceLoggingCorrelationVector@@@Z @ 0x18022566C (-reset@-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVe.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?Extend@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x1805F8428 (-Extend@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 */

void **__fastcall CorrelationVector::Extend(TraceLoggingCorrelationVector **a1, void **a2)
{
  bool v3; // dl
  struct TraceLoggingCorrelationVector *v4; // rax
  char v6[144]; // [rsp+20h] [rbp-A8h] BYREF

  TraceLoggingCorrelationVector::ToStringImpl(
    *a1,
    _InterlockedExchangeAdd64((volatile signed __int64 *)*a1 + 17, 0LL),
    v6);
  v4 = TraceLoggingCorrelationVector::Extend(v6, v3);
  *a2 = 0LL;
  std::unique_ptr<TraceLoggingCorrelationVector>::reset(a2, v4);
  return a2;
}
