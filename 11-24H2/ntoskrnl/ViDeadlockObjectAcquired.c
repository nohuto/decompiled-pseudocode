/*
 * XREFs of ViDeadlockObjectAcquired @ 0x140B9BAE4
 * Callers:
 *     ViDeadlockKeWaitForMultipleObjects_Exit @ 0x140B9B890 (ViDeadlockKeWaitForMultipleObjects_Exit.c)
 *     ViDeadlockKeWaitForSingleObject_Exit @ 0x140B9B8F0 (ViDeadlockKeWaitForSingleObject_Exit.c)
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140BAA3C4 (VfDeadlockAcquireResource.c)
 */

char __fastcall ViDeadlockObjectAcquired(unsigned int a1, _BYTE **a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  char result; // al

  if ( a1 )
  {
    v5 = a1;
    do
    {
      result = **a2 & 0x7F;
      if ( result == 2 )
        result = VfDeadlockAcquireResource((int)*a2, a4);
      ++a2;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
