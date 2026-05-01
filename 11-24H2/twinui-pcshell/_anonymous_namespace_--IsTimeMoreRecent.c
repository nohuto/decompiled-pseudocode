/*
 * XREFs of _anonymous_namespace_::IsTimeMoreRecent @ 0x18021C730
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x18004C164 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall anonymous_namespace_::IsTimeMoreRecent(const FILETIME *a1, const FILETIME *a2)
{
  return CompareFileTime(a1, a2) > 0;
}
