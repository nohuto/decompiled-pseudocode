/*
 * XREFs of Isoch_EP_TransferEventHandler @ 0x140016AE0
 * Callers:
 *     <none>
 * Callees:
 *     Isoch_ProcessTransferEventWithED0 @ 0x140016760 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140016B10 (Isoch_ProcessTransferEventWithED1.c)
 */

char __fastcall Isoch_EP_TransferEventHandler(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    return Isoch_ProcessTransferEventWithED1();
  else
    return Isoch_ProcessTransferEventWithED0(a1, a2, a3, a4);
}
