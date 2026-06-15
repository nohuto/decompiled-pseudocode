/*
 * XREFs of ?MME_SessionChanged@@YAXXZ @ 0x18006FBE8
 * Callers:
 *     ?Invoke@SESSION_EVENT@@UEAAXXZ @ 0x18002AB10 (-Invoke@SESSION_EVENT@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void MME_SessionChanged(void)
{
  RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
  _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
  _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
  RtlReleaseResource(&PnpInfoResource);
}
