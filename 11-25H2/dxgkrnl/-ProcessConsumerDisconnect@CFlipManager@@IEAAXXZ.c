/*
 * XREFs of ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x1400078F8
 * Callers:
 *     ?DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z @ 0x140046CBC (-DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z.c)
 *     ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x14005EDD0 (-Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z.c)
 * Callees:
 *     ?DestroyAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ @ 0x140007800 (-DestroyAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?RemarshalAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ @ 0x140007870 (-RemarshalAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?FreeQueuedUpdates@CFlipManager@@AEAAXXZ @ 0x140007948 (-FreeQueuedUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x140007BCC (-FreeCurrentUpdates@CFlipManager@@AEAAXXZ.c)
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
