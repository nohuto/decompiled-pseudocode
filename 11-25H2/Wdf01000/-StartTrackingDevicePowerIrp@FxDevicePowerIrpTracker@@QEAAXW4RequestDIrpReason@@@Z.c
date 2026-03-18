/*
 * XREFs of ?StartTrackingDevicePowerIrp@FxDevicePowerIrpTracker@@QEAAXW4RequestDIrpReason@@@Z @ 0x140018160
 * Callers:
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@W4RequestDIrpReason@@@Z @ 0x1400189DC (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x140083BC0 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall FxDevicePowerIrpTracker::StartTrackingDevicePowerIrp(
        FxDevicePowerIrpTracker *this,
        RequestDIrpReason Reason)
{
  if ( this->m_DIrpRequestedForSIrp )
    MicrosoftTelemetryAssertTriggeredArgsKM(
      "wdf01000.sys",
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&this[-1].m_History[1].Reason + 96LL) + 208LL),
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&this[-1].m_History[1].Reason + 96LL) + 204LL));
  if ( Reason == RequestD0ForS0 || Reason == RequestDxForSx )
    this->m_DIrpRequestedForSIrp = Reason;
}
