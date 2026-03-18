/*
 * XREFs of HalpDmaStartWcb @ 0x140331B6C
 * Callers:
 *     HalpAllocateAdapterChannel @ 0x1403319C4 (HalpAllocateAdapterChannel.c)
 *     HalPutScatterGatherListV3 @ 0x14033419C (HalPutScatterGatherListV3.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
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
