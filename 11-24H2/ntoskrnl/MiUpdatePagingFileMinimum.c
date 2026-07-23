/*
 * XREFs of MiUpdatePagingFileMinimum @ 0x14067B528
 * Callers:
 *     MiExtendPagingFiles @ 0x1407EF718 (MiExtendPagingFiles.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiUpdatePagingFileMinimum(__int64 a1, int a2)
{
  _DWORD *v2; // rsi
  KIRQL v5; // al

  v2 = (_DWORD *)(a1 + 200);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  *(_DWORD *)(a1 + 8) += a2;
  return MiReleaseSpinLockExclusive(v2, v5);
}
