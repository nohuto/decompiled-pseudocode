/*
 * XREFs of MiUpdatePagingFileMinimum @ 0x14066EAA8
 * Callers:
 *     MiExtendPagingFiles @ 0x1407DF2A8 (MiExtendPagingFiles.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
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
