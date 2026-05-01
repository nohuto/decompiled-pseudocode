/*
 * XREFs of ?DragSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x1804D85F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGridTelemetryController::DragSwitchItem(
        CGridTelemetryController *this,
        struct ISwitchItem *a2,
        struct IExternalDragCallback *a3)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 2);
  if ( v3 )
    (*(void (__fastcall **)(__int64, struct ISwitchItem *, struct IExternalDragCallback *))(*(_QWORD *)v3 + 96LL))(
      v3,
      a2,
      a3);
}
