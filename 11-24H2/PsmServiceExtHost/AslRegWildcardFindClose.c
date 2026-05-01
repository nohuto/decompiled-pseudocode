/*
 * XREFs of AslRegWildcardFindClose @ 0x1800A56E0
 * Callers:
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x18009AC9C (SdbpCheckMatchingWildcardRegistryEntry.c)
 *     AslRegWildcardFindFirst @ 0x1800A5784 (AslRegWildcardFindFirst.c)
 * Callees:
 *     AslFree @ 0x18009D9EC (AslFree.c)
 */

BOOLEAN __fastcall AslRegWildcardFindClose(_QWORD *a1)
{
  _QWORD *v1; // rsi
  void *v3; // rcx
  _QWORD *v4; // rbx
  void *v5; // rdx
  BOOLEAN result; // al

  if ( a1 )
  {
    v1 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 != a1 )
    {
      do
      {
        v3 = (void *)v1[4];
        if ( v3 )
        {
          ZwClose(v3);
          v1[4] = 0LL;
        }
        v4 = (_QWORD *)*v1;
        AslFree(NtCurrentPeb()->ProcessHeap, v1);
        v1 = v4;
      }
      while ( v4 != a1 );
    }
    v5 = (void *)a1[3];
    if ( v5 )
      AslFree(NtCurrentPeb()->ProcessHeap, v5);
    return AslFree(NtCurrentPeb()->ProcessHeap, a1);
  }
  return result;
}
