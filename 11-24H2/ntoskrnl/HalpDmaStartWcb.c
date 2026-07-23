/*
 * XREFs of HalpDmaStartWcb @ 0x14038C8E8
 * Callers:
 *     HalPutScatterGatherListV3 @ 0x14038C148 (HalPutScatterGatherListV3.c)
 *     HalpAllocateAdapterChannel @ 0x14038C740 (HalpAllocateAdapterChannel.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

char __fastcall HalpDmaStartWcb(__int64 a1, _QWORD *a2, char a3)
{
  KSPIN_LOCK *v3; // rbp
  KIRQL v7; // al
  char v8; // bl
  _QWORD *v10; // rdx

  v3 = (KSPIN_LOCK *)(a1 + 184);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v8 = 0;
  if ( *(_BYTE *)(a1 + 224) )
  {
    if ( !a3 )
    {
      v10 = *(_QWORD **)(a1 + 200);
      if ( *v10 != a1 + 192 )
        __fastfail(3u);
      *a2 = a1 + 192;
      a2[1] = v10;
      *v10 = a2;
      *(_QWORD *)(a1 + 200) = a2;
    }
  }
  else
  {
    v8 = 1;
    *(_BYTE *)(a1 + 224) = 1;
  }
  KeReleaseSpinLock(v3, v7);
  return v8;
}
