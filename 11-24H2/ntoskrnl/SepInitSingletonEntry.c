/*
 * XREFs of SepInitSingletonEntry @ 0x140357184
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x140A330CC (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140357308 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall SepInitSingletonEntry(__int64 a1, __int64 a2)
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
