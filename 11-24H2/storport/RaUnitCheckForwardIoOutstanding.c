/*
 * XREFs of RaUnitCheckForwardIoOutstanding @ 0x140054AEC
 * Callers:
 *     GatewayRegisterForEmptyNotification @ 0x1400076AC (GatewayRegisterForEmptyNotification.c)
 *     RaidUnitCompleteIrpRequest @ 0x14000B1C0 (RaidUnitCompleteIrpRequest.c)
 *     RaidInsertDeviceQueue @ 0x140013CA0 (RaidInsertDeviceQueue.c)
 *     RiGetEnqueueReason @ 0x140014570 (RiGetEnqueueReason.c)
 *     RaidUnitPendingIrpDpcRoutine @ 0x14003C390 (RaidUnitPendingIrpDpcRoutine.c)
 *     RaUnitWaitForForwardIoQuiescence @ 0x140056320 (RaUnitWaitForForwardIoQuiescence.c)
 *     GatewayWaitForForwardIoWithTimeout @ 0x1400A5F18 (GatewayWaitForForwardIoWithTimeout.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

char __fastcall RaUnitCheckForwardIoOutstanding(__int64 a1)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx

  if ( *(_QWORD *)(a1 + 32)
    && RaidIsUnitControlSupported(a1, 31)
    && ((v2 = *(_DWORD **)(a1 + 24), *v2 != 1094997074)
      ? (*v2 != 1314275652
       ? (v3 = 0LL)
       : (v3 = (__int64)(v2 + 42)))
      : (v3 = (__int64)(v2 + 94)),
        (int)RaCallMiniportUnitControl(v3) >= 0) )
  {
    return 0;
  }
  else
  {
    return 0;
  }
}
