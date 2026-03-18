/*
 * XREFs of ExpTypeToPriority @ 0x1403AD260
 * Callers:
 *     ExQueueWorkItemEx @ 0x1403ABC60 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemToPartition @ 0x1403AC7C0 (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemExFromIo @ 0x140482214 (ExQueueWorkItemExFromIo.c)
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
