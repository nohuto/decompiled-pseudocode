/*
 * XREFs of ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1400194F0
 * Callers:
 *     ?SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x140018F74 (-SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x14001972C (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z @ 0x140057998 (-RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z.c)
 * Callees:
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x140019548 (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1400195A8 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x140019614 (-Release@CFlipResource@@QEAAKXZ.c)
 */

void __fastcall CContentResourceState::SetBoundBuffer(CContentResourceState *this, struct CPoolBufferResource *a2)
{
  CPoolBufferResource *v4; // rcx

  if ( *((struct CPoolBufferResource **)this + 6) != a2 )
  {
    if ( a2 )
    {
      CPoolBufferResource::AddUsageReference(a2);
      ++*((_DWORD *)a2 + 6);
    }
    v4 = (CPoolBufferResource *)*((_QWORD *)this + 6);
    if ( v4 )
    {
      CPoolBufferResource::RemoveUsageReference(v4);
      CFlipResource::Release(*((CFlipResource **)this + 6));
    }
    *((_BYTE *)this + 64) |= 1u;
    *((_QWORD *)this + 6) = a2;
  }
}
