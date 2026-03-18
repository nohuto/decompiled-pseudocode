/*
 * XREFs of MmMapViewOfSectionEx @ 0x140482368
 * Callers:
 *     VmMapSectionExecuteNoAcg @ 0x14078F230 (VmMapSectionExecuteNoAcg.c)
 *     MiMapProcessExecutable @ 0x1409051BC (MiMapProcessExecutable.c)
 *     PspMapSystemDll @ 0x14090B898 (PspMapSystemDll.c)
 *     MiMapImageForEnclaveUse @ 0x1409CC068 (MiMapImageForEnclaveUse.c)
 *     MiMapSecurePureReserveView @ 0x140A35B94 (MiMapSecurePureReserveView.c)
 * Callees:
 *     MiMapViewOfSectionExCommon @ 0x1408FBCB8 (MiMapViewOfSectionExCommon.c)
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
