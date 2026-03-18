/*
 * XREFs of MiFreeUltraMapping @ 0x1404F71F4
 * Callers:
 *     MiDereferenceHugeContext @ 0x1404CFC80 (MiDereferenceHugeContext.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiFreeUltraMapping(__int64 a1)
{
  unsigned __int64 v1; // rbx
  KIRQL v2; // di

  v1 = (unsigned __int64)(a1 - qword_140E35CA8) >> 30;
  if ( KeGetCurrentIrql() == 2 )
  {
    v2 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35CA0);
  }
  else
  {
    v2 = ExAcquireSpinLockExclusive(&dword_140E35CA0);
  }
  _bittestandset64((signed __int64 *)qword_140E35CD0, v1);
  return MiReleaseSpinLockExclusive(&dword_140E35CA0, v2);
}
