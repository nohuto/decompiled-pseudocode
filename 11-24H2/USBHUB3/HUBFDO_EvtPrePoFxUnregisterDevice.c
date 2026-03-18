/*
 * XREFs of HUBFDO_EvtPrePoFxUnregisterDevice @ 0x14000E000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     TUNNEL_UnregisterForPnPNotifications @ 0x140092868 (TUNNEL_UnregisterForPnPNotifications.c)
 */

__int64 __fastcall HUBFDO_EvtPrePoFxUnregisterDevice(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006C198);
  *(_QWORD *)(v1 + 2624) = 0LL;
  return TUNNEL_UnregisterForPnPNotifications(v1);
}
