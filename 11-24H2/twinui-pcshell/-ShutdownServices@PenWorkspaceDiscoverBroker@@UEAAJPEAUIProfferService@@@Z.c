/*
 * XREFs of ?ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z @ 0x18004CB30
 * Callers:
 *     <none>
 * Callees:
 *     ?Shutdown@RecentAppsCache@Discover@PenWorkspace@@QEAAXXZ @ 0x18004CB4C (-Shutdown@RecentAppsCache@Discover@PenWorkspace@@QEAAXXZ.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBroker::ShutdownServices(
        PenWorkspace::Discover::RecentAppsCache **this,
        struct IProfferService *a2)
{
  PenWorkspace::Discover::RecentAppsCache::Shutdown(this[4]);
  return 0LL;
}
