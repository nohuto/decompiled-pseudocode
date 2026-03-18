/*
 * XREFs of SysMmTestCreateMdlPhysicalObject @ 0x140095D40
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@IQEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@_NPEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAU_MDL@@@Z @ 0x1400209DC (-SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE.c)
 */

__int64 __fastcall SysMmTestCreateMdlPhysicalObject(
        struct SYSMM_ADAPTER *a1,
        SIZE_T a2,
        PHYSICAL_ADDRESS a3,
        PHYSICAL_ADDRESS a4,
        PHYSICAL_ADDRESS a5,
        MEMORY_CACHING_TYPE a6,
        int a7,
        __int64 a8,
        __int64 *a9,
        __int64 *a10,
        struct _MDL **a11)
{
  return SysMmCreateMdlPhysicalObject(a1, a2, a3, a4, a5, a6, a7, a8, 9, 0, a9, a10, a11);
}
