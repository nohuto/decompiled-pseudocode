/*
 * XREFs of Interrupter_WdfEvtInterruptEnable @ 0x14001B6E0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x14000DA20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000DC30 (Controller_LowerAndTrackIrql.c)
 *     Interrupter_InterruptEnable @ 0x14001B7A8 (Interrupter_InterruptEnable.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Interrupter_WdfEvtInterruptEnable(__int64 a1)
{
  __int64 v1; // rdi
  char v2; // si
  __int64 *v3; // rbx
  __int64 v5; // rcx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B178);
  v2 = 0;
  v3 = (__int64 *)(v1 + 8);
  if ( KeGetCurrentIrql() < 2u )
    v2 = Controller_RaiseAndTrackIrql(*v3);
  Interrupter_InterruptEnable(v1);
  if ( *(_DWORD *)(*v3 + 1036) == 1 )
  {
    v5 = *(_QWORD *)(*v3 + 128);
    if ( *(_QWORD *)(v5 + 40) == v1 )
      Interrupter_InterruptEnable(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 8LL * *(unsigned int *)(v5 + 64)));
  }
  if ( v2 && KeGetCurrentIrql() == 2 )
    Controller_LowerAndTrackIrql((_QWORD *)*v3);
  return 0LL;
}
