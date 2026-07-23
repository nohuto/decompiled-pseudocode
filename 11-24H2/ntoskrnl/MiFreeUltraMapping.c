/*
 * XREFs of MiFreeUltraMapping @ 0x1404F72D4
 * Callers:
 *     MiDereferenceHugeContext @ 0x1404C8E3C (MiDereferenceHugeContext.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiFreeUltraMapping(__int64 a1)
{
  unsigned __int64 v1; // rbx
  KIRQL v2; // di

  v1 = (unsigned __int64)(a1 - qword_140E36028) >> 30;
  if ( KeGetCurrentIrql() == 2 )
  {
    v2 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E36020);
  }
  else
  {
    v2 = ExAcquireSpinLockExclusive(&dword_140E36020);
  }
  _bittestandset64((signed __int64 *)qword_140E36050, v1);
  return MiReleaseSpinLockExclusive(&dword_140E36020, v2);
}
