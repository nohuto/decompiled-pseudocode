/*
 * XREFs of MmEmptyAllWorkingSets @ 0x14066D578
 * Callers:
 *     EtwpSetMark @ 0x14079ABA4 (EtwpSetMark.c)
 *     PopTransitionToSleep @ 0x140B55320 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x1403BE1E8 (PsGetNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x14066CEF4 (MiEmptyAllWorkingSets.c)
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
