/*
 * XREFs of MmEmptyAllWorkingSets @ 0x140678E84
 * Callers:
 *     EtwpSetMark @ 0x1407A9F74 (EtwpSetMark.c)
 *     PopTransitionToSleep @ 0x140B65430 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x1403D42FC (PsGetNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x140678800 (MiEmptyAllWorkingSets.c)
 */

__int64 *MmEmptyAllWorkingSets()
{
  __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v2; // rbx

  for ( i = 0LL; ; i = v2 )
  {
    result = PsGetNextPartition(i);
    v2 = result;
    if ( !result )
      break;
    MiEmptyAllWorkingSets(*result);
  }
  return result;
}
