/*
 * XREFs of ?LogRequestDIrpReason@FxDevicePowerIrpTracker@@QEAAXW4RequestDIrpReason@@E@Z @ 0x140018BE4
 * Callers:
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@W4RequestDIrpReason@@@Z @ 0x1400189DC (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 *     ?PowerPolCancelingWakeForSystemSleepWakeCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140079EA0 (-PowerPolCancelingWakeForSystemSleepWakeCanceled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x140083BC0 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 */

void __fastcall FxDevicePowerIrpTracker::LogRequestDIrpReason(
        FxDevicePowerIrpTracker *this,
        RequestDIrpReason Reason,
        unsigned __int8 PowerUp)
{
  RequestDIrpReason v4; // esi
  signed __int32 AsLong; // eax
  signed __int32 v7; // ett
  FxPkgPnp *m_PkgPnp; // r8
  unsigned int *v9; // r9
  unsigned __int8 m_HistoryIndex; // dl
  __int64 v11; // r10
  __int16 v12; // cx
  FxDevicePowerIrpTracker::HistoryEntry v13; // [rsp+20h] [rbp-28h]
  unsigned int BucketArg1[2]; // [rsp+30h] [rbp-18h] BYREF

  v4 = Reason;
  if ( Reason == RequestD0ForOther )
  {
    _m_prefetchw(&this->m_D0IrpReasonHint);
    AsLong = this->m_D0IrpReasonHint.AsLong;
    do
    {
      v7 = AsLong;
      AsLong = _InterlockedCompareExchange((volatile signed __int32 *)&this->m_D0IrpReasonHint, AsLong, AsLong);
    }
    while ( v7 != AsLong );
    v4 = AsLong;
    if ( AsLong == 5 )
    {
      m_PkgPnp = this->m_PkgPnp;
      v9 = BucketArg1;
      LOBYTE(BucketArg1[0]) = 0;
      *(unsigned int *)((char *)BucketArg1 + 1) = 0;
      *(_WORD *)((char *)&BucketArg1[1] + 1) = 0;
      m_HistoryIndex = m_PkgPnp->m_PowerPolicyMachine.m_HistoryIndex;
      v11 = 8LL;
      HIBYTE(BucketArg1[1]) = 0;
      do
      {
        v12 = m_PkgPnp->m_PowerPolicyMachine.m_States.History[m_HistoryIndex] & 0x7FFF;
        if ( !v12 )
          LOBYTE(v12) = -1;
        *(_BYTE *)v9 = v12;
        m_HistoryIndex = (m_HistoryIndex + 1) & 7;
        v9 = (unsigned int *)((char *)v9 + 1);
        --v11;
      }
      while ( v11 );
      MicrosoftTelemetryAssertTriggeredArgsKM("wdf01000.sys", BucketArg1[0], BucketArg1[1]);
    }
  }
  if ( PowerUp )
    _InterlockedExchange((volatile __int32 *)&this->m_D0IrpReasonHint, 5);
  *(_QWORD *)&v13.Reason = (unsigned int)v4;
  v13.Timestamp.QuadPart = MEMORY[0xFFFFF78000000014];
  this->m_History[this->m_HistoryIndex] = v13;
  this->m_HistoryIndex = (this->m_HistoryIndex + 1) & 7;
}
