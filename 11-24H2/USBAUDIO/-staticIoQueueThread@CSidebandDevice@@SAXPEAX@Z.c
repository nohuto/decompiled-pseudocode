/*
 * XREFs of ?staticIoQueueThread@CSidebandDevice@@SAXPEAX@Z @ 0x140014240
 * Callers:
 *     <none>
 * Callees:
 *     ?IoQueueThread@CSidebandDevice@@AEAAXXZ @ 0x140006504 (-IoQueueThread@CSidebandDevice@@AEAAXXZ.c)
 */

void __fastcall CSidebandDevice::staticIoQueueThread(struct _LIST_ENTRY *StartContext)
{
  CSidebandDevice::IoQueueThread(StartContext);
}
