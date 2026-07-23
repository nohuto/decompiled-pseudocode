/*
 * XREFs of TpReleaseCleanupGroup @ 0x18010B590
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 */

void __cdecl TpReleaseCleanupGroup(PTP_CLEANUP_GROUP CleanupGroup)
{
  if ( !CleanupGroup )
    goto LABEL_6;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return;
  if ( _InterlockedExchange(&CleanupGroup->Released, 1) )
  {
LABEL_6:
    TppRaiseInvalidParameter();
  }
  else if ( _InterlockedExchangeAdd(&CleanupGroup->Refcount.Refcount, 0xFFFFFFFF) == 1 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag, CleanupGroup);
  }
}
