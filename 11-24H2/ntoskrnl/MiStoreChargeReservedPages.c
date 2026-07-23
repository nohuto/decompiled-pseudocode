/*
 * XREFs of MiStoreChargeReservedPages @ 0x14068CF00
 * Callers:
 *     MmStoreRegister @ 0x1407FDB18 (MmStoreRegister.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiStoreChargeReservedPages(__int64 a1)
{
  KIRQL v3; // al

  if ( (int)MiAcquireNonPagedResources((ULONG *)a1, 0x20uLL, 0LL, 6LL) < 0 )
    return 0LL;
  v3 = ExAcquireSpinLockExclusive(&dword_140E30080);
  _InterlockedOr((volatile signed __int32 *)(a1 + 4), 4u);
  MiReleaseSpinLockExclusive(&dword_140E30080, v3);
  return 1LL;
}
