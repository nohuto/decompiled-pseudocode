/*
 * XREFs of HalpMmAllocateMemory @ 0x140540484
 * Callers:
 *     InitCounterGroupBspEnhanced @ 0x140B3CCA8 (InitCounterGroupBspEnhanced.c)
 *     InitCounterGroupBspOriginal @ 0x140B3CD8C (InitCounterGroupBspOriginal.c)
 *     HalpInitializeProfiling @ 0x140B3EAB8 (HalpInitializeProfiling.c)
 *     EmonInitializeProfilingOriginal @ 0x140B3F1E0 (EmonInitializeProfilingOriginal.c)
 *     Amd64InitializeProfilingEnhanced @ 0x140B40EC8 (Amd64InitializeProfilingEnhanced.c)
 *     Amd64InitializeProfilingOriginal @ 0x140B41488 (Amd64InitializeProfilingOriginal.c)
 *     HalpIommuInitializeAll @ 0x140B5B7A0 (HalpIommuInitializeAll.c)
 *     HalpKdEnumerateDebuggingDevices @ 0x140B65850 (HalpKdEnumerateDebuggingDevices.c)
 *     HalpRegisterDeviceInUse @ 0x140B65C94 (HalpRegisterDeviceInUse.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x1405404A0 (HalpMmAllocateMemoryInternal.c)
 */

__int64 __fastcall HalpMmAllocateMemory(__int64 a1)
{
  return HalpMmAllocateMemoryInternal(a1);
}
