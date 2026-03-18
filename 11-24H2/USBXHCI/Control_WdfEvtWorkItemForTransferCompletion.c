/*
 * XREFs of Control_WdfEvtWorkItemForTransferCompletion @ 0x14004BE80
 * Callers:
 *     <none>
 * Callees:
 *     Control_ProcessTransferCompletion @ 0x140004658 (Control_ProcessTransferCompletion.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000DA20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000DC30 (Controller_LowerAndTrackIrql.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

void __fastcall Control_WdfEvtWorkItemForTransferCompletion(__int64 a1)
{
  __int64 v2; // rax
  char v3; // di
  __int64 *v4; // rbx
  __int64 v5; // rax

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3048))(WdfDriverGlobals, a1);
  v3 = 0;
  v4 = (__int64 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     v2,
                     off_14006B1F0)
                 + 40);
  if ( KeGetCurrentIrql() != 2 )
    v3 = Controller_RaiseAndTrackIrql(*v4);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3048))(WdfDriverGlobals, a1);
  Control_ProcessTransferCompletion(v5);
  if ( v3 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql((_QWORD *)*v4);
  }
}
