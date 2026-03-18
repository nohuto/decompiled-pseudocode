/*
 * XREFs of ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x1400466FC
 * Callers:
 *     ?DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z @ 0x14004668C (-DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z.c)
 *     ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x14005F6A0 (-Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z.c)
 * Callees:
 *     ?Clear@CBackchannelManager@@QEAAXXZ @ 0x140046798 (-Clear@CBackchannelManager@@QEAAXXZ.c)
 *     ?RemoveContentState@CEndpointResourceStateManager@@QEAAXPEAVCContentResourceState@@@Z @ 0x140055E34 (-RemoveContentState@CEndpointResourceStateManager@@QEAAXPEAVCContentResourceState@@@Z.c)
 *     ?RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z @ 0x140057998 (-RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z.c)
 */

void __fastcall CFlipManager::ProcessProducerDisconnect(CFlipManager *this)
{
  CEndpointResourceStateManager *v1; // rdi
  char *v3; // r14
  CFlipManager *v4; // rdx
  CFlipManager *v5; // rbx
  CEndpointResourceStateManager **v6; // rcx
  CEndpointResourceStateManager *v7; // rbx

  v1 = (CFlipManager *)((char *)this + 56);
  v3 = (char *)this + 72;
  v4 = (CFlipManager *)*((_QWORD *)this + 9);
  if ( v4 != (CFlipManager *)((char *)this + 72) )
  {
    do
    {
      v5 = *(CFlipManager **)v4;
      CEndpointResourceStateManager::RemoveContentState(
        this,
        (struct CContentResourceState *)(((unsigned __int64)v4 - 8) & -(__int64)(v4 != 0LL)));
      v4 = v5;
    }
    while ( v5 != (CFlipManager *)v3 );
  }
  v6 = *(CEndpointResourceStateManager ***)v1;
  if ( *(CEndpointResourceStateManager **)v1 != v1 )
  {
    do
    {
      v7 = *v6;
      CEndpointResourceStateManager::RemovePoolBufferState(
        v1,
        (struct CPoolBufferResourceState *)((unsigned __int64)(v6 - 1) & -(__int64)(v6 != 0LL)));
      v6 = (CEndpointResourceStateManager **)v7;
    }
    while ( v7 != v1 );
  }
  CBackchannelManager::Clear(*((CBackchannelManager **)this + 28));
  *((_QWORD *)this + 5) = 0LL;
}
