/*
 * XREFs of TUNNEL_EvtIoTargetRemoveComplete @ 0x140091750
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x14001DE04 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     TUNNEL_CloseRemoteTarget @ 0x140090DE4 (TUNNEL_CloseRemoteTarget.c)
 */

void __fastcall TUNNEL_EvtIoTargetRemoveComplete(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _DEVICE_OBJECT *v5; // rax

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_14006C0A8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*v2 + 2536LL),
      4u,
      3u,
      0x20u,
      (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
      a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(*v2 + 2760LL),
    0LL);
  TUNNEL_CloseRemoteTarget(v2, v3, v4);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(*v2 + 2760LL));
  v5 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 264))(
                                  WdfDriverGlobals,
                                  *(_QWORD *)(*v2 + 16LL));
  IoInvalidateDeviceRelations(v5, PowerRelations);
}
