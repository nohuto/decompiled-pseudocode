/*
 * XREFs of IoSetDiskIoAttributionOnProcess @ 0x140489A74
 * Callers:
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 *     PspEstablishJobHierarchy @ 0x1409040C0 (PspEstablishJobHierarchy.c)
 *     PspSetJobIoAttributionProcessCallback @ 0x140A68980 (PspSetJobIoAttributionProcessCallback.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     IoDiskIoAttributionDereference @ 0x14034EA34 (IoDiskIoAttributionDereference.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
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
