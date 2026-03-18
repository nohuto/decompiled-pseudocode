/*
 * XREFs of ?RemoveContentState@CEndpointResourceStateManager@@QEAAXPEAVCContentResourceState@@@Z @ 0x140055E34
 * Callers:
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x14001972C (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x1400466FC (-ProcessProducerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     ?RemoveContent@CFlipManager@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x140055D9C (-RemoveContent@CFlipManager@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CEndpointResourceStateManager::RemoveContentState(
        CEndpointResourceStateManager *this,
        struct CContentResourceState *a2)
{
  (*(void (__fastcall **)(struct CContentResourceState *))(*(_QWORD *)a2 + 24LL))(a2);
}
