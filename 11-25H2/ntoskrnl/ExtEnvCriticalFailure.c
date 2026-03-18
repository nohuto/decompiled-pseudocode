/*
 * XREFs of ExtEnvCriticalFailure @ 0x14055D380
 * Callers:
 *     HalpVpptUpdatePhysicalTimer @ 0x140445E88 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1405462D4 (HalpVpptInitializePhysicalTimer.c)
 *     IvtFreeDomain @ 0x14056B260 (IvtFreeDomain.c)
 *     HsaFreeRemappingTableEntry @ 0x14056FAC0 (HsaFreeRemappingTableEntry.c)
 *     HsaGetDeviceAperture @ 0x14056FC08 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableEntry @ 0x140570980 (HsaUpdateRemappingTableEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
