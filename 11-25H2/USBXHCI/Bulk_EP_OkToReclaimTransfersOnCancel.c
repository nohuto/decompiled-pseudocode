/*
 * XREFs of Bulk_EP_OkToReclaimTransfersOnCancel @ 0x140031270
 * Callers:
 *     <none>
 * Callees:
 *     TR_QueueDpcForTransferCompletion @ 0x140020D34 (TR_QueueDpcForTransferCompletion.c)
 */

void __fastcall Bulk_EP_OkToReclaimTransfersOnCancel(__int64 a1)
{
  KIRQL v2; // al
  int v3; // ecx
  char v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v3 = *(_DWORD *)(a1 + 332);
  *(_BYTE *)(a1 + 104) = v2;
  if ( (v3 & 0x10) != 0 )
  {
    v5 = a1 + 376;
    v6 = *(_QWORD *)(a1 + 376);
    if ( v6 != a1 + 376 )
    {
      **(_QWORD **)(a1 + 416) = v6;
      *(_QWORD *)(*(_QWORD *)v5 + 8LL) = *(_QWORD *)(a1 + 416);
      **(_QWORD **)(a1 + 384) = a1 + 408;
      *(_QWORD *)(a1 + 416) = *(_QWORD *)(a1 + 384);
      *(_QWORD *)(a1 + 384) = a1 + 376;
      *(_QWORD *)v5 = v5;
      v2 = *(_BYTE *)(a1 + 104);
    }
    v4 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 332) = v3 | 0x20;
    v4 = 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v2);
  if ( v4 )
    TR_QueueDpcForTransferCompletion((_QWORD *)a1);
}
