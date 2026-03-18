/*
 * XREFs of imp_VfWdfObjectAllocateContext @ 0x1400DFE40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfObjectAllocateContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        void *Handle,
        _WDF_OBJECT_ATTRIBUTES *ContextAttributes,
        void **Context)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, void *, _WDF_OBJECT_ATTRIBUTES *, void **))WdfVersion.Functions.pfnWdfObjectAllocateContext)(
           DriverGlobals,
           Handle,
           ContextAttributes,
           Context);
}
