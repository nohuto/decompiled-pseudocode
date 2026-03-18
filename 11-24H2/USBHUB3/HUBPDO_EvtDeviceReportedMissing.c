/*
 * XREFs of HUBPDO_EvtDeviceReportedMissing @ 0x140082A30
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddDsmEvent @ 0x14000A820 (HUBSM_AddDsmEvent.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Cleanup @ 0x1400148BC (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Cleanup.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceReportedMissing(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006C0F8);
  HUBSM_AddDsmEvent(*(_QWORD *)(v1 + 24), 4083LL);
  return EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Cleanup(*(_WORD **)(v1 + 24), v2);
}
