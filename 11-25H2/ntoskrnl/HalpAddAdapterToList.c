/*
 * XREFs of HalpAddAdapterToList @ 0x14053B780
 * Callers:
 *     HalGetAdapterV3 @ 0x1406F42C8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1406F4868 (HalGetAdapterV2.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

void __fastcall HalpAddAdapterToList(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc(&HalpDmaAdapterListLock);
  v3 = (_QWORD *)qword_140FC2988;
  v4 = (_QWORD *)(a1 + 464);
  if ( *(__int64 **)qword_140FC2988 != &HalpDmaAdapterList )
    __fastfail(3u);
  *v4 = &HalpDmaAdapterList;
  v4[1] = v3;
  *v3 = v4;
  qword_140FC2988 = (__int64)v4;
  KeReleaseSpinLock(&HalpDmaAdapterListLock, v2);
}
