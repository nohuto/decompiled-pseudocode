/*
 * XREFs of ?FreeResources@FxDmaEnabler@@AEAAXPEAU_FxDmaDescription@@@Z @ 0x140089BA0
 * Callers:
 *     ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x14008A34C (-ReleaseResources@FxDmaEnabler@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxDmaEnabler::FreeResources(FxDmaEnabler *this, _FxDmaDescription *AdapterInfo)
{
  _DMA_ADAPTER *AdapterObject; // rcx

  AdapterObject = AdapterInfo->AdapterObject;
  if ( AdapterObject )
  {
    ((void (*)(void))AdapterObject->DmaOperations->PutDmaAdapter)();
    AdapterInfo->AdapterObject = 0LL;
  }
}
