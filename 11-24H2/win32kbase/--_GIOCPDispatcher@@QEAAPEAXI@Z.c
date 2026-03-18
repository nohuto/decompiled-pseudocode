/*
 * XREFs of ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x14020BAE8
 * Callers:
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1400CE8D4 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     IOCPDispatcher_Destroy @ 0x14020DAF0 (IOCPDispatcher_Destroy.c)
 *     KSTIOCPDispatcher_Destroy @ 0x14020DB50 (KSTIOCPDispatcher_Destroy.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x140092850 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 */

HANDLE *__fastcall IOCPDispatcher::`scalar deleting destructor'(HANDLE *Buffer)
{
  *Buffer = &IOCPDispatcher::`vftable';
  IOCPDispatcher::Close(Buffer, 0);
  GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
