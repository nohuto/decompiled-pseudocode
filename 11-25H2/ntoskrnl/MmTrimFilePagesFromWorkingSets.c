/*
 * XREFs of MmTrimFilePagesFromWorkingSets @ 0x14066D608
 * Callers:
 *     PopTransitionToSleep @ 0x140B55320 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x1403BE1E8 (PsGetNextPartition.c)
 *     MiQueueWorkingSetRequest @ 0x1404F3A78 (MiQueueWorkingSetRequest.c)
 */

void MmTrimFilePagesFromWorkingSets()
{
  __int64 *i; // rcx
  __int64 *NextPartition; // rax
  __int64 *v2; // rbx

  if ( byte_140E372D4 )
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
