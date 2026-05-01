/*
 * XREFs of ?Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z @ 0x180307320
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x1800AD5E4 (-_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ.c)
 *     ?_QueryCloakedState@CTaskWindow@@AEAAXXZ @ 0x180307A20 (-_QueryCloakedState@CTaskWindow@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTaskWindow::Reinitialize(CTaskWindow *this, const struct TASKWINDOW_REINIT_DATA *a2)
{
  int v4; // esi

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 16, *((_QWORD *)a2 + 2));
  v4 = 0;
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 6);
  if ( (*(_BYTE *)a2 & 1) == 0
    || (v4 = (*(__int64 (__fastcall **)(CTaskWindow *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(
               this,
               *((_QWORD *)a2 + 1),
               *((_QWORD *)a2 + 4)),
        v4 >= 0) )
  {
    *((_BYTE *)this + 56) = 1;
    if ( (*(_BYTE *)a2 & 2) != 0 )
    {
      CTaskWindow::_QueryCloakedState((CTaskWindow *)((char *)this - 8));
    }
    else if ( (*(_BYTE *)a2 & 4) != 0 )
    {
      *((_DWORD *)this + 30) = 0;
      CTaskWindow::_ReconcileViewWithVisibility((struct IImmersiveApplicationInternal **)this - 1);
    }
  }
  return (unsigned int)v4;
}
