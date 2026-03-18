/*
 * XREFs of IoSetDiskIoAttributionOnProcess @ 0x140489168
 * Callers:
 *     PspProcessDelete @ 0x1408A99B0 (PspProcessDelete.c)
 *     PspEstablishJobHierarchy @ 0x1408E62CC (PspEstablishJobHierarchy.c)
 *     PspSetJobIoAttributionProcessCallback @ 0x140A6A950 (PspSetJobIoAttributionProcessCallback.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x140245180 (IoDiskIoAttributionDereference.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall IoSetDiskIoAttributionOnProcess(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // rsi

  if ( *(_QWORD *)(a2 + 1752) != a1 )
  {
    if ( a1 && _InterlockedIncrement64((volatile signed __int64 *)(a1 + 32)) <= 1 )
      __fastfail(0xEu);
    v4 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
    v5 = *(_QWORD *)(a2 + 1752);
    *(_QWORD *)(a2 + 1752) = a1;
    ExReleaseSpinLockExclusive(&IopDiskIoAttributionLock, v4);
    if ( v5 )
      IoDiskIoAttributionDereference(v5);
  }
}
