/*
 * XREFs of ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14008432C
 * Callers:
 *     FxInitialize @ 0x14006BF58 (FxInitialize.c)
 *     ?FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14008CAA8 (-FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxLibraryCommonUnregisterClient @ 0x14008E840 (FxLibraryCommonUnregisterClient.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIFRStop(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  if ( !unk_1400C80D8
    && FxDriverGlobals
    && FxDriverGlobals->WdfLogHeader
    && _InterlockedExchangeAdd(&FxDriverGlobals->WdfLogHeaderRefCount, 0xFFFFFFFF) == 1 )
  {
    ExFreePoolWithTag(FxDriverGlobals->WdfLogHeader, 0x674C7846u);
    FxDriverGlobals->WdfLogHeader = 0LL;
  }
}
