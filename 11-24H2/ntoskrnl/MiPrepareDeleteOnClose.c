/*
 * XREFs of MiPrepareDeleteOnClose @ 0x1406736D0
 * Callers:
 *     MiIssueSegmentDereferenceWork @ 0x1403ED890 (MiIssueSegmentDereferenceWork.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiMoveUnusedSubsectionsToDeleteOnClose @ 0x14067357C (MiMoveUnusedSubsectionsToDeleteOnClose.c)
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
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(i + 16) )
      {
        MiMoveUnusedSubsectionsToDeleteOnClose(a1, (__int64)(i - 2));
        ExReleaseSpinLockExclusiveFromDpcLevel(i + 16);
      }
    }
  }
}
