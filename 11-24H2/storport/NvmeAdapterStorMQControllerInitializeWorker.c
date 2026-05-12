/*
 * XREFs of NvmeAdapterStorMQControllerInitializeWorker @ 0x1400D97A0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterFinalizeStorMQMiniportControllerStart @ 0x1400CFBBC (NvmeAdapterFinalizeStorMQMiniportControllerStart.c)
 *     NvmeControllerSetStorMQProperty @ 0x1400F5048 (NvmeControllerSetStorMQProperty.c)
 */

void __fastcall NvmeAdapterStorMQControllerInitializeWorker(
        PVOID IoObject,
        volatile signed __int32 *Context,
        PIO_WORKITEM IoWorkItem)
{
  if ( (int)NvmeAdapterFinalizeStorMQMiniportControllerStart(Context) >= 0 )
  {
    _InterlockedCompareExchange(Context + 244, 2, 1);
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*((_QWORD *)Context + 16) + 32LL), BusRelations);
  }
  else
  {
    _InterlockedCompareExchange(Context + 244, 5, 1);
    NvmeControllerSetStorMQProperty(Context, 2147483657LL, 4LL);
  }
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 69));
}
