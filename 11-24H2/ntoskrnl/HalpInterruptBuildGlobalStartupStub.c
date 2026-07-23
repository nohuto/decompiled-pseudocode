/*
 * XREFs of HalpInterruptBuildGlobalStartupStub @ 0x14053F11C
 * Callers:
 *     HalpInterruptInitSystem @ 0x140B4F310 (HalpInterruptInitSystem.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     MmAllocateContiguousNodeMemory @ 0x1403958D0 (MmAllocateContiguousNodeMemory.c)
 *     HalpHvVpStartEnabled @ 0x140549284 (HalpHvVpStartEnabled.c)
 *     HalpInterruptBuildStartupStub @ 0x140556970 (HalpInterruptBuildStartupStub.c)
 *     HalpMmBuildTiledMemoryMap @ 0x140B50810 (HalpMmBuildTiledMemoryMap.c)
 */

__int64 HalpInterruptBuildGlobalStartupStub()
{
  int v0; // edi
  void *ContiguousNodeMemory; // rax

  v0 = 0;
  if ( (unsigned __int8)HalpHvVpStartEnabled() && HalpHvSleepEnlightenedCpuManager )
  {
    if ( HalpLowStub )
    {
LABEL_11:
      HalpInterruptGlobalStartupBlock = (PVOID)HalpLowStub;
      HalpInterruptBuildStartupStub();
      return (unsigned int)v0;
    }
    if ( HalpHvCpuManager || !HalpInterruptBlockedProcessors )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(4096LL, 0, -1, 0, 4, 0x80000000);
      HalpLowStub = (__int64)ContiguousNodeMemory;
      if ( ContiguousNodeMemory )
      {
        HalpLowStubPhysicalAddress = (PVOID)MmGetPhysicalAddress(ContiguousNodeMemory).QuadPart;
        goto LABEL_11;
      }
    }
    return (unsigned int)-1073741801;
  }
  else
  {
    v0 = HalpMmBuildTiledMemoryMap();
    if ( v0 >= 0 )
    {
      HalpTiledMemoryMapActive = 1;
      goto LABEL_11;
    }
  }
  return (unsigned int)v0;
}
