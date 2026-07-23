/*
 * XREFs of WmipAllocProviderId @ 0x140A9C558
 * Callers:
 *     WmipAllocRegEntry @ 0x1404A6FCC (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}
