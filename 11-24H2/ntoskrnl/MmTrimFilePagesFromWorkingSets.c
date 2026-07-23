/*
 * XREFs of MmTrimFilePagesFromWorkingSets @ 0x14067A0E8
 * Callers:
 *     PopTransitionToSleep @ 0x140B67570 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x14026227C (PsGetNextPartition.c)
 *     MiQueueWorkingSetRequest @ 0x1404F3BCC (MiQueueWorkingSetRequest.c)
 */

void MmTrimFilePagesFromWorkingSets()
{
  __int64 *i; // rcx
  __int64 *NextPartition; // rax
  __int64 *v2; // rbx

  if ( byte_140E37654 )
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
