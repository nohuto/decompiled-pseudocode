/*
 * XREFs of CommonBuffer_RebalanceResourcesWorkItem @ 0x1400298C0
 * Callers:
 *     <none>
 * Callees:
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x14002991C (XilCoreCommonBuffer_FreeUnusedResources.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CommonBuffer_RebalanceResourcesWorkItem(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3048))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         v1,
         off_14006B100);
  return XilCoreCommonBuffer_FreeUnusedResources(v2 + 88);
}
