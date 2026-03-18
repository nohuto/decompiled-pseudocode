/*
 * XREFs of IopAllocateRelationList @ 0x140A0D7B8
 * Callers:
 *     PnpBuildRemovalRelationList @ 0x140A0E2D8 (PnpBuildRemovalRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x140A0E800 (PnpInvalidateRelationsInList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140A0E9B4 (PnpQueuePendingSurpriseRemoval.c)
 * Callees:
 *     IopFreeRelationList @ 0x140A0CB00 (IopFreeRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x140A0D820 (PiAllocateDeviceObjectList.c)
 *     PnpAllocateCriticalMemory @ 0x140A0D890 (PnpAllocateCriticalMemory.c)
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
      IopFreeRelationList((_QWORD *)CriticalMemory);
      return 0LL;
    }
  }
  return CriticalMemory;
}
