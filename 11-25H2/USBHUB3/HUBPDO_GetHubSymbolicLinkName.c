/*
 * XREFs of HUBPDO_GetHubSymbolicLinkName @ 0x140018D20
 * Callers:
 *     HUBPDO_GetHubName @ 0x140018BA0 (HUBPDO_GetHubName.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

void __fastcall HUBPDO_GetHubSymbolicLinkName(__int64 a1, struct _UNICODE_STRING *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx

  RtlInitUnicodeString(a2, 0LL);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 2136);
    if ( v5 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v5,
        a2);
  }
}
