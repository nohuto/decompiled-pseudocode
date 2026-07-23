/*
 * XREFs of HalpMmAllocateMemory @ 0x140540604
 * Callers:
 *     InitCounterGroupBspEnhanced @ 0x140B4ECE8 (InitCounterGroupBspEnhanced.c)
 *     InitCounterGroupBspOriginal @ 0x140B4EDCC (InitCounterGroupBspOriginal.c)
 *     HalpInitializeProfiling @ 0x140B50B08 (HalpInitializeProfiling.c)
 *     EmonInitializeProfilingOriginal @ 0x140B51230 (EmonInitializeProfilingOriginal.c)
 *     Amd64InitializeProfilingEnhanced @ 0x140B52F18 (Amd64InitializeProfilingEnhanced.c)
 *     Amd64InitializeProfilingOriginal @ 0x140B534D8 (Amd64InitializeProfilingOriginal.c)
 *     HalpIommuInitializeAll @ 0x140B70010 (HalpIommuInitializeAll.c)
 *     HalpKdEnumerateDebuggingDevices @ 0x140B77850 (HalpKdEnumerateDebuggingDevices.c)
 *     HalpRegisterDeviceInUse @ 0x140B77C94 (HalpRegisterDeviceInUse.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x140540620 (HalpMmAllocateMemoryInternal.c)
 */

__int64 __fastcall HalpMmAllocateMemory(__int64 a1)
{
  return HalpMmAllocateMemoryInternal(a1);
}
