/*
 * XREFs of ExpTypeToPriority @ 0x1402A8C10
 * Callers:
 *     ExQueueWorkItemEx @ 0x1402A7430 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemToPartition @ 0x1402A7F70 (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemExFromIo @ 0x140483044 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpTypeToPriority(unsigned int a1)
{
  if ( a1 >= 7 )
    return a1 - 32;
  else
    return (unsigned int)ExpBuiltinPriorities[a1];
}
