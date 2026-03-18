/*
 * XREFs of rimUserMemAllocNodeFree @ 0x14010C090
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

void __fastcall rimUserMemAllocNodeFree(struct _RTL_GENERIC_TABLE *Table, char *Buffer)
{
  GreDeleteFastMutex(Buffer);
}
