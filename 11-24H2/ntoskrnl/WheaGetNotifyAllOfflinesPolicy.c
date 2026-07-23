/*
 * XREFs of WheaGetNotifyAllOfflinesPolicy @ 0x14065B4E0
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x1407C7DBC (WheapAttemptPhysicalPageOffline.c)
 *     WheapExecuteRowFailureCheck @ 0x1407C93D8 (WheapExecuteRowFailureCheck.c)
 * Callees:
 *     <none>
 */

bool WheaGetNotifyAllOfflinesPolicy()
{
  return *(_DWORD *)off_140E097A8 <= 1u;
}
