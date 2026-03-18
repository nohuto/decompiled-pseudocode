/*
 * XREFs of AcpipInitPciBusStatePool @ 0x1400C62C8
 * Callers:
 *     DriverEntry @ 0x1400C64B0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 *AcpipInitPciBusStatePool()
{
  __int64 *result; // rax

  KeInitializeSpinLock(&gPreAllocPciPoolSpinLock);
  memset(gPreAllocPciPool, 0, sizeof(gPreAllocPciPool));
  KeInitializeSpinLock(&gBBNResultCacheLock);
  result = &gBBNResultCacheListHead;
  qword_14008A118 = (__int64)&gBBNResultCacheListHead;
  gBBNResultCacheListHead = (__int64)&gBBNResultCacheListHead;
  return result;
}
