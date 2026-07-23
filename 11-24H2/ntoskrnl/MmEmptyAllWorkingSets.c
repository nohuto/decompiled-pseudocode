/*
 * XREFs of MmEmptyAllWorkingSets @ 0x14067A064
 * Callers:
 *     EtwpSetMark @ 0x1407AA0B4 (EtwpSetMark.c)
 *     PopTransitionToSleep @ 0x140B67570 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x14026227C (PsGetNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x1406799E0 (MiEmptyAllWorkingSets.c)
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
