/*
 * XREFs of Interrupter_WdfEvtInterruptDisable @ 0x14000B6C0
 * Callers:
 *     <none>
 * Callees:
 *     Interrupter_InterruptDisable @ 0x14000B788 (Interrupter_InterruptDisable.c)
 *     Controller_LowerAndTrackIrql @ 0x140019630 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x14001C700 (Controller_RaiseAndTrackIrql.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Interrupter_WdfEvtInterruptDisable(__int64 a1)
{
  char v1; // si
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  __int64 v5; // rcx

  v1 = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B178);
  v3 = (_QWORD *)(v2 + 8);
  if ( KeGetCurrentIrql() < 2u )
    v1 = Controller_RaiseAndTrackIrql(*v3);
  Interrupter_InterruptDisable(v2);
  if ( *(_DWORD *)(*v3 + 1044LL) == 1 )
  {
    v5 = *(_QWORD *)(*v3 + 128LL);
    if ( *(_QWORD *)(v5 + 40) == v2 )
      Interrupter_InterruptDisable(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 8LL * *(unsigned int *)(v5 + 64)));
  }
  if ( v1 && KeGetCurrentIrql() == 2 )
    Controller_LowerAndTrackIrql(*v3);
  return 0LL;
}
