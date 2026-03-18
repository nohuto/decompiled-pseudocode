/*
 * XREFs of HalpMmAllocateMemory @ 0x140542CB4
 * Callers:
 *     InitCounterGroupBspEnhanced @ 0x140B4CCA8 (InitCounterGroupBspEnhanced.c)
 *     InitCounterGroupBspOriginal @ 0x140B4CD8C (InitCounterGroupBspOriginal.c)
 *     HalpInitializeProfiling @ 0x140B4EAB8 (HalpInitializeProfiling.c)
 *     EmonInitializeProfilingOriginal @ 0x140B4F1E0 (EmonInitializeProfilingOriginal.c)
 *     Amd64InitializeProfilingEnhanced @ 0x140B50EC8 (Amd64InitializeProfilingEnhanced.c)
 *     Amd64InitializeProfilingOriginal @ 0x140B51488 (Amd64InitializeProfilingOriginal.c)
 *     HalpIommuInitializeAll @ 0x140B6B2A0 (HalpIommuInitializeAll.c)
 *     HalpKdEnumerateDebuggingDevices @ 0x140B75850 (HalpKdEnumerateDebuggingDevices.c)
 *     HalpRegisterDeviceInUse @ 0x140B75C94 (HalpRegisterDeviceInUse.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x140542CD0 (HalpMmAllocateMemoryInternal.c)
 */

__int64 __fastcall HalpMmAllocateMemory(__int64 a1)
{
  return HalpMmAllocateMemoryInternal(a1);
}
