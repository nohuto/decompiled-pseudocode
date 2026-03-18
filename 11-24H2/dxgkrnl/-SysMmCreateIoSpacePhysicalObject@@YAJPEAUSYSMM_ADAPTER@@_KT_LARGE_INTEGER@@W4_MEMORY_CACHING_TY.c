/*
 * XREFs of ?SysMmCreateIoSpacePhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@W4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14005AEE4
 * Callers:
 *     DxgkCreatePhysicalMemoryObjectCB @ 0x14001F0D0 (DxgkCreatePhysicalMemoryObjectCB.c)
 *     SysMmTestCreateIoSpacePhysicalObject @ 0x140095D00 (SysMmTestCreateIoSpacePhysicalObject.c)
 * Callees:
 *     SmmCreatePhysicalObjectForPhysicalMemory @ 0x14005AF90 (SmmCreatePhysicalObjectForPhysicalMemory.c)
 */

__int64 __fastcall SysMmCreateIoSpacePhysicalObject(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  if ( (a3 & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(3LL, a3);
    WdLogGlobalForLineNumber = 1309;
    return 3221225485LL;
  }
  if ( (a2 & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(3LL, a2);
    WdLogGlobalForLineNumber = 1316;
    return 3221225485LL;
  }
  return SmmCreatePhysicalObjectForPhysicalMemory(a1, a3, a2, a4, 0, a5, a6, a7, a8);
}
