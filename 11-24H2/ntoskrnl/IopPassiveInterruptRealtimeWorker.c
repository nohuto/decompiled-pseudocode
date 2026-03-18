/*
 * XREFs of IopPassiveInterruptRealtimeWorker @ 0x1405A5850
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveQueueEx @ 0x1402A49D0 (KeRemoveQueueEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn IopPassiveInterruptRealtimeWorker(PKQUEUE Queue)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  PLIST_ENTRY EntryArray; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    do
    {
      EntryArray = 0LL;
      KeRemoveQueueEx(Queue, 0, 0, 0LL, &EntryArray, 1u);
    }
    while ( EntryArray == (PLIST_ENTRY)128 );
    guard_dispatch_icall_no_overrides(EntryArray[1].Blink, v2, v3, v4);
  }
}
