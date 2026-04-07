/*
 * XREFs of ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x18004F2E4
 * Callers:
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18004DD50 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18004EC5C (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CTopLevelWindow::ForceDisconnectClientArea(struct CVisual **this)
{
  struct CVisual *v2; // rdx
  __int64 v3; // rcx
  struct CVisual *v4; // rcx

  if ( (*((_BYTE *)this + 249) & 2) != 0 )
    CTopLevelWindow::ReleaseHolographicSlate((CTopLevelWindow *)this);
  v2 = this[65];
  if ( v2 )
  {
    v3 = *((_QWORD *)v2 + 3);
    if ( v3 )
      VisualCollection::Remove((VisualCollection *)(v3 + 32), v2);
    v4 = this[65];
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(struct CVisual *, __int64))v4)(v4, 1LL);
      this[65] = 0LL;
    }
  }
}
