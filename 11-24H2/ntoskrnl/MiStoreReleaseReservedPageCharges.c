/*
 * XREFs of MiStoreReleaseReservedPageCharges @ 0x14068C784
 * Callers:
 *     MiStoreDeletePartition @ 0x14068BE24 (MiStoreDeletePartition.c)
 *     MmStoreRegister @ 0x1407FD3A8 (MmStoreRegister.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiStoreReleaseReservedPageCharges(__int64 a1)
{
  KIRQL v2; // al

  MiReleaseNonPagedResources(a1, 0x20uLL);
  v2 = ExAcquireSpinLockExclusive(&dword_140E2FF40);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 4), 0xFFFFFFFB);
  return MiReleaseSpinLockExclusive(&dword_140E2FF40, v2);
}
