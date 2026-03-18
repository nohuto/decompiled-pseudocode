/*
 * XREFs of WmipAllocProviderId @ 0x140AA11C8
 * Callers:
 *     WmipAllocRegEntry @ 0x1404AC7D8 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}
