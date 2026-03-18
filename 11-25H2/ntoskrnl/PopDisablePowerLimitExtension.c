/*
 * XREFs of PopDisablePowerLimitExtension @ 0x14073F228
 * Callers:
 *     PopPowerLimitPnpNotification @ 0x14073F8A0 (PopPowerLimitPnpNotification.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopEvaluatePowerLimitChange @ 0x14073F304 (PopEvaluatePowerLimitChange.c)
 *     PopDiagTracePowerLimitExtension @ 0x14074AFB8 (PopDiagTracePowerLimitExtension.c)
 */

__int64 __fastcall PopDisablePowerLimitExtension(__int64 a1)
{
  signed __int64 *v1; // rsi
  __int64 v4; // rbx
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
  return guard_dispatch_icall_no_overrides(v4);
}
