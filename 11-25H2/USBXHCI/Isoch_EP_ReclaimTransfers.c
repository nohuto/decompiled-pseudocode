/*
 * XREFs of Isoch_EP_ReclaimTransfers @ 0x140020870
 * Callers:
 *     <none>
 * Callees:
 *     TR_QueueDpcForTransferCompletion @ 0x140020D34 (TR_QueueDpcForTransferCompletion.c)
 */

__int64 __fastcall Isoch_EP_ReclaimTransfers(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // r9
  __int64 v4; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(a1 + 336) |= 8u;
  v3 = a1 + 392;
  *(_BYTE *)(a1 + 104) = v2;
  v4 = *(_QWORD *)(a1 + 392);
  if ( v4 != a1 + 392 )
  {
    **(_QWORD **)(a1 + 432) = v4;
    *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *(_QWORD *)(a1 + 432);
    **(_QWORD **)(a1 + 400) = a1 + 424;
    *(_QWORD *)(a1 + 432) = *(_QWORD *)(a1 + 400);
    *(_QWORD *)(a1 + 400) = a1 + 392;
    *(_QWORD *)v3 = v3;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return TR_QueueDpcForTransferCompletion(a1);
}
