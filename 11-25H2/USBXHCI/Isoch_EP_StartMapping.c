/*
 * XREFs of Isoch_EP_StartMapping @ 0x140033290
 * Callers:
 *     <none>
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x140019630 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x14001C700 (Controller_RaiseAndTrackIrql.c)
 *     Isoch_MapTransfers @ 0x14001CB10 (Isoch_MapTransfers.c)
 */

void __fastcall Isoch_EP_StartMapping(__int64 a1)
{
  char v2; // si

  v2 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v2 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
  _InterlockedExchange((volatile __int32 *)(a1 + 336), 0);
  *(_DWORD *)(a1 + 384) = 0;
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 108), 3) )
    Isoch_MapTransfers(a1);
  if ( v2 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 40));
  }
}
