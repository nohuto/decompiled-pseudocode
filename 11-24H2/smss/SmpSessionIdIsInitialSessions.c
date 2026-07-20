/*
 * XREFs of SmpSessionIdIsInitialSessions @ 0x140007D50
 * Callers:
 *     SmpTerminateCSR @ 0x140006C40 (SmpTerminateCSR.c)
 *     SmpDestroyControlBlock @ 0x140007BF4 (SmpDestroyControlBlock.c)
 * Callees:
 *     <none>
 */

bool __fastcall SmpSessionIdIsInitialSessions(int a1)
{
  __int64 i; // rdx

  if ( a1 != -1 )
  {
    for ( i = 0LL; (unsigned int)i < SmpNumberInitialSessions; i = (unsigned int)(i + 1) )
    {
      if ( a1 == *(_DWORD *)(SmpCoreProcessIds + 40 * i) )
        return (_DWORD)i != -1;
    }
  }
  LODWORD(i) = -1;
  return (_DWORD)i != -1;
}
