/*
 * XREFs of Control_WdfEvtDpcForTransferCompletion @ 0x140010760
 * Callers:
 *     <none>
 * Callees:
 *     Control_ProcessTransferCompletion @ 0x140010798 (Control_ProcessTransferCompletion.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Control_WdfEvtDpcForTransferCompletion(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 912))(WdfDriverGlobals, a1);
  return Control_ProcessTransferCompletion(v1);
}
