/*
 * XREFs of SmmCreatePhysicalObjectForPhysicalMemory @ 0x14005AF90
 * Callers:
 *     ?SysMmCreateIoSpacePhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@W4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14005AEE4 (-SysMmCreateIoSpacePhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@W4_MEMORY_CACHING_TY.c)
 *     SysMmTestCreatePhysicalObjectForExistingPhysicalMemory @ 0x140095E00 (SysMmTestCreatePhysicalObjectForExistingPhysicalMemory.c)
 * Callees:
 *     SmmCreatePhysicalObject @ 0x140020860 (SmmCreatePhysicalObject.c)
 */

__int64 __fastcall SmmCreatePhysicalObjectForPhysicalMemory(
        struct SYSMM_ADAPTER *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        struct SYSMM_PHYSICAL_OBJECT **a8,
        _QWORD *a9)
{
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = a2;
  return SmmCreatePhysicalObject(a1, 3, a3, (int)&v10, a4, a5, a6, a7, a8, a9);
}
