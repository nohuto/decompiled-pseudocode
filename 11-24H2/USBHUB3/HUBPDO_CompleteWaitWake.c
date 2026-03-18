/*
 * XREFs of HUBPDO_CompleteWaitWake @ 0x14001518C
 * Callers:
 *     HUBPDO_WakeNotificationIoctlComplete @ 0x14001C970 (HUBPDO_WakeNotificationIoctlComplete.c)
 *     HUBDSM_AckingPortEventInD3Cold @ 0x14001F950 (HUBDSM_AckingPortEventInD3Cold.c)
 *     HUBDSM_CompletingWaitWakeOnDetachDuringSuspending @ 0x1400214B0 (HUBDSM_CompletingWaitWakeOnDetachDuringSuspending.c)
 *     HUBDSM_DisarmingDeviceForWakeOnD0Entry @ 0x1400221C0 (HUBDSM_DisarmingDeviceForWakeOnD0Entry.c)
 *     HUBDSM_WaitingForD0EntryOnHwWake @ 0x140025E80 (HUBDSM_WaitingForD0EntryOnHwWake.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

void __fastcall HUBPDO_CompleteWaitWake(__int64 a1)
{
  KIRQL v2; // bl
  __int64 v3; // rax
  int v4; // esi
  int v5; // [rsp+28h] [rbp-10h]

  v2 = KfRaiseIrql(2u);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 688))(
         WdfDriverGlobals,
         v3,
         0LL);
  KeLowerIrql(v2);
  if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      3u,
      5u,
      0x97u,
      (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
      v5);
  }
}
