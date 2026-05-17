/*
 * XREFs of TpReleaseCleanupGroup @ 0x18010B590
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 */

void __fastcall TpReleaseCleanupGroup(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !a1 )
    goto LABEL_6;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return;
  if ( _InterlockedExchange(a1 + 1, 1) )
  {
LABEL_6:
    TppRaiseInvalidParameter();
  }
  else if ( _InterlockedExchangeAdd(a1, 0xFFFFFFFF) == 1 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag, (__int64)a1, a4);
  }
}
