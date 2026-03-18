/*
 * XREFs of MmFlushImageSection @ 0x14046B190
 * Callers:
 *     <none>
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiAttemptSectionDelete @ 0x14034E3B8 (MiAttemptSectionDelete.c)
 */

BOOLEAN __stdcall MmFlushImageSection(PSECTION_OBJECT_POINTERS SectionObjectPointer, MMFLUSH_TYPE FlushType)
{
  KIRQL v4; // bl
  PVOID DataSectionObject; // rdi
  PVOID ImageSectionObject; // rdi

  while ( 1 )
  {
    v4 = ExAcquireSpinLockExclusive(&SpinLock);
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
          ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
          MiReleaseSpinLockExclusive((_DWORD *)DataSectionObject + 18, v4);
          return 0;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)DataSectionObject + 18);
      }
    }
    ImageSectionObject = SectionObjectPointer->ImageSectionObject;
    if ( !ImageSectionObject )
    {
      MiReleaseSpinLockExclusive(&SpinLock, v4);
      return 1;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      break;
LABEL_11:
    MiReleaseSpinLockExclusive(&SpinLock, v4);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
  return MiAttemptSectionDelete((__int64)ImageSectionObject, v4, 0);
}
