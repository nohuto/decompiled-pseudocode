/*
 * XREFs of PopFxUpdateDeviceIdleTimer @ 0x14049A8A4
 * Callers:
 *     PopFxProcessWork @ 0x1403172E0 (PopFxProcessWork.c)
 *     PoFxSetDeviceIdleTimeout @ 0x14049A830 (PoFxSetDeviceIdleTimeout.c)
 * Callees:
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140377C48 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxAddLogEntry @ 0x1403782D8 (PopFxAddLogEntry.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x14046E034 (PopFxScheduleDeviceIdleTimer.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopFxUpdateDeviceIdleTimer(__int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  _m_prefetchw((const void *)(a1 + 32));
  v2 = *(_DWORD *)(a1 + 32);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v2, v2);
  }
  while ( v3 != v2 );
  if ( (v2 & 4) != 0 )
  {
    LOBYTE(v2) = KeCancelTimer((PKTIMER)(a1 + 408));
    if ( (_BYTE)v2 )
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFB);
      LOBYTE(v2) = PopFxScheduleDeviceIdleTimer(a1);
      if ( !(_BYTE)v2 )
      {
        PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(a1 + 48), 0, 0);
        guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 192), v4, v5, v6);
        _InterlockedOr((volatile signed __int32 *)(a1 + 32), 0x40u);
        v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 40), 0xFFFFFFFF);
        if ( v2 != 1 )
          LOBYTE(v2) = (unsigned __int8)PopFxAddLogEntry(*(_QWORD *)(a1 + 48), 0, 17, 0LL);
      }
    }
  }
  return v2;
}
