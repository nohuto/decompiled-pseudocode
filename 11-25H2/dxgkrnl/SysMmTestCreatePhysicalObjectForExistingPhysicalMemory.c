/*
 * XREFs of SysMmTestCreatePhysicalObjectForExistingPhysicalMemory @ 0x1400938A0
 * Callers:
 *     <none>
 * Callees:
 *     SmmCreatePhysicalObjectForPhysicalMemory @ 0x14005B590 (SmmCreatePhysicalObjectForPhysicalMemory.c)
 */

__int64 __fastcall SysMmTestCreatePhysicalObjectForExistingPhysicalMemory(
        struct SYSMM_ADAPTER *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        struct SYSMM_PHYSICAL_OBJECT **a5,
        _QWORD *a6)
{
  return SmmCreatePhysicalObjectForPhysicalMemory(a1, a2, a3, 3, 1, a4, 9, a5, a6);
}
