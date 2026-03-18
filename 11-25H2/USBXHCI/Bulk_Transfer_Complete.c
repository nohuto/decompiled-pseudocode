/*
 * XREFs of Bulk_Transfer_Complete @ 0x1400121B4
 * Callers:
 *     Bulk_CompleteTransfers @ 0x140011C6C (Bulk_CompleteTransfers.c)
 *     Bulk_RetrieveNextStage @ 0x14001ADD0 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     Bulk_Transfer_PrepareForCompletion @ 0x140017530 (Bulk_Transfer_PrepareForCompletion.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

void __fastcall Bulk_Transfer_Complete(__int64 a1, __int64 a2)
{
  KIRQL v3; // bl

  Bulk_Transfer_PrepareForCompletion();
  v3 = KfRaiseIrql(2u);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2104))(
    WdfDriverGlobals,
    *(_QWORD *)(a2 + 24),
    *(unsigned int *)(a2 + 72));
  KeLowerIrql(v3);
}
