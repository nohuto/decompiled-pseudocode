/*
 * XREFs of PiAllocateDeviceObjectList @ 0x140A0D820
 * Callers:
 *     PipGrowDeviceObjectList @ 0x140A0C3C8 (PipGrowDeviceObjectList.c)
 *     IopAllocateRelationList @ 0x140A0D7B8 (IopAllocateRelationList.c)
 * Callees:
 *     PiClearDeviceObjectList @ 0x140A0C464 (PiClearDeviceObjectList.c)
 *     PnpAllocateCriticalMemory @ 0x140A0D890 (PnpAllocateCriticalMemory.c)
 */

_DWORD *__fastcall PiAllocateDeviceObjectList(__int64 a1, int a2)
{
  int v3; // esi
  _DWORD *CriticalMemory; // rax
  _DWORD *v5; // rbx

  v3 = a1;
  CriticalMemory = (_DWORD *)PnpAllocateCriticalMemory(a1, 256LL, 24 * a2 - 8 + 24LL, 1416654416LL);
  v5 = CriticalMemory;
  if ( CriticalMemory )
  {
    *CriticalMemory = 0;
    CriticalMemory[2] = 0;
    CriticalMemory[3] = v3;
    CriticalMemory[1] = a2;
    PiClearDeviceObjectList(CriticalMemory);
  }
  return v5;
}
