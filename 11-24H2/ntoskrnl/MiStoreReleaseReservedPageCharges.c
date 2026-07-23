/*
 * XREFs of MiStoreReleaseReservedPageCharges @ 0x14068D8B4
 * Callers:
 *     MiStoreDeletePartition @ 0x14068CF54 (MiStoreDeletePartition.c)
 *     MmStoreRegister @ 0x1407FDB18 (MmStoreRegister.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 */

__int64 __fastcall MiStoreReleaseReservedPageCharges(__int64 a1)
{
  KIRQL v2; // al

  MiReleaseNonPagedResources(a1, 0x20uLL);
  v2 = ExAcquireSpinLockExclusive(&dword_140E30080);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 4), 0xFFFFFFFB);
  return MiReleaseSpinLockExclusive(&dword_140E30080, v2);
}
