/*
 * XREFs of ExtEnvCriticalFailure @ 0x14055FC80
 * Callers:
 *     HalpVpptUpdatePhysicalTimer @ 0x1403BA018 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpVpptInitializePhysicalTimer @ 0x140548BC4 (HalpVpptInitializePhysicalTimer.c)
 *     IvtFreeDomain @ 0x14056E560 (IvtFreeDomain.c)
 *     HsaFreeRemappingTableEntry @ 0x140572DC0 (HsaFreeRemappingTableEntry.c)
 *     HsaGetDeviceAperture @ 0x140572F08 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableEntry @ 0x140573C80 (HsaUpdateRemappingTableEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall __noreturn ExtEnvCriticalFailure(
        __int64 a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x5Cu, a2, a3, a4, BugCheckParameter4);
}
