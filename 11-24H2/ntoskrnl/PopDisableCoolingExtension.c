/*
 * XREFs of PopDisableCoolingExtension @ 0x14074A618
 * Callers:
 *     PopCoolingExtensionPnpNotification @ 0x14074A540 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     PopPropogateCoolingChange @ 0x14041BAFC (PopPropogateCoolingChange.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopDiagTraceCoolingExtension @ 0x140A2DCBC (PopDiagTraceCoolingExtension.c)
 */

__int64 __fastcall PopDisableCoolingExtension(__int64 a1)
{
  signed __int64 *v1; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v1 = (signed __int64 *)(a1 + 32);
  memset(&Event, 0, sizeof(Event));
  PopAcquireRwLockExclusive((unsigned __int64 *)(a1 + 32));
  if ( !*(_BYTE *)(a1 + 64) )
    return PopReleaseRwLock(v1);
  *(_BYTE *)(a1 + 64) = 0;
  PopDiagTraceCoolingExtension(a1, POP_ETW_EVENT_COOLING_EXTENSION_REMOVE);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_QWORD *)(a1 + 80) = &Event;
  PopPropogateCoolingChange(a1);
  PopReleaseRwLock(v1);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  PopAcquireRwLockExclusive((unsigned __int64 *)v1);
  *(_QWORD *)(a1 + 80) = 0LL;
  v4 = *(_QWORD *)(a1 + 96);
  PopReleaseRwLock(v1);
  return guard_dispatch_icall_no_overrides(v4, v5);
}
