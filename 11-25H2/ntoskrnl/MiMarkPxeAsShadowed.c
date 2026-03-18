/*
 * XREFs of MiMarkPxeAsShadowed @ 0x1406745D0
 * Callers:
 *     MiInitializeShadowPageTable @ 0x1407E6598 (MiInitializeShadowPageTable.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiMarkPxeAsShadowed(unsigned int a1)
{
  unsigned int v1; // ebx
  KIRQL v2; // al

  v1 = ((a1 >> 3) & 0x1FF) - 256;
  v2 = ExAcquireSpinLockExclusive(&dword_140E37180);
  *((_BYTE *)qword_140E2EE4C + ((unsigned __int64)v1 >> 3)) |= 1 << (v1 & 7);
  return MiReleaseSpinLockExclusive(&dword_140E37180, v2);
}
