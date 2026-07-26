/*
 * XREFs of ?ndisEventEntryCount@@YAKW4_NDIS_EVENT_LOG_SIZE@@@Z @ 0x14016D190
 * Callers:
 *     ?ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z @ 0x14016D010 (-ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisEventEntryCount(int a1)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx

  if ( !MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) )
  {
    if ( a1 == 2 )
      return 32LL;
    if ( !a1 )
      return 4LL;
    v5 = a1 - 1;
    if ( v5 )
    {
      if ( v5 != 2 )
        return 4LL;
      return 4096LL;
    }
    return 16LL;
  }
  if ( !a1 )
    return 16LL;
  v3 = a1 - 1;
  if ( !v3 )
    return 32LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 256LL;
  if ( v4 != 1 )
    return 16LL;
  return 4096LL;
}
