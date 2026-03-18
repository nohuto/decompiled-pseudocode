/*
 * XREFs of MiStoreReleaseReservedPageCharges @ 0x140680EF4
 * Callers:
 *     MiStoreDeletePartition @ 0x140680594 (MiStoreDeletePartition.c)
 *     MmStoreRegister @ 0x1407ED518 (MmStoreRegister.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiStoreReleaseReservedPageCharges(__int64 a1)
{
  KIRQL v2; // al

  MiReleaseNonPagedResources(a1, 0x20uLL);
  v2 = ExAcquireSpinLockExclusive(&dword_140E2FD00);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 4), 0xFFFFFFFB);
  return MiReleaseSpinLockExclusive(&dword_140E2FD00, v2);
}
