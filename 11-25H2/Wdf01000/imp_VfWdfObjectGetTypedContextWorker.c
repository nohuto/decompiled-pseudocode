/*
 * XREFs of imp_VfWdfObjectGetTypedContextWorker @ 0x1400DFEF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void *__fastcall imp_VfWdfObjectGetTypedContextWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        void *Handle,
        const _WDF_OBJECT_CONTEXT_TYPE_INFO *TypeInfo)
{
  return WdfVersion.Functions.pfnWdfObjectGetTypedContextWorker(DriverGlobals, Handle, TypeInfo);
}
