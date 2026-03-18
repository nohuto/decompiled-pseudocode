/*
 * XREFs of imp_VfWdfObjectDereferenceActual @ 0x1400DFEC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfObjectDereferenceActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        void *Handle,
        void *Tag,
        __int64 Line,
        const char *File)
{
  WdfVersion.Functions.pfnWdfObjectDereferenceActual(DriverGlobals, Handle, Tag, Line, File);
}
