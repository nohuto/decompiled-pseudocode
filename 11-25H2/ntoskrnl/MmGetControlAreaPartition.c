/*
 * XREFs of MmGetControlAreaPartition @ 0x1403A6ADC
 * Callers:
 *     CcGetPartitionForSectionObject @ 0x1403A6AC0 (CcGetPartitionForSectionObject.c)
 *     CcDeleteSectionsForPartition @ 0x140579638 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MmGetControlAreaPartition(__int64 a1)
{
  KIRQL v2; // di
  ULONG *v3; // rbx

  if ( KeGetCurrentIrql() == 2 )
  {
    v2 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
  }
  else
  {
    v2 = ExAcquireSpinLockExclusive(&SpinLock);
  }
  if ( *(_QWORD *)a1 )
    v3 = (ULONG *)*((_QWORD *)qword_140E2FD48 + (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  else
    v3 = &MiSystemPartition;
  MiReleaseSpinLockExclusive(&SpinLock, v2);
  return *((_QWORD *)v3 + 23);
}
