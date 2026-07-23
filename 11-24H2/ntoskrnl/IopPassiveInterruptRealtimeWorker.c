/*
 * XREFs of IopPassiveInterruptRealtimeWorker @ 0x1405A2790
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveQueueEx @ 0x1402D4100 (KeRemoveQueueEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn IopPassiveInterruptRealtimeWorker(PKQUEUE Queue)
{
  __int64 v2; // rdx
  PLIST_ENTRY EntryArray; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    do
    {
      EntryArray = 0LL;
      KeRemoveQueueEx(Queue, 0, 0, 0LL, &EntryArray, 1u);
    }
    while ( EntryArray == (PLIST_ENTRY)128 );
    guard_dispatch_icall_no_overrides(EntryArray[1].Blink, v2);
  }
}
