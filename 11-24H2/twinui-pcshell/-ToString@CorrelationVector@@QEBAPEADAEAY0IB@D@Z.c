/*
 * XREFs of ?ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z @ 0x180178670
 * Callers:
 *     ?StartActivity@HideFlyout@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@@Z @ 0x1805F6260 (-StartActivity@HideFlyout@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@@Z.c)
 *     ?StartActivity@ShowFlyout@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@W4LaunchSource@2@@Z @ 0x1805F6358 (-StartActivity@ShowFlyout@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@W4LaunchSource@2@@Z.c)
 *     ?LaunchAppWithProgIdAndUriWithOpenWithSuppressed@ProtocolLauncher@Utils@@CAXPEBG0AEBVCorrelationVector@@@Z @ 0x1805F86CC (-LaunchAppWithProgIdAndUriWithOpenWithSuppressed@ProtocolLauncher@Utils@@CAXPEBG0AEBVCorrelation.c)
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1805F886C (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 *     ?StartActivity@UriLaunch@MeetAndChatTelemetry@@QEAAXPEBG0AEBVCorrelationVector@@@Z @ 0x1805F8F98 (-StartActivity@UriLaunch@MeetAndChatTelemetry@@QEAAXPEBG0AEBVCorrelationVector@@@Z.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1805FAAD8 (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 *     ?StartActivity@FlyoutWindowRegistered@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@@Z @ 0x1805FBC1C (-StartActivity@FlyoutWindowRegistered@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@@Z.c)
 * Callees:
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x180178A84 (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 */

char *__fastcall CorrelationVector::ToString(TraceLoggingCorrelationVector **this, char (*a2)[129])
{
  TraceLoggingCorrelationVector::ToStringImpl(
    *this,
    _InterlockedExchangeAdd64((volatile signed __int64 *)*this + 17, 0LL),
    (char *)a2);
  return *a2;
}
