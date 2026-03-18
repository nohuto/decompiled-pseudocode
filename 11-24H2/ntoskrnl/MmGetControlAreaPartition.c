/*
 * XREFs of MmGetControlAreaPartition @ 0x1402CC8AC
 * Callers:
 *     CcGetPartitionForSectionObject @ 0x1402CC890 (CcGetPartitionForSectionObject.c)
 *     CcDeleteSectionsForPartition @ 0x14057C948 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MmGetControlAreaPartition(__int64 a1)
{
  KIRQL v2; // di
  ULONG *v3; // rbx

  if ( KeGetCurrentIrql() == 2 )
  {
    v2 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2CC00);
  }
  else
  {
    v2 = ExAcquireSpinLockExclusive(&dword_140E2CC00);
  }
  if ( *(_QWORD *)a1 )
    v3 = (ULONG *)*((_QWORD *)qword_140E2FF88 + (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  else
    v3 = &MiSystemPartition;
  MiReleaseSpinLockExclusive(&dword_140E2CC00, v2);
  return *((_QWORD *)v3 + 23);
}
