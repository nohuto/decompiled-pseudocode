/*
 * XREFs of imp_VfWdfDmaTransactionInitializeUsingOffset @ 0x1400DE5C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfDmaTransactionInitializeUsingOffset(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int8 (__fastcall *EvtProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *),
        __int64 DmaDirection,
        _MDL *Mdl,
        unsigned __int64 Offset,
        unsigned __int64 Length)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMATRANSACTION__ *, unsigned __int8 (__fastcall *)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *), __int64, _MDL *, unsigned __int64, unsigned __int64))WdfVersion.Functions.pfnWdfDmaTransactionInitializeUsingOffset)(
           DriverGlobals,
           DmaTransaction,
           EvtProgramDmaFunction,
           DmaDirection,
           Mdl,
           Offset,
           Length);
}
