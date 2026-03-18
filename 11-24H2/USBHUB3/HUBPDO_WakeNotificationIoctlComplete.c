/*
 * XREFs of HUBPDO_WakeNotificationIoctlComplete @ 0x14001C970
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBPDO_CompleteWaitWake @ 0x14001518C (HUBPDO_CompleteWaitWake.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall HUBPDO_WakeNotificationIoctlComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  struct _KEVENT *v7; // rax
  _UNKNOWN **result; // rax
  int v9; // [rsp+28h] [rbp-10h]

  v4 = *(_DWORD *)(a3 + 8);
  HUBPDO_CompleteWaitWake(a4);
  v7 = (struct _KEVENT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                           WdfDriverGlobals,
                           a1,
                           off_14006C310);
  KeSetEvent(v7 + 1, 0, 0);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = v4;
    return (_UNKNOWN **)WPP_RECORDER_SF_d(
                          *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                          4u,
                          5u,
                          0x98u,
                          (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
                          v9);
  }
  return result;
}
