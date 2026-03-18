/*
 * XREFs of WheaGetNotifyAllOfflinesPolicy @ 0x14065CDC0
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x1407C791C (WheapAttemptPhysicalPageOffline.c)
 *     WheapExecuteRowFailureCheck @ 0x1407C8EE8 (WheapExecuteRowFailureCheck.c)
 * Callees:
 *     <none>
 */

bool WheaGetNotifyAllOfflinesPolicy()
{
  return *(_DWORD *)off_140E09738 <= 1u;
}
