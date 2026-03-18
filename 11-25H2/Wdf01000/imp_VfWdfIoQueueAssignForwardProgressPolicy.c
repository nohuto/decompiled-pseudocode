/*
 * XREFs of imp_VfWdfIoQueueAssignForwardProgressPolicy @ 0x1400DEED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfIoQueueAssignForwardProgressPolicy(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        _WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY *ForwardProgressPolicy)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFQUEUE__ *, _WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY *))WdfVersion.Functions.pfnWdfIoQueueAssignForwardProgressPolicy)(
           DriverGlobals,
           Queue,
           ForwardProgressPolicy);
}
