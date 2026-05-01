/*
 * XREFs of ?Shutdown@RecentAppsCache@Discover@PenWorkspace@@QEAAXXZ @ 0x18004CB4C
 * Callers:
 *     ?ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z @ 0x18004CB30 (-ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x18004CBA0 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18004D078 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C4CCC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 */

void __fastcall PenWorkspace::Discover::RecentAppsCache::Shutdown(wil::details **this)
{
  void *v2; // rdx
  _BYTE *v3; // rcx
  unsigned int v4; // r8d
  int v5; // r9d

  if ( !(unsigned __int8)std::_Atomic_storage<bool,1>::load(this + 25) )
  {
    *v3 = 1;
    wil::details::SetEvent(this[19], v2);
    wil::handle_wait(this[18], (void *)0x1388, v4, v5);
    this[18] = 0LL;
  }
}
