/*
 * XREFs of MiMarkPxeAsShadowed @ 0x140680FF0
 * Callers:
 *     MiInitializeShadowPageTable @ 0x1407F6B9C (MiInitializeShadowPageTable.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiMarkPxeAsShadowed(unsigned int a1)
{
  unsigned int v1; // ebx
  KIRQL v2; // al

  v1 = ((a1 >> 3) & 0x1FF) - 256;
  v2 = ExAcquireSpinLockExclusive(&SpinLock);
  *((_BYTE *)qword_140E2F1CC + ((unsigned __int64)v1 >> 3)) |= 1 << (v1 & 7);
  return MiReleaseSpinLockExclusive(&SpinLock, v2);
}
