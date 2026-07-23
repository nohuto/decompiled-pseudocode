/*
 * XREFs of MiReleaseFaultPte @ 0x140679878
 * Callers:
 *     MiValidateImagePfn @ 0x14093AE5C (MiValidateImagePfn.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 */

__int64 __fastcall MiReleaseFaultPte(_QWORD *a1)
{
  __int64 v2; // rbx
  KIRQL v3; // al

  *a1 = CLFS_LSN_NULL_EXT;
  MiFlushSingleTbEntry((__int64)((_QWORD)a1 << 25) >> 16, 2, 1);
  v2 = ((__int64)a1 - qword_140E37448) >> 3;
  v3 = ExAcquireSpinLockExclusive(&dword_140E37450);
  byte_140E37454[(unsigned __int64)(unsigned int)v2 >> 3] &= ~(1 << (v2 & 7));
  return MiReleaseSpinLockExclusive(&dword_140E37450, v3);
}
