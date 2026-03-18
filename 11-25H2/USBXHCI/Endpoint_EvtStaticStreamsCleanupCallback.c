/*
 * XREFs of Endpoint_EvtStaticStreamsCleanupCallback @ 0x140047540
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddqqq @ 0x140001E88 (WPP_RECORDER_SF_ddqqq.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1400469D4 (XilEndpoint_FreeStreamContextArray.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

void __fastcall Endpoint_EvtStaticStreamsCleanupCallback(__int64 a1)
{
  _QWORD *v1; // rbx
  int v2; // [rsp+20h] [rbp-38h]

  v1 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_14006B1A0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddqqq(
      *(_QWORD *)(*v1 + 80LL),
      *(unsigned int *)(*v1 + 144LL),
      *(unsigned __int8 *)(*(_QWORD *)(*v1 + 16LL) + 135LL),
      0x6Au,
      v2);
  XilEndpoint_FreeStreamContextArray(v1);
}
