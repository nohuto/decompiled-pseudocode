/*
 * XREFs of PiAllocateDeviceObjectList @ 0x14082F418
 * Callers:
 *     IopAllocateRelationList @ 0x14082F3B0 (IopAllocateRelationList.c)
 *     PipGrowDeviceObjectList @ 0x140AB8844 (PipGrowDeviceObjectList.c)
 * Callees:
 *     PnpAllocateCriticalMemory @ 0x14082F488 (PnpAllocateCriticalMemory.c)
 *     PiClearDeviceObjectList @ 0x140A868C0 (PiClearDeviceObjectList.c)
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
