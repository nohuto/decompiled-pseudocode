/*
 * XREFs of ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x140009730
 * Callers:
 *     ?ProcessPendingProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x140009BA0 (-ProcessPendingProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x14009E45C (-ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x14000A074 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x14000A0E0 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14000A8B4 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 */

void __fastcall CEndpointResourceStateManager::ClearAllContentBindings(CEndpointResourceStateManager *this)
{
  CEndpointResourceStateManager *v1; // rdi
  CEndpointResourceStateManager *v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rsi

  v1 = (CEndpointResourceStateManager *)((char *)this + 16);
  v2 = (CEndpointResourceStateManager *)*((_QWORD *)this + 2);
  if ( v2 != (CEndpointResourceStateManager *)((char *)this + 16) )
  {
    do
    {
      v3 = (__int64)v2 + 40;
      if ( !v2 )
        v3 = 48LL;
      if ( *(_QWORD *)v3 )
      {
        CPoolBufferResource::RemoveUsageReference(*(CPoolBufferResource **)v3);
        CFlipResource::Release(*(CFlipResource **)v3);
        *(_QWORD *)v3 = 0LL;
        v4 = (__int64)v2 + 56;
        if ( !v2 )
          v4 = 64LL;
        *(_BYTE *)v4 |= 1u;
      }
      v5 = (__int64)v2 + 32;
      v6 = (__int64)v2 + 56;
      if ( !v2 )
        v5 = 40LL;
      if ( *(_QWORD *)v5 )
      {
        CFlipPropertySetBase::Release(*(CFlipPropertySetBase **)v5);
        *(_QWORD *)v5 = 0LL;
        if ( !v2 )
          v6 = 64LL;
        *(_BYTE *)v6 |= 1u;
      }
      v2 = *(CEndpointResourceStateManager **)v2;
    }
    while ( v2 != v1 );
  }
}
