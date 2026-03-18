/*
 * XREFs of MmTrimFilePagesFromWorkingSets @ 0x140678F08
 * Callers:
 *     PopTransitionToSleep @ 0x140B65430 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x1403D42FC (PsGetNextPartition.c)
 *     MiQueueWorkingSetRequest @ 0x1404F62CC (MiQueueWorkingSetRequest.c)
 */

void MmTrimFilePagesFromWorkingSets()
{
  __int64 *i; // rcx
  __int64 *NextPartition; // rax
  __int64 *v2; // rbx

  if ( byte_140E37514 )
  {
    for ( i = 0LL; ; i = v2 )
    {
      NextPartition = PsGetNextPartition(i);
      v2 = NextPartition;
      if ( !NextPartition )
        break;
      MiQueueWorkingSetRequest(*NextPartition, 128);
    }
  }
}
