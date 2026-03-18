/*
 * XREFs of MiSubsectionNeedsExtents @ 0x14066D648
 * Callers:
 *     MmExtendSection @ 0x14093ADB0 (MmExtendSection.c)
 *     MiExtendSection @ 0x14093B140 (MiExtendSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiSubsectionNeedsExtents(_DWORD *a1)
{
  __int64 v1; // rbx
  KIRQL v3; // al

  v1 = *(_QWORD *)a1;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)a1 + 72LL));
  a1[13] |= 0x40000000u;
  return MiReleaseSpinLockExclusive((_DWORD *)(v1 + 72), v3);
}
