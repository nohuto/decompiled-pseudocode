/*
 * XREFs of ExpTypeToPriority @ 0x14027AA00
 * Callers:
 *     ExQueueWorkItemToPartition @ 0x140279D60 (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemEx @ 0x1402D6B60 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemExFromIo @ 0x1403A9120 (ExQueueWorkItemExFromIo.c)
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
