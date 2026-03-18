/*
 * XREFs of IopAllocateRelationList @ 0x14082F3B0
 * Callers:
 *     PnpBuildRemovalRelationList @ 0x140830278 (PnpBuildRemovalRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x1408307A0 (PnpInvalidateRelationsInList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140830954 (PnpQueuePendingSurpriseRemoval.c)
 * Callees:
 *     IopFreeRelationList @ 0x14082F144 (IopFreeRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x14082F418 (PiAllocateDeviceObjectList.c)
 *     PnpAllocateCriticalMemory @ 0x14082F488 (PnpAllocateCriticalMemory.c)
 */

__int64 __fastcall IopAllocateRelationList(__int64 a1)
{
  unsigned int v1; // edi
  __int64 CriticalMemory; // rbx
  __int64 DeviceObjectList; // rax

  v1 = a1;
  CriticalMemory = PnpAllocateCriticalMemory(a1, 256LL, 16LL, 1416654416LL);
  if ( CriticalMemory )
  {
    DeviceObjectList = PiAllocateDeviceObjectList(v1, 8LL);
    *(_QWORD *)CriticalMemory = DeviceObjectList;
    if ( DeviceObjectList )
    {
      *(_BYTE *)(CriticalMemory + 8) = 0;
    }
    else
    {
      IopFreeRelationList((void **)CriticalMemory);
      return 0LL;
    }
  }
  return CriticalMemory;
}
