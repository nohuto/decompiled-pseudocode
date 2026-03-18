/*
 * XREFs of MiStoreChargeReservedPages @ 0x14068BDD0
 * Callers:
 *     MmStoreRegister @ 0x1407FD3A8 (MmStoreRegister.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x140211200 (MiAcquireNonPagedResources.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiStoreChargeReservedPages(__int64 a1)
{
  KIRQL v3; // al

  if ( (int)MiAcquireNonPagedResources((ULONG *)a1, 0x20uLL, 0LL, 6u) < 0 )
    return 0LL;
  v3 = ExAcquireSpinLockExclusive(&dword_140E2FF40);
  _InterlockedOr((volatile signed __int32 *)(a1 + 4), 4u);
  MiReleaseSpinLockExclusive(&dword_140E2FF40, v3);
  return 1LL;
}
