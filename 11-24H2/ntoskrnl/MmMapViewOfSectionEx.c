/*
 * XREFs of MmMapViewOfSectionEx @ 0x14047E1D4
 * Callers:
 *     VmMapSectionExecuteNoAcg @ 0x14079E700 (VmMapSectionExecuteNoAcg.c)
 *     MiMapProcessExecutable @ 0x14091B024 (MiMapProcessExecutable.c)
 *     PspMapSystemDll @ 0x1409220D8 (PspMapSystemDll.c)
 *     MiMapImageForEnclaveUse @ 0x140A2AB18 (MiMapImageForEnclaveUse.c)
 *     MiMapSecurePureReserveView @ 0x140A31ED4 (MiMapSecurePureReserveView.c)
 * Callees:
 *     MiMapViewOfSectionExCommon @ 0x140987880 (MiMapViewOfSectionExCommon.c)
 */

__int64 __fastcall MmMapViewOfSectionEx(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        volatile void *a8,
        int a9,
        int a10,
        __int64 a11,
        __int64 a12,
        int a13)
{
  return MiMapViewOfSectionExCommon(a1, a2, 1, a3, a4, a5, a6, a7, a8, a9, a10, a11, 0, a13);
}
