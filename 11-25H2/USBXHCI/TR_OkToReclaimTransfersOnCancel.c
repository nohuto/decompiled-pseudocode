/*
 * XREFs of TR_OkToReclaimTransfersOnCancel @ 0x14002F8D8
 * Callers:
 *     ESM_NotifyingTransferRingsOkToReclaimTransfersOnCancel @ 0x14002F860 (ESM_NotifyingTransferRingsOkToReclaimTransfersOnCancel.c)
 *     ESM_ReclaimingCanceledTransfersAfterControllerSurpriseRemoval @ 0x140055CB0 (ESM_ReclaimingCanceledTransfersAfterControllerSurpriseRemoval.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_OkToReclaimTransfersOnCancel(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 64LL))();
}
