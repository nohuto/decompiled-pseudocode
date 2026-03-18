/*
 * XREFs of MiReleaseFaultPte @ 0x1406786EC
 * Callers:
 *     MiValidateImagePfn @ 0x140957464 (MiValidateImagePfn.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiReleaseFaultPte(_QWORD *a1)
{
  __int64 v2; // rbx
  KIRQL v3; // al

  *a1 = CLFS_LSN_NULL_EXT;
  MiFlushSingleTbEntry((__int64)((_QWORD)a1 << 25) >> 16, 2, 1);
  v2 = ((__int64)a1 - qword_140E37308) >> 3;
  v3 = ExAcquireSpinLockExclusive(&dword_140E37310);
  byte_140E37314[(unsigned __int64)(unsigned int)v2 >> 3] &= ~(1 << (v2 & 7));
  return MiReleaseSpinLockExclusive(&dword_140E37310, v3);
}
