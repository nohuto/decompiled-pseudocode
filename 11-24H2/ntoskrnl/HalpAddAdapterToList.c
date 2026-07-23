/*
 * XREFs of HalpAddAdapterToList @ 0x14053B8B0
 * Callers:
 *     HalGetAdapterV3 @ 0x1406FDCF8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1406FE298 (HalGetAdapterV2.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall HalpAddAdapterToList(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc(&HalpDmaAdapterListLock);
  v3 = (_QWORD *)qword_140FC33C8;
  v4 = (_QWORD *)(a1 + 464);
  if ( *(__int64 **)qword_140FC33C8 != &HalpDmaAdapterList )
    __fastfail(3u);
  *v4 = &HalpDmaAdapterList;
  v4[1] = v3;
  *v3 = v4;
  qword_140FC33C8 = (__int64)v4;
  KeReleaseSpinLock(&HalpDmaAdapterListLock, v2);
}
