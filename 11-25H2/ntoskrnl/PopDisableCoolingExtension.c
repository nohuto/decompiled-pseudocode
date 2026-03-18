/*
 * XREFs of PopDisableCoolingExtension @ 0x140740218
 * Callers:
 *     PopCoolingExtensionPnpNotification @ 0x140740140 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     PopPropogateCoolingChange @ 0x1404313FC (PopPropogateCoolingChange.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopDiagTraceCoolingExtension @ 0x140A3331C (PopDiagTraceCoolingExtension.c)
 */

__int64 __fastcall PopDisableCoolingExtension(__int64 a1)
{
  signed __int64 *v1; // rsi
  __int64 v4; // rbx
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
  return guard_dispatch_icall_no_overrides(v4);
}
