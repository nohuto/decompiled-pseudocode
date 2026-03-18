/*
 * XREFs of SysMmTestCreatePhysicalObjectForExistingMdl @ 0x140093860
 * Callers:
 *     <none>
 * Callees:
 *     SmmCreatePhysicalObjectForMdl @ 0x1400112E8 (SmmCreatePhysicalObjectForMdl.c)
 */

__int64 __fastcall SysMmTestCreatePhysicalObjectForExistingMdl(
        struct SYSMM_ADAPTER *a1,
        __int64 a2,
        __int64 a3,
        struct SYSMM_PHYSICAL_OBJECT **a4,
        _QWORD *a5)
{
  return SmmCreatePhysicalObjectForMdl(a1, a2, 3, 1, a3, 9, a4, a5);
}
