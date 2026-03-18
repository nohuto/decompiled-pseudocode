/*
 * XREFs of MiPrepareDeleteOnClose @ 0x140672500
 * Callers:
 *     MiIssueSegmentDereferenceWork @ 0x1403F7920 (MiIssueSegmentDereferenceWork.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiMoveUnusedSubsectionsToDeleteOnClose @ 0x1406723AC (MiMoveUnusedSubsectionsToDeleteOnClose.c)
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
