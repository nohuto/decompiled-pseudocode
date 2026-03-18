/*
 * XREFs of Endpoint_UcxEvtEndpointOkToCancelTransfers @ 0x140011150
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEvent @ 0x1400130A4 (ESM_AddEvent.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointOkToCancelTransfers(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006AFE8);
  return ESM_AddEvent((PVOID)(v1 + 296));
}
