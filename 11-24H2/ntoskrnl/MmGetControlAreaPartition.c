/*
 * XREFs of MmGetControlAreaPartition @ 0x14040B97C
 * Callers:
 *     CcGetPartitionForSectionObject @ 0x14040B960 (CcGetPartitionForSectionObject.c)
 *     CcDeleteSectionsForPartition @ 0x140579DD8 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MmGetControlAreaPartition(__int64 a1)
{
  KIRQL v2; // di
  ULONG *v3; // rbx

  if ( KeGetCurrentIrql() == 2 )
  {
    v2 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2CD40);
  }
  else
  {
    v2 = ExAcquireSpinLockExclusive(&dword_140E2CD40);
  }
  if ( *(_QWORD *)a1 )
    v3 = (ULONG *)*((_QWORD *)qword_140E300C8 + (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  else
    v3 = &MiSystemPartition;
  MiReleaseSpinLockExclusive(&dword_140E2CD40, v2);
  return *((_QWORD *)v3 + 23);
}
