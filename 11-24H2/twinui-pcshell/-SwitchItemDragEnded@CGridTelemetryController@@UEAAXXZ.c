/*
 * XREFs of ?SwitchItemDragEnded@CGridTelemetryController@@UEAAXXZ @ 0x1804D87C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGridTelemetryController::SwitchItemDragEnded(CGridTelemetryController *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 112LL))(v1);
}
