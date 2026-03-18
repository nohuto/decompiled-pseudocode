/*
 * XREFs of Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x14007A300
 * Callers:
 *     <none>
 * Callees:
 *     XilCommonBuffer_ReleaseBuffer @ 0x14001F74C (XilCommonBuffer_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_q @ 0x14002C6F8 (WPP_RECORDER_SF_q.c)
 *     Controller_ReleaseWdfPowerReferenceForDebugger @ 0x140041E4C (Controller_ReleaseWdfPowerReferenceForDebugger.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     Controller_UpdateSqmDatapoints @ 0x140079410 (Controller_UpdateSqmDatapoints.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceSelfManagedIoCleanup(__int64 a1)
{
  char v1; // di
  int v2; // edx
  __int64 *v3; // rbx
  void *v4; // rcx
  __int64 v5; // rdx

  v1 = a1;
  v3 = *(__int64 **)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                       WdfDriverGlobals,
                       a1,
                       off_14006B240)
                   + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v2) = 5;
    WPP_RECORDER_SF_q(v3[9], v2, 4, 62, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v1);
  }
  v4 = (void *)v3[124];
  if ( v4 )
  {
    PoUnregisterPowerSettingCallback(v4);
    v3[124] = 0LL;
  }
  Controller_ReleaseWdfPowerReferenceForDebugger((__int64)v3);
  v5 = v3[107];
  if ( v5 )
  {
    XilCommonBuffer_ReleaseBuffer(v3[15], v5);
    v3[107] = 0LL;
  }
  Controller_UpdateSqmDatapoints(v3);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 1664))(WdfDriverGlobals, v3[1]);
}
