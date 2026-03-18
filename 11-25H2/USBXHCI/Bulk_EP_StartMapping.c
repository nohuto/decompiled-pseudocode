/*
 * XREFs of Bulk_EP_StartMapping @ 0x14002BE30
 * Callers:
 *     <none>
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x140019630 (Controller_LowerAndTrackIrql.c)
 *     Bulk_MapTransfers @ 0x14001AB60 (Bulk_MapTransfers.c)
 *     Controller_RaiseAndTrackIrql @ 0x14001C700 (Controller_RaiseAndTrackIrql.c)
 */

void __fastcall Bulk_EP_StartMapping(__int64 a1)
{
  char v2; // si
  __int64 v3; // rdx

  v2 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v2 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
  _InterlockedExchange((volatile __int32 *)(a1 + 332), 0);
  *(_DWORD *)(a1 + 360) = 0;
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 108), 3) )
    Bulk_MapTransfers(a1, v3);
  if ( v2 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 40));
  }
}
