/*
 * XREFs of ?staticIoQueueThread@CSidebandDevice@@SAXPEAX@Z @ 0x140014C70
 * Callers:
 *     <none>
 * Callees:
 *     ?IoQueueThread@CSidebandDevice@@AEAAXXZ @ 0x140006868 (-IoQueueThread@CSidebandDevice@@AEAAXXZ.c)
 */

void __fastcall CSidebandDevice::staticIoQueueThread(struct _LIST_ENTRY *StartContext)
{
  CSidebandDevice::IoQueueThread(StartContext);
}
