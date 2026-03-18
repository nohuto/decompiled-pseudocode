/*
 * XREFs of Bulk_EP_StartMapping @ 0x140038C50
 * Callers:
 *     <none>
 * Callees:
 *     TR_AttemptStateChange @ 0x140005E00 (TR_AttemptStateChange.c)
 *     Bulk_MapTransfers @ 0x14000D910 (Bulk_MapTransfers.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000DA20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000DC30 (Controller_LowerAndTrackIrql.c)
 */

void __fastcall Bulk_EP_StartMapping(__int64 a1)
{
  char v2; // si

  v2 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v2 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
  _InterlockedExchange((volatile __int32 *)(a1 + 332), 0);
  *(_DWORD *)(a1 + 360) = 0;
  if ( !(unsigned int)TR_AttemptStateChange(a1, 5, 3) )
    Bulk_MapTransfers(a1);
  if ( v2 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 40));
  }
}
