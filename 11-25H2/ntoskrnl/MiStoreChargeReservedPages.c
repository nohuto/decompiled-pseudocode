/*
 * XREFs of MiStoreChargeReservedPages @ 0x140680540
 * Callers:
 *     MmStoreRegister @ 0x1407ED518 (MmStoreRegister.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x14022E560 (MiAcquireNonPagedResources.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiStoreChargeReservedPages(__int64 a1)
{
  KIRQL v3; // al

  if ( (int)MiAcquireNonPagedResources((ULONG *)a1, 0x20uLL, 0LL, 6LL) < 0 )
    return 0LL;
  v3 = ExAcquireSpinLockExclusive(&dword_140E2FD00);
  _InterlockedOr((volatile signed __int32 *)(a1 + 4), 4u);
  MiReleaseSpinLockExclusive(&dword_140E2FD00, v3);
  return 1LL;
}
