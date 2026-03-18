/*
 * XREFs of SepInitSingletonEntry @ 0x1404923DC
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x140A0D124 (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14035ED18 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall SepInitSingletonEntry(unsigned int a1, __int64 a2)
{
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v4; // rbx
  KIRQL v5; // al

  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(a1);
  v4 = SingletonEntryFromIndexNumber;
  if ( SingletonEntryFromIndexNumber )
  {
    v5 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 1) = a2;
    ExReleaseSpinLockExclusive(v4, v5);
  }
}
