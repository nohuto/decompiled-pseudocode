/*
 * XREFs of ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x140016DE0
 * Callers:
 *     ?DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z @ 0x14004668C (-DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z.c)
 *     ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x14005F6A0 (-Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z.c)
 * Callees:
 *     ?DestroyAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ @ 0x140016CE8 (-DestroyAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?RemarshalAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ @ 0x140016D58 (-RemarshalAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?FreeQueuedUpdates@CFlipManager@@AEAAXXZ @ 0x140016E30 (-FreeQueuedUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x1400170CC (-FreeCurrentUpdates@CFlipManager@@AEAAXXZ.c)
 */

void __fastcall CFlipManager::ProcessConsumerDisconnect(PRKEVENT *this)
{
  CFlipManager::FreeCurrentUpdates((CFlipManager *)this);
  CEndpointResourceStateManager::RemarshalAllResourceStates((CEndpointResourceStateManager *)(this + 7));
  CEndpointResourceStateManager::DestroyAllResourceStates((CEndpointResourceStateManager *)(this + 13));
  CFlipManager::FreeQueuedUpdates((CFlipManager *)this);
  KeResetEvent(this[36]);
  this[6] = 0LL;
}
