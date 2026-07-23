/*
 * XREFs of ExtEnvCriticalFailure @ 0x14055D8B0
 * Callers:
 *     HalpVpptUpdatePhysicalTimer @ 0x1403729E8 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpVpptInitializePhysicalTimer @ 0x140546484 (HalpVpptInitializePhysicalTimer.c)
 *     IvtFreeDomain @ 0x14056B9F0 (IvtFreeDomain.c)
 *     HsaFreeRemappingTableEntry @ 0x140570250 (HsaFreeRemappingTableEntry.c)
 *     HsaGetDeviceAperture @ 0x140570398 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableEntry @ 0x140571110 (HsaUpdateRemappingTableEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
