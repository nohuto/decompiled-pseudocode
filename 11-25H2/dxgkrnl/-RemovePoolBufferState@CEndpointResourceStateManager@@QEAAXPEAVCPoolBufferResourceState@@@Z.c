/*
 * XREFs of ?RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z @ 0x140057EB0
 * Callers:
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x14000A1F8 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x140046D2C (-ProcessProducerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x14009BA18 (-RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z.c)
 * Callees:
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x140009FBC (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CEndpointResourceStateManager::RemovePoolBufferState(
        CEndpointResourceStateManager *this,
        struct CPoolBufferResourceState *a2)
{
  char *v2; // rdi
  char *i; // rbx

  v2 = (char *)this + 16;
  for ( i = (char *)*((_QWORD *)this + 2); i != v2; i = *(char **)i )
  {
    if ( *(_QWORD *)(((unsigned __int64)(i - 8) & -(__int64)(i != 0LL)) + 0x30) == *((_QWORD *)a2 + 3) )
      CContentResourceState::SetBoundBuffer(
        (CContentResourceState *)((unsigned __int64)(i - 8) & -(__int64)(i != 0LL)),
        0LL);
  }
  (*(void (__fastcall **)(struct CPoolBufferResourceState *))(*(_QWORD *)a2 + 24LL))(a2);
}
