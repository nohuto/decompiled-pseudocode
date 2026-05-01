/*
 * XREFs of ?SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z @ 0x18013FA70
 * Callers:
 *     ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x18013F810 (-ChangeWindowType@CClassicWindow@@UEAA-AW4WindowChangeFlags@@W42@@Z.c)
 * Callees:
 *     ?s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x18013FB44 (-s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z.c)
 *     ?RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1801AC504 (-RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CClassicWindow::SetOwner(CClassicWindow *this, struct IClassicWindow *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v4 = *((_QWORD *)this + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( a2 )
  {
    if ( *((struct IClassicWindow **)this + 8) != a2 )
    {
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = *((_QWORD *)this + 8);
      *((_QWORD *)this + 8) = a2;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  if ( v4 != *((_QWORD *)this + 8)
    && (unsigned __int8)CClassicWindow::s_ShouldShowInSwitchers(*((unsigned int *)this + 18)) )
  {
    RaiseApplicationViewChangeNotification(this, 17LL);
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}
