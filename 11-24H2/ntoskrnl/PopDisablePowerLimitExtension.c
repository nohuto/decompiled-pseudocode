/*
 * XREFs of PopDisablePowerLimitExtension @ 0x140749628
 * Callers:
 *     PopPowerLimitPnpNotification @ 0x140749CA0 (PopPowerLimitPnpNotification.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopEvaluatePowerLimitChange @ 0x140749704 (PopEvaluatePowerLimitChange.c)
 *     PopDiagTracePowerLimitExtension @ 0x1407554EC (PopDiagTracePowerLimitExtension.c)
 */

__int64 __fastcall PopDisablePowerLimitExtension(__int64 a1)
{
  signed __int64 *v1; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v1 = (signed __int64 *)(a1 + 32);
  memset(&Event, 0, sizeof(Event));
  PopAcquireRwLockExclusive((unsigned __int64 *)(a1 + 32));
  if ( !*(_BYTE *)(a1 + 48) )
    return PopReleaseRwLock(v1);
  *(_BYTE *)(a1 + 48) = 0;
  PopDiagTracePowerLimitExtension(a1, POP_ETW_EVENT_POWER_LIMIT_EXTENSION_REMOVE);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_QWORD *)(a1 + 192) = &Event;
  PopEvaluatePowerLimitChange(a1);
  PopReleaseRwLock(v1);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  PopAcquireRwLockExclusive((unsigned __int64 *)v1);
  *(_QWORD *)(a1 + 192) = 0LL;
  v4 = *(_QWORD *)(a1 + 120);
  PopReleaseRwLock(v1);
  return guard_dispatch_icall_no_overrides(v4, v5);
}
