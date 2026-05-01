/*
 * XREFs of ?SwitchItemDragStarted@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804D87F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGridTelemetryController::SwitchItemDragStarted(CGridTelemetryController *this, struct ISwitchItem *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    (*(void (__fastcall **)(__int64, struct ISwitchItem *))(*(_QWORD *)v2 + 104LL))(v2, a2);
}
