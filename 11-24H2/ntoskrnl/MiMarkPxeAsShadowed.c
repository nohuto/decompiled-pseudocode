/*
 * XREFs of MiMarkPxeAsShadowed @ 0x14067FDF0
 * Callers:
 *     MiInitializeShadowPageTable @ 0x1407F6428 (MiInitializeShadowPageTable.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiMarkPxeAsShadowed(unsigned int a1)
{
  unsigned int v1; // ebx
  KIRQL v2; // al

  v1 = ((a1 >> 3) & 0x1FF) - 256;
  v2 = ExAcquireSpinLockExclusive(&dword_140E373C0);
  *((_BYTE *)qword_140E2F08C + ((unsigned __int64)v1 >> 3)) |= 1 << (v1 & 7);
  return MiReleaseSpinLockExclusive(&dword_140E373C0, v2);
}
