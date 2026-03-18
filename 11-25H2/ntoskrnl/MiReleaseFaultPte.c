/*
 * XREFs of MiReleaseFaultPte @ 0x14066CDE0
 * Callers:
 *     MiValidateImagePfn @ 0x140946B4C (MiValidateImagePfn.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiReleaseFaultPte(_QWORD *a1)
{
  __int64 v2; // rbx
  KIRQL v3; // al

  *a1 = CLFS_LSN_NULL_EXT;
  MiFlushSingleTbEntry((__int64)((_QWORD)a1 << 25) >> 16, 2, 1);
  v2 = ((__int64)a1 - qword_140E370C8) >> 3;
  v3 = ExAcquireSpinLockExclusive(&dword_140E370D0);
  byte_140E370D4[(unsigned __int64)(unsigned int)v2 >> 3] &= ~(1 << (v2 & 7));
  return MiReleaseSpinLockExclusive(&dword_140E370D0, v3);
}
