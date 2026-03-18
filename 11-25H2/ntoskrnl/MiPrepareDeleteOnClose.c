/*
 * XREFs of MiPrepareDeleteOnClose @ 0x140666A50
 * Callers:
 *     MiIssueSegmentDereferenceWork @ 0x140458FA0 (MiIssueSegmentDereferenceWork.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiMoveUnusedSubsectionsToDeleteOnClose @ 0x1406668FC (MiMoveUnusedSubsectionsToDeleteOnClose.c)
 */

void __fastcall MiPrepareDeleteOnClose(__int64 a1)
{
  __int64 v1; // rdi
  volatile LONG *i; // rbx

  v1 = a1 + 1976;
  for ( i = *(volatile LONG **)(a1 + 1976); i != (volatile LONG *)v1; i = *(volatile LONG **)i )
  {
    if ( (i[12] & 0x20) == 0 )
    {
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      {
        MiMoveUnusedSubsectionsToDeleteOnClose(a1, (__int64)(i - 2));
        ExReleaseSpinLockExclusiveFromDpcLevel(i + 16);
      }
    }
  }
}
