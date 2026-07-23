/*
 * XREFs of MmStoreFlushOutstandingEvictions @ 0x1404A7624
 * Callers:
 *     MiStoreDeletePartition @ 0x14068CF54 (MiStoreDeletePartition.c)
 *     SmStoreCompressionStart @ 0x140A438B0 (SmStoreCompressionStart.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall MmStoreFlushOutstandingEvictions(_QWORD *a1)
{
  __int64 v1; // rbx
  volatile LONG *v2; // rsi
  KIRQL v3; // bp

  v1 = *a1;
  v2 = (volatile LONG *)(*a1 + 1312LL);
  v3 = ExAcquireSpinLockExclusive(v2);
  if ( !*(_DWORD *)(v1 + 1216) )
    KeResetEvent((PRKEVENT)(v1 + 1392));
  ++*(_DWORD *)(v1 + 1216);
  MiReleaseSpinLockExclusive(v2, v3);
  KeSetEvent((PRKEVENT)(v1 + 1328), 0, 0);
  return KeWaitForSingleObject((PVOID)(v1 + 1392), WrKernel, 0, 0, 0LL);
}
