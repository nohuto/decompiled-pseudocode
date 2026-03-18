/*
 * XREFs of imp_VfWdfIoQueueFindRequest @ 0x1400DEFD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfIoQueueFindRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ *FoundRequest,
        WDFFILEOBJECT__ *FileObject,
        _WDF_REQUEST_PARAMETERS *Parameters,
        WDFREQUEST__ **OutRequest)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFQUEUE__ *, WDFREQUEST__ *, WDFFILEOBJECT__ *, _WDF_REQUEST_PARAMETERS *, WDFREQUEST__ **))WdfVersion.Functions.pfnWdfIoQueueFindRequest)(
           DriverGlobals,
           Queue,
           FoundRequest,
           FileObject,
           Parameters,
           OutRequest);
}
