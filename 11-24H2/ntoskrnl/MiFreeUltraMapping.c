/*
 * XREFs of MiFreeUltraMapping @ 0x1404F99F4
 * Callers:
 *     MiDereferenceHugeContext @ 0x1404CFD8C (MiDereferenceHugeContext.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiFreeUltraMapping(__int64 a1)
{
  unsigned __int64 v1; // rbx
  KIRQL v2; // di

  v1 = (unsigned __int64)(a1 - qword_140E35EE8) >> 30;
  if ( KeGetCurrentIrql() == 2 )
  {
    v2 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35EE0);
  }
  else
  {
    v2 = ExAcquireSpinLockExclusive(&dword_140E35EE0);
  }
  _bittestandset64((signed __int64 *)qword_140E35F10, v1);
  return MiReleaseSpinLockExclusive(&dword_140E35EE0, v2);
}
