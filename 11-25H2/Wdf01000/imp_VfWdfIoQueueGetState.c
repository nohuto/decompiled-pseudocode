/*
 * XREFs of imp_VfWdfIoQueueGetState @ 0x1400DF020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfIoQueueGetState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        unsigned int *QueueRequests,
        unsigned int *DriverRequests)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFQUEUE__ *, unsigned int *, unsigned int *))WdfVersion.Functions.pfnWdfIoQueueGetState)(
           DriverGlobals,
           Queue,
           QueueRequests,
           DriverRequests);
}
