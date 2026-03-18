/*
 * XREFs of MmFlushImageSection @ 0x1404698E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiAttemptSectionDelete @ 0x140314F64 (MiAttemptSectionDelete.c)
 */

BOOLEAN __stdcall MmFlushImageSection(PSECTION_OBJECT_POINTERS SectionObjectPointer, MMFLUSH_TYPE FlushType)
{
  KIRQL v4; // bl
  PVOID DataSectionObject; // rdi
  PVOID ImageSectionObject; // rdi

  while ( 1 )
  {
    v4 = ExAcquireSpinLockExclusive(&dword_140E2CC00);
    if ( FlushType == MmFlushForDelete )
    {
      DataSectionObject = SectionObjectPointer->DataSectionObject;
      if ( SectionObjectPointer->DataSectionObject )
      {
        if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
          goto LABEL_11;
        if ( *((_QWORD *)DataSectionObject + 6)
          || (*((_DWORD *)DataSectionObject + 14) & 2) != 0
          || *((_QWORD *)DataSectionObject + 14) > 1uLL )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2CC00);
          MiReleaseSpinLockExclusive((_DWORD *)DataSectionObject + 18, v4);
          return 0;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)DataSectionObject + 18);
      }
    }
    ImageSectionObject = SectionObjectPointer->ImageSectionObject;
    if ( !ImageSectionObject )
    {
      MiReleaseSpinLockExclusive(&dword_140E2CC00, v4);
      return 1;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      break;
LABEL_11:
    MiReleaseSpinLockExclusive(&dword_140E2CC00, v4);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2CC00);
  return MiAttemptSectionDelete((__int64)ImageSectionObject, v4, 0);
}
