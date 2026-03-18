/*
 * XREFs of MmMapViewOfSectionEx @ 0x1404830A0
 * Callers:
 *     VmMapSectionExecuteNoAcg @ 0x14079E5F0 (VmMapSectionExecuteNoAcg.c)
 *     MiMapImageForEnclaveUse @ 0x1408DB088 (MiMapImageForEnclaveUse.c)
 *     MiMapProcessExecutable @ 0x1408F8C84 (MiMapProcessExecutable.c)
 *     PspMapSystemDll @ 0x1408FF7F8 (PspMapSystemDll.c)
 *     MiMapSecurePureReserveView @ 0x140A3C6F4 (MiMapSecurePureReserveView.c)
 * Callees:
 *     MiMapViewOfSectionExCommon @ 0x14099F100 (MiMapViewOfSectionExCommon.c)
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
